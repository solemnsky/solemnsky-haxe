#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_Float
#include <zpp_nape/util/ZNPArray2_Float.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert
#include <zpp_nape/util/ZNPArray2_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_MarchPair
#include <zpp_nape/util/ZNPArray2_ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchingSquares_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","new",0x1c7c9df3,"zpp_nape.geom.ZPP_MarchingSquares.new","zpp_nape/geom/MarchingSquares.hx",272,0xc3305538)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ZPP_MarchingSquares_obj::~ZPP_MarchingSquares_obj() { }

Dynamic ZPP_MarchingSquares_obj::__CreateEmpty() { return  new ZPP_MarchingSquares_obj; }
hx::ObjectPtr< ZPP_MarchingSquares_obj > ZPP_MarchingSquares_obj::__new()
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > _result_ = new ZPP_MarchingSquares_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > _result_ = new ZPP_MarchingSquares_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_MarchingSquares_obj::output( ::nape::geom::GeomPolyList ret,::zpp_nape::geom::ZPP_GeomVert poly){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","output",0xdb40bf4e,"zpp_nape.geom.ZPP_MarchingSquares.output","zpp_nape/geom/MarchingSquares.hx",662,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ret,"ret")
		HX_STACK_ARG(poly,"poly")
		HX_STACK_LINE(663)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(664)
			bool tmp1 = (poly == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(664)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(664)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(664)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(664)
			if ((tmp3)){
				HX_STACK_LINE(664)
				tmp4 = (poly->next == poly);
			}
			else{
				HX_STACK_LINE(664)
				tmp4 = true;
			}
			HX_STACK_LINE(664)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(664)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(664)
			if ((tmp5)){
				HX_STACK_LINE(664)
				tmp6 = (poly->next == poly->prev);
			}
			else{
				HX_STACK_LINE(664)
				tmp6 = true;
			}
			HX_STACK_LINE(664)
			if ((tmp6)){
				HX_STACK_LINE(665)
				tmp = true;
			}
			else{
				HX_STACK_LINE(668)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(668)
				{
					HX_STACK_LINE(693)
					Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
					HX_STACK_LINE(694)
					{
						HX_STACK_LINE(695)
						::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
						HX_STACK_LINE(696)
						::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
						HX_STACK_LINE(697)
						bool tmp8 = (F != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(697)
						if ((tmp8)){
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
							HX_STACK_LINE(699)
							while((true)){
								HX_STACK_LINE(700)
								::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(702)
								{
									HX_STACK_LINE(703)
									Float tmp9 = v->x;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(703)
									Float tmp10 = v->next->y;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(703)
									Float tmp11 = v->prev->y;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(703)
									Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(703)
									Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(703)
									hx::AddEq(area,tmp13);
								}
								HX_STACK_LINE(706)
								nite = nite->next;
								HX_STACK_LINE(708)
								bool tmp9 = (nite != L);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(708)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(699)
								if ((tmp10)){
									HX_STACK_LINE(699)
									break;
								}
							}
						}
					}
					HX_STACK_LINE(711)
					tmp7 = (area * ((Float)0.5));
				}
				HX_STACK_LINE(668)
				Float a = tmp7;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(713)
				Float tmp8 = (a * a);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(713)
				Float tmp9 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(713)
				Float tmp10 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(713)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(713)
				tmp = (tmp8 < tmp11);
			}
		}
		HX_STACK_LINE(663)
		if ((tmp)){
			HX_STACK_LINE(717)
			while((true)){
				HX_STACK_LINE(717)
				bool tmp1 = (poly == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(717)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(717)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(717)
				if ((tmp3)){
					HX_STACK_LINE(717)
					break;
				}
				HX_STACK_LINE(717)
				::zpp_nape::geom::ZPP_GeomVert tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(726)
					bool tmp5 = (poly != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(726)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(726)
					if ((tmp5)){
						HX_STACK_LINE(726)
						tmp6 = (poly->prev == poly);
					}
					else{
						HX_STACK_LINE(726)
						tmp6 = false;
					}
					HX_STACK_LINE(726)
					if ((tmp6)){
						HX_STACK_LINE(727)
						::zpp_nape::geom::ZPP_GeomVert tmp7 = poly->prev = null();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(727)
						poly->next = tmp7;
						HX_STACK_LINE(729)
						tmp4 = poly = null();
					}
					else{
						HX_STACK_LINE(732)
						::zpp_nape::geom::ZPP_GeomVert retnodes = poly->next;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(733)
						poly->prev->next = poly->next;
						HX_STACK_LINE(734)
						poly->next->prev = poly->prev;
						HX_STACK_LINE(735)
						::zpp_nape::geom::ZPP_GeomVert tmp7 = poly->prev = null();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(735)
						poly->next = tmp7;
						HX_STACK_LINE(737)
						poly = null();
						HX_STACK_LINE(738)
						tmp4 = retnodes;
					}
				}
				HX_STACK_LINE(717)
				poly = tmp4;
			}
			HX_STACK_LINE(742)
			return null();
		}
		HX_STACK_LINE(744)
		::nape::geom::GeomPoly tmp1 = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(744)
		::nape::geom::GeomPoly gp = tmp1;		HX_STACK_VAR(gp,"gp");
		HX_STACK_LINE(745)
		gp->zpp_inner->vertices = poly;
		HX_STACK_LINE(746)
		bool tmp2 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(746)
		if ((tmp2)){
			HX_STACK_LINE(746)
			::nape::geom::GeomPoly tmp3 = gp;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(746)
			ret->push(tmp3);
		}
		else{
			HX_STACK_LINE(746)
			::nape::geom::GeomPoly tmp3 = gp;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(746)
			ret->unshift(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,output,(void))

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkright( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkright",0x3e698775,"zpp_nape.geom.ZPP_MarchingSquares.linkright","zpp_nape/geom/MarchingSquares.hx",750,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(751)
	int tmp = (int(key) & int((int)7));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(751)
	int kind = tmp;		HX_STACK_VAR(kind,"kind");
	HX_STACK_LINE(752)
	bool tmp1 = (kind == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(752)
	if ((tmp1)){
		HX_STACK_LINE(752)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = poly;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(752)
		return tmp2;
	}
	else{
		HX_STACK_LINE(753)
		bool tmp2 = (kind == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(753)
		if ((tmp2)){
			HX_STACK_LINE(753)
			::zpp_nape::geom::ZPP_GeomVert tmp3 = poly->next->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(753)
			return tmp3;
		}
		else{
			HX_STACK_LINE(754)
			::zpp_nape::geom::ZPP_GeomVert tmp3 = poly->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(754)
			return tmp3;
		}
	}
	HX_STACK_LINE(752)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkright,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkleft( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkleft",0xd0adc28e,"zpp_nape.geom.ZPP_MarchingSquares.linkleft","zpp_nape/geom/MarchingSquares.hx",758,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(759)
	int tmp = (int(key) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(759)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(759)
	::zpp_nape::geom::ZPP_GeomVert tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(759)
	if ((tmp1)){
		HX_STACK_LINE(759)
		tmp2 = poly->prev;
	}
	else{
		HX_STACK_LINE(759)
		tmp2 = poly;
	}
	HX_STACK_LINE(759)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkleft,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkdown( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkdown",0xcb6bb2e9,"zpp_nape.geom.ZPP_MarchingSquares.linkdown","zpp_nape/geom/MarchingSquares.hx",763,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(764)
	int tmp = (int(key) & int((int)128));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(764)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(764)
	::zpp_nape::geom::ZPP_GeomVert tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(764)
	if ((tmp1)){
		HX_STACK_LINE(764)
		tmp2 = poly->prev;
	}
	else{
		HX_STACK_LINE(764)
		tmp2 = poly->prev->prev;
	}
	HX_STACK_LINE(764)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkdown,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkup( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","linkup",0xbb64a122,"zpp_nape.geom.ZPP_MarchingSquares.linkup","zpp_nape/geom/MarchingSquares.hx",768,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(769)
	::zpp_nape::geom::ZPP_GeomVert tmp = poly;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(769)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkup,return )

Void ZPP_MarchingSquares_obj::combLR( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combLR",0x95e5ae14,"zpp_nape.geom.ZPP_MarchingSquares.combLR","zpp_nape/geom/MarchingSquares.hx",771,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(772)
		::zpp_nape::geom::ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(772)
		{
			HX_STACK_LINE(772)
			::zpp_nape::geom::ZPP_GeomVert poly = a->pr;		HX_STACK_VAR(poly,"poly");
			HX_STACK_LINE(772)
			int tmp1 = (int(a->okeyr) & int((int)7));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(772)
			int kind = tmp1;		HX_STACK_VAR(kind,"kind");
			HX_STACK_LINE(772)
			bool tmp2 = (kind == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(772)
			if ((tmp2)){
				HX_STACK_LINE(772)
				tmp = poly;
			}
			else{
				HX_STACK_LINE(772)
				bool tmp3 = (kind == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(772)
				if ((tmp3)){
					HX_STACK_LINE(772)
					tmp = poly->next->next;
				}
				else{
					HX_STACK_LINE(772)
					tmp = poly->next;
				}
			}
		}
		HX_STACK_LINE(772)
		::zpp_nape::geom::ZPP_GeomVert ap = tmp;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(773)
		::zpp_nape::geom::ZPP_GeomVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_GeomVert poly = b->p1;		HX_STACK_VAR(poly,"poly");
			HX_STACK_LINE(773)
			int tmp2 = (int(b->okey1) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(773)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(773)
			if ((tmp3)){
				HX_STACK_LINE(773)
				tmp1 = poly->prev;
			}
			else{
				HX_STACK_LINE(773)
				tmp1 = poly;
			}
		}
		HX_STACK_LINE(773)
		::zpp_nape::geom::ZPP_GeomVert bp = tmp1;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(774)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->next;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(775)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->prev;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(776)
		int tmp2 = (int(a->keyr) & int((int)4));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(776)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(776)
		if ((tmp3)){
			HX_STACK_LINE(777)
			bool tmp4 = (b->pr == b->p1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(777)
			if ((tmp4)){
				HX_STACK_LINE(777)
				b->pr = ap->prev;
			}
			HX_STACK_LINE(778)
			b->p1 = ap->prev;
			HX_STACK_LINE(779)
			ap->prev->next = bp->next;
			HX_STACK_LINE(780)
			bp->next->prev = ap->prev;
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(782)
				::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(791)
				{
					HX_STACK_LINE(791)
					bool tmp5 = (o->wrap != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(791)
					if ((tmp5)){
						HX_STACK_LINE(791)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(791)
						tmp6->_inuse = false;
						HX_STACK_LINE(791)
						{
							HX_STACK_LINE(791)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(791)
								bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(791)
								if ((tmp7)){
									HX_STACK_LINE(791)
									tmp8 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(791)
									tmp8 = false;
								}
								HX_STACK_LINE(791)
								if ((tmp8)){
									HX_STACK_LINE(791)
									::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(791)
									::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(791)
									HX_STACK_DO_THROW(tmp10);
								}
							}
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(791)
								bool tmp7 = _this1->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(791)
								if ((tmp7)){
									HX_STACK_LINE(791)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(791)
								bool tmp8 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(791)
								if ((tmp8)){
									HX_STACK_LINE(791)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(791)
							bool tmp7 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(791)
							if ((tmp7)){
								HX_STACK_LINE(791)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(791)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(791)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(791)
							_this->zpp_inner = null();
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(791)
								o1->zpp_pool = null();
								HX_STACK_LINE(791)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(791)
								bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(791)
								if ((tmp9)){
									HX_STACK_LINE(791)
									::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(791)
									tmp10->zpp_pool = o1;
								}
								else{
									HX_STACK_LINE(791)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
								}
								HX_STACK_LINE(791)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
								HX_STACK_LINE(791)
								o1->zpp_disp = true;
							}
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(791)
								{
									HX_STACK_LINE(791)
									bool tmp8 = (o1->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(791)
									if ((tmp8)){
										HX_STACK_LINE(791)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(791)
										o1->outer = null();
									}
									HX_STACK_LINE(791)
									o1->_isimmutable = null();
									HX_STACK_LINE(791)
									o1->_validate = null();
									HX_STACK_LINE(791)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(791)
								o1->next = tmp8;
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(791)
						o->wrap = null();
					}
					HX_STACK_LINE(791)
					::zpp_nape::geom::ZPP_GeomVert tmp6 = o->next = null();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(791)
					o->prev = tmp6;
				}
				HX_STACK_LINE(792)
				::zpp_nape::geom::ZPP_GeomVert tmp5 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(792)
				o->next = tmp5;
				HX_STACK_LINE(793)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(800)
			ap->next = bp->next;
			HX_STACK_LINE(801)
			bp->next->prev = ap;
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(804)
			::zpp_nape::geom::ZPP_GeomVert o = bp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(813)
			{
				HX_STACK_LINE(813)
				bool tmp4 = (o->wrap != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(813)
				if ((tmp4)){
					HX_STACK_LINE(813)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(813)
					tmp5->_inuse = false;
					HX_STACK_LINE(813)
					{
						HX_STACK_LINE(813)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(813)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(813)
							if ((tmp6)){
								HX_STACK_LINE(813)
								tmp7 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(813)
								tmp7 = false;
							}
							HX_STACK_LINE(813)
							if ((tmp7)){
								HX_STACK_LINE(813)
								::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(813)
								::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(813)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(813)
							bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(813)
							if ((tmp6)){
								HX_STACK_LINE(813)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(813)
							bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(813)
							if ((tmp7)){
								HX_STACK_LINE(813)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(813)
						bool tmp6 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(813)
						if ((tmp6)){
							HX_STACK_LINE(813)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(813)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(813)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(813)
						_this->zpp_inner = null();
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(813)
							o1->zpp_pool = null();
							HX_STACK_LINE(813)
							::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(813)
							bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(813)
							if ((tmp8)){
								HX_STACK_LINE(813)
								::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(813)
								tmp9->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(813)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(813)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(813)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(813)
							{
								HX_STACK_LINE(813)
								bool tmp7 = (o1->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(813)
								if ((tmp7)){
									HX_STACK_LINE(813)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(813)
									o1->outer = null();
								}
								HX_STACK_LINE(813)
								o1->_isimmutable = null();
								HX_STACK_LINE(813)
								o1->_validate = null();
								HX_STACK_LINE(813)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(813)
							o1->next = tmp7;
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(813)
					o->wrap = null();
				}
				HX_STACK_LINE(813)
				::zpp_nape::geom::ZPP_GeomVert tmp5 = o->next = null();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(813)
				o->prev = tmp5;
			}
			HX_STACK_LINE(814)
			::zpp_nape::geom::ZPP_GeomVert tmp4 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(814)
			o->next = tmp4;
			HX_STACK_LINE(815)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(820)
		int tmp4 = (int(a->keyr) & int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(820)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(820)
		if ((tmp5)){
			HX_STACK_LINE(821)
			b->pd = ap2->next;
			HX_STACK_LINE(822)
			ap2->next->prev = bp2->prev;
			HX_STACK_LINE(823)
			bp2->prev->next = ap2->next;
			HX_STACK_LINE(824)
			{
				HX_STACK_LINE(825)
				::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(834)
				{
					HX_STACK_LINE(834)
					bool tmp6 = (o->wrap != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(834)
					if ((tmp6)){
						HX_STACK_LINE(834)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(834)
						tmp7->_inuse = false;
						HX_STACK_LINE(834)
						{
							HX_STACK_LINE(834)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(834)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(834)
								if ((tmp8)){
									HX_STACK_LINE(834)
									tmp9 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(834)
									tmp9 = false;
								}
								HX_STACK_LINE(834)
								if ((tmp9)){
									HX_STACK_LINE(834)
									::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(834)
									::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(834)
									HX_STACK_DO_THROW(tmp11);
								}
							}
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(834)
								bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(834)
								if ((tmp8)){
									HX_STACK_LINE(834)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(834)
								bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(834)
								if ((tmp9)){
									HX_STACK_LINE(834)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(834)
							bool tmp8 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(834)
							if ((tmp8)){
								HX_STACK_LINE(834)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(834)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(834)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(834)
							_this->zpp_inner = null();
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(834)
								o1->zpp_pool = null();
								HX_STACK_LINE(834)
								::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(834)
								bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(834)
								if ((tmp10)){
									HX_STACK_LINE(834)
									::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(834)
									tmp11->zpp_pool = o1;
								}
								else{
									HX_STACK_LINE(834)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
								}
								HX_STACK_LINE(834)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
								HX_STACK_LINE(834)
								o1->zpp_disp = true;
							}
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(834)
								{
									HX_STACK_LINE(834)
									bool tmp9 = (o1->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(834)
									if ((tmp9)){
										HX_STACK_LINE(834)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(834)
										o1->outer = null();
									}
									HX_STACK_LINE(834)
									o1->_isimmutable = null();
									HX_STACK_LINE(834)
									o1->_validate = null();
									HX_STACK_LINE(834)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(834)
								o1->next = tmp9;
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(834)
						o->wrap = null();
					}
					HX_STACK_LINE(834)
					::zpp_nape::geom::ZPP_GeomVert tmp7 = o->next = null();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(834)
					o->prev = tmp7;
				}
				HX_STACK_LINE(835)
				::zpp_nape::geom::ZPP_GeomVert tmp6 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(835)
				o->next = tmp6;
				HX_STACK_LINE(836)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(843)
			ap2->prev = bp2->prev;
			HX_STACK_LINE(844)
			bp2->prev->next = ap2;
		}
		HX_STACK_LINE(846)
		{
			HX_STACK_LINE(847)
			::zpp_nape::geom::ZPP_GeomVert o = bp2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(856)
				bool tmp6 = (o->wrap != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(856)
				if ((tmp6)){
					HX_STACK_LINE(856)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(856)
					tmp7->_inuse = false;
					HX_STACK_LINE(856)
					{
						HX_STACK_LINE(856)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(856)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(856)
							if ((tmp8)){
								HX_STACK_LINE(856)
								tmp9 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(856)
								tmp9 = false;
							}
							HX_STACK_LINE(856)
							if ((tmp9)){
								HX_STACK_LINE(856)
								::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(856)
								::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(856)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(856)
							bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(856)
							if ((tmp8)){
								HX_STACK_LINE(856)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(856)
							bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(856)
							if ((tmp9)){
								HX_STACK_LINE(856)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(856)
						bool tmp8 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(856)
						if ((tmp8)){
							HX_STACK_LINE(856)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(856)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(856)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(856)
						_this->zpp_inner = null();
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(856)
							o1->zpp_pool = null();
							HX_STACK_LINE(856)
							::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(856)
							bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(856)
							if ((tmp10)){
								HX_STACK_LINE(856)
								::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(856)
								tmp11->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(856)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(856)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(856)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(856)
							{
								HX_STACK_LINE(856)
								bool tmp9 = (o1->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(856)
								if ((tmp9)){
									HX_STACK_LINE(856)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(856)
									o1->outer = null();
								}
								HX_STACK_LINE(856)
								o1->_isimmutable = null();
								HX_STACK_LINE(856)
								o1->_validate = null();
								HX_STACK_LINE(856)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(856)
							o1->next = tmp9;
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(856)
					o->wrap = null();
				}
				HX_STACK_LINE(856)
				::zpp_nape::geom::ZPP_GeomVert tmp7 = o->next = null();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(856)
				o->prev = tmp7;
			}
			HX_STACK_LINE(857)
			::zpp_nape::geom::ZPP_GeomVert tmp6 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(857)
			o->next = tmp6;
			HX_STACK_LINE(858)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combLR,(void))

Void ZPP_MarchingSquares_obj::combUD( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combUD",0x95e5b5dd,"zpp_nape.geom.ZPP_MarchingSquares.combUD","zpp_nape/geom/MarchingSquares.hx",864,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(865)
		bool tmp = (a->p2 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(865)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(865)
		if ((tmp)){
			HX_STACK_LINE(865)
			tmp1 = (a->key2 == (int)56);
		}
		else{
			HX_STACK_LINE(865)
			tmp1 = false;
		}
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_GeomVert tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(865)
		if ((tmp1)){
			HX_STACK_LINE(865)
			tmp2 = a->p2;
		}
		else{
			HX_STACK_LINE(865)
			tmp2 = a->p1;
		}
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_GeomVert ad = tmp2;		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(866)
		bool tmp3 = (b->p2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(866)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(866)
		if ((tmp3)){
			HX_STACK_LINE(866)
			tmp4 = (b->key2 == (int)14);
		}
		else{
			HX_STACK_LINE(866)
			tmp4 = false;
		}
		HX_STACK_LINE(866)
		::zpp_nape::geom::ZPP_GeomVert tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(866)
		if ((tmp4)){
			HX_STACK_LINE(866)
			tmp5 = b->p2;
		}
		else{
			HX_STACK_LINE(866)
			tmp5 = b->p1;
		}
		HX_STACK_LINE(866)
		::zpp_nape::geom::ZPP_GeomVert bu = tmp5;		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(868)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(869)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(870)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(871)
		bp->next = ap->next;
		HX_STACK_LINE(872)
		ap->next->prev = bp;
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(874)
			::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(883)
			{
				HX_STACK_LINE(883)
				bool tmp6 = (o->wrap != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(883)
				if ((tmp6)){
					HX_STACK_LINE(883)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(883)
					tmp7->_inuse = false;
					HX_STACK_LINE(883)
					{
						HX_STACK_LINE(883)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(883)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(883)
							if ((tmp8)){
								HX_STACK_LINE(883)
								tmp9 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(883)
								tmp9 = false;
							}
							HX_STACK_LINE(883)
							if ((tmp9)){
								HX_STACK_LINE(883)
								::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(883)
								::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(883)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(883)
							bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(883)
							if ((tmp8)){
								HX_STACK_LINE(883)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(883)
							bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(883)
							if ((tmp9)){
								HX_STACK_LINE(883)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(883)
						bool tmp8 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(883)
						if ((tmp8)){
							HX_STACK_LINE(883)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(883)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(883)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(883)
						_this->zpp_inner = null();
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(883)
							o1->zpp_pool = null();
							HX_STACK_LINE(883)
							::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(883)
							bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(883)
							if ((tmp10)){
								HX_STACK_LINE(883)
								::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(883)
								tmp11->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(883)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(883)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(883)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								bool tmp9 = (o1->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(883)
								if ((tmp9)){
									HX_STACK_LINE(883)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(883)
									o1->outer = null();
								}
								HX_STACK_LINE(883)
								o1->_isimmutable = null();
								HX_STACK_LINE(883)
								o1->_validate = null();
								HX_STACK_LINE(883)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(883)
							o1->next = tmp9;
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(883)
					o->wrap = null();
				}
				HX_STACK_LINE(883)
				::zpp_nape::geom::ZPP_GeomVert tmp7 = o->next = null();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(883)
				o->prev = tmp7;
			}
			HX_STACK_LINE(884)
			::zpp_nape::geom::ZPP_GeomVert tmp6 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(884)
			o->next = tmp6;
			HX_STACK_LINE(885)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(890)
		bp2->prev = ap2->prev;
		HX_STACK_LINE(891)
		ap2->prev->next = bp2;
		HX_STACK_LINE(892)
		bool tmp6 = (ap2 == a->p1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(892)
		if ((tmp6)){
			HX_STACK_LINE(892)
			a->p1 = bp2;
		}
		HX_STACK_LINE(893)
		{
			HX_STACK_LINE(894)
			::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				bool tmp7 = (o->wrap != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(903)
				if ((tmp7)){
					HX_STACK_LINE(903)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(903)
					tmp8->_inuse = false;
					HX_STACK_LINE(903)
					{
						HX_STACK_LINE(903)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(903)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(903)
							if ((tmp9)){
								HX_STACK_LINE(903)
								tmp10 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(903)
								tmp10 = false;
							}
							HX_STACK_LINE(903)
							if ((tmp10)){
								HX_STACK_LINE(903)
								::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(903)
								::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(903)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(903)
							bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(903)
							if ((tmp9)){
								HX_STACK_LINE(903)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(903)
							bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(903)
							if ((tmp10)){
								HX_STACK_LINE(903)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(903)
						bool tmp9 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(903)
						if ((tmp9)){
							HX_STACK_LINE(903)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(903)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(903)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(903)
						_this->zpp_inner = null();
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(903)
							o1->zpp_pool = null();
							HX_STACK_LINE(903)
							::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(903)
							bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(903)
							if ((tmp11)){
								HX_STACK_LINE(903)
								::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(903)
								tmp12->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(903)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(903)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(903)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(903)
							{
								HX_STACK_LINE(903)
								bool tmp10 = (o1->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(903)
								if ((tmp10)){
									HX_STACK_LINE(903)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(903)
									o1->outer = null();
								}
								HX_STACK_LINE(903)
								o1->_isimmutable = null();
								HX_STACK_LINE(903)
								o1->_validate = null();
								HX_STACK_LINE(903)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(903)
							o1->next = tmp10;
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(903)
					o->wrap = null();
				}
				HX_STACK_LINE(903)
				::zpp_nape::geom::ZPP_GeomVert tmp8 = o->next = null();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(903)
				o->prev = tmp8;
			}
			HX_STACK_LINE(904)
			::zpp_nape::geom::ZPP_GeomVert tmp7 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(904)
			o->next = tmp7;
			HX_STACK_LINE(905)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD,(void))

Void ZPP_MarchingSquares_obj::combUD_virtual( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combUD_virtual",0x9d545269,"zpp_nape.geom.ZPP_MarchingSquares.combUD_virtual","zpp_nape/geom/MarchingSquares.hx",911,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(912)
		bool tmp = (a->p2 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(912)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(912)
		if ((tmp)){
			HX_STACK_LINE(912)
			tmp1 = (a->key2 == (int)56);
		}
		else{
			HX_STACK_LINE(912)
			tmp1 = false;
		}
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_GeomVert tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(912)
		if ((tmp1)){
			HX_STACK_LINE(912)
			tmp2 = a->p2;
		}
		else{
			HX_STACK_LINE(912)
			tmp2 = a->p1;
		}
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_GeomVert ad = tmp2;		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(913)
		bool tmp3 = (b->p2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(913)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(913)
		if ((tmp3)){
			HX_STACK_LINE(913)
			tmp4 = (b->key2 == (int)14);
		}
		else{
			HX_STACK_LINE(913)
			tmp4 = false;
		}
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_GeomVert tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(913)
		if ((tmp4)){
			HX_STACK_LINE(913)
			tmp5 = b->p2;
		}
		else{
			HX_STACK_LINE(913)
			tmp5 = b->p1;
		}
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_GeomVert bu = tmp5;		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(915)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(916)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(917)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(918)
		bool tmp6 = bp2->forced = true;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(918)
		bool tmp7 = ap2->forced = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(918)
		bool tmp8 = bp->forced = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(918)
		ap->forced = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD_virtual,(void))

bool ZPP_MarchingSquares_obj::combLeft( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combLeft",0x1d4b1f35,"zpp_nape.geom.ZPP_MarchingSquares.combLeft","zpp_nape/geom/MarchingSquares.hx",922,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(923)
	int tmp = (int(key) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(923)
	int tmp1 = (int(key) & int((int)192));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(923)
	int tmp2 = (int(tmp1) >> int((int)5));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(923)
	int tmp3 = (int(tmp) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(923)
	int flag = tmp3;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(924)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(924)
	{
		HX_STACK_LINE(924)
		int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
		HX_STACK_LINE(924)
		int tmp5 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(924)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(924)
		if ((tmp6)){
			HX_STACK_LINE(924)
			(cnt)++;
		}
		HX_STACK_LINE(924)
		int tmp7 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(924)
		bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(924)
		if ((tmp8)){
			HX_STACK_LINE(924)
			(cnt)++;
		}
		HX_STACK_LINE(924)
		int tmp9 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(924)
		bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(924)
		if ((tmp10)){
			HX_STACK_LINE(924)
			(cnt)++;
		}
		HX_STACK_LINE(924)
		tmp4 = (cnt >= (int)2);
	}
	HX_STACK_LINE(924)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combLeft,return )

bool ZPP_MarchingSquares_obj::combRight( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combRight",0xfb7d3cee,"zpp_nape.geom.ZPP_MarchingSquares.combRight","zpp_nape/geom/MarchingSquares.hx",928,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(929)
	int tmp = (int(key) & int((int)28));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(929)
	int tmp1 = (int(tmp) >> int((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(929)
	int flag = tmp1;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(930)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(930)
	{
		HX_STACK_LINE(930)
		int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
		HX_STACK_LINE(930)
		int tmp3 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(930)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(930)
		if ((tmp4)){
			HX_STACK_LINE(930)
			(cnt)++;
		}
		HX_STACK_LINE(930)
		int tmp5 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(930)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(930)
		if ((tmp6)){
			HX_STACK_LINE(930)
			(cnt)++;
		}
		HX_STACK_LINE(930)
		int tmp7 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(930)
		bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(930)
		if ((tmp8)){
			HX_STACK_LINE(930)
			(cnt)++;
		}
		HX_STACK_LINE(930)
		tmp2 = (cnt >= (int)2);
	}
	HX_STACK_LINE(930)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combRight,return )

bool ZPP_MarchingSquares_obj::combUp( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combUp",0x95e5b609,"zpp_nape.geom.ZPP_MarchingSquares.combUp","zpp_nape/geom/MarchingSquares.hx",934,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(935)
	int tmp = (int(key) & int((int)7));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(935)
	int flag = tmp;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(936)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(936)
	{
		HX_STACK_LINE(936)
		int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
		HX_STACK_LINE(936)
		int tmp2 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(936)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(936)
		if ((tmp3)){
			HX_STACK_LINE(936)
			(cnt)++;
		}
		HX_STACK_LINE(936)
		int tmp4 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(936)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(936)
		if ((tmp5)){
			HX_STACK_LINE(936)
			(cnt)++;
		}
		HX_STACK_LINE(936)
		int tmp6 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(936)
		bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(936)
		if ((tmp7)){
			HX_STACK_LINE(936)
			(cnt)++;
		}
		HX_STACK_LINE(936)
		tmp1 = (cnt >= (int)2);
	}
	HX_STACK_LINE(936)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combUp,return )

bool ZPP_MarchingSquares_obj::combDown( int key){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","combDown",0x18090f90,"zpp_nape.geom.ZPP_MarchingSquares.combDown","zpp_nape/geom/MarchingSquares.hx",940,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(941)
	int tmp = (int(key) & int((int)112));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(941)
	int tmp1 = (int(tmp) >> int((int)4));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(941)
	int flag = tmp1;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(942)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(942)
	{
		HX_STACK_LINE(942)
		int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
		HX_STACK_LINE(942)
		int tmp3 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(942)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(942)
		if ((tmp4)){
			HX_STACK_LINE(942)
			(cnt)++;
		}
		HX_STACK_LINE(942)
		int tmp5 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(942)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(942)
		if ((tmp6)){
			HX_STACK_LINE(942)
			(cnt)++;
		}
		HX_STACK_LINE(942)
		int tmp7 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(942)
		bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(942)
		if ((tmp8)){
			HX_STACK_LINE(942)
			(cnt)++;
		}
		HX_STACK_LINE(942)
		tmp2 = (cnt >= (int)2);
	}
	HX_STACK_LINE(942)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combDown,return )

bool ZPP_MarchingSquares_obj::comb( int flag){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","comb",0xc94fcc0e,"zpp_nape.geom.ZPP_MarchingSquares.comb","zpp_nape/geom/MarchingSquares.hx",946,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(flag,"flag")
	HX_STACK_LINE(947)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(948)
	int tmp = (int(flag) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(948)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(948)
	if ((tmp1)){
		HX_STACK_LINE(948)
		(cnt)++;
	}
	HX_STACK_LINE(949)
	int tmp2 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(949)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(949)
	if ((tmp3)){
		HX_STACK_LINE(949)
		(cnt)++;
	}
	HX_STACK_LINE(950)
	int tmp4 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(950)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(950)
	if ((tmp5)){
		HX_STACK_LINE(950)
		(cnt)++;
	}
	HX_STACK_LINE(951)
	bool tmp6 = (cnt >= (int)2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(951)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,comb,return )

::zpp_nape::geom::ZPP_MarchPair ZPP_MarchingSquares_obj::marchSquare( Dynamic iso,::zpp_nape::util::ZNPArray2_Float isos,::zpp_nape::util::ZNPArray2_ZPP_GeomVert ints,Float x0,Float y0,Float x1,Float y1,int xn,int yn,bool fstx,bool fsty,bool sndx,bool sndy,int quality){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","marchSquare",0x3109c653,"zpp_nape.geom.ZPP_MarchingSquares.marchSquare","zpp_nape/geom/MarchingSquares.hx",954,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(isos,"isos")
	HX_STACK_ARG(ints,"ints")
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(xn,"xn")
	HX_STACK_ARG(yn,"yn")
	HX_STACK_ARG(fstx,"fstx")
	HX_STACK_ARG(fsty,"fsty")
	HX_STACK_ARG(sndx,"sndx")
	HX_STACK_ARG(sndy,"sndy")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(955)
	int key = (int)0;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(956)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(956)
	{
		HX_STACK_LINE(956)
		Array< Float > tmp1 = isos->list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(956)
		int tmp2 = (yn * isos->width);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(956)
		int tmp3 = xn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(956)
		int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(956)
		tmp = tmp1->__get(tmp4);
	}
	HX_STACK_LINE(956)
	Float v0 = tmp;		HX_STACK_VAR(v0,"v0");
	HX_STACK_LINE(957)
	bool tmp1 = (v0 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(957)
	if ((tmp1)){
		HX_STACK_LINE(957)
		hx::OrEq(key,(int)8);
	}
	HX_STACK_LINE(958)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(958)
	{
		HX_STACK_LINE(958)
		Array< Float > tmp3 = isos->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(958)
		int tmp4 = (yn * isos->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(958)
		int tmp5 = (xn + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(958)
		int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(958)
		tmp2 = tmp3->__get(tmp6);
	}
	HX_STACK_LINE(958)
	Float v1 = tmp2;		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(959)
	bool tmp3 = (v1 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(959)
	if ((tmp3)){
		HX_STACK_LINE(959)
		hx::OrEq(key,(int)4);
	}
	HX_STACK_LINE(960)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(960)
	{
		HX_STACK_LINE(960)
		Array< Float > tmp5 = isos->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(960)
		int tmp6 = (yn + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(960)
		int tmp7 = isos->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(960)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(960)
		int tmp9 = (xn + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(960)
		int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(960)
		tmp4 = tmp5->__get(tmp10);
	}
	HX_STACK_LINE(960)
	Float v2 = tmp4;		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(961)
	bool tmp5 = (v2 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(961)
	if ((tmp5)){
		HX_STACK_LINE(961)
		hx::OrEq(key,(int)2);
	}
	HX_STACK_LINE(962)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(962)
	{
		HX_STACK_LINE(962)
		Array< Float > tmp7 = isos->list;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(962)
		int tmp8 = (yn + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(962)
		int tmp9 = isos->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(962)
		int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(962)
		int tmp11 = xn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(962)
		int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(962)
		tmp6 = tmp7->__get(tmp12);
	}
	HX_STACK_LINE(962)
	Float v3 = tmp6;		HX_STACK_VAR(v3,"v3");
	HX_STACK_LINE(963)
	bool tmp7 = (v3 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(963)
	if ((tmp7)){
		HX_STACK_LINE(963)
		hx::OrEq(key,(int)1);
	}
	HX_STACK_LINE(964)
	bool tmp8 = (key == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(964)
	if ((tmp8)){
		HX_STACK_LINE(964)
		return null();
	}
	else{
		HX_STACK_LINE(966)
		::zpp_nape::geom::ZPP_MarchPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(968)
			::zpp_nape::geom::ZPP_MarchPair tmp9 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(968)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(968)
			if ((tmp10)){
				HX_STACK_LINE(969)
				::zpp_nape::geom::ZPP_MarchPair tmp11 = ::zpp_nape::geom::ZPP_MarchPair_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(969)
				ret = tmp11;
			}
			else{
				HX_STACK_LINE(975)
				::zpp_nape::geom::ZPP_MarchPair tmp11 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(975)
				ret = tmp11;
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(977)
				ret->next = null();
			}
			HX_STACK_LINE(982)
			Dynamic();
		}
		HX_STACK_LINE(984)
		bool tmp9 = (key != (int)10);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(984)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(984)
		if ((tmp9)){
			HX_STACK_LINE(984)
			tmp10 = (key != (int)5);
		}
		else{
			HX_STACK_LINE(984)
			tmp10 = false;
		}
		HX_STACK_LINE(984)
		if ((tmp10)){
			HX_STACK_LINE(985)
			Array< int > tmp11 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::look_march;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(985)
			int tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(985)
			int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(985)
			int val = tmp13;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(986)
			{
				HX_STACK_LINE(987)
				ret->okey1 = val;
				HX_STACK_LINE(988)
				{
					HX_STACK_LINE(988)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(988)
					while((true)){
						HX_STACK_LINE(988)
						bool tmp14 = (_g < (int)8);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(988)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(988)
						if ((tmp15)){
							HX_STACK_LINE(988)
							break;
						}
						HX_STACK_LINE(988)
						int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(988)
						int i = tmp16;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(989)
						int tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(989)
						int tmp18 = (int((int)1) << int(i));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(989)
						int tmp19 = (int(tmp17) & int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(989)
						bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(989)
						if ((tmp20)){
							HX_STACK_LINE(990)
							::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(991)
							bool tmp21 = (i == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(991)
							if ((tmp21)){
								HX_STACK_LINE(992)
								::zpp_nape::geom::ZPP_GeomVert tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(992)
								{
									HX_STACK_LINE(992)
									::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(992)
									{
										HX_STACK_LINE(992)
										::zpp_nape::geom::ZPP_GeomVert tmp23 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(992)
										bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(992)
										if ((tmp24)){
											HX_STACK_LINE(992)
											::zpp_nape::geom::ZPP_GeomVert tmp25 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(992)
											ret1 = tmp25;
										}
										else{
											HX_STACK_LINE(992)
											::zpp_nape::geom::ZPP_GeomVert tmp25 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(992)
											ret1 = tmp25;
											HX_STACK_LINE(992)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(992)
											ret1->next = null();
										}
										HX_STACK_LINE(992)
										ret1->forced = false;
									}
									HX_STACK_LINE(992)
									{
										HX_STACK_LINE(992)
										ret1->x = x0;
										HX_STACK_LINE(992)
										ret1->y = y0;
										HX_STACK_LINE(992)
										{
										}
									}
									HX_STACK_LINE(992)
									tmp22 = ret1;
								}
								HX_STACK_LINE(992)
								p = tmp22;
								HX_STACK_LINE(993)
								bool tmp23 = fstx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(993)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(993)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(993)
								if ((tmp24)){
									HX_STACK_LINE(993)
									tmp25 = fsty;
								}
								else{
									HX_STACK_LINE(993)
									tmp25 = true;
								}
								HX_STACK_LINE(993)
								if ((tmp25)){
									HX_STACK_LINE(993)
									p->forced = true;
								}
							}
							else{
								HX_STACK_LINE(995)
								bool tmp22 = (i == (int)2);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(995)
								if ((tmp22)){
									HX_STACK_LINE(996)
									::zpp_nape::geom::ZPP_GeomVert tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(996)
									{
										HX_STACK_LINE(996)
										::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(996)
										{
											HX_STACK_LINE(996)
											::zpp_nape::geom::ZPP_GeomVert tmp24 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(996)
											bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(996)
											if ((tmp25)){
												HX_STACK_LINE(996)
												::zpp_nape::geom::ZPP_GeomVert tmp26 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(996)
												ret1 = tmp26;
											}
											else{
												HX_STACK_LINE(996)
												::zpp_nape::geom::ZPP_GeomVert tmp26 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(996)
												ret1 = tmp26;
												HX_STACK_LINE(996)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(996)
												ret1->next = null();
											}
											HX_STACK_LINE(996)
											ret1->forced = false;
										}
										HX_STACK_LINE(996)
										{
											HX_STACK_LINE(996)
											ret1->x = x1;
											HX_STACK_LINE(996)
											ret1->y = y0;
											HX_STACK_LINE(996)
											{
											}
										}
										HX_STACK_LINE(996)
										tmp23 = ret1;
									}
									HX_STACK_LINE(996)
									p = tmp23;
									HX_STACK_LINE(997)
									bool tmp24 = sndx;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(997)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(997)
									bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(997)
									if ((tmp25)){
										HX_STACK_LINE(997)
										tmp26 = fsty;
									}
									else{
										HX_STACK_LINE(997)
										tmp26 = true;
									}
									HX_STACK_LINE(997)
									if ((tmp26)){
										HX_STACK_LINE(997)
										p->forced = true;
									}
								}
								else{
									HX_STACK_LINE(999)
									bool tmp23 = (i == (int)4);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(999)
									if ((tmp23)){
										HX_STACK_LINE(1000)
										::zpp_nape::geom::ZPP_GeomVert tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1000)
										{
											HX_STACK_LINE(1000)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1000)
											{
												HX_STACK_LINE(1000)
												::zpp_nape::geom::ZPP_GeomVert tmp25 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1000)
												bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1000)
												if ((tmp26)){
													HX_STACK_LINE(1000)
													::zpp_nape::geom::ZPP_GeomVert tmp27 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1000)
													ret1 = tmp27;
												}
												else{
													HX_STACK_LINE(1000)
													::zpp_nape::geom::ZPP_GeomVert tmp27 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1000)
													ret1 = tmp27;
													HX_STACK_LINE(1000)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1000)
													ret1->next = null();
												}
												HX_STACK_LINE(1000)
												ret1->forced = false;
											}
											HX_STACK_LINE(1000)
											{
												HX_STACK_LINE(1000)
												ret1->x = x1;
												HX_STACK_LINE(1000)
												ret1->y = y1;
												HX_STACK_LINE(1000)
												{
												}
											}
											HX_STACK_LINE(1000)
											tmp24 = ret1;
										}
										HX_STACK_LINE(1000)
										p = tmp24;
										HX_STACK_LINE(1001)
										bool tmp25 = sndx;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1001)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1001)
										bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1001)
										if ((tmp26)){
											HX_STACK_LINE(1001)
											tmp27 = sndy;
										}
										else{
											HX_STACK_LINE(1001)
											tmp27 = true;
										}
										HX_STACK_LINE(1001)
										if ((tmp27)){
											HX_STACK_LINE(1001)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1003)
										bool tmp24 = (i == (int)6);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1003)
										if ((tmp24)){
											HX_STACK_LINE(1004)
											::zpp_nape::geom::ZPP_GeomVert tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1004)
											{
												HX_STACK_LINE(1004)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1004)
												{
													HX_STACK_LINE(1004)
													::zpp_nape::geom::ZPP_GeomVert tmp26 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1004)
													bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1004)
													if ((tmp27)){
														HX_STACK_LINE(1004)
														::zpp_nape::geom::ZPP_GeomVert tmp28 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1004)
														ret1 = tmp28;
													}
													else{
														HX_STACK_LINE(1004)
														::zpp_nape::geom::ZPP_GeomVert tmp28 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1004)
														ret1 = tmp28;
														HX_STACK_LINE(1004)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1004)
														ret1->next = null();
													}
													HX_STACK_LINE(1004)
													ret1->forced = false;
												}
												HX_STACK_LINE(1004)
												{
													HX_STACK_LINE(1004)
													ret1->x = x0;
													HX_STACK_LINE(1004)
													ret1->y = y1;
													HX_STACK_LINE(1004)
													{
													}
												}
												HX_STACK_LINE(1004)
												tmp25 = ret1;
											}
											HX_STACK_LINE(1004)
											p = tmp25;
											HX_STACK_LINE(1005)
											bool tmp26 = fstx;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1005)
											bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1005)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1005)
											if ((tmp27)){
												HX_STACK_LINE(1005)
												tmp28 = sndy;
											}
											else{
												HX_STACK_LINE(1005)
												tmp28 = true;
											}
											HX_STACK_LINE(1005)
											if ((tmp28)){
												HX_STACK_LINE(1005)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1007)
											bool tmp25 = (i == (int)1);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1007)
											if ((tmp25)){
												HX_STACK_LINE(1008)
												::zpp_nape::geom::ZPP_GeomVert tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1008)
												{
													HX_STACK_LINE(1008)
													Array< ::Dynamic > tmp27 = ints->list;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1008)
													int tmp28 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1008)
													int tmp29 = ints->width;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1008)
													int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1008)
													int tmp31 = xn;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1008)
													int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1008)
													tmp26 = tmp27->__get(tmp32).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
												}
												HX_STACK_LINE(1008)
												p = tmp26;
												HX_STACK_LINE(1009)
												bool tmp27 = (p == null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1009)
												if ((tmp27)){
													HX_STACK_LINE(1010)
													::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1010)
													{
														HX_STACK_LINE(1010)
														Float tmp29 = x0;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1010)
														Float tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1010)
														Float tmp31 = y0;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1010)
														Float tmp32 = v0;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1010)
														Float tmp33 = v1;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1010)
														Dynamic tmp34 = iso;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1010)
														int tmp35 = quality;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1010)
														Float tmp36 = this->xlerp(tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1010)
														Float x = tmp36;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1010)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1010)
														{
															HX_STACK_LINE(1010)
															::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1010)
															bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1010)
															if ((tmp38)){
																HX_STACK_LINE(1010)
																::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1010)
																ret1 = tmp39;
															}
															else{
																HX_STACK_LINE(1010)
																::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1010)
																ret1 = tmp39;
																HX_STACK_LINE(1010)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1010)
																ret1->next = null();
															}
															HX_STACK_LINE(1010)
															ret1->forced = false;
														}
														HX_STACK_LINE(1010)
														{
															HX_STACK_LINE(1010)
															ret1->x = x;
															HX_STACK_LINE(1010)
															ret1->y = y0;
															HX_STACK_LINE(1010)
															{
															}
														}
														HX_STACK_LINE(1010)
														tmp28 = ret1;
													}
													HX_STACK_LINE(1010)
													p = tmp28;
													HX_STACK_LINE(1011)
													{
														HX_STACK_LINE(1011)
														Array< ::Dynamic > tmp29 = ints->list;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1011)
														int tmp30 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1011)
														int tmp31 = ints->width;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1011)
														int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1011)
														int tmp33 = xn;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1011)
														int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1011)
														::zpp_nape::geom::ZPP_GeomVert tmp35 = p;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1011)
														tmp29[tmp34] = tmp35;
													}
												}
												else{
													HX_STACK_LINE(1013)
													::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1013)
													{
														HX_STACK_LINE(1013)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1013)
														{
															HX_STACK_LINE(1013)
															::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1013)
															bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1013)
															if ((tmp30)){
																HX_STACK_LINE(1013)
																::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1013)
																ret1 = tmp31;
															}
															else{
																HX_STACK_LINE(1013)
																::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1013)
																ret1 = tmp31;
																HX_STACK_LINE(1013)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1013)
																ret1->next = null();
															}
															HX_STACK_LINE(1013)
															ret1->forced = false;
														}
														HX_STACK_LINE(1013)
														{
															HX_STACK_LINE(1013)
															ret1->x = p->x;
															HX_STACK_LINE(1013)
															ret1->y = p->y;
															HX_STACK_LINE(1013)
															{
															}
														}
														HX_STACK_LINE(1013)
														tmp28 = ret1;
													}
													HX_STACK_LINE(1013)
													p = tmp28;
												}
												HX_STACK_LINE(1014)
												bool tmp28 = fsty;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1014)
												if ((tmp28)){
													HX_STACK_LINE(1014)
													p->forced = true;
												}
												HX_STACK_LINE(1015)
												bool tmp29 = (p->x == x0);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1015)
												bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1015)
												bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1015)
												if ((tmp30)){
													HX_STACK_LINE(1015)
													tmp31 = (p->x == x1);
												}
												else{
													HX_STACK_LINE(1015)
													tmp31 = true;
												}
												HX_STACK_LINE(1015)
												if ((tmp31)){
													HX_STACK_LINE(1016)
													bool tmp32 = (p->x == x0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1016)
													bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1016)
													bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1016)
													if ((tmp33)){
														HX_STACK_LINE(1016)
														int tmp35 = (int(val) & int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1016)
														int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1016)
														int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1016)
														tmp34 = (tmp37 != (int)0);
													}
													else{
														HX_STACK_LINE(1016)
														tmp34 = false;
													}
													HX_STACK_LINE(1016)
													bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1016)
													bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1016)
													if ((tmp35)){
														HX_STACK_LINE(1016)
														bool tmp37 = (p->x == x1);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1016)
														bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1016)
														bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1016)
														if ((tmp39)){
															HX_STACK_LINE(1016)
															int tmp40 = (int(val) & int((int)4));		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1016)
															int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(1016)
															int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1016)
															tmp36 = (tmp42 != (int)0);
														}
														else{
															HX_STACK_LINE(1016)
															tmp36 = false;
														}
													}
													else{
														HX_STACK_LINE(1016)
														tmp36 = true;
													}
													HX_STACK_LINE(1016)
													if ((tmp36)){
														HX_STACK_LINE(1016)
														hx::XorEq(val,(int)2);
													}
												}
											}
											else{
												HX_STACK_LINE(1019)
												bool tmp26 = (i == (int)5);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1019)
												if ((tmp26)){
													HX_STACK_LINE(1020)
													::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1020)
													{
														HX_STACK_LINE(1020)
														Array< ::Dynamic > tmp28 = ints->list;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1020)
														int tmp29 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1020)
														int tmp30 = (tmp29 + (int)2);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1020)
														int tmp31 = ints->width;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1020)
														int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1020)
														int tmp33 = xn;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1020)
														int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1020)
														tmp27 = tmp28->__get(tmp34).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
													}
													HX_STACK_LINE(1020)
													p = tmp27;
													HX_STACK_LINE(1021)
													bool tmp28 = (p == null());		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1021)
													if ((tmp28)){
														HX_STACK_LINE(1022)
														::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1022)
														{
															HX_STACK_LINE(1022)
															Float tmp30 = x0;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1022)
															Float tmp31 = x1;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1022)
															Float tmp32 = y1;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1022)
															Float tmp33 = v3;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1022)
															Float tmp34 = v2;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1022)
															Dynamic tmp35 = iso;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1022)
															int tmp36 = quality;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1022)
															Float tmp37 = this->xlerp(tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1022)
															Float x = tmp37;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1022)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1022)
															{
																HX_STACK_LINE(1022)
																::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1022)
																bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1022)
																if ((tmp39)){
																	HX_STACK_LINE(1022)
																	::zpp_nape::geom::ZPP_GeomVert tmp40 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1022)
																	ret1 = tmp40;
																}
																else{
																	HX_STACK_LINE(1022)
																	::zpp_nape::geom::ZPP_GeomVert tmp40 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1022)
																	ret1 = tmp40;
																	HX_STACK_LINE(1022)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1022)
																	ret1->next = null();
																}
																HX_STACK_LINE(1022)
																ret1->forced = false;
															}
															HX_STACK_LINE(1022)
															{
																HX_STACK_LINE(1022)
																ret1->x = x;
																HX_STACK_LINE(1022)
																ret1->y = y1;
																HX_STACK_LINE(1022)
																{
																}
															}
															HX_STACK_LINE(1022)
															tmp29 = ret1;
														}
														HX_STACK_LINE(1022)
														p = tmp29;
														HX_STACK_LINE(1023)
														{
															HX_STACK_LINE(1023)
															Array< ::Dynamic > tmp30 = ints->list;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1023)
															int tmp31 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1023)
															int tmp32 = (tmp31 + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1023)
															int tmp33 = ints->width;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1023)
															int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1023)
															int tmp35 = xn;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1023)
															int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1023)
															::zpp_nape::geom::ZPP_GeomVert tmp37 = p;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1023)
															tmp30[tmp36] = tmp37;
														}
													}
													else{
														HX_STACK_LINE(1025)
														::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1025)
														{
															HX_STACK_LINE(1025)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1025)
															{
																HX_STACK_LINE(1025)
																::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1025)
																bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1025)
																if ((tmp31)){
																	HX_STACK_LINE(1025)
																	::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1025)
																	ret1 = tmp32;
																}
																else{
																	HX_STACK_LINE(1025)
																	::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1025)
																	ret1 = tmp32;
																	HX_STACK_LINE(1025)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1025)
																	ret1->next = null();
																}
																HX_STACK_LINE(1025)
																ret1->forced = false;
															}
															HX_STACK_LINE(1025)
															{
																HX_STACK_LINE(1025)
																ret1->x = p->x;
																HX_STACK_LINE(1025)
																ret1->y = p->y;
																HX_STACK_LINE(1025)
																{
																}
															}
															HX_STACK_LINE(1025)
															tmp29 = ret1;
														}
														HX_STACK_LINE(1025)
														p = tmp29;
													}
													HX_STACK_LINE(1026)
													bool tmp29 = sndy;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1026)
													if ((tmp29)){
														HX_STACK_LINE(1026)
														p->forced = true;
													}
													HX_STACK_LINE(1027)
													bool tmp30 = (p->x == x0);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1027)
													bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1027)
													bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1027)
													if ((tmp31)){
														HX_STACK_LINE(1027)
														tmp32 = (p->x == x1);
													}
													else{
														HX_STACK_LINE(1027)
														tmp32 = true;
													}
													HX_STACK_LINE(1027)
													if ((tmp32)){
														HX_STACK_LINE(1028)
														bool tmp33 = (p->x == x0);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1028)
														bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1028)
														bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1028)
														if ((tmp34)){
															HX_STACK_LINE(1028)
															int tmp36 = (int(val) & int((int)64));		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1028)
															int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1028)
															int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1028)
															tmp35 = (tmp38 != (int)0);
														}
														else{
															HX_STACK_LINE(1028)
															tmp35 = false;
														}
														HX_STACK_LINE(1028)
														bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1028)
														bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1028)
														if ((tmp36)){
															HX_STACK_LINE(1028)
															bool tmp38 = (p->x == x1);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1028)
															bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(1028)
															bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1028)
															if ((tmp40)){
																HX_STACK_LINE(1028)
																int tmp41 = (int(val) & int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1028)
																int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1028)
																int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1028)
																tmp37 = (tmp43 != (int)0);
															}
															else{
																HX_STACK_LINE(1028)
																tmp37 = false;
															}
														}
														else{
															HX_STACK_LINE(1028)
															tmp37 = true;
														}
														HX_STACK_LINE(1028)
														if ((tmp37)){
															HX_STACK_LINE(1028)
															hx::XorEq(val,(int)32);
														}
													}
												}
												else{
													HX_STACK_LINE(1031)
													bool tmp27 = (i == (int)3);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1031)
													if ((tmp27)){
														HX_STACK_LINE(1032)
														::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1032)
														{
															HX_STACK_LINE(1032)
															Array< ::Dynamic > tmp29 = ints->list;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1032)
															int tmp30 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1032)
															int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1032)
															int tmp32 = ints->width;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1032)
															int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1032)
															int tmp34 = (xn + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1032)
															int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1032)
															tmp28 = tmp29->__get(tmp35).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														}
														HX_STACK_LINE(1032)
														p = tmp28;
														HX_STACK_LINE(1033)
														bool tmp29 = (p == null());		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1033)
														if ((tmp29)){
															HX_STACK_LINE(1034)
															::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1034)
															{
																HX_STACK_LINE(1034)
																Float tmp31 = y0;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1034)
																Float tmp32 = y1;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1034)
																Float tmp33 = x1;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1034)
																Float tmp34 = v1;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1034)
																Float tmp35 = v2;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1034)
																Dynamic tmp36 = iso;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1034)
																int tmp37 = quality;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1034)
																Float tmp38 = this->ylerp(tmp31,tmp32,tmp33,tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1034)
																Float y = tmp38;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1034)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1034)
																{
																	HX_STACK_LINE(1034)
																	::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1034)
																	bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1034)
																	if ((tmp40)){
																		HX_STACK_LINE(1034)
																		::zpp_nape::geom::ZPP_GeomVert tmp41 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1034)
																		ret1 = tmp41;
																	}
																	else{
																		HX_STACK_LINE(1034)
																		::zpp_nape::geom::ZPP_GeomVert tmp41 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1034)
																		ret1 = tmp41;
																		HX_STACK_LINE(1034)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1034)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1034)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1034)
																{
																	HX_STACK_LINE(1034)
																	ret1->x = x1;
																	HX_STACK_LINE(1034)
																	ret1->y = y;
																	HX_STACK_LINE(1034)
																	{
																	}
																}
																HX_STACK_LINE(1034)
																tmp30 = ret1;
															}
															HX_STACK_LINE(1034)
															p = tmp30;
															HX_STACK_LINE(1035)
															{
																HX_STACK_LINE(1035)
																Array< ::Dynamic > tmp31 = ints->list;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1035)
																int tmp32 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1035)
																int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1035)
																int tmp34 = ints->width;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1035)
																int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1035)
																int tmp36 = (xn + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1035)
																int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1035)
																::zpp_nape::geom::ZPP_GeomVert tmp38 = p;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1035)
																tmp31[tmp37] = tmp38;
															}
														}
														else{
															HX_STACK_LINE(1037)
															::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1037)
															{
																HX_STACK_LINE(1037)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1037)
																{
																	HX_STACK_LINE(1037)
																	::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1037)
																	bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1037)
																	if ((tmp32)){
																		HX_STACK_LINE(1037)
																		::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1037)
																		ret1 = tmp33;
																	}
																	else{
																		HX_STACK_LINE(1037)
																		::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1037)
																		ret1 = tmp33;
																		HX_STACK_LINE(1037)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1037)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1037)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1037)
																{
																	HX_STACK_LINE(1037)
																	ret1->x = p->x;
																	HX_STACK_LINE(1037)
																	ret1->y = p->y;
																	HX_STACK_LINE(1037)
																	{
																	}
																}
																HX_STACK_LINE(1037)
																tmp30 = ret1;
															}
															HX_STACK_LINE(1037)
															p = tmp30;
														}
														HX_STACK_LINE(1038)
														bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1038)
														if ((tmp30)){
															HX_STACK_LINE(1038)
															p->forced = true;
														}
														HX_STACK_LINE(1039)
														bool tmp31 = (p->y == y0);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1039)
														bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1039)
														bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1039)
														if ((tmp32)){
															HX_STACK_LINE(1039)
															tmp33 = (p->y == y1);
														}
														else{
															HX_STACK_LINE(1039)
															tmp33 = true;
														}
														HX_STACK_LINE(1039)
														if ((tmp33)){
															HX_STACK_LINE(1040)
															bool tmp34 = (p->y == y0);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1040)
															bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1040)
															bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1040)
															if ((tmp35)){
																HX_STACK_LINE(1040)
																int tmp37 = (int(val) & int((int)4));		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1040)
																int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1040)
																int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1040)
																tmp36 = (tmp39 != (int)0);
															}
															else{
																HX_STACK_LINE(1040)
																tmp36 = false;
															}
															HX_STACK_LINE(1040)
															bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1040)
															bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1040)
															if ((tmp37)){
																HX_STACK_LINE(1040)
																bool tmp39 = (p->y == y1);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1040)
																bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1040)
																bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1040)
																if ((tmp41)){
																	HX_STACK_LINE(1040)
																	int tmp42 = (int(val) & int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1040)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1040)
																	int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1040)
																	tmp38 = (tmp44 != (int)0);
																}
																else{
																	HX_STACK_LINE(1040)
																	tmp38 = false;
																}
															}
															else{
																HX_STACK_LINE(1040)
																tmp38 = true;
															}
															HX_STACK_LINE(1040)
															if ((tmp38)){
																HX_STACK_LINE(1040)
																hx::XorEq(val,(int)8);
															}
														}
													}
													else{
														HX_STACK_LINE(1044)
														::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1044)
														{
															HX_STACK_LINE(1044)
															Array< ::Dynamic > tmp29 = ints->list;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1044)
															int tmp30 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1044)
															int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1044)
															int tmp32 = ints->width;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1044)
															int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1044)
															int tmp34 = xn;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1044)
															int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1044)
															tmp28 = tmp29->__get(tmp35).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														}
														HX_STACK_LINE(1044)
														p = tmp28;
														HX_STACK_LINE(1045)
														bool tmp29 = (p == null());		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1045)
														if ((tmp29)){
															HX_STACK_LINE(1046)
															::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1046)
															{
																HX_STACK_LINE(1046)
																Float tmp31 = y0;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1046)
																Float tmp32 = y1;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1046)
																Float tmp33 = x0;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1046)
																Float tmp34 = v0;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1046)
																Float tmp35 = v3;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1046)
																Dynamic tmp36 = iso;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1046)
																int tmp37 = quality;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1046)
																Float tmp38 = this->ylerp(tmp31,tmp32,tmp33,tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1046)
																Float y = tmp38;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1046)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1046)
																{
																	HX_STACK_LINE(1046)
																	::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1046)
																	bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1046)
																	if ((tmp40)){
																		HX_STACK_LINE(1046)
																		::zpp_nape::geom::ZPP_GeomVert tmp41 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1046)
																		ret1 = tmp41;
																	}
																	else{
																		HX_STACK_LINE(1046)
																		::zpp_nape::geom::ZPP_GeomVert tmp41 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1046)
																		ret1 = tmp41;
																		HX_STACK_LINE(1046)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1046)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1046)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1046)
																{
																	HX_STACK_LINE(1046)
																	ret1->x = x0;
																	HX_STACK_LINE(1046)
																	ret1->y = y;
																	HX_STACK_LINE(1046)
																	{
																	}
																}
																HX_STACK_LINE(1046)
																tmp30 = ret1;
															}
															HX_STACK_LINE(1046)
															p = tmp30;
															HX_STACK_LINE(1047)
															{
																HX_STACK_LINE(1047)
																Array< ::Dynamic > tmp31 = ints->list;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1047)
																int tmp32 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1047)
																int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1047)
																int tmp34 = ints->width;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1047)
																int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1047)
																int tmp36 = xn;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1047)
																int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1047)
																::zpp_nape::geom::ZPP_GeomVert tmp38 = p;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1047)
																tmp31[tmp37] = tmp38;
															}
														}
														else{
															HX_STACK_LINE(1049)
															::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1049)
															{
																HX_STACK_LINE(1049)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1049)
																{
																	HX_STACK_LINE(1049)
																	::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1049)
																	bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1049)
																	if ((tmp32)){
																		HX_STACK_LINE(1049)
																		::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1049)
																		ret1 = tmp33;
																	}
																	else{
																		HX_STACK_LINE(1049)
																		::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1049)
																		ret1 = tmp33;
																		HX_STACK_LINE(1049)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1049)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1049)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1049)
																{
																	HX_STACK_LINE(1049)
																	ret1->x = p->x;
																	HX_STACK_LINE(1049)
																	ret1->y = p->y;
																	HX_STACK_LINE(1049)
																	{
																	}
																}
																HX_STACK_LINE(1049)
																tmp30 = ret1;
															}
															HX_STACK_LINE(1049)
															p = tmp30;
														}
														HX_STACK_LINE(1050)
														bool tmp30 = fstx;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1050)
														if ((tmp30)){
															HX_STACK_LINE(1050)
															p->forced = true;
														}
														HX_STACK_LINE(1051)
														bool tmp31 = (p->y == y0);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1051)
														bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1051)
														bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1051)
														if ((tmp32)){
															HX_STACK_LINE(1051)
															tmp33 = (p->y == y1);
														}
														else{
															HX_STACK_LINE(1051)
															tmp33 = true;
														}
														HX_STACK_LINE(1051)
														if ((tmp33)){
															HX_STACK_LINE(1052)
															bool tmp34 = (p->y == y0);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1052)
															bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1052)
															bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1052)
															if ((tmp35)){
																HX_STACK_LINE(1052)
																int tmp37 = (int(val) & int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1052)
																int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1052)
																int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1052)
																tmp36 = (tmp39 != (int)0);
															}
															else{
																HX_STACK_LINE(1052)
																tmp36 = false;
															}
															HX_STACK_LINE(1052)
															bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1052)
															bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1052)
															if ((tmp37)){
																HX_STACK_LINE(1052)
																bool tmp39 = (p->y == y1);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1052)
																bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1052)
																bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1052)
																if ((tmp41)){
																	HX_STACK_LINE(1052)
																	int tmp42 = (int(val) & int((int)64));		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1052)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1052)
																	int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1052)
																	tmp38 = (tmp44 != (int)0);
																}
																else{
																	HX_STACK_LINE(1052)
																	tmp38 = false;
																}
															}
															else{
																HX_STACK_LINE(1052)
																tmp38 = true;
															}
															HX_STACK_LINE(1052)
															if ((tmp38)){
																HX_STACK_LINE(1052)
																hx::XorEq(val,(int)128);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1055)
							::zpp_nape::geom::ZPP_GeomVert tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1055)
							{
								HX_STACK_LINE(1056)
								::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1057)
								bool tmp23 = (ret->p1 == null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1057)
								if ((tmp23)){
									HX_STACK_LINE(1057)
									::zpp_nape::geom::ZPP_GeomVert tmp24 = obj->next = obj;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1057)
									::zpp_nape::geom::ZPP_GeomVert tmp25 = obj->prev = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1057)
									ret->p1 = tmp25;
								}
								else{
									HX_STACK_LINE(1059)
									obj->prev = ret->p1;
									HX_STACK_LINE(1060)
									::zpp_nape::geom::ZPP_GeomVert tmp24 = ret->p1->next;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1060)
									obj->next = tmp24;
									HX_STACK_LINE(1061)
									::zpp_nape::geom::ZPP_GeomVert tmp25 = ret->p1->next;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1061)
									tmp25->prev = obj;
									HX_STACK_LINE(1062)
									ret->p1->next = obj;
								}
								HX_STACK_LINE(1064)
								tmp22 = obj;
							}
							HX_STACK_LINE(1055)
							ret->p1 = tmp22;
						}
					}
				}
				HX_STACK_LINE(1068)
				::zpp_nape::geom::ZPP_GeomVert tmp14 = ret->p1->next;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1068)
				ret->p1 = tmp14;
				HX_STACK_LINE(1069)
				ret->key1 = val;
				HX_STACK_LINE(1070)
				bool tmp15 = (val == (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1070)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1070)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1070)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1070)
				if ((tmp17)){
					HX_STACK_LINE(1070)
					tmp18 = (val == (int)4);
				}
				else{
					HX_STACK_LINE(1070)
					tmp18 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1070)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1070)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1070)
				if ((tmp20)){
					HX_STACK_LINE(1070)
					tmp21 = (val == (int)16);
				}
				else{
					HX_STACK_LINE(1070)
					tmp21 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1070)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1070)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1070)
				if ((tmp23)){
					HX_STACK_LINE(1070)
					tmp24 = (val == (int)64);
				}
				else{
					HX_STACK_LINE(1070)
					tmp24 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1070)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1070)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1070)
				if ((tmp26)){
					HX_STACK_LINE(1070)
					tmp27 = (val == (int)3);
				}
				else{
					HX_STACK_LINE(1070)
					tmp27 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1070)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1070)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1070)
				if ((tmp29)){
					HX_STACK_LINE(1070)
					tmp30 = (val == (int)12);
				}
				else{
					HX_STACK_LINE(1070)
					tmp30 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1070)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1070)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1070)
				if ((tmp32)){
					HX_STACK_LINE(1070)
					tmp33 = (val == (int)48);
				}
				else{
					HX_STACK_LINE(1070)
					tmp33 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1070)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1070)
				bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1070)
				if ((tmp35)){
					HX_STACK_LINE(1070)
					tmp36 = (val == (int)192);
				}
				else{
					HX_STACK_LINE(1070)
					tmp36 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1070)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1070)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1070)
				if ((tmp38)){
					HX_STACK_LINE(1070)
					tmp39 = (val == (int)129);
				}
				else{
					HX_STACK_LINE(1070)
					tmp39 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1070)
				bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1070)
				bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1070)
				if ((tmp41)){
					HX_STACK_LINE(1070)
					tmp42 = (val == (int)6);
				}
				else{
					HX_STACK_LINE(1070)
					tmp42 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1070)
				bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1070)
				bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1070)
				if ((tmp44)){
					HX_STACK_LINE(1070)
					tmp45 = (val == (int)24);
				}
				else{
					HX_STACK_LINE(1070)
					tmp45 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1070)
				bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1070)
				bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1070)
				if ((tmp47)){
					HX_STACK_LINE(1070)
					tmp48 = (val == (int)96);
				}
				else{
					HX_STACK_LINE(1070)
					tmp48 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1070)
				bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1070)
				bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1070)
				if ((tmp50)){
					HX_STACK_LINE(1070)
					tmp51 = (val == (int)5);
				}
				else{
					HX_STACK_LINE(1070)
					tmp51 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1070)
				bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1070)
				bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1070)
				if ((tmp53)){
					HX_STACK_LINE(1070)
					tmp54 = (val == (int)20);
				}
				else{
					HX_STACK_LINE(1070)
					tmp54 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1070)
				bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1070)
				bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1070)
				if ((tmp56)){
					HX_STACK_LINE(1070)
					tmp57 = (val == (int)80);
				}
				else{
					HX_STACK_LINE(1070)
					tmp57 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1070)
				bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1070)
				bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1070)
				if ((tmp59)){
					HX_STACK_LINE(1070)
					tmp60 = (val == (int)65);
				}
				else{
					HX_STACK_LINE(1070)
					tmp60 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1070)
				bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1070)
				bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1070)
				if ((tmp62)){
					HX_STACK_LINE(1070)
					tmp63 = (val == (int)17);
				}
				else{
					HX_STACK_LINE(1070)
					tmp63 = true;
				}
				HX_STACK_LINE(1070)
				bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1070)
				bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1070)
				if ((tmp64)){
					HX_STACK_LINE(1070)
					tmp65 = (val == (int)68);
				}
				else{
					HX_STACK_LINE(1070)
					tmp65 = true;
				}
				HX_STACK_LINE(1070)
				if ((tmp65)){
					HX_STACK_LINE(1071)
					val = (int)0;
					HX_STACK_LINE(1072)
					ret->key1 = (int)0;
					HX_STACK_LINE(1073)
					ret->p1 = null();
				}
			}
			HX_STACK_LINE(1076)
			bool tmp14 = (val == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1076)
			if ((tmp14)){
				HX_STACK_LINE(1076)
				ret = null();
			}
			else{
				HX_STACK_LINE(1078)
				ret->pr = ret->p1;
				HX_STACK_LINE(1079)
				ret->okeyr = ret->okey1;
				HX_STACK_LINE(1080)
				ret->keyr = ret->key1;
			}
		}
		else{
			HX_STACK_LINE(1084)
			Float tmp11 = (x0 + x1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1084)
			Float tmp12 = (((Float)0.5) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1084)
			Float tmp13 = (y0 + y1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1084)
			Float tmp14 = (((Float)0.5) * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1084)
			Float tmp15 = iso(tmp12,tmp14).Cast< Float >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1084)
			bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1084)
			bool mid = tmp16;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1085)
			bool tmp17 = (key == (int)10);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1085)
			if ((tmp17)){
				HX_STACK_LINE(1086)
				bool tmp18 = mid;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1086)
				if ((tmp18)){
					HX_STACK_LINE(1087)
					int val = (int)187;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1088)
					{
						HX_STACK_LINE(1089)
						ret->okey1 = val;
						HX_STACK_LINE(1090)
						{
							HX_STACK_LINE(1090)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1090)
							while((true)){
								HX_STACK_LINE(1090)
								bool tmp19 = (_g < (int)8);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1090)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1090)
								if ((tmp20)){
									HX_STACK_LINE(1090)
									break;
								}
								HX_STACK_LINE(1090)
								int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1090)
								int i = tmp21;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1091)
								int tmp22 = val;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1091)
								int tmp23 = (int((int)1) << int(i));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1091)
								int tmp24 = (int(tmp22) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1091)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1091)
								if ((tmp25)){
									HX_STACK_LINE(1092)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1093)
									bool tmp26 = (i == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1093)
									if ((tmp26)){
										HX_STACK_LINE(1094)
										::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1094)
										{
											HX_STACK_LINE(1094)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1094)
											{
												HX_STACK_LINE(1094)
												::zpp_nape::geom::ZPP_GeomVert tmp28 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1094)
												bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1094)
												if ((tmp29)){
													HX_STACK_LINE(1094)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1094)
													ret1 = tmp30;
												}
												else{
													HX_STACK_LINE(1094)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1094)
													ret1 = tmp30;
													HX_STACK_LINE(1094)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1094)
													ret1->next = null();
												}
												HX_STACK_LINE(1094)
												ret1->forced = false;
											}
											HX_STACK_LINE(1094)
											{
												HX_STACK_LINE(1094)
												ret1->x = x0;
												HX_STACK_LINE(1094)
												ret1->y = y0;
												HX_STACK_LINE(1094)
												{
												}
											}
											HX_STACK_LINE(1094)
											tmp27 = ret1;
										}
										HX_STACK_LINE(1094)
										p = tmp27;
										HX_STACK_LINE(1095)
										bool tmp28 = fstx;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1095)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1095)
										bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1095)
										if ((tmp29)){
											HX_STACK_LINE(1095)
											tmp30 = fsty;
										}
										else{
											HX_STACK_LINE(1095)
											tmp30 = true;
										}
										HX_STACK_LINE(1095)
										if ((tmp30)){
											HX_STACK_LINE(1095)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1097)
										bool tmp27 = (i == (int)2);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1097)
										if ((tmp27)){
											HX_STACK_LINE(1098)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1098)
											{
												HX_STACK_LINE(1098)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1098)
												{
													HX_STACK_LINE(1098)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1098)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1098)
													if ((tmp30)){
														HX_STACK_LINE(1098)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1098)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1098)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1098)
														ret1 = tmp31;
														HX_STACK_LINE(1098)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1098)
														ret1->next = null();
													}
													HX_STACK_LINE(1098)
													ret1->forced = false;
												}
												HX_STACK_LINE(1098)
												{
													HX_STACK_LINE(1098)
													ret1->x = x1;
													HX_STACK_LINE(1098)
													ret1->y = y0;
													HX_STACK_LINE(1098)
													{
													}
												}
												HX_STACK_LINE(1098)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1098)
											p = tmp28;
											HX_STACK_LINE(1099)
											bool tmp29 = sndx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1099)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1099)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1099)
											if ((tmp30)){
												HX_STACK_LINE(1099)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1099)
												tmp31 = true;
											}
											HX_STACK_LINE(1099)
											if ((tmp31)){
												HX_STACK_LINE(1099)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1101)
											bool tmp28 = (i == (int)4);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1101)
											if ((tmp28)){
												HX_STACK_LINE(1102)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1102)
												{
													HX_STACK_LINE(1102)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1102)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1102)
														if ((tmp31)){
															HX_STACK_LINE(1102)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1102)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1102)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1102)
															ret1 = tmp32;
															HX_STACK_LINE(1102)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1102)
															ret1->next = null();
														}
														HX_STACK_LINE(1102)
														ret1->forced = false;
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														ret1->x = x1;
														HX_STACK_LINE(1102)
														ret1->y = y1;
														HX_STACK_LINE(1102)
														{
														}
													}
													HX_STACK_LINE(1102)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1102)
												p = tmp29;
												HX_STACK_LINE(1103)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1103)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1103)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1103)
												if ((tmp31)){
													HX_STACK_LINE(1103)
													tmp32 = sndy;
												}
												else{
													HX_STACK_LINE(1103)
													tmp32 = true;
												}
												HX_STACK_LINE(1103)
												if ((tmp32)){
													HX_STACK_LINE(1103)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1105)
												bool tmp29 = (i == (int)6);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1105)
												if ((tmp29)){
													HX_STACK_LINE(1106)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1106)
													{
														HX_STACK_LINE(1106)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1106)
														{
															HX_STACK_LINE(1106)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1106)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1106)
															if ((tmp32)){
																HX_STACK_LINE(1106)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1106)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1106)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1106)
																ret1 = tmp33;
																HX_STACK_LINE(1106)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1106)
																ret1->next = null();
															}
															HX_STACK_LINE(1106)
															ret1->forced = false;
														}
														HX_STACK_LINE(1106)
														{
															HX_STACK_LINE(1106)
															ret1->x = x0;
															HX_STACK_LINE(1106)
															ret1->y = y1;
															HX_STACK_LINE(1106)
															{
															}
														}
														HX_STACK_LINE(1106)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1106)
													p = tmp30;
													HX_STACK_LINE(1107)
													bool tmp31 = fstx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1107)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1107)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1107)
													if ((tmp32)){
														HX_STACK_LINE(1107)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1107)
														tmp33 = true;
													}
													HX_STACK_LINE(1107)
													if ((tmp33)){
														HX_STACK_LINE(1107)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1109)
													bool tmp30 = (i == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1109)
													if ((tmp30)){
														HX_STACK_LINE(1110)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1110)
														{
															HX_STACK_LINE(1110)
															Array< ::Dynamic > tmp32 = ints->list;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1110)
															int tmp33 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1110)
															int tmp34 = ints->width;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1110)
															int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1110)
															int tmp36 = xn;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1110)
															int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1110)
															tmp31 = tmp32->__get(tmp37).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														}
														HX_STACK_LINE(1110)
														p = tmp31;
														HX_STACK_LINE(1111)
														bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1111)
														if ((tmp32)){
															HX_STACK_LINE(1112)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1112)
															{
																HX_STACK_LINE(1112)
																Float tmp34 = x0;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1112)
																Float tmp35 = x1;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1112)
																Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1112)
																Float tmp37 = v0;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1112)
																Float tmp38 = v1;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1112)
																Dynamic tmp39 = iso;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1112)
																int tmp40 = quality;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1112)
																Float tmp41 = this->xlerp(tmp34,tmp35,tmp36,tmp37,tmp38,tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1112)
																Float x = tmp41;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1112)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1112)
																{
																	HX_STACK_LINE(1112)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1112)
																	bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1112)
																	if ((tmp43)){
																		HX_STACK_LINE(1112)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1112)
																		ret1 = tmp44;
																	}
																	else{
																		HX_STACK_LINE(1112)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1112)
																		ret1 = tmp44;
																		HX_STACK_LINE(1112)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1112)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1112)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1112)
																{
																	HX_STACK_LINE(1112)
																	ret1->x = x;
																	HX_STACK_LINE(1112)
																	ret1->y = y0;
																	HX_STACK_LINE(1112)
																	{
																	}
																}
																HX_STACK_LINE(1112)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1112)
															p = tmp33;
															HX_STACK_LINE(1113)
															{
																HX_STACK_LINE(1113)
																Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1113)
																int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1113)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1113)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1113)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1113)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1113)
																::zpp_nape::geom::ZPP_GeomVert tmp40 = p;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1113)
																tmp34[tmp39] = tmp40;
															}
														}
														else{
															HX_STACK_LINE(1115)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1115)
															{
																HX_STACK_LINE(1115)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1115)
																{
																	HX_STACK_LINE(1115)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1115)
																	bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1115)
																	if ((tmp35)){
																		HX_STACK_LINE(1115)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1115)
																		ret1 = tmp36;
																	}
																	else{
																		HX_STACK_LINE(1115)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1115)
																		ret1 = tmp36;
																		HX_STACK_LINE(1115)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1115)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1115)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1115)
																{
																	HX_STACK_LINE(1115)
																	ret1->x = p->x;
																	HX_STACK_LINE(1115)
																	ret1->y = p->y;
																	HX_STACK_LINE(1115)
																	{
																	}
																}
																HX_STACK_LINE(1115)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1115)
															p = tmp33;
														}
														HX_STACK_LINE(1116)
														bool tmp33 = fsty;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1116)
														if ((tmp33)){
															HX_STACK_LINE(1116)
															p->forced = true;
														}
														HX_STACK_LINE(1117)
														bool tmp34 = (p->x == x0);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1117)
														bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1117)
														bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1117)
														if ((tmp35)){
															HX_STACK_LINE(1117)
															tmp36 = (p->x == x1);
														}
														else{
															HX_STACK_LINE(1117)
															tmp36 = true;
														}
														HX_STACK_LINE(1117)
														if ((tmp36)){
															HX_STACK_LINE(1118)
															bool tmp37 = (p->x == x0);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1118)
															bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1118)
															bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(1118)
															if ((tmp38)){
																HX_STACK_LINE(1118)
																int tmp40 = (int(val) & int((int)1));		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1118)
																int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1118)
																int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1118)
																tmp39 = (tmp42 != (int)0);
															}
															else{
																HX_STACK_LINE(1118)
																tmp39 = false;
															}
															HX_STACK_LINE(1118)
															bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1118)
															bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(1118)
															if ((tmp40)){
																HX_STACK_LINE(1118)
																bool tmp42 = (p->x == x1);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1118)
																bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1118)
																bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1118)
																if ((tmp44)){
																	HX_STACK_LINE(1118)
																	int tmp45 = (int(val) & int((int)4));		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1118)
																	int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(1118)
																	int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(1118)
																	tmp41 = (tmp47 != (int)0);
																}
																else{
																	HX_STACK_LINE(1118)
																	tmp41 = false;
																}
															}
															else{
																HX_STACK_LINE(1118)
																tmp41 = true;
															}
															HX_STACK_LINE(1118)
															if ((tmp41)){
																HX_STACK_LINE(1118)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1121)
														bool tmp31 = (i == (int)5);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1121)
														if ((tmp31)){
															HX_STACK_LINE(1122)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1122)
															{
																HX_STACK_LINE(1122)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1122)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1122)
																int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1122)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1122)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1122)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1122)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1122)
																tmp32 = tmp33->__get(tmp39).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1122)
															p = tmp32;
															HX_STACK_LINE(1123)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1123)
															if ((tmp33)){
																HX_STACK_LINE(1124)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1124)
																{
																	HX_STACK_LINE(1124)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1124)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1124)
																	Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1124)
																	Float tmp38 = v3;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1124)
																	Float tmp39 = v2;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1124)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1124)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1124)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1124)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1124)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1124)
																	{
																		HX_STACK_LINE(1124)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1124)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1124)
																		if ((tmp44)){
																			HX_STACK_LINE(1124)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1124)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1124)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1124)
																			ret1 = tmp45;
																			HX_STACK_LINE(1124)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1124)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1124)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1124)
																	{
																		HX_STACK_LINE(1124)
																		ret1->x = x;
																		HX_STACK_LINE(1124)
																		ret1->y = y1;
																		HX_STACK_LINE(1124)
																		{
																		}
																	}
																	HX_STACK_LINE(1124)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1124)
																p = tmp34;
																HX_STACK_LINE(1125)
																{
																	HX_STACK_LINE(1125)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1125)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1125)
																	int tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1125)
																	int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1125)
																	int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1125)
																	int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1125)
																	int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1125)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = p;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1125)
																	tmp35[tmp41] = tmp42;
																}
															}
															else{
																HX_STACK_LINE(1127)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1127)
																{
																	HX_STACK_LINE(1127)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1127)
																	{
																		HX_STACK_LINE(1127)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1127)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1127)
																		if ((tmp36)){
																			HX_STACK_LINE(1127)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1127)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1127)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1127)
																			ret1 = tmp37;
																			HX_STACK_LINE(1127)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1127)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1127)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1127)
																	{
																		HX_STACK_LINE(1127)
																		ret1->x = p->x;
																		HX_STACK_LINE(1127)
																		ret1->y = p->y;
																		HX_STACK_LINE(1127)
																		{
																		}
																	}
																	HX_STACK_LINE(1127)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1127)
																p = tmp34;
															}
															HX_STACK_LINE(1128)
															bool tmp34 = sndy;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1128)
															if ((tmp34)){
																HX_STACK_LINE(1128)
																p->forced = true;
															}
															HX_STACK_LINE(1129)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1129)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1129)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1129)
															if ((tmp36)){
																HX_STACK_LINE(1129)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1129)
																tmp37 = true;
															}
															HX_STACK_LINE(1129)
															if ((tmp37)){
																HX_STACK_LINE(1130)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1130)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1130)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1130)
																if ((tmp39)){
																	HX_STACK_LINE(1130)
																	int tmp41 = (int(val) & int((int)64));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1130)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1130)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1130)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1130)
																	tmp40 = false;
																}
																HX_STACK_LINE(1130)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1130)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1130)
																if ((tmp41)){
																	HX_STACK_LINE(1130)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1130)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1130)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1130)
																	if ((tmp45)){
																		HX_STACK_LINE(1130)
																		int tmp46 = (int(val) & int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1130)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1130)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1130)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1130)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1130)
																	tmp42 = true;
																}
																HX_STACK_LINE(1130)
																if ((tmp42)){
																	HX_STACK_LINE(1130)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1133)
															bool tmp32 = (i == (int)3);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1133)
															if ((tmp32)){
																HX_STACK_LINE(1134)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1134)
																{
																	HX_STACK_LINE(1134)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1134)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1134)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1134)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1134)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1134)
																	int tmp39 = (xn + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1134)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1134)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1134)
																p = tmp33;
																HX_STACK_LINE(1135)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1135)
																if ((tmp34)){
																	HX_STACK_LINE(1136)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1136)
																	{
																		HX_STACK_LINE(1136)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1136)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1136)
																		Float tmp38 = x1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1136)
																		Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1136)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1136)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1136)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1136)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1136)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1136)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1136)
																		{
																			HX_STACK_LINE(1136)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1136)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1136)
																			if ((tmp45)){
																				HX_STACK_LINE(1136)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1136)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1136)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1136)
																				ret1 = tmp46;
																				HX_STACK_LINE(1136)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1136)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1136)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1136)
																		{
																			HX_STACK_LINE(1136)
																			ret1->x = x1;
																			HX_STACK_LINE(1136)
																			ret1->y = y;
																			HX_STACK_LINE(1136)
																			{
																			}
																		}
																		HX_STACK_LINE(1136)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1136)
																	p = tmp35;
																	HX_STACK_LINE(1137)
																	{
																		HX_STACK_LINE(1137)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1137)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1137)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1137)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1137)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1137)
																		int tmp41 = (xn + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1137)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1137)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1137)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1139)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1139)
																	{
																		HX_STACK_LINE(1139)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1139)
																		{
																			HX_STACK_LINE(1139)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1139)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1139)
																			if ((tmp37)){
																				HX_STACK_LINE(1139)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1139)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1139)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1139)
																				ret1 = tmp38;
																				HX_STACK_LINE(1139)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1139)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1139)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1139)
																		{
																			HX_STACK_LINE(1139)
																			ret1->x = p->x;
																			HX_STACK_LINE(1139)
																			ret1->y = p->y;
																			HX_STACK_LINE(1139)
																			{
																			}
																		}
																		HX_STACK_LINE(1139)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1139)
																	p = tmp35;
																}
																HX_STACK_LINE(1140)
																bool tmp35 = sndx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1140)
																if ((tmp35)){
																	HX_STACK_LINE(1140)
																	p->forced = true;
																}
																HX_STACK_LINE(1141)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1141)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1141)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1141)
																if ((tmp37)){
																	HX_STACK_LINE(1141)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1141)
																	tmp38 = true;
																}
																HX_STACK_LINE(1141)
																if ((tmp38)){
																	HX_STACK_LINE(1142)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1142)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1142)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1142)
																	if ((tmp40)){
																		HX_STACK_LINE(1142)
																		int tmp42 = (int(val) & int((int)4));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1142)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1142)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1142)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1142)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1142)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1142)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1142)
																	if ((tmp42)){
																		HX_STACK_LINE(1142)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1142)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1142)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1142)
																		if ((tmp46)){
																			HX_STACK_LINE(1142)
																			int tmp47 = (int(val) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1142)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1142)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1142)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1142)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1142)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1142)
																	if ((tmp43)){
																		HX_STACK_LINE(1142)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1146)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1146)
																{
																	HX_STACK_LINE(1146)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1146)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1146)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1146)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1146)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1146)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1146)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1146)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1146)
																p = tmp33;
																HX_STACK_LINE(1147)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1147)
																if ((tmp34)){
																	HX_STACK_LINE(1148)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1148)
																	{
																		HX_STACK_LINE(1148)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1148)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1148)
																		Float tmp38 = x0;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1148)
																		Float tmp39 = v0;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1148)
																		Float tmp40 = v3;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1148)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1148)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1148)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1148)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1148)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1148)
																		{
																			HX_STACK_LINE(1148)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1148)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1148)
																			if ((tmp45)){
																				HX_STACK_LINE(1148)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1148)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1148)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1148)
																				ret1 = tmp46;
																				HX_STACK_LINE(1148)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1148)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1148)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1148)
																		{
																			HX_STACK_LINE(1148)
																			ret1->x = x0;
																			HX_STACK_LINE(1148)
																			ret1->y = y;
																			HX_STACK_LINE(1148)
																			{
																			}
																		}
																		HX_STACK_LINE(1148)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1148)
																	p = tmp35;
																	HX_STACK_LINE(1149)
																	{
																		HX_STACK_LINE(1149)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1149)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1149)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1149)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1149)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1149)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1149)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1149)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1149)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1151)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1151)
																	{
																		HX_STACK_LINE(1151)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1151)
																		{
																			HX_STACK_LINE(1151)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1151)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1151)
																			if ((tmp37)){
																				HX_STACK_LINE(1151)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1151)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1151)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1151)
																				ret1 = tmp38;
																				HX_STACK_LINE(1151)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1151)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1151)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1151)
																		{
																			HX_STACK_LINE(1151)
																			ret1->x = p->x;
																			HX_STACK_LINE(1151)
																			ret1->y = p->y;
																			HX_STACK_LINE(1151)
																			{
																			}
																		}
																		HX_STACK_LINE(1151)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1151)
																	p = tmp35;
																}
																HX_STACK_LINE(1152)
																bool tmp35 = fstx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1152)
																if ((tmp35)){
																	HX_STACK_LINE(1152)
																	p->forced = true;
																}
																HX_STACK_LINE(1153)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1153)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1153)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1153)
																if ((tmp37)){
																	HX_STACK_LINE(1153)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1153)
																	tmp38 = true;
																}
																HX_STACK_LINE(1153)
																if ((tmp38)){
																	HX_STACK_LINE(1154)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1154)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1154)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1154)
																	if ((tmp40)){
																		HX_STACK_LINE(1154)
																		int tmp42 = (int(val) & int((int)1));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1154)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1154)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1154)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1154)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1154)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1154)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1154)
																	if ((tmp42)){
																		HX_STACK_LINE(1154)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1154)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1154)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1154)
																		if ((tmp46)){
																			HX_STACK_LINE(1154)
																			int tmp47 = (int(val) & int((int)64));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1154)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1154)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1154)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1154)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1154)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1154)
																	if ((tmp43)){
																		HX_STACK_LINE(1154)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1157)
									::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1157)
									{
										HX_STACK_LINE(1158)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1159)
										bool tmp28 = (ret->p1 == null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1159)
										if ((tmp28)){
											HX_STACK_LINE(1159)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = obj->next = obj;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1159)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->prev = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1159)
											ret->p1 = tmp30;
										}
										else{
											HX_STACK_LINE(1161)
											obj->prev = ret->p1;
											HX_STACK_LINE(1162)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = ret->p1->next;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1162)
											obj->next = tmp29;
											HX_STACK_LINE(1163)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p1->next;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1163)
											tmp30->prev = obj;
											HX_STACK_LINE(1164)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1166)
										tmp27 = obj;
									}
									HX_STACK_LINE(1157)
									ret->p1 = tmp27;
								}
							}
						}
						HX_STACK_LINE(1170)
						::zpp_nape::geom::ZPP_GeomVert tmp19 = ret->p1->next;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1170)
						ret->p1 = tmp19;
						HX_STACK_LINE(1171)
						ret->key1 = val;
						HX_STACK_LINE(1172)
						bool tmp20 = (val == (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1172)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1172)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1172)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1172)
						if ((tmp22)){
							HX_STACK_LINE(1172)
							tmp23 = (val == (int)4);
						}
						else{
							HX_STACK_LINE(1172)
							tmp23 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1172)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1172)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1172)
						if ((tmp25)){
							HX_STACK_LINE(1172)
							tmp26 = (val == (int)16);
						}
						else{
							HX_STACK_LINE(1172)
							tmp26 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1172)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1172)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1172)
						if ((tmp28)){
							HX_STACK_LINE(1172)
							tmp29 = (val == (int)64);
						}
						else{
							HX_STACK_LINE(1172)
							tmp29 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1172)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1172)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1172)
						if ((tmp31)){
							HX_STACK_LINE(1172)
							tmp32 = (val == (int)3);
						}
						else{
							HX_STACK_LINE(1172)
							tmp32 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1172)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1172)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1172)
						if ((tmp34)){
							HX_STACK_LINE(1172)
							tmp35 = (val == (int)12);
						}
						else{
							HX_STACK_LINE(1172)
							tmp35 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1172)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1172)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1172)
						if ((tmp37)){
							HX_STACK_LINE(1172)
							tmp38 = (val == (int)48);
						}
						else{
							HX_STACK_LINE(1172)
							tmp38 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1172)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1172)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1172)
						if ((tmp40)){
							HX_STACK_LINE(1172)
							tmp41 = (val == (int)192);
						}
						else{
							HX_STACK_LINE(1172)
							tmp41 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1172)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1172)
						bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1172)
						if ((tmp43)){
							HX_STACK_LINE(1172)
							tmp44 = (val == (int)129);
						}
						else{
							HX_STACK_LINE(1172)
							tmp44 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1172)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1172)
						bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1172)
						if ((tmp46)){
							HX_STACK_LINE(1172)
							tmp47 = (val == (int)6);
						}
						else{
							HX_STACK_LINE(1172)
							tmp47 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1172)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1172)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1172)
						if ((tmp49)){
							HX_STACK_LINE(1172)
							tmp50 = (val == (int)24);
						}
						else{
							HX_STACK_LINE(1172)
							tmp50 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1172)
						bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1172)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1172)
						if ((tmp52)){
							HX_STACK_LINE(1172)
							tmp53 = (val == (int)96);
						}
						else{
							HX_STACK_LINE(1172)
							tmp53 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1172)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1172)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1172)
						if ((tmp55)){
							HX_STACK_LINE(1172)
							tmp56 = (val == (int)5);
						}
						else{
							HX_STACK_LINE(1172)
							tmp56 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1172)
						bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1172)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1172)
						if ((tmp58)){
							HX_STACK_LINE(1172)
							tmp59 = (val == (int)20);
						}
						else{
							HX_STACK_LINE(1172)
							tmp59 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1172)
						bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1172)
						bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1172)
						if ((tmp61)){
							HX_STACK_LINE(1172)
							tmp62 = (val == (int)80);
						}
						else{
							HX_STACK_LINE(1172)
							tmp62 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1172)
						bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1172)
						bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1172)
						if ((tmp64)){
							HX_STACK_LINE(1172)
							tmp65 = (val == (int)65);
						}
						else{
							HX_STACK_LINE(1172)
							tmp65 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1172)
						bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(1172)
						bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(1172)
						if ((tmp67)){
							HX_STACK_LINE(1172)
							tmp68 = (val == (int)17);
						}
						else{
							HX_STACK_LINE(1172)
							tmp68 = true;
						}
						HX_STACK_LINE(1172)
						bool tmp69 = !(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(1172)
						bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(1172)
						if ((tmp69)){
							HX_STACK_LINE(1172)
							tmp70 = (val == (int)68);
						}
						else{
							HX_STACK_LINE(1172)
							tmp70 = true;
						}
						HX_STACK_LINE(1172)
						if ((tmp70)){
							HX_STACK_LINE(1173)
							val = (int)0;
							HX_STACK_LINE(1174)
							ret->key1 = (int)0;
							HX_STACK_LINE(1175)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1178)
					bool tmp19 = (val == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1178)
					if ((tmp19)){
						HX_STACK_LINE(1178)
						ret = null();
					}
					else{
						HX_STACK_LINE(1180)
						ret->pr = ret->p1;
						HX_STACK_LINE(1181)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1182)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1186)
					int val = (int)131;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1187)
					{
						HX_STACK_LINE(1188)
						ret->okey1 = val;
						HX_STACK_LINE(1189)
						{
							HX_STACK_LINE(1189)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1189)
							while((true)){
								HX_STACK_LINE(1189)
								bool tmp19 = (_g < (int)8);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1189)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1189)
								if ((tmp20)){
									HX_STACK_LINE(1189)
									break;
								}
								HX_STACK_LINE(1189)
								int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1189)
								int i = tmp21;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1190)
								int tmp22 = val;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1190)
								int tmp23 = (int((int)1) << int(i));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1190)
								int tmp24 = (int(tmp22) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1190)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1190)
								if ((tmp25)){
									HX_STACK_LINE(1191)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1192)
									bool tmp26 = (i == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1192)
									if ((tmp26)){
										HX_STACK_LINE(1193)
										::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1193)
										{
											HX_STACK_LINE(1193)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1193)
											{
												HX_STACK_LINE(1193)
												::zpp_nape::geom::ZPP_GeomVert tmp28 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1193)
												bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1193)
												if ((tmp29)){
													HX_STACK_LINE(1193)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1193)
													ret1 = tmp30;
												}
												else{
													HX_STACK_LINE(1193)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1193)
													ret1 = tmp30;
													HX_STACK_LINE(1193)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1193)
													ret1->next = null();
												}
												HX_STACK_LINE(1193)
												ret1->forced = false;
											}
											HX_STACK_LINE(1193)
											{
												HX_STACK_LINE(1193)
												ret1->x = x0;
												HX_STACK_LINE(1193)
												ret1->y = y0;
												HX_STACK_LINE(1193)
												{
												}
											}
											HX_STACK_LINE(1193)
											tmp27 = ret1;
										}
										HX_STACK_LINE(1193)
										p = tmp27;
										HX_STACK_LINE(1194)
										bool tmp28 = fstx;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1194)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1194)
										bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1194)
										if ((tmp29)){
											HX_STACK_LINE(1194)
											tmp30 = fsty;
										}
										else{
											HX_STACK_LINE(1194)
											tmp30 = true;
										}
										HX_STACK_LINE(1194)
										if ((tmp30)){
											HX_STACK_LINE(1194)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1196)
										bool tmp27 = (i == (int)2);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1196)
										if ((tmp27)){
											HX_STACK_LINE(1197)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1197)
											{
												HX_STACK_LINE(1197)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1197)
												{
													HX_STACK_LINE(1197)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1197)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1197)
													if ((tmp30)){
														HX_STACK_LINE(1197)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1197)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1197)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1197)
														ret1 = tmp31;
														HX_STACK_LINE(1197)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1197)
														ret1->next = null();
													}
													HX_STACK_LINE(1197)
													ret1->forced = false;
												}
												HX_STACK_LINE(1197)
												{
													HX_STACK_LINE(1197)
													ret1->x = x1;
													HX_STACK_LINE(1197)
													ret1->y = y0;
													HX_STACK_LINE(1197)
													{
													}
												}
												HX_STACK_LINE(1197)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1197)
											p = tmp28;
											HX_STACK_LINE(1198)
											bool tmp29 = sndx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1198)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1198)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1198)
											if ((tmp30)){
												HX_STACK_LINE(1198)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1198)
												tmp31 = true;
											}
											HX_STACK_LINE(1198)
											if ((tmp31)){
												HX_STACK_LINE(1198)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1200)
											bool tmp28 = (i == (int)4);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1200)
											if ((tmp28)){
												HX_STACK_LINE(1201)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1201)
												{
													HX_STACK_LINE(1201)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1201)
													{
														HX_STACK_LINE(1201)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1201)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1201)
														if ((tmp31)){
															HX_STACK_LINE(1201)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1201)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1201)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1201)
															ret1 = tmp32;
															HX_STACK_LINE(1201)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1201)
															ret1->next = null();
														}
														HX_STACK_LINE(1201)
														ret1->forced = false;
													}
													HX_STACK_LINE(1201)
													{
														HX_STACK_LINE(1201)
														ret1->x = x1;
														HX_STACK_LINE(1201)
														ret1->y = y1;
														HX_STACK_LINE(1201)
														{
														}
													}
													HX_STACK_LINE(1201)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1201)
												p = tmp29;
												HX_STACK_LINE(1202)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1202)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1202)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1202)
												if ((tmp31)){
													HX_STACK_LINE(1202)
													tmp32 = sndy;
												}
												else{
													HX_STACK_LINE(1202)
													tmp32 = true;
												}
												HX_STACK_LINE(1202)
												if ((tmp32)){
													HX_STACK_LINE(1202)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1204)
												bool tmp29 = (i == (int)6);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1204)
												if ((tmp29)){
													HX_STACK_LINE(1205)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1205)
													{
														HX_STACK_LINE(1205)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1205)
														{
															HX_STACK_LINE(1205)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1205)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1205)
															if ((tmp32)){
																HX_STACK_LINE(1205)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1205)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1205)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1205)
																ret1 = tmp33;
																HX_STACK_LINE(1205)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1205)
																ret1->next = null();
															}
															HX_STACK_LINE(1205)
															ret1->forced = false;
														}
														HX_STACK_LINE(1205)
														{
															HX_STACK_LINE(1205)
															ret1->x = x0;
															HX_STACK_LINE(1205)
															ret1->y = y1;
															HX_STACK_LINE(1205)
															{
															}
														}
														HX_STACK_LINE(1205)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1205)
													p = tmp30;
													HX_STACK_LINE(1206)
													bool tmp31 = fstx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1206)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1206)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1206)
													if ((tmp32)){
														HX_STACK_LINE(1206)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1206)
														tmp33 = true;
													}
													HX_STACK_LINE(1206)
													if ((tmp33)){
														HX_STACK_LINE(1206)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1208)
													bool tmp30 = (i == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1208)
													if ((tmp30)){
														HX_STACK_LINE(1209)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1209)
														{
															HX_STACK_LINE(1209)
															Array< ::Dynamic > tmp32 = ints->list;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1209)
															int tmp33 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1209)
															int tmp34 = ints->width;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1209)
															int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1209)
															int tmp36 = xn;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1209)
															int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1209)
															tmp31 = tmp32->__get(tmp37).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														}
														HX_STACK_LINE(1209)
														p = tmp31;
														HX_STACK_LINE(1210)
														bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1210)
														if ((tmp32)){
															HX_STACK_LINE(1211)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																Float tmp34 = x0;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1211)
																Float tmp35 = x1;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1211)
																Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1211)
																Float tmp37 = v0;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1211)
																Float tmp38 = v1;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1211)
																Dynamic tmp39 = iso;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1211)
																int tmp40 = quality;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1211)
																Float tmp41 = this->xlerp(tmp34,tmp35,tmp36,tmp37,tmp38,tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1211)
																Float x = tmp41;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1211)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1211)
																{
																	HX_STACK_LINE(1211)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1211)
																	bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1211)
																	if ((tmp43)){
																		HX_STACK_LINE(1211)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1211)
																		ret1 = tmp44;
																	}
																	else{
																		HX_STACK_LINE(1211)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1211)
																		ret1 = tmp44;
																		HX_STACK_LINE(1211)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1211)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1211)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1211)
																{
																	HX_STACK_LINE(1211)
																	ret1->x = x;
																	HX_STACK_LINE(1211)
																	ret1->y = y0;
																	HX_STACK_LINE(1211)
																	{
																	}
																}
																HX_STACK_LINE(1211)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1211)
															p = tmp33;
															HX_STACK_LINE(1212)
															{
																HX_STACK_LINE(1212)
																Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1212)
																int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1212)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1212)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1212)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1212)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1212)
																::zpp_nape::geom::ZPP_GeomVert tmp40 = p;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1212)
																tmp34[tmp39] = tmp40;
															}
														}
														else{
															HX_STACK_LINE(1214)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1214)
															{
																HX_STACK_LINE(1214)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1214)
																{
																	HX_STACK_LINE(1214)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1214)
																	bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1214)
																	if ((tmp35)){
																		HX_STACK_LINE(1214)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1214)
																		ret1 = tmp36;
																	}
																	else{
																		HX_STACK_LINE(1214)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1214)
																		ret1 = tmp36;
																		HX_STACK_LINE(1214)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1214)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1214)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1214)
																{
																	HX_STACK_LINE(1214)
																	ret1->x = p->x;
																	HX_STACK_LINE(1214)
																	ret1->y = p->y;
																	HX_STACK_LINE(1214)
																	{
																	}
																}
																HX_STACK_LINE(1214)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1214)
															p = tmp33;
														}
														HX_STACK_LINE(1215)
														bool tmp33 = fsty;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1215)
														if ((tmp33)){
															HX_STACK_LINE(1215)
															p->forced = true;
														}
														HX_STACK_LINE(1216)
														bool tmp34 = (p->x == x0);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1216)
														bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1216)
														bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1216)
														if ((tmp35)){
															HX_STACK_LINE(1216)
															tmp36 = (p->x == x1);
														}
														else{
															HX_STACK_LINE(1216)
															tmp36 = true;
														}
														HX_STACK_LINE(1216)
														if ((tmp36)){
															HX_STACK_LINE(1217)
															bool tmp37 = (p->x == x0);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1217)
															bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1217)
															bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(1217)
															if ((tmp38)){
																HX_STACK_LINE(1217)
																int tmp40 = (int(val) & int((int)1));		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1217)
																int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1217)
																int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1217)
																tmp39 = (tmp42 != (int)0);
															}
															else{
																HX_STACK_LINE(1217)
																tmp39 = false;
															}
															HX_STACK_LINE(1217)
															bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1217)
															bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(1217)
															if ((tmp40)){
																HX_STACK_LINE(1217)
																bool tmp42 = (p->x == x1);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1217)
																bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1217)
																bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1217)
																if ((tmp44)){
																	HX_STACK_LINE(1217)
																	int tmp45 = (int(val) & int((int)4));		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1217)
																	int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(1217)
																	int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(1217)
																	tmp41 = (tmp47 != (int)0);
																}
																else{
																	HX_STACK_LINE(1217)
																	tmp41 = false;
																}
															}
															else{
																HX_STACK_LINE(1217)
																tmp41 = true;
															}
															HX_STACK_LINE(1217)
															if ((tmp41)){
																HX_STACK_LINE(1217)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1220)
														bool tmp31 = (i == (int)5);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1220)
														if ((tmp31)){
															HX_STACK_LINE(1221)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1221)
															{
																HX_STACK_LINE(1221)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1221)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1221)
																int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1221)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1221)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1221)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1221)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1221)
																tmp32 = tmp33->__get(tmp39).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1221)
															p = tmp32;
															HX_STACK_LINE(1222)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1222)
															if ((tmp33)){
																HX_STACK_LINE(1223)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1223)
																{
																	HX_STACK_LINE(1223)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1223)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1223)
																	Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1223)
																	Float tmp38 = v3;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1223)
																	Float tmp39 = v2;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1223)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1223)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1223)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1223)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1223)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1223)
																	{
																		HX_STACK_LINE(1223)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1223)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1223)
																		if ((tmp44)){
																			HX_STACK_LINE(1223)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1223)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1223)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1223)
																			ret1 = tmp45;
																			HX_STACK_LINE(1223)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1223)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1223)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1223)
																	{
																		HX_STACK_LINE(1223)
																		ret1->x = x;
																		HX_STACK_LINE(1223)
																		ret1->y = y1;
																		HX_STACK_LINE(1223)
																		{
																		}
																	}
																	HX_STACK_LINE(1223)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1223)
																p = tmp34;
																HX_STACK_LINE(1224)
																{
																	HX_STACK_LINE(1224)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1224)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1224)
																	int tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1224)
																	int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1224)
																	int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1224)
																	int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1224)
																	int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1224)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = p;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1224)
																	tmp35[tmp41] = tmp42;
																}
															}
															else{
																HX_STACK_LINE(1226)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1226)
																{
																	HX_STACK_LINE(1226)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1226)
																	{
																		HX_STACK_LINE(1226)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1226)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1226)
																		if ((tmp36)){
																			HX_STACK_LINE(1226)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1226)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1226)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1226)
																			ret1 = tmp37;
																			HX_STACK_LINE(1226)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1226)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1226)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1226)
																	{
																		HX_STACK_LINE(1226)
																		ret1->x = p->x;
																		HX_STACK_LINE(1226)
																		ret1->y = p->y;
																		HX_STACK_LINE(1226)
																		{
																		}
																	}
																	HX_STACK_LINE(1226)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1226)
																p = tmp34;
															}
															HX_STACK_LINE(1227)
															bool tmp34 = sndy;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1227)
															if ((tmp34)){
																HX_STACK_LINE(1227)
																p->forced = true;
															}
															HX_STACK_LINE(1228)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1228)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1228)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1228)
															if ((tmp36)){
																HX_STACK_LINE(1228)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1228)
																tmp37 = true;
															}
															HX_STACK_LINE(1228)
															if ((tmp37)){
																HX_STACK_LINE(1229)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1229)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1229)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1229)
																if ((tmp39)){
																	HX_STACK_LINE(1229)
																	int tmp41 = (int(val) & int((int)64));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1229)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1229)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1229)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1229)
																	tmp40 = false;
																}
																HX_STACK_LINE(1229)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1229)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1229)
																if ((tmp41)){
																	HX_STACK_LINE(1229)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1229)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1229)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1229)
																	if ((tmp45)){
																		HX_STACK_LINE(1229)
																		int tmp46 = (int(val) & int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1229)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1229)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1229)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1229)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1229)
																	tmp42 = true;
																}
																HX_STACK_LINE(1229)
																if ((tmp42)){
																	HX_STACK_LINE(1229)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1232)
															bool tmp32 = (i == (int)3);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1232)
															if ((tmp32)){
																HX_STACK_LINE(1233)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1233)
																{
																	HX_STACK_LINE(1233)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1233)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1233)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1233)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1233)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1233)
																	int tmp39 = (xn + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1233)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1233)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1233)
																p = tmp33;
																HX_STACK_LINE(1234)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1234)
																if ((tmp34)){
																	HX_STACK_LINE(1235)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1235)
																	{
																		HX_STACK_LINE(1235)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1235)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1235)
																		Float tmp38 = x1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1235)
																		Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1235)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1235)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1235)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1235)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1235)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1235)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1235)
																		{
																			HX_STACK_LINE(1235)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1235)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1235)
																			if ((tmp45)){
																				HX_STACK_LINE(1235)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1235)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1235)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1235)
																				ret1 = tmp46;
																				HX_STACK_LINE(1235)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1235)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1235)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1235)
																		{
																			HX_STACK_LINE(1235)
																			ret1->x = x1;
																			HX_STACK_LINE(1235)
																			ret1->y = y;
																			HX_STACK_LINE(1235)
																			{
																			}
																		}
																		HX_STACK_LINE(1235)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1235)
																	p = tmp35;
																	HX_STACK_LINE(1236)
																	{
																		HX_STACK_LINE(1236)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1236)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1236)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1236)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1236)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1236)
																		int tmp41 = (xn + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1236)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1236)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1236)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1238)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1238)
																	{
																		HX_STACK_LINE(1238)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1238)
																		{
																			HX_STACK_LINE(1238)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1238)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1238)
																			if ((tmp37)){
																				HX_STACK_LINE(1238)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1238)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1238)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1238)
																				ret1 = tmp38;
																				HX_STACK_LINE(1238)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1238)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1238)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1238)
																		{
																			HX_STACK_LINE(1238)
																			ret1->x = p->x;
																			HX_STACK_LINE(1238)
																			ret1->y = p->y;
																			HX_STACK_LINE(1238)
																			{
																			}
																		}
																		HX_STACK_LINE(1238)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1238)
																	p = tmp35;
																}
																HX_STACK_LINE(1239)
																bool tmp35 = sndx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1239)
																if ((tmp35)){
																	HX_STACK_LINE(1239)
																	p->forced = true;
																}
																HX_STACK_LINE(1240)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1240)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1240)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1240)
																if ((tmp37)){
																	HX_STACK_LINE(1240)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1240)
																	tmp38 = true;
																}
																HX_STACK_LINE(1240)
																if ((tmp38)){
																	HX_STACK_LINE(1241)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1241)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1241)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1241)
																	if ((tmp40)){
																		HX_STACK_LINE(1241)
																		int tmp42 = (int(val) & int((int)4));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1241)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1241)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1241)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1241)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1241)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1241)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1241)
																	if ((tmp42)){
																		HX_STACK_LINE(1241)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1241)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1241)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1241)
																		if ((tmp46)){
																			HX_STACK_LINE(1241)
																			int tmp47 = (int(val) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1241)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1241)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1241)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1241)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1241)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1241)
																	if ((tmp43)){
																		HX_STACK_LINE(1241)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1245)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1245)
																{
																	HX_STACK_LINE(1245)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1245)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1245)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1245)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1245)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1245)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1245)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1245)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1245)
																p = tmp33;
																HX_STACK_LINE(1246)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1246)
																if ((tmp34)){
																	HX_STACK_LINE(1247)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1247)
																	{
																		HX_STACK_LINE(1247)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1247)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1247)
																		Float tmp38 = x0;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1247)
																		Float tmp39 = v0;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1247)
																		Float tmp40 = v3;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1247)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1247)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1247)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1247)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1247)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1247)
																		{
																			HX_STACK_LINE(1247)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1247)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1247)
																			if ((tmp45)){
																				HX_STACK_LINE(1247)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1247)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1247)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1247)
																				ret1 = tmp46;
																				HX_STACK_LINE(1247)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1247)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1247)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1247)
																		{
																			HX_STACK_LINE(1247)
																			ret1->x = x0;
																			HX_STACK_LINE(1247)
																			ret1->y = y;
																			HX_STACK_LINE(1247)
																			{
																			}
																		}
																		HX_STACK_LINE(1247)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1247)
																	p = tmp35;
																	HX_STACK_LINE(1248)
																	{
																		HX_STACK_LINE(1248)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1248)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1248)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1248)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1248)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1248)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1248)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1248)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1248)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1250)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1250)
																	{
																		HX_STACK_LINE(1250)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1250)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1250)
																			if ((tmp37)){
																				HX_STACK_LINE(1250)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1250)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1250)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1250)
																				ret1 = tmp38;
																				HX_STACK_LINE(1250)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1250)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1250)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			ret1->x = p->x;
																			HX_STACK_LINE(1250)
																			ret1->y = p->y;
																			HX_STACK_LINE(1250)
																			{
																			}
																		}
																		HX_STACK_LINE(1250)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1250)
																	p = tmp35;
																}
																HX_STACK_LINE(1251)
																bool tmp35 = fstx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1251)
																if ((tmp35)){
																	HX_STACK_LINE(1251)
																	p->forced = true;
																}
																HX_STACK_LINE(1252)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1252)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1252)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1252)
																if ((tmp37)){
																	HX_STACK_LINE(1252)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1252)
																	tmp38 = true;
																}
																HX_STACK_LINE(1252)
																if ((tmp38)){
																	HX_STACK_LINE(1253)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1253)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1253)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1253)
																	if ((tmp40)){
																		HX_STACK_LINE(1253)
																		int tmp42 = (int(val) & int((int)1));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1253)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1253)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1253)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1253)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1253)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1253)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1253)
																	if ((tmp42)){
																		HX_STACK_LINE(1253)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1253)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1253)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1253)
																		if ((tmp46)){
																			HX_STACK_LINE(1253)
																			int tmp47 = (int(val) & int((int)64));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1253)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1253)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1253)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1253)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1253)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1253)
																	if ((tmp43)){
																		HX_STACK_LINE(1253)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1256)
									::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1258)
										bool tmp28 = (ret->p1 == null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1258)
										if ((tmp28)){
											HX_STACK_LINE(1258)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = obj->next = obj;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1258)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->prev = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1258)
											ret->p1 = tmp30;
										}
										else{
											HX_STACK_LINE(1260)
											obj->prev = ret->p1;
											HX_STACK_LINE(1261)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = ret->p1->next;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1261)
											obj->next = tmp29;
											HX_STACK_LINE(1262)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p1->next;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1262)
											tmp30->prev = obj;
											HX_STACK_LINE(1263)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1265)
										tmp27 = obj;
									}
									HX_STACK_LINE(1256)
									ret->p1 = tmp27;
								}
							}
						}
						HX_STACK_LINE(1269)
						::zpp_nape::geom::ZPP_GeomVert tmp19 = ret->p1->next;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1269)
						ret->p1 = tmp19;
						HX_STACK_LINE(1270)
						ret->key1 = val;
						HX_STACK_LINE(1271)
						bool tmp20 = (val == (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1271)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1271)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1271)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1271)
						if ((tmp22)){
							HX_STACK_LINE(1271)
							tmp23 = (val == (int)4);
						}
						else{
							HX_STACK_LINE(1271)
							tmp23 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1271)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1271)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1271)
						if ((tmp25)){
							HX_STACK_LINE(1271)
							tmp26 = (val == (int)16);
						}
						else{
							HX_STACK_LINE(1271)
							tmp26 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1271)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1271)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1271)
						if ((tmp28)){
							HX_STACK_LINE(1271)
							tmp29 = (val == (int)64);
						}
						else{
							HX_STACK_LINE(1271)
							tmp29 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1271)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1271)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1271)
						if ((tmp31)){
							HX_STACK_LINE(1271)
							tmp32 = (val == (int)3);
						}
						else{
							HX_STACK_LINE(1271)
							tmp32 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1271)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1271)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1271)
						if ((tmp34)){
							HX_STACK_LINE(1271)
							tmp35 = (val == (int)12);
						}
						else{
							HX_STACK_LINE(1271)
							tmp35 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1271)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1271)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1271)
						if ((tmp37)){
							HX_STACK_LINE(1271)
							tmp38 = (val == (int)48);
						}
						else{
							HX_STACK_LINE(1271)
							tmp38 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1271)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1271)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1271)
						if ((tmp40)){
							HX_STACK_LINE(1271)
							tmp41 = (val == (int)192);
						}
						else{
							HX_STACK_LINE(1271)
							tmp41 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1271)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1271)
						bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1271)
						if ((tmp43)){
							HX_STACK_LINE(1271)
							tmp44 = (val == (int)129);
						}
						else{
							HX_STACK_LINE(1271)
							tmp44 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1271)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1271)
						bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1271)
						if ((tmp46)){
							HX_STACK_LINE(1271)
							tmp47 = (val == (int)6);
						}
						else{
							HX_STACK_LINE(1271)
							tmp47 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1271)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1271)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1271)
						if ((tmp49)){
							HX_STACK_LINE(1271)
							tmp50 = (val == (int)24);
						}
						else{
							HX_STACK_LINE(1271)
							tmp50 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1271)
						bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1271)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1271)
						if ((tmp52)){
							HX_STACK_LINE(1271)
							tmp53 = (val == (int)96);
						}
						else{
							HX_STACK_LINE(1271)
							tmp53 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1271)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1271)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1271)
						if ((tmp55)){
							HX_STACK_LINE(1271)
							tmp56 = (val == (int)5);
						}
						else{
							HX_STACK_LINE(1271)
							tmp56 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1271)
						bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1271)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1271)
						if ((tmp58)){
							HX_STACK_LINE(1271)
							tmp59 = (val == (int)20);
						}
						else{
							HX_STACK_LINE(1271)
							tmp59 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1271)
						bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1271)
						bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1271)
						if ((tmp61)){
							HX_STACK_LINE(1271)
							tmp62 = (val == (int)80);
						}
						else{
							HX_STACK_LINE(1271)
							tmp62 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1271)
						bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1271)
						bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1271)
						if ((tmp64)){
							HX_STACK_LINE(1271)
							tmp65 = (val == (int)65);
						}
						else{
							HX_STACK_LINE(1271)
							tmp65 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1271)
						bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(1271)
						bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(1271)
						if ((tmp67)){
							HX_STACK_LINE(1271)
							tmp68 = (val == (int)17);
						}
						else{
							HX_STACK_LINE(1271)
							tmp68 = true;
						}
						HX_STACK_LINE(1271)
						bool tmp69 = !(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(1271)
						bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(1271)
						if ((tmp69)){
							HX_STACK_LINE(1271)
							tmp70 = (val == (int)68);
						}
						else{
							HX_STACK_LINE(1271)
							tmp70 = true;
						}
						HX_STACK_LINE(1271)
						if ((tmp70)){
							HX_STACK_LINE(1272)
							val = (int)0;
							HX_STACK_LINE(1273)
							ret->key1 = (int)0;
							HX_STACK_LINE(1274)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1277)
					bool tmp19 = (val != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1277)
					if ((tmp19)){
						HX_STACK_LINE(1278)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1279)
						{
							HX_STACK_LINE(1280)
							ret->okey2 = val1;
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1281)
								while((true)){
									HX_STACK_LINE(1281)
									bool tmp20 = (_g < (int)8);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1281)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1281)
									if ((tmp21)){
										HX_STACK_LINE(1281)
										break;
									}
									HX_STACK_LINE(1281)
									int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1281)
									int i = tmp22;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1282)
									int tmp23 = val1;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1282)
									int tmp24 = (int((int)1) << int(i));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1282)
									int tmp25 = (int(tmp23) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1282)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1282)
									if ((tmp26)){
										HX_STACK_LINE(1283)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1284)
										bool tmp27 = (i == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1284)
										if ((tmp27)){
											HX_STACK_LINE(1285)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1285)
											{
												HX_STACK_LINE(1285)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1285)
												{
													HX_STACK_LINE(1285)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1285)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1285)
													if ((tmp30)){
														HX_STACK_LINE(1285)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1285)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1285)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1285)
														ret1 = tmp31;
														HX_STACK_LINE(1285)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1285)
														ret1->next = null();
													}
													HX_STACK_LINE(1285)
													ret1->forced = false;
												}
												HX_STACK_LINE(1285)
												{
													HX_STACK_LINE(1285)
													ret1->x = x0;
													HX_STACK_LINE(1285)
													ret1->y = y0;
													HX_STACK_LINE(1285)
													{
													}
												}
												HX_STACK_LINE(1285)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1285)
											p = tmp28;
											HX_STACK_LINE(1286)
											bool tmp29 = fstx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1286)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1286)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1286)
											if ((tmp30)){
												HX_STACK_LINE(1286)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1286)
												tmp31 = true;
											}
											HX_STACK_LINE(1286)
											if ((tmp31)){
												HX_STACK_LINE(1286)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1288)
											bool tmp28 = (i == (int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1288)
											if ((tmp28)){
												HX_STACK_LINE(1289)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1289)
												{
													HX_STACK_LINE(1289)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1289)
													{
														HX_STACK_LINE(1289)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1289)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1289)
														if ((tmp31)){
															HX_STACK_LINE(1289)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1289)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1289)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1289)
															ret1 = tmp32;
															HX_STACK_LINE(1289)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1289)
															ret1->next = null();
														}
														HX_STACK_LINE(1289)
														ret1->forced = false;
													}
													HX_STACK_LINE(1289)
													{
														HX_STACK_LINE(1289)
														ret1->x = x1;
														HX_STACK_LINE(1289)
														ret1->y = y0;
														HX_STACK_LINE(1289)
														{
														}
													}
													HX_STACK_LINE(1289)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1289)
												p = tmp29;
												HX_STACK_LINE(1290)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1290)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1290)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1290)
												if ((tmp31)){
													HX_STACK_LINE(1290)
													tmp32 = fsty;
												}
												else{
													HX_STACK_LINE(1290)
													tmp32 = true;
												}
												HX_STACK_LINE(1290)
												if ((tmp32)){
													HX_STACK_LINE(1290)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1292)
												bool tmp29 = (i == (int)4);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1292)
												if ((tmp29)){
													HX_STACK_LINE(1293)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1293)
													{
														HX_STACK_LINE(1293)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1293)
														{
															HX_STACK_LINE(1293)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1293)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1293)
															if ((tmp32)){
																HX_STACK_LINE(1293)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1293)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1293)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1293)
																ret1 = tmp33;
																HX_STACK_LINE(1293)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1293)
																ret1->next = null();
															}
															HX_STACK_LINE(1293)
															ret1->forced = false;
														}
														HX_STACK_LINE(1293)
														{
															HX_STACK_LINE(1293)
															ret1->x = x1;
															HX_STACK_LINE(1293)
															ret1->y = y1;
															HX_STACK_LINE(1293)
															{
															}
														}
														HX_STACK_LINE(1293)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1293)
													p = tmp30;
													HX_STACK_LINE(1294)
													bool tmp31 = sndx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1294)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1294)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1294)
													if ((tmp32)){
														HX_STACK_LINE(1294)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1294)
														tmp33 = true;
													}
													HX_STACK_LINE(1294)
													if ((tmp33)){
														HX_STACK_LINE(1294)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1296)
													bool tmp30 = (i == (int)6);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1296)
													if ((tmp30)){
														HX_STACK_LINE(1297)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1297)
														{
															HX_STACK_LINE(1297)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1297)
															{
																HX_STACK_LINE(1297)
																::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1297)
																bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1297)
																if ((tmp33)){
																	HX_STACK_LINE(1297)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1297)
																	ret1 = tmp34;
																}
																else{
																	HX_STACK_LINE(1297)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1297)
																	ret1 = tmp34;
																	HX_STACK_LINE(1297)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1297)
																	ret1->next = null();
																}
																HX_STACK_LINE(1297)
																ret1->forced = false;
															}
															HX_STACK_LINE(1297)
															{
																HX_STACK_LINE(1297)
																ret1->x = x0;
																HX_STACK_LINE(1297)
																ret1->y = y1;
																HX_STACK_LINE(1297)
																{
																}
															}
															HX_STACK_LINE(1297)
															tmp31 = ret1;
														}
														HX_STACK_LINE(1297)
														p = tmp31;
														HX_STACK_LINE(1298)
														bool tmp32 = fstx;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1298)
														bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1298)
														bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1298)
														if ((tmp33)){
															HX_STACK_LINE(1298)
															tmp34 = sndy;
														}
														else{
															HX_STACK_LINE(1298)
															tmp34 = true;
														}
														HX_STACK_LINE(1298)
														if ((tmp34)){
															HX_STACK_LINE(1298)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1300)
														bool tmp31 = (i == (int)1);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1300)
														if ((tmp31)){
															HX_STACK_LINE(1301)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1301)
															{
																HX_STACK_LINE(1301)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1301)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1301)
																int tmp35 = ints->width;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1301)
																int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1301)
																int tmp37 = xn;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1301)
																int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1301)
																tmp32 = tmp33->__get(tmp38).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1301)
															p = tmp32;
															HX_STACK_LINE(1302)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1302)
															if ((tmp33)){
																HX_STACK_LINE(1303)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1303)
																{
																	HX_STACK_LINE(1303)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1303)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1303)
																	Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1303)
																	Float tmp38 = v0;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1303)
																	Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1303)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1303)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1303)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1303)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1303)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1303)
																	{
																		HX_STACK_LINE(1303)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1303)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1303)
																		if ((tmp44)){
																			HX_STACK_LINE(1303)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1303)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1303)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1303)
																			ret1 = tmp45;
																			HX_STACK_LINE(1303)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1303)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1303)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1303)
																	{
																		HX_STACK_LINE(1303)
																		ret1->x = x;
																		HX_STACK_LINE(1303)
																		ret1->y = y0;
																		HX_STACK_LINE(1303)
																		{
																		}
																	}
																	HX_STACK_LINE(1303)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1303)
																p = tmp34;
																HX_STACK_LINE(1304)
																{
																	HX_STACK_LINE(1304)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1304)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1304)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1304)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1304)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1304)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1304)
																	::zpp_nape::geom::ZPP_GeomVert tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1304)
																	tmp35[tmp40] = tmp41;
																}
															}
															else{
																HX_STACK_LINE(1306)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1306)
																{
																	HX_STACK_LINE(1306)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1306)
																	{
																		HX_STACK_LINE(1306)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1306)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1306)
																		if ((tmp36)){
																			HX_STACK_LINE(1306)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1306)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1306)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1306)
																			ret1 = tmp37;
																			HX_STACK_LINE(1306)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1306)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1306)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1306)
																	{
																		HX_STACK_LINE(1306)
																		ret1->x = p->x;
																		HX_STACK_LINE(1306)
																		ret1->y = p->y;
																		HX_STACK_LINE(1306)
																		{
																		}
																	}
																	HX_STACK_LINE(1306)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1306)
																p = tmp34;
															}
															HX_STACK_LINE(1307)
															bool tmp34 = fsty;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1307)
															if ((tmp34)){
																HX_STACK_LINE(1307)
																p->forced = true;
															}
															HX_STACK_LINE(1308)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1308)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1308)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1308)
															if ((tmp36)){
																HX_STACK_LINE(1308)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1308)
																tmp37 = true;
															}
															HX_STACK_LINE(1308)
															if ((tmp37)){
																HX_STACK_LINE(1309)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1309)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1309)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1309)
																if ((tmp39)){
																	HX_STACK_LINE(1309)
																	int tmp41 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1309)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1309)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1309)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1309)
																	tmp40 = false;
																}
																HX_STACK_LINE(1309)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1309)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1309)
																if ((tmp41)){
																	HX_STACK_LINE(1309)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1309)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1309)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1309)
																	if ((tmp45)){
																		HX_STACK_LINE(1309)
																		int tmp46 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1309)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1309)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1309)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1309)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1309)
																	tmp42 = true;
																}
																HX_STACK_LINE(1309)
																if ((tmp42)){
																	HX_STACK_LINE(1309)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1312)
															bool tmp32 = (i == (int)5);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1312)
															if ((tmp32)){
																HX_STACK_LINE(1313)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1313)
																{
																	HX_STACK_LINE(1313)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1313)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1313)
																	int tmp36 = (tmp35 + (int)2);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1313)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1313)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1313)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1313)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1313)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1313)
																p = tmp33;
																HX_STACK_LINE(1314)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1314)
																if ((tmp34)){
																	HX_STACK_LINE(1315)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1315)
																	{
																		HX_STACK_LINE(1315)
																		Float tmp36 = x0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1315)
																		Float tmp37 = x1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1315)
																		Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1315)
																		Float tmp39 = v3;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1315)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1315)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1315)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1315)
																		Float tmp43 = this->xlerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1315)
																		Float x = tmp43;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1315)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1315)
																		{
																			HX_STACK_LINE(1315)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1315)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1315)
																			if ((tmp45)){
																				HX_STACK_LINE(1315)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1315)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1315)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1315)
																				ret1 = tmp46;
																				HX_STACK_LINE(1315)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1315)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1315)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1315)
																		{
																			HX_STACK_LINE(1315)
																			ret1->x = x;
																			HX_STACK_LINE(1315)
																			ret1->y = y1;
																			HX_STACK_LINE(1315)
																			{
																			}
																		}
																		HX_STACK_LINE(1315)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1315)
																	p = tmp35;
																	HX_STACK_LINE(1316)
																	{
																		HX_STACK_LINE(1316)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1316)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1316)
																		int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1316)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1316)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1316)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1316)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1316)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1316)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1318)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1318)
																	{
																		HX_STACK_LINE(1318)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1318)
																		{
																			HX_STACK_LINE(1318)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1318)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1318)
																			if ((tmp37)){
																				HX_STACK_LINE(1318)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1318)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1318)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1318)
																				ret1 = tmp38;
																				HX_STACK_LINE(1318)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1318)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1318)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1318)
																		{
																			HX_STACK_LINE(1318)
																			ret1->x = p->x;
																			HX_STACK_LINE(1318)
																			ret1->y = p->y;
																			HX_STACK_LINE(1318)
																			{
																			}
																		}
																		HX_STACK_LINE(1318)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1318)
																	p = tmp35;
																}
																HX_STACK_LINE(1319)
																bool tmp35 = sndy;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1319)
																if ((tmp35)){
																	HX_STACK_LINE(1319)
																	p->forced = true;
																}
																HX_STACK_LINE(1320)
																bool tmp36 = (p->x == x0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1320)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1320)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1320)
																if ((tmp37)){
																	HX_STACK_LINE(1320)
																	tmp38 = (p->x == x1);
																}
																else{
																	HX_STACK_LINE(1320)
																	tmp38 = true;
																}
																HX_STACK_LINE(1320)
																if ((tmp38)){
																	HX_STACK_LINE(1321)
																	bool tmp39 = (p->x == x0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1321)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1321)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1321)
																	if ((tmp40)){
																		HX_STACK_LINE(1321)
																		int tmp42 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1321)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1321)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1321)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1321)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1321)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1321)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1321)
																	if ((tmp42)){
																		HX_STACK_LINE(1321)
																		bool tmp44 = (p->x == x1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1321)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1321)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1321)
																		if ((tmp46)){
																			HX_STACK_LINE(1321)
																			int tmp47 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1321)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1321)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1321)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1321)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1321)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1321)
																	if ((tmp43)){
																		HX_STACK_LINE(1321)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1324)
																bool tmp33 = (i == (int)3);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1324)
																if ((tmp33)){
																	HX_STACK_LINE(1325)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1325)
																	{
																		HX_STACK_LINE(1325)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1325)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1325)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1325)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1325)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1325)
																		int tmp40 = (xn + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1325)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1325)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1325)
																	p = tmp34;
																	HX_STACK_LINE(1326)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1326)
																	if ((tmp35)){
																		HX_STACK_LINE(1327)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1327)
																		{
																			HX_STACK_LINE(1327)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1327)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1327)
																			Float tmp39 = x1;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1327)
																			Float tmp40 = v1;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1327)
																			Float tmp41 = v2;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1327)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1327)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1327)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1327)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1327)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1327)
																			{
																				HX_STACK_LINE(1327)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1327)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1327)
																				if ((tmp46)){
																					HX_STACK_LINE(1327)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1327)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1327)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1327)
																					ret1 = tmp47;
																					HX_STACK_LINE(1327)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1327)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1327)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1327)
																			{
																				HX_STACK_LINE(1327)
																				ret1->x = x1;
																				HX_STACK_LINE(1327)
																				ret1->y = y;
																				HX_STACK_LINE(1327)
																				{
																				}
																			}
																			HX_STACK_LINE(1327)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1327)
																		p = tmp36;
																		HX_STACK_LINE(1328)
																		{
																			HX_STACK_LINE(1328)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1328)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1328)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1328)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1328)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1328)
																			int tmp42 = (xn + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1328)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1328)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1328)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1330)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1330)
																		{
																			HX_STACK_LINE(1330)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1330)
																			{
																				HX_STACK_LINE(1330)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1330)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1330)
																				if ((tmp38)){
																					HX_STACK_LINE(1330)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1330)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1330)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1330)
																					ret1 = tmp39;
																					HX_STACK_LINE(1330)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1330)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1330)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1330)
																			{
																				HX_STACK_LINE(1330)
																				ret1->x = p->x;
																				HX_STACK_LINE(1330)
																				ret1->y = p->y;
																				HX_STACK_LINE(1330)
																				{
																				}
																			}
																			HX_STACK_LINE(1330)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1330)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1331)
																	bool tmp36 = sndx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1331)
																	if ((tmp36)){
																		HX_STACK_LINE(1331)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1332)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1332)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1332)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1332)
																	if ((tmp38)){
																		HX_STACK_LINE(1332)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1332)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1332)
																	if ((tmp39)){
																		HX_STACK_LINE(1333)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1333)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1333)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1333)
																		if ((tmp41)){
																			HX_STACK_LINE(1333)
																			int tmp43 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1333)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1333)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1333)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1333)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1333)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1333)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1333)
																		if ((tmp43)){
																			HX_STACK_LINE(1333)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1333)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1333)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1333)
																			if ((tmp47)){
																				HX_STACK_LINE(1333)
																				int tmp48 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1333)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1333)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1333)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1333)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1333)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1333)
																		if ((tmp44)){
																			HX_STACK_LINE(1333)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1337)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1337)
																	{
																		HX_STACK_LINE(1337)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1337)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1337)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1337)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1337)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1337)
																		int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1337)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1337)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1337)
																	p = tmp34;
																	HX_STACK_LINE(1338)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1338)
																	if ((tmp35)){
																		HX_STACK_LINE(1339)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1339)
																		{
																			HX_STACK_LINE(1339)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1339)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1339)
																			Float tmp39 = x0;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1339)
																			Float tmp40 = v0;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1339)
																			Float tmp41 = v3;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1339)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1339)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1339)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1339)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1339)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1339)
																			{
																				HX_STACK_LINE(1339)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1339)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1339)
																				if ((tmp46)){
																					HX_STACK_LINE(1339)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1339)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1339)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1339)
																					ret1 = tmp47;
																					HX_STACK_LINE(1339)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1339)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1339)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1339)
																			{
																				HX_STACK_LINE(1339)
																				ret1->x = x0;
																				HX_STACK_LINE(1339)
																				ret1->y = y;
																				HX_STACK_LINE(1339)
																				{
																				}
																			}
																			HX_STACK_LINE(1339)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1339)
																		p = tmp36;
																		HX_STACK_LINE(1340)
																		{
																			HX_STACK_LINE(1340)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1340)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1340)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1340)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1340)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1340)
																			int tmp42 = xn;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1340)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1340)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1340)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1342)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1342)
																		{
																			HX_STACK_LINE(1342)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1342)
																			{
																				HX_STACK_LINE(1342)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1342)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1342)
																				if ((tmp38)){
																					HX_STACK_LINE(1342)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1342)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1342)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1342)
																					ret1 = tmp39;
																					HX_STACK_LINE(1342)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1342)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1342)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1342)
																			{
																				HX_STACK_LINE(1342)
																				ret1->x = p->x;
																				HX_STACK_LINE(1342)
																				ret1->y = p->y;
																				HX_STACK_LINE(1342)
																				{
																				}
																			}
																			HX_STACK_LINE(1342)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1342)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1343)
																	bool tmp36 = fstx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1343)
																	if ((tmp36)){
																		HX_STACK_LINE(1343)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1344)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1344)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1344)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1344)
																	if ((tmp38)){
																		HX_STACK_LINE(1344)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1344)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1344)
																	if ((tmp39)){
																		HX_STACK_LINE(1345)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1345)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1345)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1345)
																		if ((tmp41)){
																			HX_STACK_LINE(1345)
																			int tmp43 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1345)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1345)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1345)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1345)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1345)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1345)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1345)
																		if ((tmp43)){
																			HX_STACK_LINE(1345)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1345)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1345)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1345)
																			if ((tmp47)){
																				HX_STACK_LINE(1345)
																				int tmp48 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1345)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1345)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1345)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1345)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1345)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1345)
																		if ((tmp44)){
																			HX_STACK_LINE(1345)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1348)
										::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1348)
										{
											HX_STACK_LINE(1349)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1350)
											bool tmp29 = (ret->p2 == null());		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1350)
											if ((tmp29)){
												HX_STACK_LINE(1350)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->next = obj;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1350)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = obj->prev = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1350)
												ret->p2 = tmp31;
											}
											else{
												HX_STACK_LINE(1352)
												obj->prev = ret->p2;
												HX_STACK_LINE(1353)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p2->next;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1353)
												obj->next = tmp30;
												HX_STACK_LINE(1354)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = ret->p2->next;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1354)
												tmp31->prev = obj;
												HX_STACK_LINE(1355)
												ret->p2->next = obj;
											}
											HX_STACK_LINE(1357)
											tmp28 = obj;
										}
										HX_STACK_LINE(1348)
										ret->p2 = tmp28;
									}
								}
							}
							HX_STACK_LINE(1361)
							::zpp_nape::geom::ZPP_GeomVert tmp20 = ret->p2->next;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1361)
							ret->p2 = tmp20;
							HX_STACK_LINE(1362)
							ret->key2 = val1;
							HX_STACK_LINE(1363)
							bool tmp21 = (val1 == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1363)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1363)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1363)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1363)
							if ((tmp23)){
								HX_STACK_LINE(1363)
								tmp24 = (val1 == (int)4);
							}
							else{
								HX_STACK_LINE(1363)
								tmp24 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1363)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1363)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1363)
							if ((tmp26)){
								HX_STACK_LINE(1363)
								tmp27 = (val1 == (int)16);
							}
							else{
								HX_STACK_LINE(1363)
								tmp27 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1363)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1363)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1363)
							if ((tmp29)){
								HX_STACK_LINE(1363)
								tmp30 = (val1 == (int)64);
							}
							else{
								HX_STACK_LINE(1363)
								tmp30 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1363)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1363)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1363)
							if ((tmp32)){
								HX_STACK_LINE(1363)
								tmp33 = (val1 == (int)3);
							}
							else{
								HX_STACK_LINE(1363)
								tmp33 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1363)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1363)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1363)
							if ((tmp35)){
								HX_STACK_LINE(1363)
								tmp36 = (val1 == (int)12);
							}
							else{
								HX_STACK_LINE(1363)
								tmp36 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1363)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1363)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1363)
							if ((tmp38)){
								HX_STACK_LINE(1363)
								tmp39 = (val1 == (int)48);
							}
							else{
								HX_STACK_LINE(1363)
								tmp39 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1363)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1363)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1363)
							if ((tmp41)){
								HX_STACK_LINE(1363)
								tmp42 = (val1 == (int)192);
							}
							else{
								HX_STACK_LINE(1363)
								tmp42 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1363)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1363)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1363)
							if ((tmp44)){
								HX_STACK_LINE(1363)
								tmp45 = (val1 == (int)129);
							}
							else{
								HX_STACK_LINE(1363)
								tmp45 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1363)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1363)
							bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1363)
							if ((tmp47)){
								HX_STACK_LINE(1363)
								tmp48 = (val1 == (int)6);
							}
							else{
								HX_STACK_LINE(1363)
								tmp48 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1363)
							bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1363)
							bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1363)
							if ((tmp50)){
								HX_STACK_LINE(1363)
								tmp51 = (val1 == (int)24);
							}
							else{
								HX_STACK_LINE(1363)
								tmp51 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1363)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1363)
							bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1363)
							if ((tmp53)){
								HX_STACK_LINE(1363)
								tmp54 = (val1 == (int)96);
							}
							else{
								HX_STACK_LINE(1363)
								tmp54 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1363)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1363)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1363)
							if ((tmp56)){
								HX_STACK_LINE(1363)
								tmp57 = (val1 == (int)5);
							}
							else{
								HX_STACK_LINE(1363)
								tmp57 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1363)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1363)
							bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1363)
							if ((tmp59)){
								HX_STACK_LINE(1363)
								tmp60 = (val1 == (int)20);
							}
							else{
								HX_STACK_LINE(1363)
								tmp60 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1363)
							bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1363)
							bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1363)
							if ((tmp62)){
								HX_STACK_LINE(1363)
								tmp63 = (val1 == (int)80);
							}
							else{
								HX_STACK_LINE(1363)
								tmp63 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1363)
							bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1363)
							bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1363)
							if ((tmp65)){
								HX_STACK_LINE(1363)
								tmp66 = (val1 == (int)65);
							}
							else{
								HX_STACK_LINE(1363)
								tmp66 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1363)
							bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1363)
							bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1363)
							if ((tmp68)){
								HX_STACK_LINE(1363)
								tmp69 = (val1 == (int)17);
							}
							else{
								HX_STACK_LINE(1363)
								tmp69 = true;
							}
							HX_STACK_LINE(1363)
							bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1363)
							bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1363)
							if ((tmp70)){
								HX_STACK_LINE(1363)
								tmp71 = (val1 == (int)68);
							}
							else{
								HX_STACK_LINE(1363)
								tmp71 = true;
							}
							HX_STACK_LINE(1363)
							if ((tmp71)){
								HX_STACK_LINE(1364)
								val1 = (int)0;
								HX_STACK_LINE(1365)
								ret->key2 = (int)0;
								HX_STACK_LINE(1366)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1369)
						bool tmp20 = (val1 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1369)
						if ((tmp20)){
							HX_STACK_LINE(1370)
							ret->pr = ret->p1;
							HX_STACK_LINE(1371)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1372)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1375)
							ret->pr = ret->p2;
							HX_STACK_LINE(1376)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1377)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1381)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1382)
						{
							HX_STACK_LINE(1383)
							ret->okey1 = val1;
							HX_STACK_LINE(1384)
							{
								HX_STACK_LINE(1384)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1384)
								while((true)){
									HX_STACK_LINE(1384)
									bool tmp20 = (_g < (int)8);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1384)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1384)
									if ((tmp21)){
										HX_STACK_LINE(1384)
										break;
									}
									HX_STACK_LINE(1384)
									int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1384)
									int i = tmp22;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1385)
									int tmp23 = val1;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1385)
									int tmp24 = (int((int)1) << int(i));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1385)
									int tmp25 = (int(tmp23) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1385)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1385)
									if ((tmp26)){
										HX_STACK_LINE(1386)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1387)
										bool tmp27 = (i == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1387)
										if ((tmp27)){
											HX_STACK_LINE(1388)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1388)
											{
												HX_STACK_LINE(1388)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1388)
												{
													HX_STACK_LINE(1388)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1388)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1388)
													if ((tmp30)){
														HX_STACK_LINE(1388)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1388)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1388)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1388)
														ret1 = tmp31;
														HX_STACK_LINE(1388)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1388)
														ret1->next = null();
													}
													HX_STACK_LINE(1388)
													ret1->forced = false;
												}
												HX_STACK_LINE(1388)
												{
													HX_STACK_LINE(1388)
													ret1->x = x0;
													HX_STACK_LINE(1388)
													ret1->y = y0;
													HX_STACK_LINE(1388)
													{
													}
												}
												HX_STACK_LINE(1388)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1388)
											p = tmp28;
											HX_STACK_LINE(1389)
											bool tmp29 = fstx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1389)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1389)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1389)
											if ((tmp30)){
												HX_STACK_LINE(1389)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1389)
												tmp31 = true;
											}
											HX_STACK_LINE(1389)
											if ((tmp31)){
												HX_STACK_LINE(1389)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1391)
											bool tmp28 = (i == (int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1391)
											if ((tmp28)){
												HX_STACK_LINE(1392)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1392)
												{
													HX_STACK_LINE(1392)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1392)
													{
														HX_STACK_LINE(1392)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1392)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1392)
														if ((tmp31)){
															HX_STACK_LINE(1392)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1392)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1392)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1392)
															ret1 = tmp32;
															HX_STACK_LINE(1392)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1392)
															ret1->next = null();
														}
														HX_STACK_LINE(1392)
														ret1->forced = false;
													}
													HX_STACK_LINE(1392)
													{
														HX_STACK_LINE(1392)
														ret1->x = x1;
														HX_STACK_LINE(1392)
														ret1->y = y0;
														HX_STACK_LINE(1392)
														{
														}
													}
													HX_STACK_LINE(1392)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1392)
												p = tmp29;
												HX_STACK_LINE(1393)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1393)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1393)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1393)
												if ((tmp31)){
													HX_STACK_LINE(1393)
													tmp32 = fsty;
												}
												else{
													HX_STACK_LINE(1393)
													tmp32 = true;
												}
												HX_STACK_LINE(1393)
												if ((tmp32)){
													HX_STACK_LINE(1393)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1395)
												bool tmp29 = (i == (int)4);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1395)
												if ((tmp29)){
													HX_STACK_LINE(1396)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1396)
													{
														HX_STACK_LINE(1396)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1396)
														{
															HX_STACK_LINE(1396)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1396)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1396)
															if ((tmp32)){
																HX_STACK_LINE(1396)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1396)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1396)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1396)
																ret1 = tmp33;
																HX_STACK_LINE(1396)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1396)
																ret1->next = null();
															}
															HX_STACK_LINE(1396)
															ret1->forced = false;
														}
														HX_STACK_LINE(1396)
														{
															HX_STACK_LINE(1396)
															ret1->x = x1;
															HX_STACK_LINE(1396)
															ret1->y = y1;
															HX_STACK_LINE(1396)
															{
															}
														}
														HX_STACK_LINE(1396)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1396)
													p = tmp30;
													HX_STACK_LINE(1397)
													bool tmp31 = sndx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1397)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1397)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1397)
													if ((tmp32)){
														HX_STACK_LINE(1397)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1397)
														tmp33 = true;
													}
													HX_STACK_LINE(1397)
													if ((tmp33)){
														HX_STACK_LINE(1397)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1399)
													bool tmp30 = (i == (int)6);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1399)
													if ((tmp30)){
														HX_STACK_LINE(1400)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1400)
														{
															HX_STACK_LINE(1400)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1400)
															{
																HX_STACK_LINE(1400)
																::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1400)
																bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1400)
																if ((tmp33)){
																	HX_STACK_LINE(1400)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1400)
																	ret1 = tmp34;
																}
																else{
																	HX_STACK_LINE(1400)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1400)
																	ret1 = tmp34;
																	HX_STACK_LINE(1400)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1400)
																	ret1->next = null();
																}
																HX_STACK_LINE(1400)
																ret1->forced = false;
															}
															HX_STACK_LINE(1400)
															{
																HX_STACK_LINE(1400)
																ret1->x = x0;
																HX_STACK_LINE(1400)
																ret1->y = y1;
																HX_STACK_LINE(1400)
																{
																}
															}
															HX_STACK_LINE(1400)
															tmp31 = ret1;
														}
														HX_STACK_LINE(1400)
														p = tmp31;
														HX_STACK_LINE(1401)
														bool tmp32 = fstx;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1401)
														bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1401)
														bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1401)
														if ((tmp33)){
															HX_STACK_LINE(1401)
															tmp34 = sndy;
														}
														else{
															HX_STACK_LINE(1401)
															tmp34 = true;
														}
														HX_STACK_LINE(1401)
														if ((tmp34)){
															HX_STACK_LINE(1401)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1403)
														bool tmp31 = (i == (int)1);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1403)
														if ((tmp31)){
															HX_STACK_LINE(1404)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1404)
															{
																HX_STACK_LINE(1404)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1404)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1404)
																int tmp35 = ints->width;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1404)
																int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1404)
																int tmp37 = xn;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1404)
																int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1404)
																tmp32 = tmp33->__get(tmp38).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1404)
															p = tmp32;
															HX_STACK_LINE(1405)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1405)
															if ((tmp33)){
																HX_STACK_LINE(1406)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1406)
																{
																	HX_STACK_LINE(1406)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1406)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1406)
																	Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1406)
																	Float tmp38 = v0;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1406)
																	Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1406)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1406)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1406)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1406)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1406)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1406)
																	{
																		HX_STACK_LINE(1406)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1406)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1406)
																		if ((tmp44)){
																			HX_STACK_LINE(1406)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1406)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1406)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1406)
																			ret1 = tmp45;
																			HX_STACK_LINE(1406)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1406)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1406)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1406)
																	{
																		HX_STACK_LINE(1406)
																		ret1->x = x;
																		HX_STACK_LINE(1406)
																		ret1->y = y0;
																		HX_STACK_LINE(1406)
																		{
																		}
																	}
																	HX_STACK_LINE(1406)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1406)
																p = tmp34;
																HX_STACK_LINE(1407)
																{
																	HX_STACK_LINE(1407)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1407)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1407)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1407)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1407)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1407)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1407)
																	::zpp_nape::geom::ZPP_GeomVert tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1407)
																	tmp35[tmp40] = tmp41;
																}
															}
															else{
																HX_STACK_LINE(1409)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1409)
																{
																	HX_STACK_LINE(1409)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1409)
																	{
																		HX_STACK_LINE(1409)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1409)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1409)
																		if ((tmp36)){
																			HX_STACK_LINE(1409)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1409)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1409)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1409)
																			ret1 = tmp37;
																			HX_STACK_LINE(1409)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1409)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1409)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1409)
																	{
																		HX_STACK_LINE(1409)
																		ret1->x = p->x;
																		HX_STACK_LINE(1409)
																		ret1->y = p->y;
																		HX_STACK_LINE(1409)
																		{
																		}
																	}
																	HX_STACK_LINE(1409)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1409)
																p = tmp34;
															}
															HX_STACK_LINE(1410)
															bool tmp34 = fsty;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1410)
															if ((tmp34)){
																HX_STACK_LINE(1410)
																p->forced = true;
															}
															HX_STACK_LINE(1411)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1411)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1411)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1411)
															if ((tmp36)){
																HX_STACK_LINE(1411)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1411)
																tmp37 = true;
															}
															HX_STACK_LINE(1411)
															if ((tmp37)){
																HX_STACK_LINE(1412)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1412)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1412)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1412)
																if ((tmp39)){
																	HX_STACK_LINE(1412)
																	int tmp41 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1412)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1412)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1412)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1412)
																	tmp40 = false;
																}
																HX_STACK_LINE(1412)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1412)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1412)
																if ((tmp41)){
																	HX_STACK_LINE(1412)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1412)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1412)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1412)
																	if ((tmp45)){
																		HX_STACK_LINE(1412)
																		int tmp46 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1412)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1412)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1412)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1412)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1412)
																	tmp42 = true;
																}
																HX_STACK_LINE(1412)
																if ((tmp42)){
																	HX_STACK_LINE(1412)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1415)
															bool tmp32 = (i == (int)5);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1415)
															if ((tmp32)){
																HX_STACK_LINE(1416)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1416)
																{
																	HX_STACK_LINE(1416)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1416)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1416)
																	int tmp36 = (tmp35 + (int)2);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1416)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1416)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1416)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1416)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1416)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1416)
																p = tmp33;
																HX_STACK_LINE(1417)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1417)
																if ((tmp34)){
																	HX_STACK_LINE(1418)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1418)
																	{
																		HX_STACK_LINE(1418)
																		Float tmp36 = x0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1418)
																		Float tmp37 = x1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1418)
																		Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1418)
																		Float tmp39 = v3;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1418)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1418)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1418)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1418)
																		Float tmp43 = this->xlerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1418)
																		Float x = tmp43;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1418)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1418)
																		{
																			HX_STACK_LINE(1418)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1418)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1418)
																			if ((tmp45)){
																				HX_STACK_LINE(1418)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1418)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1418)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1418)
																				ret1 = tmp46;
																				HX_STACK_LINE(1418)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1418)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1418)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1418)
																		{
																			HX_STACK_LINE(1418)
																			ret1->x = x;
																			HX_STACK_LINE(1418)
																			ret1->y = y1;
																			HX_STACK_LINE(1418)
																			{
																			}
																		}
																		HX_STACK_LINE(1418)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1418)
																	p = tmp35;
																	HX_STACK_LINE(1419)
																	{
																		HX_STACK_LINE(1419)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1419)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1419)
																		int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1419)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1419)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1419)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1419)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1419)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1419)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1421)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1421)
																	{
																		HX_STACK_LINE(1421)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1421)
																		{
																			HX_STACK_LINE(1421)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1421)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1421)
																			if ((tmp37)){
																				HX_STACK_LINE(1421)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1421)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1421)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1421)
																				ret1 = tmp38;
																				HX_STACK_LINE(1421)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1421)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1421)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1421)
																		{
																			HX_STACK_LINE(1421)
																			ret1->x = p->x;
																			HX_STACK_LINE(1421)
																			ret1->y = p->y;
																			HX_STACK_LINE(1421)
																			{
																			}
																		}
																		HX_STACK_LINE(1421)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1421)
																	p = tmp35;
																}
																HX_STACK_LINE(1422)
																bool tmp35 = sndy;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1422)
																if ((tmp35)){
																	HX_STACK_LINE(1422)
																	p->forced = true;
																}
																HX_STACK_LINE(1423)
																bool tmp36 = (p->x == x0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1423)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1423)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1423)
																if ((tmp37)){
																	HX_STACK_LINE(1423)
																	tmp38 = (p->x == x1);
																}
																else{
																	HX_STACK_LINE(1423)
																	tmp38 = true;
																}
																HX_STACK_LINE(1423)
																if ((tmp38)){
																	HX_STACK_LINE(1424)
																	bool tmp39 = (p->x == x0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1424)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1424)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1424)
																	if ((tmp40)){
																		HX_STACK_LINE(1424)
																		int tmp42 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1424)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1424)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1424)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1424)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1424)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1424)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1424)
																	if ((tmp42)){
																		HX_STACK_LINE(1424)
																		bool tmp44 = (p->x == x1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1424)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1424)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1424)
																		if ((tmp46)){
																			HX_STACK_LINE(1424)
																			int tmp47 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1424)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1424)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1424)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1424)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1424)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1424)
																	if ((tmp43)){
																		HX_STACK_LINE(1424)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1427)
																bool tmp33 = (i == (int)3);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1427)
																if ((tmp33)){
																	HX_STACK_LINE(1428)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1428)
																	{
																		HX_STACK_LINE(1428)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1428)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1428)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1428)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1428)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1428)
																		int tmp40 = (xn + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1428)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1428)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1428)
																	p = tmp34;
																	HX_STACK_LINE(1429)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1429)
																	if ((tmp35)){
																		HX_STACK_LINE(1430)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1430)
																		{
																			HX_STACK_LINE(1430)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1430)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1430)
																			Float tmp39 = x1;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1430)
																			Float tmp40 = v1;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1430)
																			Float tmp41 = v2;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1430)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1430)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1430)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1430)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1430)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1430)
																			{
																				HX_STACK_LINE(1430)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1430)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1430)
																				if ((tmp46)){
																					HX_STACK_LINE(1430)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1430)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1430)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1430)
																					ret1 = tmp47;
																					HX_STACK_LINE(1430)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1430)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1430)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1430)
																			{
																				HX_STACK_LINE(1430)
																				ret1->x = x1;
																				HX_STACK_LINE(1430)
																				ret1->y = y;
																				HX_STACK_LINE(1430)
																				{
																				}
																			}
																			HX_STACK_LINE(1430)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1430)
																		p = tmp36;
																		HX_STACK_LINE(1431)
																		{
																			HX_STACK_LINE(1431)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1431)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1431)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1431)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1431)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1431)
																			int tmp42 = (xn + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1431)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1431)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1431)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1433)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1433)
																		{
																			HX_STACK_LINE(1433)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1433)
																			{
																				HX_STACK_LINE(1433)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1433)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1433)
																				if ((tmp38)){
																					HX_STACK_LINE(1433)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1433)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1433)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1433)
																					ret1 = tmp39;
																					HX_STACK_LINE(1433)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1433)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1433)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1433)
																			{
																				HX_STACK_LINE(1433)
																				ret1->x = p->x;
																				HX_STACK_LINE(1433)
																				ret1->y = p->y;
																				HX_STACK_LINE(1433)
																				{
																				}
																			}
																			HX_STACK_LINE(1433)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1433)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1434)
																	bool tmp36 = sndx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1434)
																	if ((tmp36)){
																		HX_STACK_LINE(1434)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1435)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1435)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1435)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1435)
																	if ((tmp38)){
																		HX_STACK_LINE(1435)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1435)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1435)
																	if ((tmp39)){
																		HX_STACK_LINE(1436)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1436)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1436)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1436)
																		if ((tmp41)){
																			HX_STACK_LINE(1436)
																			int tmp43 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1436)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1436)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1436)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1436)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1436)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1436)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1436)
																		if ((tmp43)){
																			HX_STACK_LINE(1436)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1436)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1436)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1436)
																			if ((tmp47)){
																				HX_STACK_LINE(1436)
																				int tmp48 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1436)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1436)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1436)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1436)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1436)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1436)
																		if ((tmp44)){
																			HX_STACK_LINE(1436)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1440)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1440)
																	{
																		HX_STACK_LINE(1440)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1440)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1440)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1440)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1440)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1440)
																		int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1440)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1440)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1440)
																	p = tmp34;
																	HX_STACK_LINE(1441)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1441)
																	if ((tmp35)){
																		HX_STACK_LINE(1442)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1442)
																		{
																			HX_STACK_LINE(1442)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1442)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1442)
																			Float tmp39 = x0;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1442)
																			Float tmp40 = v0;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1442)
																			Float tmp41 = v3;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1442)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1442)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1442)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1442)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1442)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1442)
																			{
																				HX_STACK_LINE(1442)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1442)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1442)
																				if ((tmp46)){
																					HX_STACK_LINE(1442)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1442)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1442)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1442)
																					ret1 = tmp47;
																					HX_STACK_LINE(1442)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1442)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1442)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1442)
																			{
																				HX_STACK_LINE(1442)
																				ret1->x = x0;
																				HX_STACK_LINE(1442)
																				ret1->y = y;
																				HX_STACK_LINE(1442)
																				{
																				}
																			}
																			HX_STACK_LINE(1442)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1442)
																		p = tmp36;
																		HX_STACK_LINE(1443)
																		{
																			HX_STACK_LINE(1443)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1443)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1443)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1443)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1443)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1443)
																			int tmp42 = xn;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1443)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1443)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1443)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1445)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1445)
																		{
																			HX_STACK_LINE(1445)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1445)
																			{
																				HX_STACK_LINE(1445)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1445)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1445)
																				if ((tmp38)){
																					HX_STACK_LINE(1445)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1445)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1445)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1445)
																					ret1 = tmp39;
																					HX_STACK_LINE(1445)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1445)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1445)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1445)
																			{
																				HX_STACK_LINE(1445)
																				ret1->x = p->x;
																				HX_STACK_LINE(1445)
																				ret1->y = p->y;
																				HX_STACK_LINE(1445)
																				{
																				}
																			}
																			HX_STACK_LINE(1445)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1445)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1446)
																	bool tmp36 = fstx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1446)
																	if ((tmp36)){
																		HX_STACK_LINE(1446)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1447)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1447)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1447)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1447)
																	if ((tmp38)){
																		HX_STACK_LINE(1447)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1447)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1447)
																	if ((tmp39)){
																		HX_STACK_LINE(1448)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1448)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1448)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1448)
																		if ((tmp41)){
																			HX_STACK_LINE(1448)
																			int tmp43 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1448)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1448)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1448)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1448)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1448)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1448)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1448)
																		if ((tmp43)){
																			HX_STACK_LINE(1448)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1448)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1448)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1448)
																			if ((tmp47)){
																				HX_STACK_LINE(1448)
																				int tmp48 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1448)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1448)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1448)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1448)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1448)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1448)
																		if ((tmp44)){
																			HX_STACK_LINE(1448)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1451)
										::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1451)
										{
											HX_STACK_LINE(1452)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1453)
											bool tmp29 = (ret->p1 == null());		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1453)
											if ((tmp29)){
												HX_STACK_LINE(1453)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->next = obj;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1453)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = obj->prev = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1453)
												ret->p1 = tmp31;
											}
											else{
												HX_STACK_LINE(1455)
												obj->prev = ret->p1;
												HX_STACK_LINE(1456)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p1->next;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1456)
												obj->next = tmp30;
												HX_STACK_LINE(1457)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = ret->p1->next;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1457)
												tmp31->prev = obj;
												HX_STACK_LINE(1458)
												ret->p1->next = obj;
											}
											HX_STACK_LINE(1460)
											tmp28 = obj;
										}
										HX_STACK_LINE(1451)
										ret->p1 = tmp28;
									}
								}
							}
							HX_STACK_LINE(1464)
							::zpp_nape::geom::ZPP_GeomVert tmp20 = ret->p1->next;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1464)
							ret->p1 = tmp20;
							HX_STACK_LINE(1465)
							ret->key1 = val1;
							HX_STACK_LINE(1466)
							bool tmp21 = (val1 == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1466)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1466)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1466)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1466)
							if ((tmp23)){
								HX_STACK_LINE(1466)
								tmp24 = (val1 == (int)4);
							}
							else{
								HX_STACK_LINE(1466)
								tmp24 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1466)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1466)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1466)
							if ((tmp26)){
								HX_STACK_LINE(1466)
								tmp27 = (val1 == (int)16);
							}
							else{
								HX_STACK_LINE(1466)
								tmp27 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1466)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1466)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1466)
							if ((tmp29)){
								HX_STACK_LINE(1466)
								tmp30 = (val1 == (int)64);
							}
							else{
								HX_STACK_LINE(1466)
								tmp30 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1466)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1466)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1466)
							if ((tmp32)){
								HX_STACK_LINE(1466)
								tmp33 = (val1 == (int)3);
							}
							else{
								HX_STACK_LINE(1466)
								tmp33 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1466)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1466)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1466)
							if ((tmp35)){
								HX_STACK_LINE(1466)
								tmp36 = (val1 == (int)12);
							}
							else{
								HX_STACK_LINE(1466)
								tmp36 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1466)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1466)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1466)
							if ((tmp38)){
								HX_STACK_LINE(1466)
								tmp39 = (val1 == (int)48);
							}
							else{
								HX_STACK_LINE(1466)
								tmp39 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1466)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1466)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1466)
							if ((tmp41)){
								HX_STACK_LINE(1466)
								tmp42 = (val1 == (int)192);
							}
							else{
								HX_STACK_LINE(1466)
								tmp42 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1466)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1466)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1466)
							if ((tmp44)){
								HX_STACK_LINE(1466)
								tmp45 = (val1 == (int)129);
							}
							else{
								HX_STACK_LINE(1466)
								tmp45 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1466)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1466)
							bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1466)
							if ((tmp47)){
								HX_STACK_LINE(1466)
								tmp48 = (val1 == (int)6);
							}
							else{
								HX_STACK_LINE(1466)
								tmp48 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1466)
							bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1466)
							bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1466)
							if ((tmp50)){
								HX_STACK_LINE(1466)
								tmp51 = (val1 == (int)24);
							}
							else{
								HX_STACK_LINE(1466)
								tmp51 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1466)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1466)
							bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1466)
							if ((tmp53)){
								HX_STACK_LINE(1466)
								tmp54 = (val1 == (int)96);
							}
							else{
								HX_STACK_LINE(1466)
								tmp54 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1466)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1466)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1466)
							if ((tmp56)){
								HX_STACK_LINE(1466)
								tmp57 = (val1 == (int)5);
							}
							else{
								HX_STACK_LINE(1466)
								tmp57 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1466)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1466)
							bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1466)
							if ((tmp59)){
								HX_STACK_LINE(1466)
								tmp60 = (val1 == (int)20);
							}
							else{
								HX_STACK_LINE(1466)
								tmp60 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1466)
							bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1466)
							bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1466)
							if ((tmp62)){
								HX_STACK_LINE(1466)
								tmp63 = (val1 == (int)80);
							}
							else{
								HX_STACK_LINE(1466)
								tmp63 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1466)
							bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1466)
							bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1466)
							if ((tmp65)){
								HX_STACK_LINE(1466)
								tmp66 = (val1 == (int)65);
							}
							else{
								HX_STACK_LINE(1466)
								tmp66 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1466)
							bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1466)
							bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1466)
							if ((tmp68)){
								HX_STACK_LINE(1466)
								tmp69 = (val1 == (int)17);
							}
							else{
								HX_STACK_LINE(1466)
								tmp69 = true;
							}
							HX_STACK_LINE(1466)
							bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1466)
							bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1466)
							if ((tmp70)){
								HX_STACK_LINE(1466)
								tmp71 = (val1 == (int)68);
							}
							else{
								HX_STACK_LINE(1466)
								tmp71 = true;
							}
							HX_STACK_LINE(1466)
							if ((tmp71)){
								HX_STACK_LINE(1467)
								val1 = (int)0;
								HX_STACK_LINE(1468)
								ret->key1 = (int)0;
								HX_STACK_LINE(1469)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1472)
						bool tmp20 = (val1 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1472)
						if ((tmp20)){
							HX_STACK_LINE(1472)
							ret = null();
						}
						else{
							HX_STACK_LINE(1474)
							ret->pr = ret->p1;
							HX_STACK_LINE(1475)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1476)
							ret->keyr = ret->key1;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1482)
				bool tmp18 = mid;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1482)
				if ((tmp18)){
					HX_STACK_LINE(1483)
					int val = (int)238;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1484)
					{
						HX_STACK_LINE(1485)
						ret->okey1 = val;
						HX_STACK_LINE(1486)
						{
							HX_STACK_LINE(1486)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1486)
							while((true)){
								HX_STACK_LINE(1486)
								bool tmp19 = (_g < (int)8);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1486)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1486)
								if ((tmp20)){
									HX_STACK_LINE(1486)
									break;
								}
								HX_STACK_LINE(1486)
								int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1486)
								int i = tmp21;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1487)
								int tmp22 = val;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1487)
								int tmp23 = (int((int)1) << int(i));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1487)
								int tmp24 = (int(tmp22) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1487)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1487)
								if ((tmp25)){
									HX_STACK_LINE(1488)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1489)
									bool tmp26 = (i == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1489)
									if ((tmp26)){
										HX_STACK_LINE(1490)
										::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1490)
										{
											HX_STACK_LINE(1490)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1490)
											{
												HX_STACK_LINE(1490)
												::zpp_nape::geom::ZPP_GeomVert tmp28 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1490)
												bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1490)
												if ((tmp29)){
													HX_STACK_LINE(1490)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1490)
													ret1 = tmp30;
												}
												else{
													HX_STACK_LINE(1490)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1490)
													ret1 = tmp30;
													HX_STACK_LINE(1490)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1490)
													ret1->next = null();
												}
												HX_STACK_LINE(1490)
												ret1->forced = false;
											}
											HX_STACK_LINE(1490)
											{
												HX_STACK_LINE(1490)
												ret1->x = x0;
												HX_STACK_LINE(1490)
												ret1->y = y0;
												HX_STACK_LINE(1490)
												{
												}
											}
											HX_STACK_LINE(1490)
											tmp27 = ret1;
										}
										HX_STACK_LINE(1490)
										p = tmp27;
										HX_STACK_LINE(1491)
										bool tmp28 = fstx;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1491)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1491)
										bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1491)
										if ((tmp29)){
											HX_STACK_LINE(1491)
											tmp30 = fsty;
										}
										else{
											HX_STACK_LINE(1491)
											tmp30 = true;
										}
										HX_STACK_LINE(1491)
										if ((tmp30)){
											HX_STACK_LINE(1491)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1493)
										bool tmp27 = (i == (int)2);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1493)
										if ((tmp27)){
											HX_STACK_LINE(1494)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1494)
											{
												HX_STACK_LINE(1494)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1494)
												{
													HX_STACK_LINE(1494)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1494)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1494)
													if ((tmp30)){
														HX_STACK_LINE(1494)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1494)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1494)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1494)
														ret1 = tmp31;
														HX_STACK_LINE(1494)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1494)
														ret1->next = null();
													}
													HX_STACK_LINE(1494)
													ret1->forced = false;
												}
												HX_STACK_LINE(1494)
												{
													HX_STACK_LINE(1494)
													ret1->x = x1;
													HX_STACK_LINE(1494)
													ret1->y = y0;
													HX_STACK_LINE(1494)
													{
													}
												}
												HX_STACK_LINE(1494)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1494)
											p = tmp28;
											HX_STACK_LINE(1495)
											bool tmp29 = sndx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1495)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1495)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1495)
											if ((tmp30)){
												HX_STACK_LINE(1495)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1495)
												tmp31 = true;
											}
											HX_STACK_LINE(1495)
											if ((tmp31)){
												HX_STACK_LINE(1495)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1497)
											bool tmp28 = (i == (int)4);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1497)
											if ((tmp28)){
												HX_STACK_LINE(1498)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1498)
												{
													HX_STACK_LINE(1498)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1498)
													{
														HX_STACK_LINE(1498)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1498)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1498)
														if ((tmp31)){
															HX_STACK_LINE(1498)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1498)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1498)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1498)
															ret1 = tmp32;
															HX_STACK_LINE(1498)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1498)
															ret1->next = null();
														}
														HX_STACK_LINE(1498)
														ret1->forced = false;
													}
													HX_STACK_LINE(1498)
													{
														HX_STACK_LINE(1498)
														ret1->x = x1;
														HX_STACK_LINE(1498)
														ret1->y = y1;
														HX_STACK_LINE(1498)
														{
														}
													}
													HX_STACK_LINE(1498)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1498)
												p = tmp29;
												HX_STACK_LINE(1499)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1499)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1499)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1499)
												if ((tmp31)){
													HX_STACK_LINE(1499)
													tmp32 = sndy;
												}
												else{
													HX_STACK_LINE(1499)
													tmp32 = true;
												}
												HX_STACK_LINE(1499)
												if ((tmp32)){
													HX_STACK_LINE(1499)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1501)
												bool tmp29 = (i == (int)6);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1501)
												if ((tmp29)){
													HX_STACK_LINE(1502)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1502)
													{
														HX_STACK_LINE(1502)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1502)
														{
															HX_STACK_LINE(1502)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1502)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1502)
															if ((tmp32)){
																HX_STACK_LINE(1502)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1502)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1502)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1502)
																ret1 = tmp33;
																HX_STACK_LINE(1502)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1502)
																ret1->next = null();
															}
															HX_STACK_LINE(1502)
															ret1->forced = false;
														}
														HX_STACK_LINE(1502)
														{
															HX_STACK_LINE(1502)
															ret1->x = x0;
															HX_STACK_LINE(1502)
															ret1->y = y1;
															HX_STACK_LINE(1502)
															{
															}
														}
														HX_STACK_LINE(1502)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1502)
													p = tmp30;
													HX_STACK_LINE(1503)
													bool tmp31 = fstx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1503)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1503)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1503)
													if ((tmp32)){
														HX_STACK_LINE(1503)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1503)
														tmp33 = true;
													}
													HX_STACK_LINE(1503)
													if ((tmp33)){
														HX_STACK_LINE(1503)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1505)
													bool tmp30 = (i == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1505)
													if ((tmp30)){
														HX_STACK_LINE(1506)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1506)
														{
															HX_STACK_LINE(1506)
															Array< ::Dynamic > tmp32 = ints->list;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1506)
															int tmp33 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1506)
															int tmp34 = ints->width;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1506)
															int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1506)
															int tmp36 = xn;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1506)
															int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1506)
															tmp31 = tmp32->__get(tmp37).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														}
														HX_STACK_LINE(1506)
														p = tmp31;
														HX_STACK_LINE(1507)
														bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1507)
														if ((tmp32)){
															HX_STACK_LINE(1508)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1508)
															{
																HX_STACK_LINE(1508)
																Float tmp34 = x0;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1508)
																Float tmp35 = x1;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1508)
																Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1508)
																Float tmp37 = v0;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1508)
																Float tmp38 = v1;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1508)
																Dynamic tmp39 = iso;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1508)
																int tmp40 = quality;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1508)
																Float tmp41 = this->xlerp(tmp34,tmp35,tmp36,tmp37,tmp38,tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1508)
																Float x = tmp41;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1508)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1508)
																{
																	HX_STACK_LINE(1508)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1508)
																	bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1508)
																	if ((tmp43)){
																		HX_STACK_LINE(1508)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1508)
																		ret1 = tmp44;
																	}
																	else{
																		HX_STACK_LINE(1508)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1508)
																		ret1 = tmp44;
																		HX_STACK_LINE(1508)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1508)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1508)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1508)
																{
																	HX_STACK_LINE(1508)
																	ret1->x = x;
																	HX_STACK_LINE(1508)
																	ret1->y = y0;
																	HX_STACK_LINE(1508)
																	{
																	}
																}
																HX_STACK_LINE(1508)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1508)
															p = tmp33;
															HX_STACK_LINE(1509)
															{
																HX_STACK_LINE(1509)
																Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1509)
																int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1509)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1509)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1509)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1509)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1509)
																::zpp_nape::geom::ZPP_GeomVert tmp40 = p;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1509)
																tmp34[tmp39] = tmp40;
															}
														}
														else{
															HX_STACK_LINE(1511)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1511)
															{
																HX_STACK_LINE(1511)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1511)
																{
																	HX_STACK_LINE(1511)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1511)
																	bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1511)
																	if ((tmp35)){
																		HX_STACK_LINE(1511)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1511)
																		ret1 = tmp36;
																	}
																	else{
																		HX_STACK_LINE(1511)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1511)
																		ret1 = tmp36;
																		HX_STACK_LINE(1511)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1511)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1511)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1511)
																{
																	HX_STACK_LINE(1511)
																	ret1->x = p->x;
																	HX_STACK_LINE(1511)
																	ret1->y = p->y;
																	HX_STACK_LINE(1511)
																	{
																	}
																}
																HX_STACK_LINE(1511)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1511)
															p = tmp33;
														}
														HX_STACK_LINE(1512)
														bool tmp33 = fsty;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1512)
														if ((tmp33)){
															HX_STACK_LINE(1512)
															p->forced = true;
														}
														HX_STACK_LINE(1513)
														bool tmp34 = (p->x == x0);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1513)
														bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1513)
														bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1513)
														if ((tmp35)){
															HX_STACK_LINE(1513)
															tmp36 = (p->x == x1);
														}
														else{
															HX_STACK_LINE(1513)
															tmp36 = true;
														}
														HX_STACK_LINE(1513)
														if ((tmp36)){
															HX_STACK_LINE(1514)
															bool tmp37 = (p->x == x0);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1514)
															bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1514)
															bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(1514)
															if ((tmp38)){
																HX_STACK_LINE(1514)
																int tmp40 = (int(val) & int((int)1));		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1514)
																int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1514)
																int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1514)
																tmp39 = (tmp42 != (int)0);
															}
															else{
																HX_STACK_LINE(1514)
																tmp39 = false;
															}
															HX_STACK_LINE(1514)
															bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1514)
															bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(1514)
															if ((tmp40)){
																HX_STACK_LINE(1514)
																bool tmp42 = (p->x == x1);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1514)
																bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1514)
																bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1514)
																if ((tmp44)){
																	HX_STACK_LINE(1514)
																	int tmp45 = (int(val) & int((int)4));		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1514)
																	int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(1514)
																	int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(1514)
																	tmp41 = (tmp47 != (int)0);
																}
																else{
																	HX_STACK_LINE(1514)
																	tmp41 = false;
																}
															}
															else{
																HX_STACK_LINE(1514)
																tmp41 = true;
															}
															HX_STACK_LINE(1514)
															if ((tmp41)){
																HX_STACK_LINE(1514)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1517)
														bool tmp31 = (i == (int)5);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1517)
														if ((tmp31)){
															HX_STACK_LINE(1518)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1518)
															{
																HX_STACK_LINE(1518)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1518)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1518)
																int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1518)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1518)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1518)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1518)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1518)
																tmp32 = tmp33->__get(tmp39).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1518)
															p = tmp32;
															HX_STACK_LINE(1519)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1519)
															if ((tmp33)){
																HX_STACK_LINE(1520)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1520)
																{
																	HX_STACK_LINE(1520)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1520)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1520)
																	Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1520)
																	Float tmp38 = v3;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1520)
																	Float tmp39 = v2;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1520)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1520)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1520)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1520)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1520)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1520)
																	{
																		HX_STACK_LINE(1520)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1520)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1520)
																		if ((tmp44)){
																			HX_STACK_LINE(1520)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1520)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1520)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1520)
																			ret1 = tmp45;
																			HX_STACK_LINE(1520)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1520)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1520)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1520)
																	{
																		HX_STACK_LINE(1520)
																		ret1->x = x;
																		HX_STACK_LINE(1520)
																		ret1->y = y1;
																		HX_STACK_LINE(1520)
																		{
																		}
																	}
																	HX_STACK_LINE(1520)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1520)
																p = tmp34;
																HX_STACK_LINE(1521)
																{
																	HX_STACK_LINE(1521)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1521)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1521)
																	int tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1521)
																	int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1521)
																	int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1521)
																	int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1521)
																	int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1521)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = p;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1521)
																	tmp35[tmp41] = tmp42;
																}
															}
															else{
																HX_STACK_LINE(1523)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1523)
																{
																	HX_STACK_LINE(1523)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1523)
																	{
																		HX_STACK_LINE(1523)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1523)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1523)
																		if ((tmp36)){
																			HX_STACK_LINE(1523)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1523)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1523)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1523)
																			ret1 = tmp37;
																			HX_STACK_LINE(1523)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1523)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1523)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1523)
																	{
																		HX_STACK_LINE(1523)
																		ret1->x = p->x;
																		HX_STACK_LINE(1523)
																		ret1->y = p->y;
																		HX_STACK_LINE(1523)
																		{
																		}
																	}
																	HX_STACK_LINE(1523)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1523)
																p = tmp34;
															}
															HX_STACK_LINE(1524)
															bool tmp34 = sndy;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1524)
															if ((tmp34)){
																HX_STACK_LINE(1524)
																p->forced = true;
															}
															HX_STACK_LINE(1525)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1525)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1525)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1525)
															if ((tmp36)){
																HX_STACK_LINE(1525)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1525)
																tmp37 = true;
															}
															HX_STACK_LINE(1525)
															if ((tmp37)){
																HX_STACK_LINE(1526)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1526)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1526)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1526)
																if ((tmp39)){
																	HX_STACK_LINE(1526)
																	int tmp41 = (int(val) & int((int)64));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1526)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1526)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1526)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1526)
																	tmp40 = false;
																}
																HX_STACK_LINE(1526)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1526)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1526)
																if ((tmp41)){
																	HX_STACK_LINE(1526)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1526)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1526)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1526)
																	if ((tmp45)){
																		HX_STACK_LINE(1526)
																		int tmp46 = (int(val) & int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1526)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1526)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1526)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1526)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1526)
																	tmp42 = true;
																}
																HX_STACK_LINE(1526)
																if ((tmp42)){
																	HX_STACK_LINE(1526)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1529)
															bool tmp32 = (i == (int)3);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1529)
															if ((tmp32)){
																HX_STACK_LINE(1530)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1530)
																{
																	HX_STACK_LINE(1530)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1530)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1530)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1530)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1530)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1530)
																	int tmp39 = (xn + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1530)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1530)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1530)
																p = tmp33;
																HX_STACK_LINE(1531)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1531)
																if ((tmp34)){
																	HX_STACK_LINE(1532)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1532)
																	{
																		HX_STACK_LINE(1532)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1532)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1532)
																		Float tmp38 = x1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1532)
																		Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1532)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1532)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1532)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1532)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1532)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1532)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1532)
																		{
																			HX_STACK_LINE(1532)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1532)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1532)
																			if ((tmp45)){
																				HX_STACK_LINE(1532)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1532)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1532)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1532)
																				ret1 = tmp46;
																				HX_STACK_LINE(1532)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1532)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1532)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1532)
																		{
																			HX_STACK_LINE(1532)
																			ret1->x = x1;
																			HX_STACK_LINE(1532)
																			ret1->y = y;
																			HX_STACK_LINE(1532)
																			{
																			}
																		}
																		HX_STACK_LINE(1532)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1532)
																	p = tmp35;
																	HX_STACK_LINE(1533)
																	{
																		HX_STACK_LINE(1533)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1533)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1533)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1533)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1533)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1533)
																		int tmp41 = (xn + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1533)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1533)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1533)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1535)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1535)
																	{
																		HX_STACK_LINE(1535)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1535)
																		{
																			HX_STACK_LINE(1535)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1535)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1535)
																			if ((tmp37)){
																				HX_STACK_LINE(1535)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1535)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1535)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1535)
																				ret1 = tmp38;
																				HX_STACK_LINE(1535)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1535)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1535)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1535)
																		{
																			HX_STACK_LINE(1535)
																			ret1->x = p->x;
																			HX_STACK_LINE(1535)
																			ret1->y = p->y;
																			HX_STACK_LINE(1535)
																			{
																			}
																		}
																		HX_STACK_LINE(1535)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1535)
																	p = tmp35;
																}
																HX_STACK_LINE(1536)
																bool tmp35 = sndx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1536)
																if ((tmp35)){
																	HX_STACK_LINE(1536)
																	p->forced = true;
																}
																HX_STACK_LINE(1537)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1537)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1537)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1537)
																if ((tmp37)){
																	HX_STACK_LINE(1537)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1537)
																	tmp38 = true;
																}
																HX_STACK_LINE(1537)
																if ((tmp38)){
																	HX_STACK_LINE(1538)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1538)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1538)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1538)
																	if ((tmp40)){
																		HX_STACK_LINE(1538)
																		int tmp42 = (int(val) & int((int)4));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1538)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1538)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1538)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1538)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1538)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1538)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1538)
																	if ((tmp42)){
																		HX_STACK_LINE(1538)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1538)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1538)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1538)
																		if ((tmp46)){
																			HX_STACK_LINE(1538)
																			int tmp47 = (int(val) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1538)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1538)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1538)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1538)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1538)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1538)
																	if ((tmp43)){
																		HX_STACK_LINE(1538)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1542)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1542)
																{
																	HX_STACK_LINE(1542)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1542)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1542)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1542)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1542)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1542)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1542)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1542)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1542)
																p = tmp33;
																HX_STACK_LINE(1543)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1543)
																if ((tmp34)){
																	HX_STACK_LINE(1544)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1544)
																	{
																		HX_STACK_LINE(1544)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1544)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1544)
																		Float tmp38 = x0;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1544)
																		Float tmp39 = v0;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1544)
																		Float tmp40 = v3;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1544)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1544)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1544)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1544)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1544)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1544)
																		{
																			HX_STACK_LINE(1544)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1544)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1544)
																			if ((tmp45)){
																				HX_STACK_LINE(1544)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1544)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1544)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1544)
																				ret1 = tmp46;
																				HX_STACK_LINE(1544)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1544)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1544)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1544)
																		{
																			HX_STACK_LINE(1544)
																			ret1->x = x0;
																			HX_STACK_LINE(1544)
																			ret1->y = y;
																			HX_STACK_LINE(1544)
																			{
																			}
																		}
																		HX_STACK_LINE(1544)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1544)
																	p = tmp35;
																	HX_STACK_LINE(1545)
																	{
																		HX_STACK_LINE(1545)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1545)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1545)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1545)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1545)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1545)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1545)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1545)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1545)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1547)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1547)
																	{
																		HX_STACK_LINE(1547)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1547)
																		{
																			HX_STACK_LINE(1547)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1547)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1547)
																			if ((tmp37)){
																				HX_STACK_LINE(1547)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1547)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1547)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1547)
																				ret1 = tmp38;
																				HX_STACK_LINE(1547)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1547)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1547)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1547)
																		{
																			HX_STACK_LINE(1547)
																			ret1->x = p->x;
																			HX_STACK_LINE(1547)
																			ret1->y = p->y;
																			HX_STACK_LINE(1547)
																			{
																			}
																		}
																		HX_STACK_LINE(1547)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1547)
																	p = tmp35;
																}
																HX_STACK_LINE(1548)
																bool tmp35 = fstx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1548)
																if ((tmp35)){
																	HX_STACK_LINE(1548)
																	p->forced = true;
																}
																HX_STACK_LINE(1549)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1549)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1549)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1549)
																if ((tmp37)){
																	HX_STACK_LINE(1549)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1549)
																	tmp38 = true;
																}
																HX_STACK_LINE(1549)
																if ((tmp38)){
																	HX_STACK_LINE(1550)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1550)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1550)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1550)
																	if ((tmp40)){
																		HX_STACK_LINE(1550)
																		int tmp42 = (int(val) & int((int)1));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1550)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1550)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1550)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1550)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1550)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1550)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1550)
																	if ((tmp42)){
																		HX_STACK_LINE(1550)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1550)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1550)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1550)
																		if ((tmp46)){
																			HX_STACK_LINE(1550)
																			int tmp47 = (int(val) & int((int)64));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1550)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1550)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1550)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1550)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1550)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1550)
																	if ((tmp43)){
																		HX_STACK_LINE(1550)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1553)
									::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1553)
									{
										HX_STACK_LINE(1554)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1555)
										bool tmp28 = (ret->p1 == null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1555)
										if ((tmp28)){
											HX_STACK_LINE(1555)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = obj->next = obj;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1555)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->prev = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1555)
											ret->p1 = tmp30;
										}
										else{
											HX_STACK_LINE(1557)
											obj->prev = ret->p1;
											HX_STACK_LINE(1558)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = ret->p1->next;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1558)
											obj->next = tmp29;
											HX_STACK_LINE(1559)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p1->next;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1559)
											tmp30->prev = obj;
											HX_STACK_LINE(1560)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1562)
										tmp27 = obj;
									}
									HX_STACK_LINE(1553)
									ret->p1 = tmp27;
								}
							}
						}
						HX_STACK_LINE(1566)
						::zpp_nape::geom::ZPP_GeomVert tmp19 = ret->p1->next;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1566)
						ret->p1 = tmp19;
						HX_STACK_LINE(1567)
						ret->key1 = val;
						HX_STACK_LINE(1568)
						bool tmp20 = (val == (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1568)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1568)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1568)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1568)
						if ((tmp22)){
							HX_STACK_LINE(1568)
							tmp23 = (val == (int)4);
						}
						else{
							HX_STACK_LINE(1568)
							tmp23 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1568)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1568)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1568)
						if ((tmp25)){
							HX_STACK_LINE(1568)
							tmp26 = (val == (int)16);
						}
						else{
							HX_STACK_LINE(1568)
							tmp26 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1568)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1568)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1568)
						if ((tmp28)){
							HX_STACK_LINE(1568)
							tmp29 = (val == (int)64);
						}
						else{
							HX_STACK_LINE(1568)
							tmp29 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1568)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1568)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1568)
						if ((tmp31)){
							HX_STACK_LINE(1568)
							tmp32 = (val == (int)3);
						}
						else{
							HX_STACK_LINE(1568)
							tmp32 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1568)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1568)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1568)
						if ((tmp34)){
							HX_STACK_LINE(1568)
							tmp35 = (val == (int)12);
						}
						else{
							HX_STACK_LINE(1568)
							tmp35 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1568)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1568)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1568)
						if ((tmp37)){
							HX_STACK_LINE(1568)
							tmp38 = (val == (int)48);
						}
						else{
							HX_STACK_LINE(1568)
							tmp38 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1568)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1568)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1568)
						if ((tmp40)){
							HX_STACK_LINE(1568)
							tmp41 = (val == (int)192);
						}
						else{
							HX_STACK_LINE(1568)
							tmp41 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1568)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1568)
						bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1568)
						if ((tmp43)){
							HX_STACK_LINE(1568)
							tmp44 = (val == (int)129);
						}
						else{
							HX_STACK_LINE(1568)
							tmp44 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1568)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1568)
						bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1568)
						if ((tmp46)){
							HX_STACK_LINE(1568)
							tmp47 = (val == (int)6);
						}
						else{
							HX_STACK_LINE(1568)
							tmp47 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1568)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1568)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1568)
						if ((tmp49)){
							HX_STACK_LINE(1568)
							tmp50 = (val == (int)24);
						}
						else{
							HX_STACK_LINE(1568)
							tmp50 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1568)
						bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1568)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1568)
						if ((tmp52)){
							HX_STACK_LINE(1568)
							tmp53 = (val == (int)96);
						}
						else{
							HX_STACK_LINE(1568)
							tmp53 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1568)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1568)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1568)
						if ((tmp55)){
							HX_STACK_LINE(1568)
							tmp56 = (val == (int)5);
						}
						else{
							HX_STACK_LINE(1568)
							tmp56 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1568)
						bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1568)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1568)
						if ((tmp58)){
							HX_STACK_LINE(1568)
							tmp59 = (val == (int)20);
						}
						else{
							HX_STACK_LINE(1568)
							tmp59 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1568)
						bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1568)
						bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1568)
						if ((tmp61)){
							HX_STACK_LINE(1568)
							tmp62 = (val == (int)80);
						}
						else{
							HX_STACK_LINE(1568)
							tmp62 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1568)
						bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1568)
						bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1568)
						if ((tmp64)){
							HX_STACK_LINE(1568)
							tmp65 = (val == (int)65);
						}
						else{
							HX_STACK_LINE(1568)
							tmp65 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1568)
						bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(1568)
						bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(1568)
						if ((tmp67)){
							HX_STACK_LINE(1568)
							tmp68 = (val == (int)17);
						}
						else{
							HX_STACK_LINE(1568)
							tmp68 = true;
						}
						HX_STACK_LINE(1568)
						bool tmp69 = !(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(1568)
						bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(1568)
						if ((tmp69)){
							HX_STACK_LINE(1568)
							tmp70 = (val == (int)68);
						}
						else{
							HX_STACK_LINE(1568)
							tmp70 = true;
						}
						HX_STACK_LINE(1568)
						if ((tmp70)){
							HX_STACK_LINE(1569)
							val = (int)0;
							HX_STACK_LINE(1570)
							ret->key1 = (int)0;
							HX_STACK_LINE(1571)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1574)
					bool tmp19 = (val == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1574)
					if ((tmp19)){
						HX_STACK_LINE(1574)
						ret = null();
					}
					else{
						HX_STACK_LINE(1576)
						ret->pr = ret->p1;
						HX_STACK_LINE(1577)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1578)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1582)
					int val = (int)224;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1583)
					{
						HX_STACK_LINE(1584)
						ret->okey1 = val;
						HX_STACK_LINE(1585)
						{
							HX_STACK_LINE(1585)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1585)
							while((true)){
								HX_STACK_LINE(1585)
								bool tmp19 = (_g < (int)8);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1585)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1585)
								if ((tmp20)){
									HX_STACK_LINE(1585)
									break;
								}
								HX_STACK_LINE(1585)
								int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1585)
								int i = tmp21;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1586)
								int tmp22 = val;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1586)
								int tmp23 = (int((int)1) << int(i));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1586)
								int tmp24 = (int(tmp22) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1586)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1586)
								if ((tmp25)){
									HX_STACK_LINE(1587)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1588)
									bool tmp26 = (i == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1588)
									if ((tmp26)){
										HX_STACK_LINE(1589)
										::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1589)
										{
											HX_STACK_LINE(1589)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1589)
											{
												HX_STACK_LINE(1589)
												::zpp_nape::geom::ZPP_GeomVert tmp28 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1589)
												bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1589)
												if ((tmp29)){
													HX_STACK_LINE(1589)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1589)
													ret1 = tmp30;
												}
												else{
													HX_STACK_LINE(1589)
													::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1589)
													ret1 = tmp30;
													HX_STACK_LINE(1589)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1589)
													ret1->next = null();
												}
												HX_STACK_LINE(1589)
												ret1->forced = false;
											}
											HX_STACK_LINE(1589)
											{
												HX_STACK_LINE(1589)
												ret1->x = x0;
												HX_STACK_LINE(1589)
												ret1->y = y0;
												HX_STACK_LINE(1589)
												{
												}
											}
											HX_STACK_LINE(1589)
											tmp27 = ret1;
										}
										HX_STACK_LINE(1589)
										p = tmp27;
										HX_STACK_LINE(1590)
										bool tmp28 = fstx;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1590)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1590)
										bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1590)
										if ((tmp29)){
											HX_STACK_LINE(1590)
											tmp30 = fsty;
										}
										else{
											HX_STACK_LINE(1590)
											tmp30 = true;
										}
										HX_STACK_LINE(1590)
										if ((tmp30)){
											HX_STACK_LINE(1590)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1592)
										bool tmp27 = (i == (int)2);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1592)
										if ((tmp27)){
											HX_STACK_LINE(1593)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1593)
											{
												HX_STACK_LINE(1593)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1593)
												{
													HX_STACK_LINE(1593)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1593)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1593)
													if ((tmp30)){
														HX_STACK_LINE(1593)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1593)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1593)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1593)
														ret1 = tmp31;
														HX_STACK_LINE(1593)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1593)
														ret1->next = null();
													}
													HX_STACK_LINE(1593)
													ret1->forced = false;
												}
												HX_STACK_LINE(1593)
												{
													HX_STACK_LINE(1593)
													ret1->x = x1;
													HX_STACK_LINE(1593)
													ret1->y = y0;
													HX_STACK_LINE(1593)
													{
													}
												}
												HX_STACK_LINE(1593)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1593)
											p = tmp28;
											HX_STACK_LINE(1594)
											bool tmp29 = sndx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1594)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1594)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1594)
											if ((tmp30)){
												HX_STACK_LINE(1594)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1594)
												tmp31 = true;
											}
											HX_STACK_LINE(1594)
											if ((tmp31)){
												HX_STACK_LINE(1594)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1596)
											bool tmp28 = (i == (int)4);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1596)
											if ((tmp28)){
												HX_STACK_LINE(1597)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1597)
												{
													HX_STACK_LINE(1597)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1597)
													{
														HX_STACK_LINE(1597)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1597)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1597)
														if ((tmp31)){
															HX_STACK_LINE(1597)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1597)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1597)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1597)
															ret1 = tmp32;
															HX_STACK_LINE(1597)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1597)
															ret1->next = null();
														}
														HX_STACK_LINE(1597)
														ret1->forced = false;
													}
													HX_STACK_LINE(1597)
													{
														HX_STACK_LINE(1597)
														ret1->x = x1;
														HX_STACK_LINE(1597)
														ret1->y = y1;
														HX_STACK_LINE(1597)
														{
														}
													}
													HX_STACK_LINE(1597)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1597)
												p = tmp29;
												HX_STACK_LINE(1598)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1598)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1598)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1598)
												if ((tmp31)){
													HX_STACK_LINE(1598)
													tmp32 = sndy;
												}
												else{
													HX_STACK_LINE(1598)
													tmp32 = true;
												}
												HX_STACK_LINE(1598)
												if ((tmp32)){
													HX_STACK_LINE(1598)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1600)
												bool tmp29 = (i == (int)6);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1600)
												if ((tmp29)){
													HX_STACK_LINE(1601)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1601)
													{
														HX_STACK_LINE(1601)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1601)
														{
															HX_STACK_LINE(1601)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1601)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1601)
															if ((tmp32)){
																HX_STACK_LINE(1601)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1601)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1601)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1601)
																ret1 = tmp33;
																HX_STACK_LINE(1601)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1601)
																ret1->next = null();
															}
															HX_STACK_LINE(1601)
															ret1->forced = false;
														}
														HX_STACK_LINE(1601)
														{
															HX_STACK_LINE(1601)
															ret1->x = x0;
															HX_STACK_LINE(1601)
															ret1->y = y1;
															HX_STACK_LINE(1601)
															{
															}
														}
														HX_STACK_LINE(1601)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1601)
													p = tmp30;
													HX_STACK_LINE(1602)
													bool tmp31 = fstx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1602)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1602)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1602)
													if ((tmp32)){
														HX_STACK_LINE(1602)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1602)
														tmp33 = true;
													}
													HX_STACK_LINE(1602)
													if ((tmp33)){
														HX_STACK_LINE(1602)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1604)
													bool tmp30 = (i == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1604)
													if ((tmp30)){
														HX_STACK_LINE(1605)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1605)
														{
															HX_STACK_LINE(1605)
															Array< ::Dynamic > tmp32 = ints->list;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1605)
															int tmp33 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1605)
															int tmp34 = ints->width;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1605)
															int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1605)
															int tmp36 = xn;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1605)
															int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1605)
															tmp31 = tmp32->__get(tmp37).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
														}
														HX_STACK_LINE(1605)
														p = tmp31;
														HX_STACK_LINE(1606)
														bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1606)
														if ((tmp32)){
															HX_STACK_LINE(1607)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1607)
															{
																HX_STACK_LINE(1607)
																Float tmp34 = x0;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1607)
																Float tmp35 = x1;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1607)
																Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1607)
																Float tmp37 = v0;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1607)
																Float tmp38 = v1;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1607)
																Dynamic tmp39 = iso;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1607)
																int tmp40 = quality;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1607)
																Float tmp41 = this->xlerp(tmp34,tmp35,tmp36,tmp37,tmp38,tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1607)
																Float x = tmp41;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1607)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1607)
																{
																	HX_STACK_LINE(1607)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1607)
																	bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1607)
																	if ((tmp43)){
																		HX_STACK_LINE(1607)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1607)
																		ret1 = tmp44;
																	}
																	else{
																		HX_STACK_LINE(1607)
																		::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1607)
																		ret1 = tmp44;
																		HX_STACK_LINE(1607)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1607)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1607)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1607)
																{
																	HX_STACK_LINE(1607)
																	ret1->x = x;
																	HX_STACK_LINE(1607)
																	ret1->y = y0;
																	HX_STACK_LINE(1607)
																	{
																	}
																}
																HX_STACK_LINE(1607)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1607)
															p = tmp33;
															HX_STACK_LINE(1608)
															{
																HX_STACK_LINE(1608)
																Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1608)
																int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1608)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1608)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1608)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1608)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1608)
																::zpp_nape::geom::ZPP_GeomVert tmp40 = p;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1608)
																tmp34[tmp39] = tmp40;
															}
														}
														else{
															HX_STACK_LINE(1610)
															::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1610)
															{
																HX_STACK_LINE(1610)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1610)
																{
																	HX_STACK_LINE(1610)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1610)
																	bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1610)
																	if ((tmp35)){
																		HX_STACK_LINE(1610)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1610)
																		ret1 = tmp36;
																	}
																	else{
																		HX_STACK_LINE(1610)
																		::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1610)
																		ret1 = tmp36;
																		HX_STACK_LINE(1610)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1610)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1610)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1610)
																{
																	HX_STACK_LINE(1610)
																	ret1->x = p->x;
																	HX_STACK_LINE(1610)
																	ret1->y = p->y;
																	HX_STACK_LINE(1610)
																	{
																	}
																}
																HX_STACK_LINE(1610)
																tmp33 = ret1;
															}
															HX_STACK_LINE(1610)
															p = tmp33;
														}
														HX_STACK_LINE(1611)
														bool tmp33 = fsty;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1611)
														if ((tmp33)){
															HX_STACK_LINE(1611)
															p->forced = true;
														}
														HX_STACK_LINE(1612)
														bool tmp34 = (p->x == x0);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1612)
														bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1612)
														bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1612)
														if ((tmp35)){
															HX_STACK_LINE(1612)
															tmp36 = (p->x == x1);
														}
														else{
															HX_STACK_LINE(1612)
															tmp36 = true;
														}
														HX_STACK_LINE(1612)
														if ((tmp36)){
															HX_STACK_LINE(1613)
															bool tmp37 = (p->x == x0);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1613)
															bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1613)
															bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(1613)
															if ((tmp38)){
																HX_STACK_LINE(1613)
																int tmp40 = (int(val) & int((int)1));		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1613)
																int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1613)
																int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1613)
																tmp39 = (tmp42 != (int)0);
															}
															else{
																HX_STACK_LINE(1613)
																tmp39 = false;
															}
															HX_STACK_LINE(1613)
															bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1613)
															bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(1613)
															if ((tmp40)){
																HX_STACK_LINE(1613)
																bool tmp42 = (p->x == x1);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1613)
																bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1613)
																bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1613)
																if ((tmp44)){
																	HX_STACK_LINE(1613)
																	int tmp45 = (int(val) & int((int)4));		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1613)
																	int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(1613)
																	int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(1613)
																	tmp41 = (tmp47 != (int)0);
																}
																else{
																	HX_STACK_LINE(1613)
																	tmp41 = false;
																}
															}
															else{
																HX_STACK_LINE(1613)
																tmp41 = true;
															}
															HX_STACK_LINE(1613)
															if ((tmp41)){
																HX_STACK_LINE(1613)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1616)
														bool tmp31 = (i == (int)5);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1616)
														if ((tmp31)){
															HX_STACK_LINE(1617)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1617)
															{
																HX_STACK_LINE(1617)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1617)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1617)
																int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1617)
																int tmp36 = ints->width;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1617)
																int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1617)
																int tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1617)
																int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1617)
																tmp32 = tmp33->__get(tmp39).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1617)
															p = tmp32;
															HX_STACK_LINE(1618)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1618)
															if ((tmp33)){
																HX_STACK_LINE(1619)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1619)
																{
																	HX_STACK_LINE(1619)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1619)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1619)
																	Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1619)
																	Float tmp38 = v3;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1619)
																	Float tmp39 = v2;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1619)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1619)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1619)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1619)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1619)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1619)
																	{
																		HX_STACK_LINE(1619)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1619)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1619)
																		if ((tmp44)){
																			HX_STACK_LINE(1619)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1619)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1619)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1619)
																			ret1 = tmp45;
																			HX_STACK_LINE(1619)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1619)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1619)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1619)
																	{
																		HX_STACK_LINE(1619)
																		ret1->x = x;
																		HX_STACK_LINE(1619)
																		ret1->y = y1;
																		HX_STACK_LINE(1619)
																		{
																		}
																	}
																	HX_STACK_LINE(1619)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1619)
																p = tmp34;
																HX_STACK_LINE(1620)
																{
																	HX_STACK_LINE(1620)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1620)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1620)
																	int tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1620)
																	int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1620)
																	int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1620)
																	int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1620)
																	int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1620)
																	::zpp_nape::geom::ZPP_GeomVert tmp42 = p;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1620)
																	tmp35[tmp41] = tmp42;
																}
															}
															else{
																HX_STACK_LINE(1622)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1622)
																{
																	HX_STACK_LINE(1622)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1622)
																	{
																		HX_STACK_LINE(1622)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1622)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1622)
																		if ((tmp36)){
																			HX_STACK_LINE(1622)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1622)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1622)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1622)
																			ret1 = tmp37;
																			HX_STACK_LINE(1622)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1622)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1622)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1622)
																	{
																		HX_STACK_LINE(1622)
																		ret1->x = p->x;
																		HX_STACK_LINE(1622)
																		ret1->y = p->y;
																		HX_STACK_LINE(1622)
																		{
																		}
																	}
																	HX_STACK_LINE(1622)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1622)
																p = tmp34;
															}
															HX_STACK_LINE(1623)
															bool tmp34 = sndy;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1623)
															if ((tmp34)){
																HX_STACK_LINE(1623)
																p->forced = true;
															}
															HX_STACK_LINE(1624)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1624)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1624)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1624)
															if ((tmp36)){
																HX_STACK_LINE(1624)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1624)
																tmp37 = true;
															}
															HX_STACK_LINE(1624)
															if ((tmp37)){
																HX_STACK_LINE(1625)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1625)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1625)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1625)
																if ((tmp39)){
																	HX_STACK_LINE(1625)
																	int tmp41 = (int(val) & int((int)64));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1625)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1625)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1625)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1625)
																	tmp40 = false;
																}
																HX_STACK_LINE(1625)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1625)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1625)
																if ((tmp41)){
																	HX_STACK_LINE(1625)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1625)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1625)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1625)
																	if ((tmp45)){
																		HX_STACK_LINE(1625)
																		int tmp46 = (int(val) & int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1625)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1625)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1625)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1625)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1625)
																	tmp42 = true;
																}
																HX_STACK_LINE(1625)
																if ((tmp42)){
																	HX_STACK_LINE(1625)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1628)
															bool tmp32 = (i == (int)3);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1628)
															if ((tmp32)){
																HX_STACK_LINE(1629)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1629)
																{
																	HX_STACK_LINE(1629)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1629)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1629)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1629)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1629)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1629)
																	int tmp39 = (xn + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1629)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1629)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1629)
																p = tmp33;
																HX_STACK_LINE(1630)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1630)
																if ((tmp34)){
																	HX_STACK_LINE(1631)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1631)
																	{
																		HX_STACK_LINE(1631)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1631)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1631)
																		Float tmp38 = x1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1631)
																		Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1631)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1631)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1631)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1631)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1631)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1631)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1631)
																		{
																			HX_STACK_LINE(1631)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1631)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1631)
																			if ((tmp45)){
																				HX_STACK_LINE(1631)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1631)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1631)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1631)
																				ret1 = tmp46;
																				HX_STACK_LINE(1631)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1631)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1631)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1631)
																		{
																			HX_STACK_LINE(1631)
																			ret1->x = x1;
																			HX_STACK_LINE(1631)
																			ret1->y = y;
																			HX_STACK_LINE(1631)
																			{
																			}
																		}
																		HX_STACK_LINE(1631)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1631)
																	p = tmp35;
																	HX_STACK_LINE(1632)
																	{
																		HX_STACK_LINE(1632)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1632)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1632)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1632)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1632)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1632)
																		int tmp41 = (xn + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1632)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1632)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1632)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1634)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1634)
																	{
																		HX_STACK_LINE(1634)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1634)
																		{
																			HX_STACK_LINE(1634)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1634)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1634)
																			if ((tmp37)){
																				HX_STACK_LINE(1634)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1634)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1634)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1634)
																				ret1 = tmp38;
																				HX_STACK_LINE(1634)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1634)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1634)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1634)
																		{
																			HX_STACK_LINE(1634)
																			ret1->x = p->x;
																			HX_STACK_LINE(1634)
																			ret1->y = p->y;
																			HX_STACK_LINE(1634)
																			{
																			}
																		}
																		HX_STACK_LINE(1634)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1634)
																	p = tmp35;
																}
																HX_STACK_LINE(1635)
																bool tmp35 = sndx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1635)
																if ((tmp35)){
																	HX_STACK_LINE(1635)
																	p->forced = true;
																}
																HX_STACK_LINE(1636)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1636)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1636)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1636)
																if ((tmp37)){
																	HX_STACK_LINE(1636)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1636)
																	tmp38 = true;
																}
																HX_STACK_LINE(1636)
																if ((tmp38)){
																	HX_STACK_LINE(1637)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1637)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1637)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1637)
																	if ((tmp40)){
																		HX_STACK_LINE(1637)
																		int tmp42 = (int(val) & int((int)4));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1637)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1637)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1637)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1637)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1637)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1637)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1637)
																	if ((tmp42)){
																		HX_STACK_LINE(1637)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1637)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1637)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1637)
																		if ((tmp46)){
																			HX_STACK_LINE(1637)
																			int tmp47 = (int(val) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1637)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1637)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1637)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1637)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1637)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1637)
																	if ((tmp43)){
																		HX_STACK_LINE(1637)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																HX_STACK_LINE(1641)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1641)
																{
																	HX_STACK_LINE(1641)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1641)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1641)
																	int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1641)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1641)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1641)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1641)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1641)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1641)
																p = tmp33;
																HX_STACK_LINE(1642)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1642)
																if ((tmp34)){
																	HX_STACK_LINE(1643)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1643)
																	{
																		HX_STACK_LINE(1643)
																		Float tmp36 = y0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1643)
																		Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1643)
																		Float tmp38 = x0;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1643)
																		Float tmp39 = v0;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1643)
																		Float tmp40 = v3;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1643)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1643)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1643)
																		Float tmp43 = this->ylerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1643)
																		Float y = tmp43;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1643)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1643)
																		{
																			HX_STACK_LINE(1643)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1643)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1643)
																			if ((tmp45)){
																				HX_STACK_LINE(1643)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1643)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1643)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1643)
																				ret1 = tmp46;
																				HX_STACK_LINE(1643)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1643)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1643)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1643)
																		{
																			HX_STACK_LINE(1643)
																			ret1->x = x0;
																			HX_STACK_LINE(1643)
																			ret1->y = y;
																			HX_STACK_LINE(1643)
																			{
																			}
																		}
																		HX_STACK_LINE(1643)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1643)
																	p = tmp35;
																	HX_STACK_LINE(1644)
																	{
																		HX_STACK_LINE(1644)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1644)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1644)
																		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1644)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1644)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1644)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1644)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1644)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1644)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1646)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1646)
																	{
																		HX_STACK_LINE(1646)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1646)
																		{
																			HX_STACK_LINE(1646)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1646)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1646)
																			if ((tmp37)){
																				HX_STACK_LINE(1646)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1646)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1646)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1646)
																				ret1 = tmp38;
																				HX_STACK_LINE(1646)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1646)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1646)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1646)
																		{
																			HX_STACK_LINE(1646)
																			ret1->x = p->x;
																			HX_STACK_LINE(1646)
																			ret1->y = p->y;
																			HX_STACK_LINE(1646)
																			{
																			}
																		}
																		HX_STACK_LINE(1646)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1646)
																	p = tmp35;
																}
																HX_STACK_LINE(1647)
																bool tmp35 = fstx;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1647)
																if ((tmp35)){
																	HX_STACK_LINE(1647)
																	p->forced = true;
																}
																HX_STACK_LINE(1648)
																bool tmp36 = (p->y == y0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1648)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1648)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1648)
																if ((tmp37)){
																	HX_STACK_LINE(1648)
																	tmp38 = (p->y == y1);
																}
																else{
																	HX_STACK_LINE(1648)
																	tmp38 = true;
																}
																HX_STACK_LINE(1648)
																if ((tmp38)){
																	HX_STACK_LINE(1649)
																	bool tmp39 = (p->y == y0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1649)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1649)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1649)
																	if ((tmp40)){
																		HX_STACK_LINE(1649)
																		int tmp42 = (int(val) & int((int)1));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1649)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1649)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1649)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1649)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1649)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1649)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1649)
																	if ((tmp42)){
																		HX_STACK_LINE(1649)
																		bool tmp44 = (p->y == y1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1649)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1649)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1649)
																		if ((tmp46)){
																			HX_STACK_LINE(1649)
																			int tmp47 = (int(val) & int((int)64));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1649)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1649)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1649)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1649)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1649)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1649)
																	if ((tmp43)){
																		HX_STACK_LINE(1649)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(1652)
									::zpp_nape::geom::ZPP_GeomVert tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1652)
									{
										HX_STACK_LINE(1653)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1654)
										bool tmp28 = (ret->p1 == null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1654)
										if ((tmp28)){
											HX_STACK_LINE(1654)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = obj->next = obj;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1654)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->prev = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1654)
											ret->p1 = tmp30;
										}
										else{
											HX_STACK_LINE(1656)
											obj->prev = ret->p1;
											HX_STACK_LINE(1657)
											::zpp_nape::geom::ZPP_GeomVert tmp29 = ret->p1->next;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1657)
											obj->next = tmp29;
											HX_STACK_LINE(1658)
											::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p1->next;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1658)
											tmp30->prev = obj;
											HX_STACK_LINE(1659)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1661)
										tmp27 = obj;
									}
									HX_STACK_LINE(1652)
									ret->p1 = tmp27;
								}
							}
						}
						HX_STACK_LINE(1665)
						::zpp_nape::geom::ZPP_GeomVert tmp19 = ret->p1->next;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1665)
						ret->p1 = tmp19;
						HX_STACK_LINE(1666)
						ret->key1 = val;
						HX_STACK_LINE(1667)
						bool tmp20 = (val == (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1667)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1667)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1667)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1667)
						if ((tmp22)){
							HX_STACK_LINE(1667)
							tmp23 = (val == (int)4);
						}
						else{
							HX_STACK_LINE(1667)
							tmp23 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1667)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1667)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1667)
						if ((tmp25)){
							HX_STACK_LINE(1667)
							tmp26 = (val == (int)16);
						}
						else{
							HX_STACK_LINE(1667)
							tmp26 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1667)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1667)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1667)
						if ((tmp28)){
							HX_STACK_LINE(1667)
							tmp29 = (val == (int)64);
						}
						else{
							HX_STACK_LINE(1667)
							tmp29 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1667)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1667)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1667)
						if ((tmp31)){
							HX_STACK_LINE(1667)
							tmp32 = (val == (int)3);
						}
						else{
							HX_STACK_LINE(1667)
							tmp32 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1667)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1667)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1667)
						if ((tmp34)){
							HX_STACK_LINE(1667)
							tmp35 = (val == (int)12);
						}
						else{
							HX_STACK_LINE(1667)
							tmp35 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1667)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1667)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1667)
						if ((tmp37)){
							HX_STACK_LINE(1667)
							tmp38 = (val == (int)48);
						}
						else{
							HX_STACK_LINE(1667)
							tmp38 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1667)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1667)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1667)
						if ((tmp40)){
							HX_STACK_LINE(1667)
							tmp41 = (val == (int)192);
						}
						else{
							HX_STACK_LINE(1667)
							tmp41 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1667)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1667)
						bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1667)
						if ((tmp43)){
							HX_STACK_LINE(1667)
							tmp44 = (val == (int)129);
						}
						else{
							HX_STACK_LINE(1667)
							tmp44 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1667)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1667)
						bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1667)
						if ((tmp46)){
							HX_STACK_LINE(1667)
							tmp47 = (val == (int)6);
						}
						else{
							HX_STACK_LINE(1667)
							tmp47 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1667)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1667)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1667)
						if ((tmp49)){
							HX_STACK_LINE(1667)
							tmp50 = (val == (int)24);
						}
						else{
							HX_STACK_LINE(1667)
							tmp50 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1667)
						bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1667)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1667)
						if ((tmp52)){
							HX_STACK_LINE(1667)
							tmp53 = (val == (int)96);
						}
						else{
							HX_STACK_LINE(1667)
							tmp53 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1667)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1667)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1667)
						if ((tmp55)){
							HX_STACK_LINE(1667)
							tmp56 = (val == (int)5);
						}
						else{
							HX_STACK_LINE(1667)
							tmp56 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1667)
						bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1667)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1667)
						if ((tmp58)){
							HX_STACK_LINE(1667)
							tmp59 = (val == (int)20);
						}
						else{
							HX_STACK_LINE(1667)
							tmp59 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1667)
						bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1667)
						bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1667)
						if ((tmp61)){
							HX_STACK_LINE(1667)
							tmp62 = (val == (int)80);
						}
						else{
							HX_STACK_LINE(1667)
							tmp62 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1667)
						bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1667)
						bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1667)
						if ((tmp64)){
							HX_STACK_LINE(1667)
							tmp65 = (val == (int)65);
						}
						else{
							HX_STACK_LINE(1667)
							tmp65 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1667)
						bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(1667)
						bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(1667)
						if ((tmp67)){
							HX_STACK_LINE(1667)
							tmp68 = (val == (int)17);
						}
						else{
							HX_STACK_LINE(1667)
							tmp68 = true;
						}
						HX_STACK_LINE(1667)
						bool tmp69 = !(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(1667)
						bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(1667)
						if ((tmp69)){
							HX_STACK_LINE(1667)
							tmp70 = (val == (int)68);
						}
						else{
							HX_STACK_LINE(1667)
							tmp70 = true;
						}
						HX_STACK_LINE(1667)
						if ((tmp70)){
							HX_STACK_LINE(1668)
							val = (int)0;
							HX_STACK_LINE(1669)
							ret->key1 = (int)0;
							HX_STACK_LINE(1670)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1673)
					bool tmp19 = (val != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1673)
					if ((tmp19)){
						HX_STACK_LINE(1674)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1675)
						{
							HX_STACK_LINE(1676)
							ret->okey2 = val1;
							HX_STACK_LINE(1677)
							{
								HX_STACK_LINE(1677)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1677)
								while((true)){
									HX_STACK_LINE(1677)
									bool tmp20 = (_g < (int)8);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1677)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1677)
									if ((tmp21)){
										HX_STACK_LINE(1677)
										break;
									}
									HX_STACK_LINE(1677)
									int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1677)
									int i = tmp22;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1678)
									int tmp23 = val1;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1678)
									int tmp24 = (int((int)1) << int(i));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1678)
									int tmp25 = (int(tmp23) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1678)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1678)
									if ((tmp26)){
										HX_STACK_LINE(1679)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1680)
										bool tmp27 = (i == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1680)
										if ((tmp27)){
											HX_STACK_LINE(1681)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1681)
											{
												HX_STACK_LINE(1681)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1681)
												{
													HX_STACK_LINE(1681)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1681)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1681)
													if ((tmp30)){
														HX_STACK_LINE(1681)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1681)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1681)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1681)
														ret1 = tmp31;
														HX_STACK_LINE(1681)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1681)
														ret1->next = null();
													}
													HX_STACK_LINE(1681)
													ret1->forced = false;
												}
												HX_STACK_LINE(1681)
												{
													HX_STACK_LINE(1681)
													ret1->x = x0;
													HX_STACK_LINE(1681)
													ret1->y = y0;
													HX_STACK_LINE(1681)
													{
													}
												}
												HX_STACK_LINE(1681)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1681)
											p = tmp28;
											HX_STACK_LINE(1682)
											bool tmp29 = fstx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1682)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1682)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1682)
											if ((tmp30)){
												HX_STACK_LINE(1682)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1682)
												tmp31 = true;
											}
											HX_STACK_LINE(1682)
											if ((tmp31)){
												HX_STACK_LINE(1682)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1684)
											bool tmp28 = (i == (int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1684)
											if ((tmp28)){
												HX_STACK_LINE(1685)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1685)
												{
													HX_STACK_LINE(1685)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1685)
													{
														HX_STACK_LINE(1685)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1685)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1685)
														if ((tmp31)){
															HX_STACK_LINE(1685)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1685)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1685)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1685)
															ret1 = tmp32;
															HX_STACK_LINE(1685)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1685)
															ret1->next = null();
														}
														HX_STACK_LINE(1685)
														ret1->forced = false;
													}
													HX_STACK_LINE(1685)
													{
														HX_STACK_LINE(1685)
														ret1->x = x1;
														HX_STACK_LINE(1685)
														ret1->y = y0;
														HX_STACK_LINE(1685)
														{
														}
													}
													HX_STACK_LINE(1685)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1685)
												p = tmp29;
												HX_STACK_LINE(1686)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1686)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1686)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1686)
												if ((tmp31)){
													HX_STACK_LINE(1686)
													tmp32 = fsty;
												}
												else{
													HX_STACK_LINE(1686)
													tmp32 = true;
												}
												HX_STACK_LINE(1686)
												if ((tmp32)){
													HX_STACK_LINE(1686)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1688)
												bool tmp29 = (i == (int)4);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1688)
												if ((tmp29)){
													HX_STACK_LINE(1689)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1689)
													{
														HX_STACK_LINE(1689)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1689)
														{
															HX_STACK_LINE(1689)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1689)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1689)
															if ((tmp32)){
																HX_STACK_LINE(1689)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1689)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1689)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1689)
																ret1 = tmp33;
																HX_STACK_LINE(1689)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1689)
																ret1->next = null();
															}
															HX_STACK_LINE(1689)
															ret1->forced = false;
														}
														HX_STACK_LINE(1689)
														{
															HX_STACK_LINE(1689)
															ret1->x = x1;
															HX_STACK_LINE(1689)
															ret1->y = y1;
															HX_STACK_LINE(1689)
															{
															}
														}
														HX_STACK_LINE(1689)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1689)
													p = tmp30;
													HX_STACK_LINE(1690)
													bool tmp31 = sndx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1690)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1690)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1690)
													if ((tmp32)){
														HX_STACK_LINE(1690)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1690)
														tmp33 = true;
													}
													HX_STACK_LINE(1690)
													if ((tmp33)){
														HX_STACK_LINE(1690)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1692)
													bool tmp30 = (i == (int)6);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1692)
													if ((tmp30)){
														HX_STACK_LINE(1693)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1693)
														{
															HX_STACK_LINE(1693)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1693)
															{
																HX_STACK_LINE(1693)
																::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1693)
																bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1693)
																if ((tmp33)){
																	HX_STACK_LINE(1693)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1693)
																	ret1 = tmp34;
																}
																else{
																	HX_STACK_LINE(1693)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1693)
																	ret1 = tmp34;
																	HX_STACK_LINE(1693)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1693)
																	ret1->next = null();
																}
																HX_STACK_LINE(1693)
																ret1->forced = false;
															}
															HX_STACK_LINE(1693)
															{
																HX_STACK_LINE(1693)
																ret1->x = x0;
																HX_STACK_LINE(1693)
																ret1->y = y1;
																HX_STACK_LINE(1693)
																{
																}
															}
															HX_STACK_LINE(1693)
															tmp31 = ret1;
														}
														HX_STACK_LINE(1693)
														p = tmp31;
														HX_STACK_LINE(1694)
														bool tmp32 = fstx;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1694)
														bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1694)
														bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1694)
														if ((tmp33)){
															HX_STACK_LINE(1694)
															tmp34 = sndy;
														}
														else{
															HX_STACK_LINE(1694)
															tmp34 = true;
														}
														HX_STACK_LINE(1694)
														if ((tmp34)){
															HX_STACK_LINE(1694)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1696)
														bool tmp31 = (i == (int)1);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1696)
														if ((tmp31)){
															HX_STACK_LINE(1697)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1697)
															{
																HX_STACK_LINE(1697)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1697)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1697)
																int tmp35 = ints->width;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1697)
																int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1697)
																int tmp37 = xn;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1697)
																int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1697)
																tmp32 = tmp33->__get(tmp38).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1697)
															p = tmp32;
															HX_STACK_LINE(1698)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1698)
															if ((tmp33)){
																HX_STACK_LINE(1699)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1699)
																{
																	HX_STACK_LINE(1699)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1699)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1699)
																	Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1699)
																	Float tmp38 = v0;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1699)
																	Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1699)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1699)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1699)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1699)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1699)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1699)
																	{
																		HX_STACK_LINE(1699)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1699)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1699)
																		if ((tmp44)){
																			HX_STACK_LINE(1699)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1699)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1699)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1699)
																			ret1 = tmp45;
																			HX_STACK_LINE(1699)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1699)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1699)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1699)
																	{
																		HX_STACK_LINE(1699)
																		ret1->x = x;
																		HX_STACK_LINE(1699)
																		ret1->y = y0;
																		HX_STACK_LINE(1699)
																		{
																		}
																	}
																	HX_STACK_LINE(1699)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1699)
																p = tmp34;
																HX_STACK_LINE(1700)
																{
																	HX_STACK_LINE(1700)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1700)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1700)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1700)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1700)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1700)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1700)
																	::zpp_nape::geom::ZPP_GeomVert tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1700)
																	tmp35[tmp40] = tmp41;
																}
															}
															else{
																HX_STACK_LINE(1702)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1702)
																{
																	HX_STACK_LINE(1702)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1702)
																	{
																		HX_STACK_LINE(1702)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1702)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1702)
																		if ((tmp36)){
																			HX_STACK_LINE(1702)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1702)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1702)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1702)
																			ret1 = tmp37;
																			HX_STACK_LINE(1702)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1702)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1702)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1702)
																	{
																		HX_STACK_LINE(1702)
																		ret1->x = p->x;
																		HX_STACK_LINE(1702)
																		ret1->y = p->y;
																		HX_STACK_LINE(1702)
																		{
																		}
																	}
																	HX_STACK_LINE(1702)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1702)
																p = tmp34;
															}
															HX_STACK_LINE(1703)
															bool tmp34 = fsty;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1703)
															if ((tmp34)){
																HX_STACK_LINE(1703)
																p->forced = true;
															}
															HX_STACK_LINE(1704)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1704)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1704)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1704)
															if ((tmp36)){
																HX_STACK_LINE(1704)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1704)
																tmp37 = true;
															}
															HX_STACK_LINE(1704)
															if ((tmp37)){
																HX_STACK_LINE(1705)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1705)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1705)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1705)
																if ((tmp39)){
																	HX_STACK_LINE(1705)
																	int tmp41 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1705)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1705)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1705)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1705)
																	tmp40 = false;
																}
																HX_STACK_LINE(1705)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1705)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1705)
																if ((tmp41)){
																	HX_STACK_LINE(1705)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1705)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1705)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1705)
																	if ((tmp45)){
																		HX_STACK_LINE(1705)
																		int tmp46 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1705)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1705)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1705)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1705)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1705)
																	tmp42 = true;
																}
																HX_STACK_LINE(1705)
																if ((tmp42)){
																	HX_STACK_LINE(1705)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1708)
															bool tmp32 = (i == (int)5);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1708)
															if ((tmp32)){
																HX_STACK_LINE(1709)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1709)
																{
																	HX_STACK_LINE(1709)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1709)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1709)
																	int tmp36 = (tmp35 + (int)2);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1709)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1709)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1709)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1709)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1709)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1709)
																p = tmp33;
																HX_STACK_LINE(1710)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1710)
																if ((tmp34)){
																	HX_STACK_LINE(1711)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1711)
																	{
																		HX_STACK_LINE(1711)
																		Float tmp36 = x0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1711)
																		Float tmp37 = x1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1711)
																		Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1711)
																		Float tmp39 = v3;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1711)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1711)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1711)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1711)
																		Float tmp43 = this->xlerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1711)
																		Float x = tmp43;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1711)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1711)
																		{
																			HX_STACK_LINE(1711)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1711)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1711)
																			if ((tmp45)){
																				HX_STACK_LINE(1711)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1711)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1711)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1711)
																				ret1 = tmp46;
																				HX_STACK_LINE(1711)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1711)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1711)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1711)
																		{
																			HX_STACK_LINE(1711)
																			ret1->x = x;
																			HX_STACK_LINE(1711)
																			ret1->y = y1;
																			HX_STACK_LINE(1711)
																			{
																			}
																		}
																		HX_STACK_LINE(1711)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1711)
																	p = tmp35;
																	HX_STACK_LINE(1712)
																	{
																		HX_STACK_LINE(1712)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1712)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1712)
																		int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1712)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1712)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1712)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1712)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1712)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1712)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1714)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1714)
																	{
																		HX_STACK_LINE(1714)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1714)
																		{
																			HX_STACK_LINE(1714)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1714)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1714)
																			if ((tmp37)){
																				HX_STACK_LINE(1714)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1714)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1714)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1714)
																				ret1 = tmp38;
																				HX_STACK_LINE(1714)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1714)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1714)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1714)
																		{
																			HX_STACK_LINE(1714)
																			ret1->x = p->x;
																			HX_STACK_LINE(1714)
																			ret1->y = p->y;
																			HX_STACK_LINE(1714)
																			{
																			}
																		}
																		HX_STACK_LINE(1714)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1714)
																	p = tmp35;
																}
																HX_STACK_LINE(1715)
																bool tmp35 = sndy;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1715)
																if ((tmp35)){
																	HX_STACK_LINE(1715)
																	p->forced = true;
																}
																HX_STACK_LINE(1716)
																bool tmp36 = (p->x == x0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1716)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1716)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1716)
																if ((tmp37)){
																	HX_STACK_LINE(1716)
																	tmp38 = (p->x == x1);
																}
																else{
																	HX_STACK_LINE(1716)
																	tmp38 = true;
																}
																HX_STACK_LINE(1716)
																if ((tmp38)){
																	HX_STACK_LINE(1717)
																	bool tmp39 = (p->x == x0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1717)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1717)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1717)
																	if ((tmp40)){
																		HX_STACK_LINE(1717)
																		int tmp42 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1717)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1717)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1717)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1717)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1717)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1717)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1717)
																	if ((tmp42)){
																		HX_STACK_LINE(1717)
																		bool tmp44 = (p->x == x1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1717)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1717)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1717)
																		if ((tmp46)){
																			HX_STACK_LINE(1717)
																			int tmp47 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1717)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1717)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1717)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1717)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1717)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1717)
																	if ((tmp43)){
																		HX_STACK_LINE(1717)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1720)
																bool tmp33 = (i == (int)3);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1720)
																if ((tmp33)){
																	HX_STACK_LINE(1721)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1721)
																	{
																		HX_STACK_LINE(1721)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1721)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1721)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1721)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1721)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1721)
																		int tmp40 = (xn + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1721)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1721)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1721)
																	p = tmp34;
																	HX_STACK_LINE(1722)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1722)
																	if ((tmp35)){
																		HX_STACK_LINE(1723)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1723)
																		{
																			HX_STACK_LINE(1723)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1723)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1723)
																			Float tmp39 = x1;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1723)
																			Float tmp40 = v1;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1723)
																			Float tmp41 = v2;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1723)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1723)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1723)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1723)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1723)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1723)
																			{
																				HX_STACK_LINE(1723)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1723)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1723)
																				if ((tmp46)){
																					HX_STACK_LINE(1723)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1723)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1723)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1723)
																					ret1 = tmp47;
																					HX_STACK_LINE(1723)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1723)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1723)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1723)
																			{
																				HX_STACK_LINE(1723)
																				ret1->x = x1;
																				HX_STACK_LINE(1723)
																				ret1->y = y;
																				HX_STACK_LINE(1723)
																				{
																				}
																			}
																			HX_STACK_LINE(1723)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1723)
																		p = tmp36;
																		HX_STACK_LINE(1724)
																		{
																			HX_STACK_LINE(1724)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1724)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1724)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1724)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1724)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1724)
																			int tmp42 = (xn + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1724)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1724)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1724)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1726)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1726)
																		{
																			HX_STACK_LINE(1726)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1726)
																			{
																				HX_STACK_LINE(1726)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1726)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1726)
																				if ((tmp38)){
																					HX_STACK_LINE(1726)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1726)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1726)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1726)
																					ret1 = tmp39;
																					HX_STACK_LINE(1726)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1726)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1726)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1726)
																			{
																				HX_STACK_LINE(1726)
																				ret1->x = p->x;
																				HX_STACK_LINE(1726)
																				ret1->y = p->y;
																				HX_STACK_LINE(1726)
																				{
																				}
																			}
																			HX_STACK_LINE(1726)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1726)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1727)
																	bool tmp36 = sndx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1727)
																	if ((tmp36)){
																		HX_STACK_LINE(1727)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1728)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1728)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1728)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1728)
																	if ((tmp38)){
																		HX_STACK_LINE(1728)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1728)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1728)
																	if ((tmp39)){
																		HX_STACK_LINE(1729)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1729)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1729)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1729)
																		if ((tmp41)){
																			HX_STACK_LINE(1729)
																			int tmp43 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1729)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1729)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1729)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1729)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1729)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1729)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1729)
																		if ((tmp43)){
																			HX_STACK_LINE(1729)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1729)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1729)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1729)
																			if ((tmp47)){
																				HX_STACK_LINE(1729)
																				int tmp48 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1729)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1729)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1729)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1729)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1729)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1729)
																		if ((tmp44)){
																			HX_STACK_LINE(1729)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1733)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1733)
																	{
																		HX_STACK_LINE(1733)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1733)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1733)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1733)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1733)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1733)
																		int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1733)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1733)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1733)
																	p = tmp34;
																	HX_STACK_LINE(1734)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1734)
																	if ((tmp35)){
																		HX_STACK_LINE(1735)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1735)
																		{
																			HX_STACK_LINE(1735)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1735)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1735)
																			Float tmp39 = x0;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1735)
																			Float tmp40 = v0;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1735)
																			Float tmp41 = v3;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1735)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1735)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1735)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1735)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1735)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1735)
																			{
																				HX_STACK_LINE(1735)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1735)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1735)
																				if ((tmp46)){
																					HX_STACK_LINE(1735)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1735)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1735)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1735)
																					ret1 = tmp47;
																					HX_STACK_LINE(1735)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1735)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1735)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1735)
																			{
																				HX_STACK_LINE(1735)
																				ret1->x = x0;
																				HX_STACK_LINE(1735)
																				ret1->y = y;
																				HX_STACK_LINE(1735)
																				{
																				}
																			}
																			HX_STACK_LINE(1735)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1735)
																		p = tmp36;
																		HX_STACK_LINE(1736)
																		{
																			HX_STACK_LINE(1736)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1736)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1736)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1736)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1736)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1736)
																			int tmp42 = xn;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1736)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1736)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1736)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1738)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1738)
																		{
																			HX_STACK_LINE(1738)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1738)
																			{
																				HX_STACK_LINE(1738)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1738)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1738)
																				if ((tmp38)){
																					HX_STACK_LINE(1738)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1738)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1738)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1738)
																					ret1 = tmp39;
																					HX_STACK_LINE(1738)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1738)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1738)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1738)
																			{
																				HX_STACK_LINE(1738)
																				ret1->x = p->x;
																				HX_STACK_LINE(1738)
																				ret1->y = p->y;
																				HX_STACK_LINE(1738)
																				{
																				}
																			}
																			HX_STACK_LINE(1738)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1738)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1739)
																	bool tmp36 = fstx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1739)
																	if ((tmp36)){
																		HX_STACK_LINE(1739)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1740)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1740)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1740)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1740)
																	if ((tmp38)){
																		HX_STACK_LINE(1740)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1740)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1740)
																	if ((tmp39)){
																		HX_STACK_LINE(1741)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1741)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1741)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1741)
																		if ((tmp41)){
																			HX_STACK_LINE(1741)
																			int tmp43 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1741)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1741)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1741)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1741)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1741)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1741)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1741)
																		if ((tmp43)){
																			HX_STACK_LINE(1741)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1741)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1741)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1741)
																			if ((tmp47)){
																				HX_STACK_LINE(1741)
																				int tmp48 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1741)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1741)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1741)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1741)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1741)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1741)
																		if ((tmp44)){
																			HX_STACK_LINE(1741)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1744)
										::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1744)
										{
											HX_STACK_LINE(1745)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1746)
											bool tmp29 = (ret->p2 == null());		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1746)
											if ((tmp29)){
												HX_STACK_LINE(1746)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->next = obj;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1746)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = obj->prev = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1746)
												ret->p2 = tmp31;
											}
											else{
												HX_STACK_LINE(1748)
												obj->prev = ret->p2;
												HX_STACK_LINE(1749)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p2->next;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1749)
												obj->next = tmp30;
												HX_STACK_LINE(1750)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = ret->p2->next;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1750)
												tmp31->prev = obj;
												HX_STACK_LINE(1751)
												ret->p2->next = obj;
											}
											HX_STACK_LINE(1753)
											tmp28 = obj;
										}
										HX_STACK_LINE(1744)
										ret->p2 = tmp28;
									}
								}
							}
							HX_STACK_LINE(1757)
							::zpp_nape::geom::ZPP_GeomVert tmp20 = ret->p2->next;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1757)
							ret->p2 = tmp20;
							HX_STACK_LINE(1758)
							ret->key2 = val1;
							HX_STACK_LINE(1759)
							bool tmp21 = (val1 == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1759)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1759)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1759)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1759)
							if ((tmp23)){
								HX_STACK_LINE(1759)
								tmp24 = (val1 == (int)4);
							}
							else{
								HX_STACK_LINE(1759)
								tmp24 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1759)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1759)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1759)
							if ((tmp26)){
								HX_STACK_LINE(1759)
								tmp27 = (val1 == (int)16);
							}
							else{
								HX_STACK_LINE(1759)
								tmp27 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1759)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1759)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1759)
							if ((tmp29)){
								HX_STACK_LINE(1759)
								tmp30 = (val1 == (int)64);
							}
							else{
								HX_STACK_LINE(1759)
								tmp30 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1759)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1759)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1759)
							if ((tmp32)){
								HX_STACK_LINE(1759)
								tmp33 = (val1 == (int)3);
							}
							else{
								HX_STACK_LINE(1759)
								tmp33 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1759)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1759)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1759)
							if ((tmp35)){
								HX_STACK_LINE(1759)
								tmp36 = (val1 == (int)12);
							}
							else{
								HX_STACK_LINE(1759)
								tmp36 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1759)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1759)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1759)
							if ((tmp38)){
								HX_STACK_LINE(1759)
								tmp39 = (val1 == (int)48);
							}
							else{
								HX_STACK_LINE(1759)
								tmp39 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1759)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1759)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1759)
							if ((tmp41)){
								HX_STACK_LINE(1759)
								tmp42 = (val1 == (int)192);
							}
							else{
								HX_STACK_LINE(1759)
								tmp42 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1759)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1759)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1759)
							if ((tmp44)){
								HX_STACK_LINE(1759)
								tmp45 = (val1 == (int)129);
							}
							else{
								HX_STACK_LINE(1759)
								tmp45 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1759)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1759)
							bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1759)
							if ((tmp47)){
								HX_STACK_LINE(1759)
								tmp48 = (val1 == (int)6);
							}
							else{
								HX_STACK_LINE(1759)
								tmp48 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1759)
							bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1759)
							bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1759)
							if ((tmp50)){
								HX_STACK_LINE(1759)
								tmp51 = (val1 == (int)24);
							}
							else{
								HX_STACK_LINE(1759)
								tmp51 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1759)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1759)
							bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1759)
							if ((tmp53)){
								HX_STACK_LINE(1759)
								tmp54 = (val1 == (int)96);
							}
							else{
								HX_STACK_LINE(1759)
								tmp54 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1759)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1759)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1759)
							if ((tmp56)){
								HX_STACK_LINE(1759)
								tmp57 = (val1 == (int)5);
							}
							else{
								HX_STACK_LINE(1759)
								tmp57 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1759)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1759)
							bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1759)
							if ((tmp59)){
								HX_STACK_LINE(1759)
								tmp60 = (val1 == (int)20);
							}
							else{
								HX_STACK_LINE(1759)
								tmp60 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1759)
							bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1759)
							bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1759)
							if ((tmp62)){
								HX_STACK_LINE(1759)
								tmp63 = (val1 == (int)80);
							}
							else{
								HX_STACK_LINE(1759)
								tmp63 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1759)
							bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1759)
							bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1759)
							if ((tmp65)){
								HX_STACK_LINE(1759)
								tmp66 = (val1 == (int)65);
							}
							else{
								HX_STACK_LINE(1759)
								tmp66 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1759)
							bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1759)
							bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1759)
							if ((tmp68)){
								HX_STACK_LINE(1759)
								tmp69 = (val1 == (int)17);
							}
							else{
								HX_STACK_LINE(1759)
								tmp69 = true;
							}
							HX_STACK_LINE(1759)
							bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1759)
							bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1759)
							if ((tmp70)){
								HX_STACK_LINE(1759)
								tmp71 = (val1 == (int)68);
							}
							else{
								HX_STACK_LINE(1759)
								tmp71 = true;
							}
							HX_STACK_LINE(1759)
							if ((tmp71)){
								HX_STACK_LINE(1760)
								val1 = (int)0;
								HX_STACK_LINE(1761)
								ret->key2 = (int)0;
								HX_STACK_LINE(1762)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1765)
						bool tmp20 = (val1 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1765)
						if ((tmp20)){
							HX_STACK_LINE(1766)
							ret->pr = ret->p1;
							HX_STACK_LINE(1767)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1768)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1771)
							ret->pr = ret->p2;
							HX_STACK_LINE(1772)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1773)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1777)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1778)
						{
							HX_STACK_LINE(1779)
							ret->okey1 = val1;
							HX_STACK_LINE(1780)
							{
								HX_STACK_LINE(1780)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1780)
								while((true)){
									HX_STACK_LINE(1780)
									bool tmp20 = (_g < (int)8);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1780)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1780)
									if ((tmp21)){
										HX_STACK_LINE(1780)
										break;
									}
									HX_STACK_LINE(1780)
									int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1780)
									int i = tmp22;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1781)
									int tmp23 = val1;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1781)
									int tmp24 = (int((int)1) << int(i));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1781)
									int tmp25 = (int(tmp23) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1781)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1781)
									if ((tmp26)){
										HX_STACK_LINE(1782)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1783)
										bool tmp27 = (i == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1783)
										if ((tmp27)){
											HX_STACK_LINE(1784)
											::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1784)
											{
												HX_STACK_LINE(1784)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1784)
												{
													HX_STACK_LINE(1784)
													::zpp_nape::geom::ZPP_GeomVert tmp29 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1784)
													bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1784)
													if ((tmp30)){
														HX_STACK_LINE(1784)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1784)
														ret1 = tmp31;
													}
													else{
														HX_STACK_LINE(1784)
														::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1784)
														ret1 = tmp31;
														HX_STACK_LINE(1784)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1784)
														ret1->next = null();
													}
													HX_STACK_LINE(1784)
													ret1->forced = false;
												}
												HX_STACK_LINE(1784)
												{
													HX_STACK_LINE(1784)
													ret1->x = x0;
													HX_STACK_LINE(1784)
													ret1->y = y0;
													HX_STACK_LINE(1784)
													{
													}
												}
												HX_STACK_LINE(1784)
												tmp28 = ret1;
											}
											HX_STACK_LINE(1784)
											p = tmp28;
											HX_STACK_LINE(1785)
											bool tmp29 = fstx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1785)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1785)
											bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1785)
											if ((tmp30)){
												HX_STACK_LINE(1785)
												tmp31 = fsty;
											}
											else{
												HX_STACK_LINE(1785)
												tmp31 = true;
											}
											HX_STACK_LINE(1785)
											if ((tmp31)){
												HX_STACK_LINE(1785)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1787)
											bool tmp28 = (i == (int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1787)
											if ((tmp28)){
												HX_STACK_LINE(1788)
												::zpp_nape::geom::ZPP_GeomVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1788)
												{
													HX_STACK_LINE(1788)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1788)
													{
														HX_STACK_LINE(1788)
														::zpp_nape::geom::ZPP_GeomVert tmp30 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1788)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1788)
														if ((tmp31)){
															HX_STACK_LINE(1788)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1788)
															ret1 = tmp32;
														}
														else{
															HX_STACK_LINE(1788)
															::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1788)
															ret1 = tmp32;
															HX_STACK_LINE(1788)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1788)
															ret1->next = null();
														}
														HX_STACK_LINE(1788)
														ret1->forced = false;
													}
													HX_STACK_LINE(1788)
													{
														HX_STACK_LINE(1788)
														ret1->x = x1;
														HX_STACK_LINE(1788)
														ret1->y = y0;
														HX_STACK_LINE(1788)
														{
														}
													}
													HX_STACK_LINE(1788)
													tmp29 = ret1;
												}
												HX_STACK_LINE(1788)
												p = tmp29;
												HX_STACK_LINE(1789)
												bool tmp30 = sndx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1789)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1789)
												bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1789)
												if ((tmp31)){
													HX_STACK_LINE(1789)
													tmp32 = fsty;
												}
												else{
													HX_STACK_LINE(1789)
													tmp32 = true;
												}
												HX_STACK_LINE(1789)
												if ((tmp32)){
													HX_STACK_LINE(1789)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1791)
												bool tmp29 = (i == (int)4);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1791)
												if ((tmp29)){
													HX_STACK_LINE(1792)
													::zpp_nape::geom::ZPP_GeomVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1792)
													{
														HX_STACK_LINE(1792)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1792)
														{
															HX_STACK_LINE(1792)
															::zpp_nape::geom::ZPP_GeomVert tmp31 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1792)
															bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1792)
															if ((tmp32)){
																HX_STACK_LINE(1792)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1792)
																ret1 = tmp33;
															}
															else{
																HX_STACK_LINE(1792)
																::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1792)
																ret1 = tmp33;
																HX_STACK_LINE(1792)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1792)
																ret1->next = null();
															}
															HX_STACK_LINE(1792)
															ret1->forced = false;
														}
														HX_STACK_LINE(1792)
														{
															HX_STACK_LINE(1792)
															ret1->x = x1;
															HX_STACK_LINE(1792)
															ret1->y = y1;
															HX_STACK_LINE(1792)
															{
															}
														}
														HX_STACK_LINE(1792)
														tmp30 = ret1;
													}
													HX_STACK_LINE(1792)
													p = tmp30;
													HX_STACK_LINE(1793)
													bool tmp31 = sndx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1793)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1793)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1793)
													if ((tmp32)){
														HX_STACK_LINE(1793)
														tmp33 = sndy;
													}
													else{
														HX_STACK_LINE(1793)
														tmp33 = true;
													}
													HX_STACK_LINE(1793)
													if ((tmp33)){
														HX_STACK_LINE(1793)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1795)
													bool tmp30 = (i == (int)6);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1795)
													if ((tmp30)){
														HX_STACK_LINE(1796)
														::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1796)
														{
															HX_STACK_LINE(1796)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1796)
															{
																HX_STACK_LINE(1796)
																::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1796)
																bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1796)
																if ((tmp33)){
																	HX_STACK_LINE(1796)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1796)
																	ret1 = tmp34;
																}
																else{
																	HX_STACK_LINE(1796)
																	::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1796)
																	ret1 = tmp34;
																	HX_STACK_LINE(1796)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1796)
																	ret1->next = null();
																}
																HX_STACK_LINE(1796)
																ret1->forced = false;
															}
															HX_STACK_LINE(1796)
															{
																HX_STACK_LINE(1796)
																ret1->x = x0;
																HX_STACK_LINE(1796)
																ret1->y = y1;
																HX_STACK_LINE(1796)
																{
																}
															}
															HX_STACK_LINE(1796)
															tmp31 = ret1;
														}
														HX_STACK_LINE(1796)
														p = tmp31;
														HX_STACK_LINE(1797)
														bool tmp32 = fstx;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1797)
														bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1797)
														bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1797)
														if ((tmp33)){
															HX_STACK_LINE(1797)
															tmp34 = sndy;
														}
														else{
															HX_STACK_LINE(1797)
															tmp34 = true;
														}
														HX_STACK_LINE(1797)
														if ((tmp34)){
															HX_STACK_LINE(1797)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1799)
														bool tmp31 = (i == (int)1);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1799)
														if ((tmp31)){
															HX_STACK_LINE(1800)
															::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1800)
															{
																HX_STACK_LINE(1800)
																Array< ::Dynamic > tmp33 = ints->list;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1800)
																int tmp34 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1800)
																int tmp35 = ints->width;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1800)
																int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1800)
																int tmp37 = xn;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1800)
																int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1800)
																tmp32 = tmp33->__get(tmp38).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
															}
															HX_STACK_LINE(1800)
															p = tmp32;
															HX_STACK_LINE(1801)
															bool tmp33 = (p == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1801)
															if ((tmp33)){
																HX_STACK_LINE(1802)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1802)
																{
																	HX_STACK_LINE(1802)
																	Float tmp35 = x0;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1802)
																	Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1802)
																	Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1802)
																	Float tmp38 = v0;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1802)
																	Float tmp39 = v1;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1802)
																	Dynamic tmp40 = iso;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1802)
																	int tmp41 = quality;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1802)
																	Float tmp42 = this->xlerp(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1802)
																	Float x = tmp42;		HX_STACK_VAR(x,"x");
																	HX_STACK_LINE(1802)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1802)
																	{
																		HX_STACK_LINE(1802)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1802)
																		bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1802)
																		if ((tmp44)){
																			HX_STACK_LINE(1802)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1802)
																			ret1 = tmp45;
																		}
																		else{
																			HX_STACK_LINE(1802)
																			::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1802)
																			ret1 = tmp45;
																			HX_STACK_LINE(1802)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1802)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1802)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1802)
																	{
																		HX_STACK_LINE(1802)
																		ret1->x = x;
																		HX_STACK_LINE(1802)
																		ret1->y = y0;
																		HX_STACK_LINE(1802)
																		{
																		}
																	}
																	HX_STACK_LINE(1802)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1802)
																p = tmp34;
																HX_STACK_LINE(1803)
																{
																	HX_STACK_LINE(1803)
																	Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1803)
																	int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1803)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1803)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1803)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1803)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1803)
																	::zpp_nape::geom::ZPP_GeomVert tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1803)
																	tmp35[tmp40] = tmp41;
																}
															}
															else{
																HX_STACK_LINE(1805)
																::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1805)
																{
																	HX_STACK_LINE(1805)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1805)
																	{
																		HX_STACK_LINE(1805)
																		::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1805)
																		bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1805)
																		if ((tmp36)){
																			HX_STACK_LINE(1805)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1805)
																			ret1 = tmp37;
																		}
																		else{
																			HX_STACK_LINE(1805)
																			::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1805)
																			ret1 = tmp37;
																			HX_STACK_LINE(1805)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1805)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1805)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1805)
																	{
																		HX_STACK_LINE(1805)
																		ret1->x = p->x;
																		HX_STACK_LINE(1805)
																		ret1->y = p->y;
																		HX_STACK_LINE(1805)
																		{
																		}
																	}
																	HX_STACK_LINE(1805)
																	tmp34 = ret1;
																}
																HX_STACK_LINE(1805)
																p = tmp34;
															}
															HX_STACK_LINE(1806)
															bool tmp34 = fsty;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1806)
															if ((tmp34)){
																HX_STACK_LINE(1806)
																p->forced = true;
															}
															HX_STACK_LINE(1807)
															bool tmp35 = (p->x == x0);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1807)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1807)
															bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1807)
															if ((tmp36)){
																HX_STACK_LINE(1807)
																tmp37 = (p->x == x1);
															}
															else{
																HX_STACK_LINE(1807)
																tmp37 = true;
															}
															HX_STACK_LINE(1807)
															if ((tmp37)){
																HX_STACK_LINE(1808)
																bool tmp38 = (p->x == x0);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1808)
																bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1808)
																bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1808)
																if ((tmp39)){
																	HX_STACK_LINE(1808)
																	int tmp41 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1808)
																	int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1808)
																	int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1808)
																	tmp40 = (tmp43 != (int)0);
																}
																else{
																	HX_STACK_LINE(1808)
																	tmp40 = false;
																}
																HX_STACK_LINE(1808)
																bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1808)
																bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1808)
																if ((tmp41)){
																	HX_STACK_LINE(1808)
																	bool tmp43 = (p->x == x1);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1808)
																	bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1808)
																	bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1808)
																	if ((tmp45)){
																		HX_STACK_LINE(1808)
																		int tmp46 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1808)
																		int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1808)
																		int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1808)
																		tmp42 = (tmp48 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1808)
																		tmp42 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1808)
																	tmp42 = true;
																}
																HX_STACK_LINE(1808)
																if ((tmp42)){
																	HX_STACK_LINE(1808)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1811)
															bool tmp32 = (i == (int)5);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1811)
															if ((tmp32)){
																HX_STACK_LINE(1812)
																::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1812)
																{
																	HX_STACK_LINE(1812)
																	Array< ::Dynamic > tmp34 = ints->list;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1812)
																	int tmp35 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1812)
																	int tmp36 = (tmp35 + (int)2);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1812)
																	int tmp37 = ints->width;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1812)
																	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1812)
																	int tmp39 = xn;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1812)
																	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1812)
																	tmp33 = tmp34->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																}
																HX_STACK_LINE(1812)
																p = tmp33;
																HX_STACK_LINE(1813)
																bool tmp34 = (p == null());		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1813)
																if ((tmp34)){
																	HX_STACK_LINE(1814)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1814)
																	{
																		HX_STACK_LINE(1814)
																		Float tmp36 = x0;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1814)
																		Float tmp37 = x1;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1814)
																		Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1814)
																		Float tmp39 = v3;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1814)
																		Float tmp40 = v2;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1814)
																		Dynamic tmp41 = iso;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1814)
																		int tmp42 = quality;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1814)
																		Float tmp43 = this->xlerp(tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1814)
																		Float x = tmp43;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1814)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1814)
																		{
																			HX_STACK_LINE(1814)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1814)
																			bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1814)
																			if ((tmp45)){
																				HX_STACK_LINE(1814)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1814)
																				ret1 = tmp46;
																			}
																			else{
																				HX_STACK_LINE(1814)
																				::zpp_nape::geom::ZPP_GeomVert tmp46 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1814)
																				ret1 = tmp46;
																				HX_STACK_LINE(1814)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1814)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1814)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1814)
																		{
																			HX_STACK_LINE(1814)
																			ret1->x = x;
																			HX_STACK_LINE(1814)
																			ret1->y = y1;
																			HX_STACK_LINE(1814)
																			{
																			}
																		}
																		HX_STACK_LINE(1814)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1814)
																	p = tmp35;
																	HX_STACK_LINE(1815)
																	{
																		HX_STACK_LINE(1815)
																		Array< ::Dynamic > tmp36 = ints->list;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1815)
																		int tmp37 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1815)
																		int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1815)
																		int tmp39 = ints->width;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1815)
																		int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1815)
																		int tmp41 = xn;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1815)
																		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1815)
																		::zpp_nape::geom::ZPP_GeomVert tmp43 = p;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1815)
																		tmp36[tmp42] = tmp43;
																	}
																}
																else{
																	HX_STACK_LINE(1817)
																	::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1817)
																	{
																		HX_STACK_LINE(1817)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1817)
																		{
																			HX_STACK_LINE(1817)
																			::zpp_nape::geom::ZPP_GeomVert tmp36 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1817)
																			bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1817)
																			if ((tmp37)){
																				HX_STACK_LINE(1817)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1817)
																				ret1 = tmp38;
																			}
																			else{
																				HX_STACK_LINE(1817)
																				::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1817)
																				ret1 = tmp38;
																				HX_STACK_LINE(1817)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1817)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1817)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1817)
																		{
																			HX_STACK_LINE(1817)
																			ret1->x = p->x;
																			HX_STACK_LINE(1817)
																			ret1->y = p->y;
																			HX_STACK_LINE(1817)
																			{
																			}
																		}
																		HX_STACK_LINE(1817)
																		tmp35 = ret1;
																	}
																	HX_STACK_LINE(1817)
																	p = tmp35;
																}
																HX_STACK_LINE(1818)
																bool tmp35 = sndy;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1818)
																if ((tmp35)){
																	HX_STACK_LINE(1818)
																	p->forced = true;
																}
																HX_STACK_LINE(1819)
																bool tmp36 = (p->x == x0);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1819)
																bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1819)
																bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1819)
																if ((tmp37)){
																	HX_STACK_LINE(1819)
																	tmp38 = (p->x == x1);
																}
																else{
																	HX_STACK_LINE(1819)
																	tmp38 = true;
																}
																HX_STACK_LINE(1819)
																if ((tmp38)){
																	HX_STACK_LINE(1820)
																	bool tmp39 = (p->x == x0);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1820)
																	bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1820)
																	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1820)
																	if ((tmp40)){
																		HX_STACK_LINE(1820)
																		int tmp42 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1820)
																		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1820)
																		int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1820)
																		tmp41 = (tmp44 != (int)0);
																	}
																	else{
																		HX_STACK_LINE(1820)
																		tmp41 = false;
																	}
																	HX_STACK_LINE(1820)
																	bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1820)
																	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1820)
																	if ((tmp42)){
																		HX_STACK_LINE(1820)
																		bool tmp44 = (p->x == x1);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1820)
																		bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1820)
																		bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1820)
																		if ((tmp46)){
																			HX_STACK_LINE(1820)
																			int tmp47 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1820)
																			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1820)
																			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1820)
																			tmp43 = (tmp49 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1820)
																			tmp43 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1820)
																		tmp43 = true;
																	}
																	HX_STACK_LINE(1820)
																	if ((tmp43)){
																		HX_STACK_LINE(1820)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1823)
																bool tmp33 = (i == (int)3);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1823)
																if ((tmp33)){
																	HX_STACK_LINE(1824)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1824)
																	{
																		HX_STACK_LINE(1824)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1824)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1824)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1824)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1824)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1824)
																		int tmp40 = (xn + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1824)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1824)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1824)
																	p = tmp34;
																	HX_STACK_LINE(1825)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1825)
																	if ((tmp35)){
																		HX_STACK_LINE(1826)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1826)
																		{
																			HX_STACK_LINE(1826)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1826)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1826)
																			Float tmp39 = x1;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1826)
																			Float tmp40 = v1;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1826)
																			Float tmp41 = v2;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1826)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1826)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1826)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1826)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1826)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1826)
																			{
																				HX_STACK_LINE(1826)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1826)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1826)
																				if ((tmp46)){
																					HX_STACK_LINE(1826)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1826)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1826)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1826)
																					ret1 = tmp47;
																					HX_STACK_LINE(1826)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1826)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1826)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1826)
																			{
																				HX_STACK_LINE(1826)
																				ret1->x = x1;
																				HX_STACK_LINE(1826)
																				ret1->y = y;
																				HX_STACK_LINE(1826)
																				{
																				}
																			}
																			HX_STACK_LINE(1826)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1826)
																		p = tmp36;
																		HX_STACK_LINE(1827)
																		{
																			HX_STACK_LINE(1827)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1827)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1827)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1827)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1827)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1827)
																			int tmp42 = (xn + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1827)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1827)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1827)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1829)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1829)
																		{
																			HX_STACK_LINE(1829)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1829)
																			{
																				HX_STACK_LINE(1829)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1829)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1829)
																				if ((tmp38)){
																					HX_STACK_LINE(1829)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1829)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1829)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1829)
																					ret1 = tmp39;
																					HX_STACK_LINE(1829)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1829)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1829)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1829)
																			{
																				HX_STACK_LINE(1829)
																				ret1->x = p->x;
																				HX_STACK_LINE(1829)
																				ret1->y = p->y;
																				HX_STACK_LINE(1829)
																				{
																				}
																			}
																			HX_STACK_LINE(1829)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1829)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1830)
																	bool tmp36 = sndx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1830)
																	if ((tmp36)){
																		HX_STACK_LINE(1830)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1831)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1831)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1831)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1831)
																	if ((tmp38)){
																		HX_STACK_LINE(1831)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1831)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1831)
																	if ((tmp39)){
																		HX_STACK_LINE(1832)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1832)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1832)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1832)
																		if ((tmp41)){
																			HX_STACK_LINE(1832)
																			int tmp43 = (int(val1) & int((int)4));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1832)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1832)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1832)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1832)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1832)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1832)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1832)
																		if ((tmp43)){
																			HX_STACK_LINE(1832)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1832)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1832)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1832)
																			if ((tmp47)){
																				HX_STACK_LINE(1832)
																				int tmp48 = (int(val1) & int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1832)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1832)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1832)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1832)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1832)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1832)
																		if ((tmp44)){
																			HX_STACK_LINE(1832)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	HX_STACK_LINE(1836)
																	::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1836)
																	{
																		HX_STACK_LINE(1836)
																		Array< ::Dynamic > tmp35 = ints->list;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1836)
																		int tmp36 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1836)
																		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1836)
																		int tmp38 = ints->width;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1836)
																		int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1836)
																		int tmp40 = xn;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1836)
																		int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1836)
																		tmp34 = tmp35->__get(tmp41).StaticCast< ::zpp_nape::geom::ZPP_GeomVert >();
																	}
																	HX_STACK_LINE(1836)
																	p = tmp34;
																	HX_STACK_LINE(1837)
																	bool tmp35 = (p == null());		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1837)
																	if ((tmp35)){
																		HX_STACK_LINE(1838)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1838)
																		{
																			HX_STACK_LINE(1838)
																			Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1838)
																			Float tmp38 = y1;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1838)
																			Float tmp39 = x0;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1838)
																			Float tmp40 = v0;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1838)
																			Float tmp41 = v3;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1838)
																			Dynamic tmp42 = iso;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1838)
																			int tmp43 = quality;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1838)
																			Float tmp44 = this->ylerp(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1838)
																			Float y = tmp44;		HX_STACK_VAR(y,"y");
																			HX_STACK_LINE(1838)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1838)
																			{
																				HX_STACK_LINE(1838)
																				::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1838)
																				bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1838)
																				if ((tmp46)){
																					HX_STACK_LINE(1838)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1838)
																					ret1 = tmp47;
																				}
																				else{
																					HX_STACK_LINE(1838)
																					::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1838)
																					ret1 = tmp47;
																					HX_STACK_LINE(1838)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1838)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1838)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1838)
																			{
																				HX_STACK_LINE(1838)
																				ret1->x = x0;
																				HX_STACK_LINE(1838)
																				ret1->y = y;
																				HX_STACK_LINE(1838)
																				{
																				}
																			}
																			HX_STACK_LINE(1838)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1838)
																		p = tmp36;
																		HX_STACK_LINE(1839)
																		{
																			HX_STACK_LINE(1839)
																			Array< ::Dynamic > tmp37 = ints->list;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1839)
																			int tmp38 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1839)
																			int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1839)
																			int tmp40 = ints->width;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1839)
																			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1839)
																			int tmp42 = xn;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1839)
																			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1839)
																			::zpp_nape::geom::ZPP_GeomVert tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1839)
																			tmp37[tmp43] = tmp44;
																		}
																	}
																	else{
																		HX_STACK_LINE(1841)
																		::zpp_nape::geom::ZPP_GeomVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1841)
																		{
																			HX_STACK_LINE(1841)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1841)
																			{
																				HX_STACK_LINE(1841)
																				::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1841)
																				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1841)
																				if ((tmp38)){
																					HX_STACK_LINE(1841)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1841)
																					ret1 = tmp39;
																				}
																				else{
																					HX_STACK_LINE(1841)
																					::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1841)
																					ret1 = tmp39;
																					HX_STACK_LINE(1841)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1841)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1841)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1841)
																			{
																				HX_STACK_LINE(1841)
																				ret1->x = p->x;
																				HX_STACK_LINE(1841)
																				ret1->y = p->y;
																				HX_STACK_LINE(1841)
																				{
																				}
																			}
																			HX_STACK_LINE(1841)
																			tmp36 = ret1;
																		}
																		HX_STACK_LINE(1841)
																		p = tmp36;
																	}
																	HX_STACK_LINE(1842)
																	bool tmp36 = fstx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1842)
																	if ((tmp36)){
																		HX_STACK_LINE(1842)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1843)
																	bool tmp37 = (p->y == y0);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1843)
																	bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1843)
																	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1843)
																	if ((tmp38)){
																		HX_STACK_LINE(1843)
																		tmp39 = (p->y == y1);
																	}
																	else{
																		HX_STACK_LINE(1843)
																		tmp39 = true;
																	}
																	HX_STACK_LINE(1843)
																	if ((tmp39)){
																		HX_STACK_LINE(1844)
																		bool tmp40 = (p->y == y0);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1844)
																		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1844)
																		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1844)
																		if ((tmp41)){
																			HX_STACK_LINE(1844)
																			int tmp43 = (int(val1) & int((int)1));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1844)
																			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1844)
																			int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1844)
																			tmp42 = (tmp45 != (int)0);
																		}
																		else{
																			HX_STACK_LINE(1844)
																			tmp42 = false;
																		}
																		HX_STACK_LINE(1844)
																		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1844)
																		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1844)
																		if ((tmp43)){
																			HX_STACK_LINE(1844)
																			bool tmp45 = (p->y == y1);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1844)
																			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1844)
																			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1844)
																			if ((tmp47)){
																				HX_STACK_LINE(1844)
																				int tmp48 = (int(val1) & int((int)64));		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1844)
																				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1844)
																				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1844)
																				tmp44 = (tmp50 != (int)0);
																			}
																			else{
																				HX_STACK_LINE(1844)
																				tmp44 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1844)
																			tmp44 = true;
																		}
																		HX_STACK_LINE(1844)
																		if ((tmp44)){
																			HX_STACK_LINE(1844)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(1847)
										::zpp_nape::geom::ZPP_GeomVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1847)
										{
											HX_STACK_LINE(1848)
											::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(1849)
											bool tmp29 = (ret->p1 == null());		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1849)
											if ((tmp29)){
												HX_STACK_LINE(1849)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = obj->next = obj;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1849)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = obj->prev = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1849)
												ret->p1 = tmp31;
											}
											else{
												HX_STACK_LINE(1851)
												obj->prev = ret->p1;
												HX_STACK_LINE(1852)
												::zpp_nape::geom::ZPP_GeomVert tmp30 = ret->p1->next;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1852)
												obj->next = tmp30;
												HX_STACK_LINE(1853)
												::zpp_nape::geom::ZPP_GeomVert tmp31 = ret->p1->next;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1853)
												tmp31->prev = obj;
												HX_STACK_LINE(1854)
												ret->p1->next = obj;
											}
											HX_STACK_LINE(1856)
											tmp28 = obj;
										}
										HX_STACK_LINE(1847)
										ret->p1 = tmp28;
									}
								}
							}
							HX_STACK_LINE(1860)
							::zpp_nape::geom::ZPP_GeomVert tmp20 = ret->p1->next;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1860)
							ret->p1 = tmp20;
							HX_STACK_LINE(1861)
							ret->key1 = val1;
							HX_STACK_LINE(1862)
							bool tmp21 = (val1 == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1862)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1862)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1862)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1862)
							if ((tmp23)){
								HX_STACK_LINE(1862)
								tmp24 = (val1 == (int)4);
							}
							else{
								HX_STACK_LINE(1862)
								tmp24 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1862)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1862)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1862)
							if ((tmp26)){
								HX_STACK_LINE(1862)
								tmp27 = (val1 == (int)16);
							}
							else{
								HX_STACK_LINE(1862)
								tmp27 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1862)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1862)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1862)
							if ((tmp29)){
								HX_STACK_LINE(1862)
								tmp30 = (val1 == (int)64);
							}
							else{
								HX_STACK_LINE(1862)
								tmp30 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1862)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1862)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1862)
							if ((tmp32)){
								HX_STACK_LINE(1862)
								tmp33 = (val1 == (int)3);
							}
							else{
								HX_STACK_LINE(1862)
								tmp33 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1862)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1862)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1862)
							if ((tmp35)){
								HX_STACK_LINE(1862)
								tmp36 = (val1 == (int)12);
							}
							else{
								HX_STACK_LINE(1862)
								tmp36 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1862)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1862)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1862)
							if ((tmp38)){
								HX_STACK_LINE(1862)
								tmp39 = (val1 == (int)48);
							}
							else{
								HX_STACK_LINE(1862)
								tmp39 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1862)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1862)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1862)
							if ((tmp41)){
								HX_STACK_LINE(1862)
								tmp42 = (val1 == (int)192);
							}
							else{
								HX_STACK_LINE(1862)
								tmp42 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1862)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1862)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1862)
							if ((tmp44)){
								HX_STACK_LINE(1862)
								tmp45 = (val1 == (int)129);
							}
							else{
								HX_STACK_LINE(1862)
								tmp45 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1862)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1862)
							bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1862)
							if ((tmp47)){
								HX_STACK_LINE(1862)
								tmp48 = (val1 == (int)6);
							}
							else{
								HX_STACK_LINE(1862)
								tmp48 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1862)
							bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1862)
							bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1862)
							if ((tmp50)){
								HX_STACK_LINE(1862)
								tmp51 = (val1 == (int)24);
							}
							else{
								HX_STACK_LINE(1862)
								tmp51 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1862)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1862)
							bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1862)
							if ((tmp53)){
								HX_STACK_LINE(1862)
								tmp54 = (val1 == (int)96);
							}
							else{
								HX_STACK_LINE(1862)
								tmp54 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1862)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1862)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1862)
							if ((tmp56)){
								HX_STACK_LINE(1862)
								tmp57 = (val1 == (int)5);
							}
							else{
								HX_STACK_LINE(1862)
								tmp57 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1862)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1862)
							bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1862)
							if ((tmp59)){
								HX_STACK_LINE(1862)
								tmp60 = (val1 == (int)20);
							}
							else{
								HX_STACK_LINE(1862)
								tmp60 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1862)
							bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1862)
							bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1862)
							if ((tmp62)){
								HX_STACK_LINE(1862)
								tmp63 = (val1 == (int)80);
							}
							else{
								HX_STACK_LINE(1862)
								tmp63 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1862)
							bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1862)
							bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1862)
							if ((tmp65)){
								HX_STACK_LINE(1862)
								tmp66 = (val1 == (int)65);
							}
							else{
								HX_STACK_LINE(1862)
								tmp66 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1862)
							bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1862)
							bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1862)
							if ((tmp68)){
								HX_STACK_LINE(1862)
								tmp69 = (val1 == (int)17);
							}
							else{
								HX_STACK_LINE(1862)
								tmp69 = true;
							}
							HX_STACK_LINE(1862)
							bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1862)
							bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1862)
							if ((tmp70)){
								HX_STACK_LINE(1862)
								tmp71 = (val1 == (int)68);
							}
							else{
								HX_STACK_LINE(1862)
								tmp71 = true;
							}
							HX_STACK_LINE(1862)
							if ((tmp71)){
								HX_STACK_LINE(1863)
								val1 = (int)0;
								HX_STACK_LINE(1864)
								ret->key1 = (int)0;
								HX_STACK_LINE(1865)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1868)
						bool tmp20 = (val1 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1868)
						if ((tmp20)){
							HX_STACK_LINE(1868)
							ret = null();
						}
						else{
							HX_STACK_LINE(1870)
							ret->pr = ret->p1;
							HX_STACK_LINE(1871)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1872)
							ret->keyr = ret->key1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1878)
		::zpp_nape::geom::ZPP_MarchPair tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1878)
		return tmp11;
	}
	HX_STACK_LINE(964)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC14(ZPP_MarchingSquares_obj,marchSquare,return )

Float ZPP_MarchingSquares_obj::lerp( Float x0,Float x1,Float v0,Float v1){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","lerp",0xcf3b2584,"zpp_nape.geom.ZPP_MarchingSquares.lerp","zpp_nape/geom/MarchingSquares.hx",1882,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(v0,"v0")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_LINE(1883)
	bool tmp = (v0 == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1883)
	if ((tmp)){
		HX_STACK_LINE(1883)
		Float tmp1 = x0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1883)
		return tmp1;
	}
	else{
		HX_STACK_LINE(1884)
		bool tmp1 = (v1 == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1884)
		if ((tmp1)){
			HX_STACK_LINE(1884)
			Float tmp2 = x1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1884)
			return tmp2;
		}
		else{
			HX_STACK_LINE(1886)
			Float tmp2 = (v0 - v1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1886)
			Float dv = tmp2;		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1887)
			Float tmp3 = (dv * dv);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1887)
			Float tmp4 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1887)
			Float tmp5 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1887)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1887)
			bool tmp7 = (tmp3 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1887)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1887)
			if ((tmp7)){
				HX_STACK_LINE(1887)
				tmp8 = ((Float)0.5);
			}
			else{
				HX_STACK_LINE(1887)
				tmp8 = (Float(v0) / Float(dv));
			}
			HX_STACK_LINE(1887)
			Float t = tmp8;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1888)
			bool tmp9 = (t < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1888)
			if ((tmp9)){
				HX_STACK_LINE(1888)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1889)
				bool tmp10 = (t > (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1889)
				if ((tmp10)){
					HX_STACK_LINE(1889)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1890)
			Float tmp10 = x0;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1890)
			Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1890)
			Float tmp12 = (x1 - x0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1890)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1890)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1890)
			return tmp14;
		}
	}
	HX_STACK_LINE(1883)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_MarchingSquares_obj,lerp,return )

Float ZPP_MarchingSquares_obj::xlerp( Float x0,Float x1,Float y,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","xlerp",0x71eb4742,"zpp_nape.geom.ZPP_MarchingSquares.xlerp","zpp_nape/geom/MarchingSquares.hx",1893,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(v0,"v0")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(1894)
	bool tmp = (v0 == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1894)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1894)
	if ((tmp)){
		HX_STACK_LINE(1894)
		tmp1 = x0;
	}
	else{
		HX_STACK_LINE(1894)
		bool tmp2 = (v1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1894)
		if ((tmp2)){
			HX_STACK_LINE(1894)
			tmp1 = x1;
		}
		else{
			HX_STACK_LINE(1894)
			Float tmp3 = (v0 - v1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1894)
			Float dv = tmp3;		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1894)
			Float tmp4 = (dv * dv);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1894)
			Float tmp5 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1894)
			Float tmp6 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1894)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1894)
			bool tmp8 = (tmp4 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1894)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1894)
			if ((tmp8)){
				HX_STACK_LINE(1894)
				tmp9 = ((Float)0.5);
			}
			else{
				HX_STACK_LINE(1894)
				tmp9 = (Float(v0) / Float(dv));
			}
			HX_STACK_LINE(1894)
			Float t = tmp9;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1894)
			bool tmp10 = (t < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1894)
			if ((tmp10)){
				HX_STACK_LINE(1894)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1894)
				bool tmp11 = (t > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1894)
				if ((tmp11)){
					HX_STACK_LINE(1894)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1894)
			Float tmp11 = x0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1894)
			Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1894)
			Float tmp13 = (x1 - x0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1894)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1894)
			tmp1 = (tmp11 + tmp14);
		}
	}
	HX_STACK_LINE(1894)
	Float xm = tmp1;		HX_STACK_VAR(xm,"xm");
	HX_STACK_LINE(1895)
	while((true)){
		HX_STACK_LINE(1895)
		int tmp2 = (quality)--;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1895)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1895)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1895)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1895)
		if ((tmp4)){
			HX_STACK_LINE(1895)
			tmp5 = (x0 < xm);
		}
		else{
			HX_STACK_LINE(1895)
			tmp5 = false;
		}
		HX_STACK_LINE(1895)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1895)
		if ((tmp5)){
			HX_STACK_LINE(1895)
			tmp6 = (xm < x1);
		}
		else{
			HX_STACK_LINE(1895)
			tmp6 = false;
		}
		HX_STACK_LINE(1895)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1895)
		if ((tmp7)){
			HX_STACK_LINE(1895)
			break;
		}
		HX_STACK_LINE(1896)
		Float tmp8 = xm;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1896)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1896)
		Float tmp10 = iso(tmp8,tmp9).Cast< Float >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1896)
		Float vm = tmp10;		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1897)
		bool tmp11 = (vm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1897)
		if ((tmp11)){
			HX_STACK_LINE(1897)
			break;
		}
		HX_STACK_LINE(1898)
		Float tmp12 = (v0 * vm);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1898)
		bool tmp13 = (tmp12 < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1898)
		if ((tmp13)){
			HX_STACK_LINE(1899)
			x1 = xm;
			HX_STACK_LINE(1900)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1903)
			x0 = xm;
			HX_STACK_LINE(1904)
			v0 = vm;
		}
		HX_STACK_LINE(1906)
		bool tmp14 = (v0 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1906)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1906)
		if ((tmp14)){
			HX_STACK_LINE(1906)
			tmp15 = x0;
		}
		else{
			HX_STACK_LINE(1906)
			bool tmp16 = (v1 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1906)
			if ((tmp16)){
				HX_STACK_LINE(1906)
				tmp15 = x1;
			}
			else{
				HX_STACK_LINE(1906)
				Float tmp17 = (v0 - v1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1906)
				Float dv = tmp17;		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1906)
				Float tmp18 = (dv * dv);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1906)
				Float tmp19 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1906)
				Float tmp20 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1906)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1906)
				bool tmp22 = (tmp18 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1906)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1906)
				if ((tmp22)){
					HX_STACK_LINE(1906)
					tmp23 = ((Float)0.5);
				}
				else{
					HX_STACK_LINE(1906)
					tmp23 = (Float(v0) / Float(dv));
				}
				HX_STACK_LINE(1906)
				Float t = tmp23;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1906)
				bool tmp24 = (t < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1906)
				if ((tmp24)){
					HX_STACK_LINE(1906)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1906)
					bool tmp25 = (t > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1906)
					if ((tmp25)){
						HX_STACK_LINE(1906)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1906)
				Float tmp25 = x0;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1906)
				Float tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1906)
				Float tmp27 = (x1 - x0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1906)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1906)
				tmp15 = (tmp25 + tmp28);
			}
		}
		HX_STACK_LINE(1906)
		xm = tmp15;
	}
	HX_STACK_LINE(1908)
	Float tmp2 = xm;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1908)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,xlerp,return )

Float ZPP_MarchingSquares_obj::ylerp( Float y0,Float y1,Float x,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","ylerp",0x0551dbc3,"zpp_nape.geom.ZPP_MarchingSquares.ylerp","zpp_nape/geom/MarchingSquares.hx",1910,0xc3305538)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(v0,"v0")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(1911)
	bool tmp = (v0 == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1911)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1911)
	if ((tmp)){
		HX_STACK_LINE(1911)
		tmp1 = y0;
	}
	else{
		HX_STACK_LINE(1911)
		bool tmp2 = (v1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1911)
		if ((tmp2)){
			HX_STACK_LINE(1911)
			tmp1 = y1;
		}
		else{
			HX_STACK_LINE(1911)
			Float tmp3 = (v0 - v1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1911)
			Float dv = tmp3;		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1911)
			Float tmp4 = (dv * dv);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1911)
			Float tmp5 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1911)
			Float tmp6 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1911)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1911)
			bool tmp8 = (tmp4 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1911)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1911)
			if ((tmp8)){
				HX_STACK_LINE(1911)
				tmp9 = ((Float)0.5);
			}
			else{
				HX_STACK_LINE(1911)
				tmp9 = (Float(v0) / Float(dv));
			}
			HX_STACK_LINE(1911)
			Float t = tmp9;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1911)
			bool tmp10 = (t < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1911)
			if ((tmp10)){
				HX_STACK_LINE(1911)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1911)
				bool tmp11 = (t > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1911)
				if ((tmp11)){
					HX_STACK_LINE(1911)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1911)
			Float tmp11 = y0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1911)
			Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1911)
			Float tmp13 = (y1 - y0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1911)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1911)
			tmp1 = (tmp11 + tmp14);
		}
	}
	HX_STACK_LINE(1911)
	Float ym = tmp1;		HX_STACK_VAR(ym,"ym");
	HX_STACK_LINE(1912)
	while((true)){
		HX_STACK_LINE(1912)
		int tmp2 = (quality)--;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1912)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1912)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1912)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1912)
		if ((tmp4)){
			HX_STACK_LINE(1912)
			tmp5 = (y0 < ym);
		}
		else{
			HX_STACK_LINE(1912)
			tmp5 = false;
		}
		HX_STACK_LINE(1912)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1912)
		if ((tmp5)){
			HX_STACK_LINE(1912)
			tmp6 = (ym < y1);
		}
		else{
			HX_STACK_LINE(1912)
			tmp6 = false;
		}
		HX_STACK_LINE(1912)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1912)
		if ((tmp7)){
			HX_STACK_LINE(1912)
			break;
		}
		HX_STACK_LINE(1913)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1913)
		Float tmp9 = ym;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1913)
		Float tmp10 = iso(tmp8,tmp9).Cast< Float >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1913)
		Float vm = tmp10;		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1914)
		bool tmp11 = (vm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1914)
		if ((tmp11)){
			HX_STACK_LINE(1914)
			break;
		}
		HX_STACK_LINE(1915)
		Float tmp12 = (v0 * vm);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1915)
		bool tmp13 = (tmp12 < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1915)
		if ((tmp13)){
			HX_STACK_LINE(1916)
			y1 = ym;
			HX_STACK_LINE(1917)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1920)
			y0 = ym;
			HX_STACK_LINE(1921)
			v0 = vm;
		}
		HX_STACK_LINE(1923)
		bool tmp14 = (v0 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1923)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1923)
		if ((tmp14)){
			HX_STACK_LINE(1923)
			tmp15 = y0;
		}
		else{
			HX_STACK_LINE(1923)
			bool tmp16 = (v1 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1923)
			if ((tmp16)){
				HX_STACK_LINE(1923)
				tmp15 = y1;
			}
			else{
				HX_STACK_LINE(1923)
				Float tmp17 = (v0 - v1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1923)
				Float dv = tmp17;		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1923)
				Float tmp18 = (dv * dv);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1923)
				Float tmp19 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1923)
				Float tmp20 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1923)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1923)
				bool tmp22 = (tmp18 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1923)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1923)
				if ((tmp22)){
					HX_STACK_LINE(1923)
					tmp23 = ((Float)0.5);
				}
				else{
					HX_STACK_LINE(1923)
					tmp23 = (Float(v0) / Float(dv));
				}
				HX_STACK_LINE(1923)
				Float t = tmp23;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1923)
				bool tmp24 = (t < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1923)
				if ((tmp24)){
					HX_STACK_LINE(1923)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1923)
					bool tmp25 = (t > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1923)
					if ((tmp25)){
						HX_STACK_LINE(1923)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1923)
				Float tmp25 = y0;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1923)
				Float tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1923)
				Float tmp27 = (y1 - y0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1923)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1923)
				tmp15 = (tmp25 + tmp28);
			}
		}
		HX_STACK_LINE(1923)
		ym = tmp15;
	}
	HX_STACK_LINE(1925)
	Float tmp2 = ym;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1925)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,ylerp,return )

::zpp_nape::geom::ZPP_MarchingSquares ZPP_MarchingSquares_obj::me;

::zpp_nape::util::ZNPArray2_Float ZPP_MarchingSquares_obj::isos;

::zpp_nape::util::ZNPArray2_ZPP_GeomVert ZPP_MarchingSquares_obj::ints;

::zpp_nape::util::ZNPArray2_ZPP_MarchPair ZPP_MarchingSquares_obj::map;

Void ZPP_MarchingSquares_obj::run( Dynamic iso,Float bx0,Float by0,Float bx1,Float by1,::nape::geom::Vec2 cell,int quality,bool combine,::nape::geom::GeomPolyList ret){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","run",0x1c7fb4de,"zpp_nape.geom.ZPP_MarchingSquares.run","zpp_nape/geom/MarchingSquares.hx",276,0xc3305538)
		HX_STACK_ARG(iso,"iso")
		HX_STACK_ARG(bx0,"bx0")
		HX_STACK_ARG(by0,"by0")
		HX_STACK_ARG(bx1,"bx1")
		HX_STACK_ARG(by1,"by1")
		HX_STACK_ARG(cell,"cell")
		HX_STACK_ARG(quality,"quality")
		HX_STACK_ARG(combine,"combine")
		HX_STACK_ARG(ret,"ret")
		HX_STACK_LINE(277)
		Float tmp = (bx1 - bx0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				bool tmp2 = (cell != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(277)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(277)
				if ((tmp2)){
					HX_STACK_LINE(277)
					tmp3 = cell->zpp_disp;
				}
				else{
					HX_STACK_LINE(277)
					tmp3 = false;
				}
				HX_STACK_LINE(277)
				if ((tmp3)){
					HX_STACK_LINE(277)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(277)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(277)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(277)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(277)
				if ((tmp2)){
					HX_STACK_LINE(277)
					_this->_validate();
				}
			}
			HX_STACK_LINE(277)
			tmp1 = cell->zpp_inner->x;
		}
		HX_STACK_LINE(277)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		Float xp = tmp2;		HX_STACK_VAR(xp,"xp");
		HX_STACK_LINE(278)
		Float tmp3 = xp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(278)
		int xn = tmp4;		HX_STACK_VAR(xn,"xn");
		HX_STACK_LINE(279)
		Float tmp5 = (by1 - by0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				bool tmp7 = (cell != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				if ((tmp7)){
					HX_STACK_LINE(279)
					tmp8 = cell->zpp_disp;
				}
				else{
					HX_STACK_LINE(279)
					tmp8 = false;
				}
				HX_STACK_LINE(279)
				if ((tmp8)){
					HX_STACK_LINE(279)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(279)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(279)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(279)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				if ((tmp7)){
					HX_STACK_LINE(279)
					_this->_validate();
				}
			}
			HX_STACK_LINE(279)
			tmp6 = cell->zpp_inner->y;
		}
		HX_STACK_LINE(279)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		Float yp = tmp7;		HX_STACK_VAR(yp,"yp");
		HX_STACK_LINE(280)
		Float tmp8 = yp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(280)
		int yn = tmp9;		HX_STACK_VAR(yn,"yn");
		HX_STACK_LINE(281)
		bool tmp10 = (xp != xn);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(281)
		if ((tmp10)){
			HX_STACK_LINE(281)
			(xn)++;
		}
		HX_STACK_LINE(282)
		bool tmp11 = (yp != yn);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(282)
		if ((tmp11)){
			HX_STACK_LINE(282)
			(yn)++;
		}
		HX_STACK_LINE(283)
		bool tmp12 = combine;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(283)
		if ((tmp12)){
			HX_STACK_LINE(284)
			::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp13 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(284)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(284)
			if ((tmp14)){
				HX_STACK_LINE(285)
				::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp15 = ::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__new(xn,yn);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(285)
				::zpp_nape::geom::ZPP_MarchingSquares_obj::map = tmp15;
			}
			else{
				HX_STACK_LINE(288)
				::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp15 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(288)
				int tmp16 = xn;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(288)
				int tmp17 = yn;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(288)
				tmp15->resize(tmp16,tmp17,null());
			}
		}
		HX_STACK_LINE(291)
		::zpp_nape::util::ZNPArray2_Float tmp13 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::isos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(291)
		bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(291)
		if ((tmp14)){
			HX_STACK_LINE(292)
			int tmp15 = (xn + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(292)
			int tmp16 = (yn + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPArray2_Float tmp17 = ::zpp_nape::util::ZNPArray2_Float_obj::__new(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(292)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::isos = tmp17;
		}
		else{
			HX_STACK_LINE(295)
			::zpp_nape::util::ZNPArray2_Float tmp15 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::isos;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(295)
			int tmp16 = (xn + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(295)
			int tmp17 = (yn + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(295)
			tmp15->resize(tmp16,tmp17,(int)0);
		}
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(297)
			int tmp15 = (yn + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			int _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(297)
			while((true)){
				HX_STACK_LINE(297)
				bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(297)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(297)
				if ((tmp17)){
					HX_STACK_LINE(297)
					break;
				}
				HX_STACK_LINE(297)
				int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(297)
				int y = tmp18;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(298)
				bool tmp19 = (y == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(298)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(298)
				if ((tmp19)){
					HX_STACK_LINE(298)
					tmp20 = by0;
				}
				else{
					HX_STACK_LINE(298)
					bool tmp21 = (y <= yn);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(298)
					if ((tmp21)){
						HX_STACK_LINE(298)
						Float tmp22 = by0;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(298)
						Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								bool tmp24 = (cell != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(298)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(298)
								if ((tmp24)){
									HX_STACK_LINE(298)
									tmp25 = cell->zpp_disp;
								}
								else{
									HX_STACK_LINE(298)
									tmp25 = false;
								}
								HX_STACK_LINE(298)
								if ((tmp25)){
									HX_STACK_LINE(298)
									::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(298)
									::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(298)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(298)
								bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(298)
								if ((tmp24)){
									HX_STACK_LINE(298)
									_this->_validate();
								}
							}
							HX_STACK_LINE(298)
							tmp23 = cell->zpp_inner->y;
						}
						HX_STACK_LINE(298)
						int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(298)
						Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(298)
						tmp20 = (tmp22 + tmp25);
					}
					else{
						HX_STACK_LINE(298)
						tmp20 = by1;
					}
				}
				HX_STACK_LINE(298)
				Float yc = tmp20;		HX_STACK_VAR(yc,"yc");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(299)
					int tmp21 = (xn + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(299)
					int _g2 = tmp21;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(299)
					while((true)){
						HX_STACK_LINE(299)
						bool tmp22 = (_g3 < _g2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(299)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(299)
						if ((tmp23)){
							HX_STACK_LINE(299)
							break;
						}
						HX_STACK_LINE(299)
						int tmp24 = (_g3)++;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(299)
						int x = tmp24;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(300)
						bool tmp25 = (x == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(300)
						Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(300)
						if ((tmp25)){
							HX_STACK_LINE(300)
							tmp26 = bx0;
						}
						else{
							HX_STACK_LINE(300)
							bool tmp27 = (x <= xn);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(300)
							if ((tmp27)){
								HX_STACK_LINE(300)
								Float tmp28 = bx0;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(300)
								Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										bool tmp30 = (cell != null());		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(300)
										bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(300)
										if ((tmp30)){
											HX_STACK_LINE(300)
											tmp31 = cell->zpp_disp;
										}
										else{
											HX_STACK_LINE(300)
											tmp31 = false;
										}
										HX_STACK_LINE(300)
										if ((tmp31)){
											HX_STACK_LINE(300)
											::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(300)
											::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(300)
											HX_STACK_DO_THROW(tmp33);
										}
									}
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(300)
										bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(300)
										if ((tmp30)){
											HX_STACK_LINE(300)
											_this->_validate();
										}
									}
									HX_STACK_LINE(300)
									tmp29 = cell->zpp_inner->x;
								}
								HX_STACK_LINE(300)
								int tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(300)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(300)
								tmp26 = (tmp28 + tmp31);
							}
							else{
								HX_STACK_LINE(300)
								tmp26 = bx1;
							}
						}
						HX_STACK_LINE(300)
						Float xc = tmp26;		HX_STACK_VAR(xc,"xc");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							::zpp_nape::util::ZNPArray2_Float tmp27 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::isos;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(301)
							::zpp_nape::util::ZNPArray2_Float _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(301)
							Float tmp28 = xc;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(301)
							Float tmp29 = yc;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(301)
							Float tmp30 = iso(tmp28,tmp29).Cast< Float >();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(301)
							Float obj = tmp30;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(301)
							Array< Float > tmp31 = _this->list;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(301)
							int tmp32 = (y * _this->width);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(301)
							int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(301)
							int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(301)
							Float tmp35 = obj;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(301)
							tmp31[tmp34] = tmp35;
						}
					}
				}
			}
		}
		HX_STACK_LINE(304)
		::zpp_nape::util::ZNPArray2_ZPP_GeomVert tmp15 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::ints;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(304)
		bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(304)
		if ((tmp16)){
			HX_STACK_LINE(305)
			int tmp17 = (xn + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(305)
			int tmp18 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(305)
			int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(305)
			::zpp_nape::util::ZNPArray2_ZPP_GeomVert tmp20 = ::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__new(tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(305)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::ints = tmp20;
		}
		else{
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPArray2_ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::ints;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(308)
			int tmp18 = (xn + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(308)
			int tmp19 = (int(yn) << int((int)1));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(308)
			int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(308)
			tmp17->resize(tmp18,tmp20,null());
		}
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_MarchSpan spans = null();		HX_STACK_VAR(spans,"spans");
		HX_STACK_LINE(311)
		bool tmp17 = combine;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(311)
		if ((tmp17)){
			HX_STACK_LINE(313)
			::zpp_nape::geom::ZPP_MarchSpan tmp18 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(313)
			bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(313)
			if ((tmp19)){
				HX_STACK_LINE(314)
				::zpp_nape::geom::ZPP_MarchSpan tmp20 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(314)
				spans = tmp20;
			}
			else{
				HX_STACK_LINE(320)
				::zpp_nape::geom::ZPP_MarchSpan tmp20 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(320)
				spans = tmp20;
				HX_STACK_LINE(321)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = spans->next;
				HX_STACK_LINE(322)
				spans->next = null();
			}
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				spans->out = false;
				HX_STACK_LINE(327)
				spans->rank = (int)0;
			}
		}
		HX_STACK_LINE(330)
		Float py = by0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(331)
			while((true)){
				HX_STACK_LINE(331)
				bool tmp18 = (_g < yn);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(331)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(331)
				if ((tmp19)){
					HX_STACK_LINE(331)
					break;
				}
				HX_STACK_LINE(331)
				int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(331)
				int y = tmp20;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(332)
				Float y0 = py;		HX_STACK_VAR(y0,"y0");
				HX_STACK_LINE(333)
				int tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(333)
				int tmp22 = (yn - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(333)
				bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(333)
				Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(333)
				if ((tmp23)){
					HX_STACK_LINE(333)
					tmp24 = by1;
				}
				else{
					HX_STACK_LINE(333)
					Float tmp25 = by0;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(333)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(333)
					{
						HX_STACK_LINE(333)
						{
							HX_STACK_LINE(333)
							bool tmp27 = (cell != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(333)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(333)
							if ((tmp27)){
								HX_STACK_LINE(333)
								tmp28 = cell->zpp_disp;
							}
							else{
								HX_STACK_LINE(333)
								tmp28 = false;
							}
							HX_STACK_LINE(333)
							if ((tmp28)){
								HX_STACK_LINE(333)
								::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(333)
								::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(333)
								HX_STACK_DO_THROW(tmp30);
							}
						}
						HX_STACK_LINE(333)
						{
							HX_STACK_LINE(333)
							::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(333)
							bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(333)
							if ((tmp27)){
								HX_STACK_LINE(333)
								_this->_validate();
							}
						}
						HX_STACK_LINE(333)
						tmp26 = cell->zpp_inner->y;
					}
					HX_STACK_LINE(333)
					int tmp27 = (y + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(333)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(333)
					tmp24 = (tmp25 + tmp28);
				}
				HX_STACK_LINE(333)
				Float y1 = tmp24;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(334)
				py = y1;
				HX_STACK_LINE(335)
				Float px = bx0;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(336)
				::zpp_nape::geom::ZPP_MarchPair pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						bool tmp25 = (_g1 < xn);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(337)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(337)
						if ((tmp26)){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(337)
						int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(337)
						int x = tmp27;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(338)
						Float x0 = px;		HX_STACK_VAR(x0,"x0");
						HX_STACK_LINE(339)
						int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(339)
						int tmp29 = (xn - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(339)
						bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(339)
						Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(339)
						if ((tmp30)){
							HX_STACK_LINE(339)
							tmp31 = bx1;
						}
						else{
							HX_STACK_LINE(339)
							Float tmp32 = bx0;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(339)
							Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(339)
							{
								HX_STACK_LINE(339)
								{
									HX_STACK_LINE(339)
									bool tmp34 = (cell != null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(339)
									bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(339)
									if ((tmp34)){
										HX_STACK_LINE(339)
										tmp35 = cell->zpp_disp;
									}
									else{
										HX_STACK_LINE(339)
										tmp35 = false;
									}
									HX_STACK_LINE(339)
									if ((tmp35)){
										HX_STACK_LINE(339)
										::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(339)
										::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(339)
										HX_STACK_DO_THROW(tmp37);
									}
								}
								HX_STACK_LINE(339)
								{
									HX_STACK_LINE(339)
									::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(339)
									bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(339)
									if ((tmp34)){
										HX_STACK_LINE(339)
										_this->_validate();
									}
								}
								HX_STACK_LINE(339)
								tmp33 = cell->zpp_inner->x;
							}
							HX_STACK_LINE(339)
							int tmp34 = (x + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(339)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(339)
							tmp31 = (tmp32 + tmp35);
						}
						HX_STACK_LINE(339)
						Float x1 = tmp31;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(340)
						px = x1;
						HX_STACK_LINE(341)
						bool tmp32 = (x == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(341)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(341)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(341)
						if ((tmp33)){
							HX_STACK_LINE(341)
							bool tmp35 = combine;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(341)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(341)
							tmp34 = !(tmp36);
						}
						else{
							HX_STACK_LINE(341)
							tmp34 = true;
						}
						HX_STACK_LINE(341)
						bool fstx = tmp34;		HX_STACK_VAR(fstx,"fstx");
						HX_STACK_LINE(342)
						bool tmp35 = (y == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(342)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(342)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(342)
						if ((tmp36)){
							HX_STACK_LINE(342)
							bool tmp38 = combine;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(342)
							bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(342)
							tmp37 = !(tmp39);
						}
						else{
							HX_STACK_LINE(342)
							tmp37 = true;
						}
						HX_STACK_LINE(342)
						bool fsty = tmp37;		HX_STACK_VAR(fsty,"fsty");
						HX_STACK_LINE(343)
						int tmp38 = x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(343)
						int tmp39 = (xn - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(343)
						bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(343)
						bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(343)
						bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(343)
						if ((tmp41)){
							HX_STACK_LINE(343)
							bool tmp43 = combine;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(343)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(343)
							tmp42 = !(tmp44);
						}
						else{
							HX_STACK_LINE(343)
							tmp42 = true;
						}
						HX_STACK_LINE(343)
						bool sndx = tmp42;		HX_STACK_VAR(sndx,"sndx");
						HX_STACK_LINE(344)
						int tmp43 = y;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(344)
						int tmp44 = (yn - (int)1);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(344)
						bool tmp45 = (tmp43 == tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(344)
						bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(344)
						bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(344)
						if ((tmp46)){
							HX_STACK_LINE(344)
							bool tmp48 = combine;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(344)
							bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(344)
							tmp47 = !(tmp49);
						}
						else{
							HX_STACK_LINE(344)
							tmp47 = true;
						}
						HX_STACK_LINE(344)
						bool sndy = tmp47;		HX_STACK_VAR(sndy,"sndy");
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_MarchingSquares tmp48 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(345)
						Dynamic tmp49 = iso;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(345)
						::zpp_nape::util::ZNPArray2_Float tmp50 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::isos;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(345)
						::zpp_nape::util::ZNPArray2_ZPP_GeomVert tmp51 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::ints;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(345)
						Float tmp52 = x0;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(345)
						Float tmp53 = y0;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(345)
						Float tmp54 = x1;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(345)
						Float tmp55 = y1;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(345)
						int tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(345)
						int tmp57 = y;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(345)
						bool tmp58 = fstx;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(345)
						bool tmp59 = fsty;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(345)
						bool tmp60 = sndx;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(345)
						bool tmp61 = sndy;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(345)
						int tmp62 = quality;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_MarchPair tmp63 = tmp48->marchSquare(tmp49,tmp50,tmp51,tmp52,tmp53,tmp54,tmp55,tmp56,tmp57,tmp58,tmp59,tmp60,tmp61,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_MarchPair pp = tmp63;		HX_STACK_VAR(pp,"pp");
						HX_STACK_LINE(346)
						bool tmp64 = (pp == null());		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(346)
						if ((tmp64)){
							HX_STACK_LINE(347)
							pre = null();
							HX_STACK_LINE(348)
							continue;
						}
						HX_STACK_LINE(350)
						bool tmp65 = combine;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(350)
						if ((tmp65)){
							HX_STACK_LINE(351)
							bool tmp66 = (pp->p2 != null());		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(351)
							bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(351)
							if ((tmp66)){
								HX_STACK_LINE(351)
								tmp67 = (pp->okey2 != (int)14);
							}
							else{
								HX_STACK_LINE(351)
								tmp67 = false;
							}
							HX_STACK_LINE(351)
							::zpp_nape::geom::ZPP_GeomVert tmp68;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(351)
							if ((tmp67)){
								HX_STACK_LINE(351)
								tmp68 = pp->p2;
							}
							else{
								HX_STACK_LINE(351)
								tmp68 = pp->p1;
							}
							HX_STACK_LINE(351)
							::zpp_nape::geom::ZPP_GeomVert pd = tmp68;		HX_STACK_VAR(pd,"pd");
							HX_STACK_LINE(352)
							bool tmp69 = (pd == pp->p2);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(352)
							int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(352)
							if ((tmp69)){
								HX_STACK_LINE(352)
								tmp70 = pp->okey2;
							}
							else{
								HX_STACK_LINE(352)
								tmp70 = pp->okey1;
							}
							HX_STACK_LINE(352)
							int tmp71 = (int(tmp70) & int((int)128));		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(352)
							bool tmp72 = (tmp71 == (int)0);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(352)
							::zpp_nape::geom::ZPP_GeomVert tmp73;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(352)
							if ((tmp72)){
								HX_STACK_LINE(352)
								tmp73 = pd->prev;
							}
							else{
								HX_STACK_LINE(352)
								tmp73 = pd->prev->prev;
							}
							HX_STACK_LINE(352)
							pp->pd = tmp73;
							HX_STACK_LINE(353)
							{
								HX_STACK_LINE(353)
								::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp74 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(353)
								::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = tmp74;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(353)
								Array< ::Dynamic > tmp75 = _this->list;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(353)
								int tmp76 = (y * _this->width);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(353)
								int tmp77 = x;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(353)
								int tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(353)
								::zpp_nape::geom::ZPP_MarchPair tmp79 = pp;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(353)
								tmp75[tmp78] = tmp79;
							}
							HX_STACK_LINE(354)
							bool tmp74 = (pre != null());		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(354)
							bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(354)
							if ((tmp74)){
								HX_STACK_LINE(354)
								int key = pp->key1;		HX_STACK_VAR(key,"key");
								HX_STACK_LINE(354)
								int tmp76 = (int(key) & int((int)1));		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(354)
								int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(354)
								int tmp78 = (int(key) & int((int)192));		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(354)
								int tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(354)
								int tmp80 = (int(tmp79) >> int((int)5));		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(354)
								int tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(354)
								int tmp82 = (int(tmp77) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(354)
								int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(354)
								int flag = tmp83;		HX_STACK_VAR(flag,"flag");
								HX_STACK_LINE(354)
								{
									HX_STACK_LINE(354)
									int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
									HX_STACK_LINE(354)
									int tmp84 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(354)
									int tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(354)
									bool tmp86 = (tmp85 != (int)0);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(354)
									bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(354)
									bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(354)
									if ((tmp88)){
										HX_STACK_LINE(354)
										(cnt)++;
									}
									HX_STACK_LINE(354)
									int tmp89 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(354)
									int tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(354)
									bool tmp91 = (tmp90 != (int)0);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(354)
									bool tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(354)
									bool tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(354)
									if ((tmp93)){
										HX_STACK_LINE(354)
										(cnt)++;
									}
									HX_STACK_LINE(354)
									int tmp94 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(354)
									int tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(354)
									bool tmp96 = (tmp95 != (int)0);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(354)
									bool tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(354)
									bool tmp98 = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(354)
									if ((tmp98)){
										HX_STACK_LINE(354)
										(cnt)++;
									}
									HX_STACK_LINE(354)
									tmp75 = (cnt >= (int)2);
								}
							}
							else{
								HX_STACK_LINE(354)
								tmp75 = false;
							}
							HX_STACK_LINE(354)
							if ((tmp75)){
								HX_STACK_LINE(363)
								::zpp_nape::geom::ZPP_MarchingSquares tmp76 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(363)
								::zpp_nape::geom::ZPP_MarchPair tmp77 = pre;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(363)
								::zpp_nape::geom::ZPP_MarchPair tmp78 = pp;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(363)
								tmp76->combLR(tmp77,tmp78);
								HX_STACK_LINE(364)
								pp->span1 = pre->spanr;
							}
							else{
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(376)
									::zpp_nape::geom::ZPP_MarchSpan tmp76 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(376)
									bool tmp77 = (tmp76 == null());		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(376)
									if ((tmp77)){
										HX_STACK_LINE(377)
										::zpp_nape::geom::ZPP_MarchSpan tmp78 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(377)
										pp->span1 = tmp78;
									}
									else{
										HX_STACK_LINE(383)
										::zpp_nape::geom::ZPP_MarchSpan tmp78 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(383)
										pp->span1 = tmp78;
										HX_STACK_LINE(384)
										::zpp_nape::geom::ZPP_MarchSpan tmp79 = pp->span1->next;		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(384)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = tmp79;
										HX_STACK_LINE(385)
										pp->span1->next = null();
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span1;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(390)
										_this->out = false;
										HX_STACK_LINE(390)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(392)
								pp->span1->next = spans;
								HX_STACK_LINE(393)
								spans = pp->span1;
							}
							HX_STACK_LINE(395)
							bool tmp76 = (pp->p2 != null());		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(395)
							if ((tmp76)){
								HX_STACK_LINE(396)
								{
									HX_STACK_LINE(397)
									::zpp_nape::geom::ZPP_MarchSpan tmp77 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(397)
									bool tmp78 = (tmp77 == null());		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(397)
									if ((tmp78)){
										HX_STACK_LINE(398)
										::zpp_nape::geom::ZPP_MarchSpan tmp79 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(398)
										pp->span2 = tmp79;
									}
									else{
										HX_STACK_LINE(404)
										::zpp_nape::geom::ZPP_MarchSpan tmp79 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(404)
										pp->span2 = tmp79;
										HX_STACK_LINE(405)
										::zpp_nape::geom::ZPP_MarchSpan tmp80 = pp->span2->next;		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(405)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = tmp80;
										HX_STACK_LINE(406)
										pp->span2->next = null();
									}
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span2;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(411)
										_this->out = false;
										HX_STACK_LINE(411)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(413)
								pp->span2->next = spans;
								HX_STACK_LINE(414)
								spans = pp->span2;
								HX_STACK_LINE(415)
								pp->spanr = pp->span2;
							}
							else{
								HX_STACK_LINE(417)
								pp->spanr = pp->span1;
							}
							HX_STACK_LINE(418)
							bool tmp77;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								int tmp78 = (int(pp->keyr) & int((int)28));		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(418)
								int tmp79 = (int(tmp78) >> int((int)2));		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(418)
								int flag = tmp79;		HX_STACK_VAR(flag,"flag");
								HX_STACK_LINE(418)
								{
									HX_STACK_LINE(418)
									int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
									HX_STACK_LINE(418)
									int tmp80 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(418)
									bool tmp81 = (tmp80 != (int)0);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(418)
									if ((tmp81)){
										HX_STACK_LINE(418)
										(cnt)++;
									}
									HX_STACK_LINE(418)
									int tmp82 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(418)
									bool tmp83 = (tmp82 != (int)0);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(418)
									if ((tmp83)){
										HX_STACK_LINE(418)
										(cnt)++;
									}
									HX_STACK_LINE(418)
									int tmp84 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(418)
									bool tmp85 = (tmp84 != (int)0);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(418)
									if ((tmp85)){
										HX_STACK_LINE(418)
										(cnt)++;
									}
									HX_STACK_LINE(418)
									tmp77 = (cnt >= (int)2);
								}
							}
							HX_STACK_LINE(418)
							if ((tmp77)){
								HX_STACK_LINE(418)
								pre = pp;
							}
							else{
								HX_STACK_LINE(419)
								pre = null();
							}
						}
						else{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_MarchingSquares tmp66 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(422)
							::nape::geom::GeomPolyList tmp67 = ret;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_GeomVert tmp68 = pp->p1;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(422)
							tmp66->output(tmp67,tmp68);
							HX_STACK_LINE(423)
							bool tmp69 = (pp->p2 != null());		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(423)
							if ((tmp69)){
								HX_STACK_LINE(423)
								::zpp_nape::geom::ZPP_MarchingSquares tmp70 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(423)
								::nape::geom::GeomPolyList tmp71 = ret;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(423)
								::zpp_nape::geom::ZPP_GeomVert tmp72 = pp->p2;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(423)
								tmp70->output(tmp71,tmp72);
							}
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(425)
								::zpp_nape::geom::ZPP_MarchPair o = pp;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(434)
								{
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_GeomVert tmp70 = o->pd = null();		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_GeomVert tmp71 = o->pr = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_GeomVert tmp72 = o->p2 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(434)
									o->p1 = tmp72;
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_MarchSpan tmp73 = o->spanr = null();		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(434)
									::zpp_nape::geom::ZPP_MarchSpan tmp74 = o->span2 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(434)
									o->span1 = tmp74;
								}
								HX_STACK_LINE(435)
								::zpp_nape::geom::ZPP_MarchPair tmp70 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(435)
								o->next = tmp70;
								HX_STACK_LINE(436)
								::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(444)
		bool tmp18 = combine;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(444)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(444)
		if ((tmp19)){
			HX_STACK_LINE(445)
			return null();
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			int _g = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(447)
			while((true)){
				HX_STACK_LINE(447)
				bool tmp20 = (_g < yn);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(447)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(447)
				if ((tmp21)){
					HX_STACK_LINE(447)
					break;
				}
				HX_STACK_LINE(447)
				int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(447)
				int y = tmp22;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(448)
				::zpp_nape::geom::ZPP_MarchSpan pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(449)
					while((true)){
						HX_STACK_LINE(449)
						bool tmp23 = (_g1 < xn);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(449)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(449)
						if ((tmp24)){
							HX_STACK_LINE(449)
							break;
						}
						HX_STACK_LINE(449)
						int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(449)
						int x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(450)
						::zpp_nape::geom::ZPP_MarchPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(450)
						{
							HX_STACK_LINE(450)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp27 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(450)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(450)
							Array< ::Dynamic > tmp28 = _this->list;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(450)
							int tmp29 = (y * _this->width);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(450)
							int tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(450)
							int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(450)
							tmp26 = tmp28->__get(tmp31).StaticCast< ::zpp_nape::geom::ZPP_MarchPair >();
						}
						HX_STACK_LINE(450)
						::zpp_nape::geom::ZPP_MarchPair b = tmp26;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(451)
						bool tmp27 = (b == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(451)
						if ((tmp27)){
							HX_STACK_LINE(452)
							pre = null();
							HX_STACK_LINE(453)
							continue;
						}
						HX_STACK_LINE(455)
						bool tmp28 = (b->p2 != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(455)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(455)
						if ((tmp28)){
							HX_STACK_LINE(455)
							tmp29 = (b->okey2 == (int)14);
						}
						else{
							HX_STACK_LINE(455)
							tmp29 = false;
						}
						HX_STACK_LINE(455)
						int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(455)
						if ((tmp29)){
							HX_STACK_LINE(455)
							tmp30 = b->okey2;
						}
						else{
							HX_STACK_LINE(455)
							tmp30 = b->okey1;
						}
						HX_STACK_LINE(455)
						int bkey = tmp30;		HX_STACK_VAR(bkey,"bkey");
						HX_STACK_LINE(456)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							int tmp32 = (int(bkey) & int((int)7));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(456)
							int flag = tmp32;		HX_STACK_VAR(flag,"flag");
							HX_STACK_LINE(456)
							{
								HX_STACK_LINE(456)
								int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
								HX_STACK_LINE(456)
								int tmp33 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(456)
								bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(456)
								if ((tmp34)){
									HX_STACK_LINE(456)
									(cnt)++;
								}
								HX_STACK_LINE(456)
								int tmp35 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(456)
								bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(456)
								if ((tmp36)){
									HX_STACK_LINE(456)
									(cnt)++;
								}
								HX_STACK_LINE(456)
								int tmp37 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(456)
								bool tmp38 = (tmp37 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(456)
								if ((tmp38)){
									HX_STACK_LINE(456)
									(cnt)++;
								}
								HX_STACK_LINE(456)
								tmp31 = (cnt >= (int)2);
							}
						}
						HX_STACK_LINE(456)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(456)
						if ((tmp32)){
							HX_STACK_LINE(457)
							pre = null();
							HX_STACK_LINE(458)
							continue;
						}
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_MarchPair tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp34 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(460)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = tmp34;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(460)
							Array< ::Dynamic > tmp35 = _this->list;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(460)
							int tmp36 = (y - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(460)
							int tmp37 = _this->width;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(460)
							int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(460)
							int tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(460)
							int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(460)
							tmp33 = tmp35->__get(tmp40).StaticCast< ::zpp_nape::geom::ZPP_MarchPair >();
						}
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_MarchPair a = tmp33;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(461)
						bool tmp34 = (a == null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(461)
						if ((tmp34)){
							HX_STACK_LINE(462)
							pre = null();
							HX_STACK_LINE(463)
							continue;
						}
						HX_STACK_LINE(465)
						bool tmp35 = (a->p2 != null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(465)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(465)
						if ((tmp35)){
							HX_STACK_LINE(465)
							tmp36 = (a->okey2 == (int)56);
						}
						else{
							HX_STACK_LINE(465)
							tmp36 = false;
						}
						HX_STACK_LINE(465)
						int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(465)
						if ((tmp36)){
							HX_STACK_LINE(465)
							tmp37 = a->okey2;
						}
						else{
							HX_STACK_LINE(465)
							tmp37 = a->okey1;
						}
						HX_STACK_LINE(465)
						int akey = tmp37;		HX_STACK_VAR(akey,"akey");
						HX_STACK_LINE(466)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(466)
						{
							HX_STACK_LINE(466)
							int tmp39 = (int(akey) & int((int)112));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(466)
							int tmp40 = (int(tmp39) >> int((int)4));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(466)
							int flag = tmp40;		HX_STACK_VAR(flag,"flag");
							HX_STACK_LINE(466)
							{
								HX_STACK_LINE(466)
								int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
								HX_STACK_LINE(466)
								int tmp41 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(466)
								bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(466)
								if ((tmp42)){
									HX_STACK_LINE(466)
									(cnt)++;
								}
								HX_STACK_LINE(466)
								int tmp43 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(466)
								bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(466)
								if ((tmp44)){
									HX_STACK_LINE(466)
									(cnt)++;
								}
								HX_STACK_LINE(466)
								int tmp45 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(466)
								bool tmp46 = (tmp45 != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(466)
								if ((tmp46)){
									HX_STACK_LINE(466)
									(cnt)++;
								}
								HX_STACK_LINE(466)
								tmp38 = (cnt >= (int)2);
							}
						}
						HX_STACK_LINE(466)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(466)
						if ((tmp39)){
							HX_STACK_LINE(467)
							pre = null();
							HX_STACK_LINE(468)
							continue;
						}
						HX_STACK_LINE(470)
						bool tmp40 = (a->p2 != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(470)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(470)
						if ((tmp40)){
							HX_STACK_LINE(470)
							tmp41 = (a->okey2 == (int)56);
						}
						else{
							HX_STACK_LINE(470)
							tmp41 = false;
						}
						HX_STACK_LINE(470)
						::zpp_nape::geom::ZPP_MarchSpan tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(470)
						if ((tmp41)){
							HX_STACK_LINE(470)
							tmp42 = a->span2;
						}
						else{
							HX_STACK_LINE(470)
							tmp42 = a->span1;
						}
						HX_STACK_LINE(470)
						::zpp_nape::geom::ZPP_MarchSpan ad = tmp42;		HX_STACK_VAR(ad,"ad");
						HX_STACK_LINE(471)
						bool tmp43 = (b->p2 != null());		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(471)
						bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(471)
						if ((tmp43)){
							HX_STACK_LINE(471)
							tmp44 = (b->okey2 == (int)14);
						}
						else{
							HX_STACK_LINE(471)
							tmp44 = false;
						}
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_MarchSpan tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(471)
						if ((tmp44)){
							HX_STACK_LINE(471)
							tmp45 = b->span2;
						}
						else{
							HX_STACK_LINE(471)
							tmp45 = b->span1;
						}
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_MarchSpan bu = tmp45;		HX_STACK_VAR(bu,"bu");
						HX_STACK_LINE(472)
						::zpp_nape::geom::ZPP_MarchSpan tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(472)
						{
							HX_STACK_LINE(473)
							bool tmp47 = (ad == ad->parent);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(473)
							if ((tmp47)){
								HX_STACK_LINE(473)
								tmp46 = ad;
							}
							else{
								HX_STACK_LINE(475)
								::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(476)
								::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(477)
								while((true)){
									HX_STACK_LINE(477)
									bool tmp48 = (obj != obj->parent);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(477)
									bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(477)
									if ((tmp49)){
										HX_STACK_LINE(477)
										break;
									}
									HX_STACK_LINE(478)
									::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(479)
									obj->parent = stack;
									HX_STACK_LINE(480)
									stack = obj;
									HX_STACK_LINE(481)
									obj = nxt;
								}
								HX_STACK_LINE(483)
								while((true)){
									HX_STACK_LINE(483)
									bool tmp48 = (stack != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(483)
									bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(483)
									if ((tmp49)){
										HX_STACK_LINE(483)
										break;
									}
									HX_STACK_LINE(484)
									::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(485)
									stack->parent = obj;
									HX_STACK_LINE(486)
									stack = nxt;
								}
								HX_STACK_LINE(488)
								tmp46 = obj;
							}
						}
						HX_STACK_LINE(490)
						::zpp_nape::geom::ZPP_MarchSpan tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(490)
						{
							HX_STACK_LINE(491)
							bool tmp48 = (bu == bu->parent);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(491)
							if ((tmp48)){
								HX_STACK_LINE(491)
								tmp47 = bu;
							}
							else{
								HX_STACK_LINE(493)
								::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(494)
								::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(495)
								while((true)){
									HX_STACK_LINE(495)
									bool tmp49 = (obj != obj->parent);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(495)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(495)
									if ((tmp50)){
										HX_STACK_LINE(495)
										break;
									}
									HX_STACK_LINE(496)
									::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(497)
									obj->parent = stack;
									HX_STACK_LINE(498)
									stack = obj;
									HX_STACK_LINE(499)
									obj = nxt;
								}
								HX_STACK_LINE(501)
								while((true)){
									HX_STACK_LINE(501)
									bool tmp49 = (stack != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(501)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(501)
									if ((tmp50)){
										HX_STACK_LINE(501)
										break;
									}
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(503)
									stack->parent = obj;
									HX_STACK_LINE(504)
									stack = nxt;
								}
								HX_STACK_LINE(506)
								tmp47 = obj;
							}
						}
						HX_STACK_LINE(472)
						bool tmp48 = (tmp46 == tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(472)
						if ((tmp48)){
							HX_STACK_LINE(509)
							bool tmp49 = (pre != bu);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(509)
							if ((tmp49)){
								HX_STACK_LINE(510)
								::zpp_nape::geom::ZPP_MarchingSquares tmp50 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(510)
								::zpp_nape::geom::ZPP_MarchPair tmp51 = a;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(510)
								::zpp_nape::geom::ZPP_MarchPair tmp52 = b;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(510)
								tmp50->combUD_virtual(tmp51,tmp52);
							}
						}
						else{
							HX_STACK_LINE(514)
							{
								HX_STACK_LINE(515)
								::zpp_nape::geom::ZPP_MarchSpan tmp49;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(515)
								{
									HX_STACK_LINE(516)
									bool tmp50 = (ad == ad->parent);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(516)
									if ((tmp50)){
										HX_STACK_LINE(516)
										tmp49 = ad;
									}
									else{
										HX_STACK_LINE(518)
										::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(519)
										::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
										HX_STACK_LINE(520)
										while((true)){
											HX_STACK_LINE(520)
											bool tmp51 = (obj != obj->parent);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(520)
											bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(520)
											if ((tmp52)){
												HX_STACK_LINE(520)
												break;
											}
											HX_STACK_LINE(521)
											::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(522)
											obj->parent = stack;
											HX_STACK_LINE(523)
											stack = obj;
											HX_STACK_LINE(524)
											obj = nxt;
										}
										HX_STACK_LINE(526)
										while((true)){
											HX_STACK_LINE(526)
											bool tmp51 = (stack != null());		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(526)
											bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(526)
											if ((tmp52)){
												HX_STACK_LINE(526)
												break;
											}
											HX_STACK_LINE(527)
											::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(528)
											stack->parent = obj;
											HX_STACK_LINE(529)
											stack = nxt;
										}
										HX_STACK_LINE(531)
										tmp49 = obj;
									}
								}
								HX_STACK_LINE(515)
								::zpp_nape::geom::ZPP_MarchSpan xr = tmp49;		HX_STACK_VAR(xr,"xr");
								HX_STACK_LINE(534)
								::zpp_nape::geom::ZPP_MarchSpan tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(534)
								{
									HX_STACK_LINE(535)
									bool tmp51 = (bu == bu->parent);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(535)
									if ((tmp51)){
										HX_STACK_LINE(535)
										tmp50 = bu;
									}
									else{
										HX_STACK_LINE(537)
										::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(538)
										::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
										HX_STACK_LINE(539)
										while((true)){
											HX_STACK_LINE(539)
											bool tmp52 = (obj != obj->parent);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(539)
											bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(539)
											if ((tmp53)){
												HX_STACK_LINE(539)
												break;
											}
											HX_STACK_LINE(540)
											::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(541)
											obj->parent = stack;
											HX_STACK_LINE(542)
											stack = obj;
											HX_STACK_LINE(543)
											obj = nxt;
										}
										HX_STACK_LINE(545)
										while((true)){
											HX_STACK_LINE(545)
											bool tmp52 = (stack != null());		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(545)
											bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(545)
											if ((tmp53)){
												HX_STACK_LINE(545)
												break;
											}
											HX_STACK_LINE(546)
											::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(547)
											stack->parent = obj;
											HX_STACK_LINE(548)
											stack = nxt;
										}
										HX_STACK_LINE(550)
										tmp50 = obj;
									}
								}
								HX_STACK_LINE(534)
								::zpp_nape::geom::ZPP_MarchSpan yr = tmp50;		HX_STACK_VAR(yr,"yr");
								HX_STACK_LINE(553)
								bool tmp51 = (xr != yr);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(553)
								if ((tmp51)){
									HX_STACK_LINE(554)
									bool tmp52 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(554)
									if ((tmp52)){
										HX_STACK_LINE(554)
										xr->parent = yr;
									}
									else{
										HX_STACK_LINE(555)
										bool tmp53 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(555)
										if ((tmp53)){
											HX_STACK_LINE(555)
											yr->parent = xr;
										}
										else{
											HX_STACK_LINE(557)
											yr->parent = xr;
											HX_STACK_LINE(558)
											(xr->rank)++;
										}
									}
								}
							}
							HX_STACK_LINE(562)
							::zpp_nape::geom::ZPP_MarchingSquares tmp49 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(562)
							::zpp_nape::geom::ZPP_MarchPair tmp50 = a;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(562)
							::zpp_nape::geom::ZPP_MarchPair tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(562)
							tmp49->combUD(tmp50,tmp51);
						}
						HX_STACK_LINE(564)
						bool tmp49 = (bu == b->span2);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(564)
						int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(564)
						if ((tmp49)){
							HX_STACK_LINE(564)
							tmp50 = b->okey2;
						}
						else{
							HX_STACK_LINE(564)
							tmp50 = b->okey1;
						}
						HX_STACK_LINE(564)
						int key = tmp50;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(565)
						int tmp51 = (int(key) & int((int)4));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(565)
						bool tmp52 = (tmp51 != (int)0);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(565)
						::zpp_nape::geom::ZPP_MarchSpan tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(565)
						if ((tmp52)){
							HX_STACK_LINE(565)
							tmp53 = bu;
						}
						else{
							HX_STACK_LINE(565)
							tmp53 = null();
						}
						HX_STACK_LINE(565)
						pre = tmp53;
					}
				}
			}
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(568)
			while((true)){
				HX_STACK_LINE(568)
				bool tmp20 = (_g < yn);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(568)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(568)
				if ((tmp21)){
					HX_STACK_LINE(568)
					break;
				}
				HX_STACK_LINE(568)
				int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(568)
				int y = tmp22;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(569)
				{
					HX_STACK_LINE(569)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(569)
					while((true)){
						HX_STACK_LINE(569)
						bool tmp23 = (_g1 < xn);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(569)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(569)
						if ((tmp24)){
							HX_STACK_LINE(569)
							break;
						}
						HX_STACK_LINE(569)
						int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(569)
						int x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(570)
						::zpp_nape::geom::ZPP_MarchPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(570)
						{
							HX_STACK_LINE(570)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp27 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(570)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(570)
							Array< ::Dynamic > tmp28 = _this->list;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(570)
							int tmp29 = (y * _this->width);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(570)
							int tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(570)
							int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(570)
							tmp26 = tmp28->__get(tmp31).StaticCast< ::zpp_nape::geom::ZPP_MarchPair >();
						}
						HX_STACK_LINE(570)
						::zpp_nape::geom::ZPP_MarchPair p = tmp26;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(571)
						bool tmp27 = (p == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(571)
						if ((tmp27)){
							HX_STACK_LINE(571)
							continue;
						}
						HX_STACK_LINE(572)
						::zpp_nape::geom::ZPP_MarchSpan tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(572)
						{
							HX_STACK_LINE(573)
							::zpp_nape::geom::ZPP_MarchSpan tmp29 = p->span1;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(573)
							::zpp_nape::geom::ZPP_MarchSpan tmp30 = p->span1->parent;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(573)
							bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(573)
							if ((tmp31)){
								HX_STACK_LINE(573)
								tmp28 = p->span1;
							}
							else{
								HX_STACK_LINE(575)
								::zpp_nape::geom::ZPP_MarchSpan obj = p->span1;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(576)
								::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(577)
								while((true)){
									HX_STACK_LINE(577)
									bool tmp32 = (obj != obj->parent);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(577)
									bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(577)
									if ((tmp33)){
										HX_STACK_LINE(577)
										break;
									}
									HX_STACK_LINE(578)
									::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(579)
									obj->parent = stack;
									HX_STACK_LINE(580)
									stack = obj;
									HX_STACK_LINE(581)
									obj = nxt;
								}
								HX_STACK_LINE(583)
								while((true)){
									HX_STACK_LINE(583)
									bool tmp32 = (stack != null());		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(583)
									bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(583)
									if ((tmp33)){
										HX_STACK_LINE(583)
										break;
									}
									HX_STACK_LINE(584)
									::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(585)
									stack->parent = obj;
									HX_STACK_LINE(586)
									stack = nxt;
								}
								HX_STACK_LINE(588)
								tmp28 = obj;
							}
						}
						HX_STACK_LINE(572)
						::zpp_nape::geom::ZPP_MarchSpan root = tmp28;		HX_STACK_VAR(root,"root");
						HX_STACK_LINE(591)
						bool tmp29 = root->out;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(591)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(591)
						if ((tmp30)){
							HX_STACK_LINE(592)
							root->out = true;
							HX_STACK_LINE(593)
							::zpp_nape::geom::ZPP_MarchingSquares tmp31 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(593)
							::nape::geom::GeomPolyList tmp32 = ret;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(593)
							::zpp_nape::geom::ZPP_GeomVert tmp33 = p->p1;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(593)
							tmp31->output(tmp32,tmp33);
						}
						HX_STACK_LINE(595)
						bool tmp31 = (p->p2 != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(595)
						if ((tmp31)){
							HX_STACK_LINE(596)
							::zpp_nape::geom::ZPP_MarchSpan tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(596)
							{
								HX_STACK_LINE(597)
								::zpp_nape::geom::ZPP_MarchSpan tmp33 = p->span2;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(597)
								::zpp_nape::geom::ZPP_MarchSpan tmp34 = p->span2->parent;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(597)
								bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(597)
								if ((tmp35)){
									HX_STACK_LINE(597)
									tmp32 = p->span2;
								}
								else{
									HX_STACK_LINE(599)
									::zpp_nape::geom::ZPP_MarchSpan obj = p->span2;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(600)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(601)
									while((true)){
										HX_STACK_LINE(601)
										bool tmp36 = (obj != obj->parent);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(601)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(601)
										if ((tmp37)){
											HX_STACK_LINE(601)
											break;
										}
										HX_STACK_LINE(602)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(603)
										obj->parent = stack;
										HX_STACK_LINE(604)
										stack = obj;
										HX_STACK_LINE(605)
										obj = nxt;
									}
									HX_STACK_LINE(607)
									while((true)){
										HX_STACK_LINE(607)
										bool tmp36 = (stack != null());		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(607)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(607)
										if ((tmp37)){
											HX_STACK_LINE(607)
											break;
										}
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(609)
										stack->parent = obj;
										HX_STACK_LINE(610)
										stack = nxt;
									}
									HX_STACK_LINE(612)
									tmp32 = obj;
								}
							}
							HX_STACK_LINE(596)
							root = tmp32;
							HX_STACK_LINE(615)
							bool tmp33 = root->out;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(615)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(615)
							if ((tmp34)){
								HX_STACK_LINE(616)
								root->out = true;
								HX_STACK_LINE(617)
								::zpp_nape::geom::ZPP_MarchingSquares tmp35 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(617)
								::nape::geom::GeomPolyList tmp36 = ret;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(617)
								::zpp_nape::geom::ZPP_GeomVert tmp37 = p->p2;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(617)
								tmp35->output(tmp36,tmp37);
							}
						}
						HX_STACK_LINE(620)
						{
							HX_STACK_LINE(621)
							::zpp_nape::geom::ZPP_MarchPair o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(630)
							{
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_GeomVert tmp32 = o->pd = null();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_GeomVert tmp33 = o->pr = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_GeomVert tmp34 = o->p2 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(630)
								o->p1 = tmp34;
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_MarchSpan tmp35 = o->spanr = null();		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(630)
								::zpp_nape::geom::ZPP_MarchSpan tmp36 = o->span2 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(630)
								o->span1 = tmp36;
							}
							HX_STACK_LINE(631)
							::zpp_nape::geom::ZPP_MarchPair tmp32 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(631)
							o->next = tmp32;
							HX_STACK_LINE(632)
							::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(637)
						{
							HX_STACK_LINE(637)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair tmp32 = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(637)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = tmp32;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(637)
							Array< ::Dynamic > tmp33 = _this->list;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(637)
							int tmp34 = (y * _this->width);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(637)
							int tmp35 = x;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(637)
							int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(637)
							tmp33[tmp36] = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(640)
		while((true)){
			HX_STACK_LINE(640)
			bool tmp20 = (spans != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(640)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(640)
			if ((tmp21)){
				HX_STACK_LINE(640)
				break;
			}
			HX_STACK_LINE(641)
			::zpp_nape::geom::ZPP_MarchSpan t = spans;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(642)
			spans = t->next;
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(644)
				::zpp_nape::geom::ZPP_MarchSpan o = t;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(653)
				o->parent = o;
				HX_STACK_LINE(654)
				::zpp_nape::geom::ZPP_MarchSpan tmp22 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(654)
				o->next = tmp22;
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ZPP_MarchingSquares_obj,run,(void))

Array< int > ZPP_MarchingSquares_obj::look_march;

Float ZPP_MarchingSquares_obj::ISO( Dynamic iso,Float x,Float y){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchingSquares","ISO",0x1c607ab8,"zpp_nape.geom.ZPP_MarchingSquares.ISO","zpp_nape/geom/MarchingSquares.hx",1928,0xc3305538)
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1929)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1929)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1929)
	Float tmp2 = iso(tmp,tmp1).Cast< Float >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1929)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_MarchingSquares_obj,ISO,return )


ZPP_MarchingSquares_obj::ZPP_MarchingSquares_obj()
{
}

Dynamic ZPP_MarchingSquares_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"comb") ) { return comb_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xlerp") ) { return xlerp_dyn(); }
		if (HX_FIELD_EQ(inName,"ylerp") ) { return ylerp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return output_dyn(); }
		if (HX_FIELD_EQ(inName,"linkup") ) { return linkup_dyn(); }
		if (HX_FIELD_EQ(inName,"combLR") ) { return combLR_dyn(); }
		if (HX_FIELD_EQ(inName,"combUD") ) { return combUD_dyn(); }
		if (HX_FIELD_EQ(inName,"combUp") ) { return combUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"linkleft") ) { return linkleft_dyn(); }
		if (HX_FIELD_EQ(inName,"linkdown") ) { return linkdown_dyn(); }
		if (HX_FIELD_EQ(inName,"combLeft") ) { return combLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"combDown") ) { return combDown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"linkright") ) { return linkright_dyn(); }
		if (HX_FIELD_EQ(inName,"combRight") ) { return combRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"marchSquare") ) { return marchSquare_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"combUD_virtual") ) { return combUD_virtual_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_MarchingSquares_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { outValue = me; return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map; return true;  }
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ISO") ) { outValue = ISO_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isos") ) { outValue = isos; return true;  }
		if (HX_FIELD_EQ(inName,"ints") ) { outValue = ints; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"look_march") ) { outValue = look_march; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchingSquares*/ ,(void *) &ZPP_MarchingSquares_obj::me,HX_HCSTRING("me","\x58","\x5f","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::util::ZNPArray2_Float*/ ,(void *) &ZPP_MarchingSquares_obj::isos,HX_HCSTRING("isos","\x8e","\x0b","\xbf","\x45")},
	{hx::fsObject /*::zpp_nape::util::ZNPArray2_ZPP_GeomVert*/ ,(void *) &ZPP_MarchingSquares_obj::ints,HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45")},
	{hx::fsObject /*::zpp_nape::util::ZNPArray2_ZPP_MarchPair*/ ,(void *) &ZPP_MarchingSquares_obj::map,HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Array< int >*/ ,(void *) &ZPP_MarchingSquares_obj::look_march,HX_HCSTRING("look_march","\xa3","\x43","\x78","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"),
	HX_HCSTRING("linkright","\xa2","\xc9","\x55","\x03"),
	HX_HCSTRING("linkleft","\x01","\xa5","\x67","\x0e"),
	HX_HCSTRING("linkdown","\x5c","\x95","\x25","\x09"),
	HX_HCSTRING("linkup","\xd5","\xf0","\xa4","\xec"),
	HX_HCSTRING("combLR","\xc7","\xfd","\x25","\xc7"),
	HX_HCSTRING("combUD","\x90","\x05","\x26","\xc7"),
	HX_HCSTRING("combUD_virtual","\x1c","\x0d","\xc8","\x0c"),
	HX_HCSTRING("combLeft","\xa8","\x01","\x05","\x5b"),
	HX_HCSTRING("combRight","\x1b","\x7f","\x69","\xc0"),
	HX_HCSTRING("combUp","\xbc","\x05","\x26","\xc7"),
	HX_HCSTRING("combDown","\x03","\xf2","\xc2","\x55"),
	HX_HCSTRING("comb","\x01","\xb9","\xc4","\x41"),
	HX_HCSTRING("marchSquare","\xc0","\xad","\x2c","\x3b"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("xlerp","\xef","\xae","\xc5","\x5f"),
	HX_HCSTRING("ylerp","\x70","\x43","\x2c","\xf3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

#endif

hx::Class ZPP_MarchingSquares_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("me","\x58","\x5f","\x00","\x00"),
	HX_HCSTRING("isos","\x8e","\x0b","\xbf","\x45"),
	HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("look_march","\xa3","\x43","\x78","\xc3"),
	HX_HCSTRING("ISO","\x25","\xad","\x37","\x00"),
	::String(null()) };

void ZPP_MarchingSquares_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_MarchingSquares","\x81","\x28","\xdc","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_MarchingSquares_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_MarchingSquares_obj >;
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

void ZPP_MarchingSquares_obj::__boot()
{
	me= ::zpp_nape::geom::ZPP_MarchingSquares_obj::__new();
	look_march= Array_obj< int >::__new().Add((int)-1).Add((int)224).Add((int)56).Add((int)216).Add((int)14).Add((int)-1).Add((int)54).Add((int)214).Add((int)131).Add((int)99).Add((int)-1).Add((int)91).Add((int)141).Add((int)109).Add((int)181).Add((int)85);
}

} // end namespace zpp_nape
} // end namespace geom
