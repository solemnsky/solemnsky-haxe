#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_PartitionVertex_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","new",0xa7a6988e,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.new","zpp_nape/util/RBTree.hx",1953,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1994)
	this->colour = (int)0;
	HX_STACK_LINE(1993)
	this->parent = null();
	HX_STACK_LINE(1992)
	this->next = null();
	HX_STACK_LINE(1991)
	this->prev = null();
	HX_STACK_LINE(1990)
	this->data = null();
	HX_STACK_LINE(1989)
	this->swapped = null();
	HX_STACK_LINE(1988)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_PartitionVertex_obj::~ZPP_Set_ZPP_PartitionVertex_obj() { }

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_PartitionVertex_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > ZPP_Set_ZPP_PartitionVertex_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > _result_ = new ZPP_Set_ZPP_PartitionVertex_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > _result_ = new ZPP_Set_ZPP_PartitionVertex_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_PartitionVertex_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","free",0x04defcbe,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.free","zpp_nape/util/RBTree.hx",1980,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1981)
		this->data = null();
		HX_STACK_LINE(1982)
		this->lt = null();
		HX_STACK_LINE(1983)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,free,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","alloc",0x594b5423,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.alloc","zpp_nape/util/RBTree.hx",1987,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,alloc,(void))

bool ZPP_Set_ZPP_PartitionVertex_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","verify",0x2a418c0b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.verify","zpp_nape/util/RBTree.hx",1996,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1997)
	{
		HX_STACK_LINE(2006)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2006)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2006)
		if ((tmp1)){
			HX_STACK_LINE(2007)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2007)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(2008)
			while((true)){
				HX_STACK_LINE(2008)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2008)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2008)
				if ((tmp4)){
					HX_STACK_LINE(2008)
					break;
				}
				HX_STACK_LINE(2008)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(2009)
			while((true)){
				HX_STACK_LINE(2009)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2009)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2009)
				if ((tmp4)){
					HX_STACK_LINE(2009)
					break;
				}
				HX_STACK_LINE(2010)
				::zpp_nape::geom::ZPP_PartitionVertex i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2011)
				{
					HX_STACK_LINE(2012)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(2013)
					{
						HX_STACK_LINE(2022)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2022)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2022)
						if ((tmp6)){
							HX_STACK_LINE(2023)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2023)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(2024)
							while((true)){
								HX_STACK_LINE(2024)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2024)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2024)
								if ((tmp9)){
									HX_STACK_LINE(2024)
									break;
								}
								HX_STACK_LINE(2024)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(2025)
							while((true)){
								HX_STACK_LINE(2025)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2025)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2025)
								if ((tmp9)){
									HX_STACK_LINE(2025)
									break;
								}
								HX_STACK_LINE(2026)
								::zpp_nape::geom::ZPP_PartitionVertex j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2027)
								{
									HX_STACK_LINE(2028)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(2028)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(2028)
									if ((tmp11)){
										HX_STACK_LINE(2029)
										::zpp_nape::geom::ZPP_PartitionVertex tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2029)
										::zpp_nape::geom::ZPP_PartitionVertex tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(2029)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(2029)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(2029)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(2029)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(2029)
										if ((tmp16)){
											HX_STACK_LINE(2029)
											::zpp_nape::geom::ZPP_PartitionVertex tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(2029)
											::zpp_nape::geom::ZPP_PartitionVertex tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(2029)
											::zpp_nape::geom::ZPP_PartitionVertex tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(2029)
											::zpp_nape::geom::ZPP_PartitionVertex tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2029)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(2029)
											tmp17 = false;
										}
										HX_STACK_LINE(2029)
										if ((tmp17)){
											HX_STACK_LINE(2029)
											return false;
										}
									}
									else{
										HX_STACK_LINE(2031)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2031)
										if ((tmp12)){
											HX_STACK_LINE(2031)
											prei = false;
										}
										else{
											HX_STACK_LINE(2033)
											::zpp_nape::geom::ZPP_PartitionVertex tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2033)
											::zpp_nape::geom::ZPP_PartitionVertex tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2033)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(2033)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(2033)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(2033)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(2033)
											if ((tmp17)){
												HX_STACK_LINE(2033)
												::zpp_nape::geom::ZPP_PartitionVertex tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(2033)
												::zpp_nape::geom::ZPP_PartitionVertex tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(2033)
												::zpp_nape::geom::ZPP_PartitionVertex tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(2033)
												::zpp_nape::geom::ZPP_PartitionVertex tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(2033)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(2033)
												tmp18 = false;
											}
											HX_STACK_LINE(2033)
											if ((tmp18)){
												HX_STACK_LINE(2033)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(2036)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2036)
								if ((tmp10)){
									HX_STACK_LINE(2037)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(2038)
									while((true)){
										HX_STACK_LINE(2038)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2038)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2038)
										if ((tmp12)){
											HX_STACK_LINE(2038)
											break;
										}
										HX_STACK_LINE(2038)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(2041)
									while((true)){
										HX_STACK_LINE(2041)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2041)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2041)
										if ((tmp11)){
											HX_STACK_LINE(2041)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2041)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2041)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(2041)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(2041)
											tmp12 = false;
										}
										HX_STACK_LINE(2041)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(2041)
										if ((tmp13)){
											HX_STACK_LINE(2041)
											break;
										}
										HX_STACK_LINE(2041)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(2042)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(2048)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2048)
				if ((tmp5)){
					HX_STACK_LINE(2049)
					set_ite = set_ite->next;
					HX_STACK_LINE(2050)
					while((true)){
						HX_STACK_LINE(2050)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2050)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2050)
						if ((tmp7)){
							HX_STACK_LINE(2050)
							break;
						}
						HX_STACK_LINE(2050)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2053)
					while((true)){
						HX_STACK_LINE(2053)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2053)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2053)
						if ((tmp6)){
							HX_STACK_LINE(2053)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2053)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2053)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2053)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(2053)
							tmp7 = false;
						}
						HX_STACK_LINE(2053)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2053)
						if ((tmp8)){
							HX_STACK_LINE(2053)
							break;
						}
						HX_STACK_LINE(2053)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2054)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2059)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,verify,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","empty",0xa791ea3b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.empty","zpp_nape/util/RBTree.hx",2061,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2062)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2062)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2062)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,empty,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","singular",0xab2979e9,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.singular","zpp_nape/util/RBTree.hx",2064,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2065)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2065)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2065)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2065)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2065)
	if ((tmp2)){
		HX_STACK_LINE(2065)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2065)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2065)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2065)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2065)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(2065)
		tmp3 = false;
	}
	HX_STACK_LINE(2065)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2065)
	if ((tmp3)){
		HX_STACK_LINE(2065)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2065)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2065)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2065)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(2065)
		tmp4 = false;
	}
	HX_STACK_LINE(2065)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,singular,return )

int ZPP_Set_ZPP_PartitionVertex_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","size",0x0d7000d3,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.size","zpp_nape/util/RBTree.hx",2067,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2068)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2069)
	{
		HX_STACK_LINE(2078)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2078)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2078)
		if ((tmp1)){
			HX_STACK_LINE(2079)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2079)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(2080)
			while((true)){
				HX_STACK_LINE(2080)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2080)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2080)
				if ((tmp4)){
					HX_STACK_LINE(2080)
					break;
				}
				HX_STACK_LINE(2080)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(2081)
			while((true)){
				HX_STACK_LINE(2081)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2081)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2081)
				if ((tmp4)){
					HX_STACK_LINE(2081)
					break;
				}
				HX_STACK_LINE(2082)
				::zpp_nape::geom::ZPP_PartitionVertex i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2083)
				(ret)++;
				HX_STACK_LINE(2084)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2084)
				if ((tmp5)){
					HX_STACK_LINE(2085)
					set_ite = set_ite->next;
					HX_STACK_LINE(2086)
					while((true)){
						HX_STACK_LINE(2086)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2086)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2086)
						if ((tmp7)){
							HX_STACK_LINE(2086)
							break;
						}
						HX_STACK_LINE(2086)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2089)
					while((true)){
						HX_STACK_LINE(2089)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2089)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2089)
						if ((tmp6)){
							HX_STACK_LINE(2089)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2089)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2089)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2089)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(2089)
							tmp7 = false;
						}
						HX_STACK_LINE(2089)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2089)
						if ((tmp8)){
							HX_STACK_LINE(2089)
							break;
						}
						HX_STACK_LINE(2089)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2090)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2095)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2095)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,size,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::has( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","has",0xa7a20788,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.has","zpp_nape/util/RBTree.hx",2097,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2098)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2098)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2098)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2098)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::find( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","find",0x04d8304b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.find","zpp_nape/util/RBTree.hx",2100,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2101)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2101)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2102)
	while((true)){
		HX_STACK_LINE(2102)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2102)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2102)
		if ((tmp1)){
			HX_STACK_LINE(2102)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(2102)
			tmp2 = false;
		}
		HX_STACK_LINE(2102)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2102)
		if ((tmp3)){
			HX_STACK_LINE(2102)
			break;
		}
		HX_STACK_LINE(2103)
		::zpp_nape::geom::ZPP_PartitionVertex tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2103)
		::zpp_nape::geom::ZPP_PartitionVertex tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2103)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2103)
		if ((tmp6)){
			HX_STACK_LINE(2103)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2104)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(2106)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2106)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,find,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::has_weak( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","has_weak",0x4f3423cf,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.has_weak","zpp_nape/util/RBTree.hx",2108,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2109)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2109)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2109)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2109)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::find_weak( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","find_weak",0x8c44582c,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.find_weak","zpp_nape/util/RBTree.hx",2111,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2112)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2112)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2113)
	while((true)){
		HX_STACK_LINE(2113)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2113)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2113)
		if ((tmp2)){
			HX_STACK_LINE(2113)
			break;
		}
		HX_STACK_LINE(2114)
		::zpp_nape::geom::ZPP_PartitionVertex tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2114)
		::zpp_nape::geom::ZPP_PartitionVertex tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2114)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2114)
		if ((tmp5)){
			HX_STACK_LINE(2114)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2115)
			::zpp_nape::geom::ZPP_PartitionVertex tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2115)
			::zpp_nape::geom::ZPP_PartitionVertex tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2115)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2115)
			if ((tmp8)){
				HX_STACK_LINE(2115)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(2116)
				break;
			}
		}
	}
	HX_STACK_LINE(2118)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2118)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,find_weak,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::lower_bound( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","lower_bound",0x5f6c8e6e,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.lower_bound","zpp_nape/util/RBTree.hx",2120,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2121)
	::zpp_nape::geom::ZPP_PartitionVertex tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2121)
	{
		HX_STACK_LINE(2122)
		::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2123)
		{
			HX_STACK_LINE(2132)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2132)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2132)
			if ((tmp2)){
				HX_STACK_LINE(2133)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2133)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(2134)
				while((true)){
					HX_STACK_LINE(2134)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2134)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2134)
					if ((tmp5)){
						HX_STACK_LINE(2134)
						break;
					}
					HX_STACK_LINE(2134)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(2135)
				while((true)){
					HX_STACK_LINE(2135)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2135)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2135)
					if ((tmp5)){
						HX_STACK_LINE(2135)
						break;
					}
					HX_STACK_LINE(2136)
					::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(2137)
					{
						HX_STACK_LINE(2138)
						::zpp_nape::geom::ZPP_PartitionVertex tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2138)
						::zpp_nape::geom::ZPP_PartitionVertex tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2138)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2138)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2138)
						if ((tmp9)){
							HX_STACK_LINE(2139)
							ret = elt;
							HX_STACK_LINE(2140)
							break;
						}
					}
					HX_STACK_LINE(2143)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2143)
					if ((tmp6)){
						HX_STACK_LINE(2144)
						set_ite = set_ite->next;
						HX_STACK_LINE(2145)
						while((true)){
							HX_STACK_LINE(2145)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2145)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2145)
							if ((tmp8)){
								HX_STACK_LINE(2145)
								break;
							}
							HX_STACK_LINE(2145)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(2148)
						while((true)){
							HX_STACK_LINE(2148)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2148)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2148)
							if ((tmp7)){
								HX_STACK_LINE(2148)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2148)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2148)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(2148)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(2148)
								tmp8 = false;
							}
							HX_STACK_LINE(2148)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2148)
							if ((tmp9)){
								HX_STACK_LINE(2148)
								break;
							}
							HX_STACK_LINE(2148)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(2149)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(2154)
		tmp = ret;
	}
	HX_STACK_LINE(2121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,lower_bound,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","first",0x385527de,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.first","zpp_nape/util/RBTree.hx",2157,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2166)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2166)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2167)
	while((true)){
		HX_STACK_LINE(2167)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2167)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2167)
		if ((tmp2)){
			HX_STACK_LINE(2167)
			break;
		}
		HX_STACK_LINE(2167)
		cur = cur->prev;
	}
	HX_STACK_LINE(2168)
	::zpp_nape::geom::ZPP_PartitionVertex tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2168)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,first,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","pop_front",0x78cadee9,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.pop_front","zpp_nape/util/RBTree.hx",2170,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2179)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2179)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2180)
	while((true)){
		HX_STACK_LINE(2180)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2180)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2180)
		if ((tmp2)){
			HX_STACK_LINE(2180)
			break;
		}
		HX_STACK_LINE(2180)
		cur = cur->prev;
	}
	HX_STACK_LINE(2181)
	::zpp_nape::geom::ZPP_PartitionVertex ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2182)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2182)
	this->remove_node(tmp1);
	HX_STACK_LINE(2183)
	::zpp_nape::geom::ZPP_PartitionVertex tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2183)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,pop_front,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","remove",0x8d8aa4d6,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.remove","zpp_nape/util/RBTree.hx",2185,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2186)
		::zpp_nape::geom::ZPP_PartitionVertex tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2186)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2186)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(2195)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2195)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","successor_node",0xb5ee190d,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.successor_node","zpp_nape/util/RBTree.hx",2197,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(2206)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2206)
	if ((tmp)){
		HX_STACK_LINE(2207)
		cur = cur->next;
		HX_STACK_LINE(2208)
		while((true)){
			HX_STACK_LINE(2208)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2208)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2208)
			if ((tmp2)){
				HX_STACK_LINE(2208)
				break;
			}
			HX_STACK_LINE(2208)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(2211)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2212)
		cur = cur->parent;
		HX_STACK_LINE(2213)
		while((true)){
			HX_STACK_LINE(2213)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2213)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2213)
			if ((tmp1)){
				HX_STACK_LINE(2213)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(2213)
				tmp2 = false;
			}
			HX_STACK_LINE(2213)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2213)
			if ((tmp3)){
				HX_STACK_LINE(2213)
				break;
			}
			HX_STACK_LINE(2214)
			pre = cur;
			HX_STACK_LINE(2215)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(2218)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2218)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","predecessor_node",0x4d06798a,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.predecessor_node","zpp_nape/util/RBTree.hx",2220,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(2229)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2229)
	if ((tmp)){
		HX_STACK_LINE(2230)
		cur = cur->prev;
		HX_STACK_LINE(2231)
		while((true)){
			HX_STACK_LINE(2231)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2231)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2231)
			if ((tmp2)){
				HX_STACK_LINE(2231)
				break;
			}
			HX_STACK_LINE(2231)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(2234)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2235)
		cur = cur->parent;
		HX_STACK_LINE(2236)
		while((true)){
			HX_STACK_LINE(2236)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2236)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2236)
			if ((tmp1)){
				HX_STACK_LINE(2236)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(2236)
				tmp2 = false;
			}
			HX_STACK_LINE(2236)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2236)
			if ((tmp3)){
				HX_STACK_LINE(2236)
				break;
			}
			HX_STACK_LINE(2237)
			pre = cur;
			HX_STACK_LINE(2238)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(2241)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2241)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,predecessor_node,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::successor( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","successor",0x32e9dc54,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.successor","zpp_nape/util/RBTree.hx",2243,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2252)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2252)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2252)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2252)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(2253)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2253)
	::zpp_nape::geom::ZPP_PartitionVertex tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2253)
	if ((tmp3)){
		HX_STACK_LINE(2253)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(2253)
		tmp4 = node->data;
	}
	HX_STACK_LINE(2253)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,successor,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::predecessor( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","predecessor",0xcf474cf7,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.predecessor","zpp_nape/util/RBTree.hx",2255,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2264)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2264)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2264)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2264)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(2265)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2265)
	::zpp_nape::geom::ZPP_PartitionVertex tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2265)
	if ((tmp3)){
		HX_STACK_LINE(2265)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(2265)
		tmp4 = node->data;
	}
	HX_STACK_LINE(2265)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,predecessor,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","remove_node",0x31dd394b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.remove_node","zpp_nape/util/RBTree.hx",2267,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(2276)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2276)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2276)
		if ((tmp)){
			HX_STACK_LINE(2276)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(2276)
			tmp1 = false;
		}
		HX_STACK_LINE(2276)
		if ((tmp1)){
			HX_STACK_LINE(2277)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(2278)
			while((true)){
				HX_STACK_LINE(2278)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2278)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2278)
				if ((tmp3)){
					HX_STACK_LINE(2278)
					break;
				}
				HX_STACK_LINE(2278)
				sm = sm->prev;
			}
			HX_STACK_LINE(2279)
			{
				HX_STACK_LINE(2280)
				::zpp_nape::geom::ZPP_PartitionVertex t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2281)
				cur->data = sm->data;
				HX_STACK_LINE(2282)
				sm->data = t;
			}
			HX_STACK_LINE(2284)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2284)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2284)
			if ((tmp3)){
				HX_STACK_LINE(2284)
				::zpp_nape::geom::ZPP_PartitionVertex tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2284)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2284)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(2285)
			cur = sm;
		}
		HX_STACK_LINE(2295)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2295)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2295)
		if ((tmp2)){
			HX_STACK_LINE(2295)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(2295)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(2295)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(2296)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2296)
		if ((tmp4)){
			HX_STACK_LINE(2297)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2297)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2297)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2297)
			if ((tmp6)){
				HX_STACK_LINE(2297)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(2297)
				tmp7 = true;
			}
			HX_STACK_LINE(2297)
			if ((tmp7)){
				HX_STACK_LINE(2297)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(2298)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2298)
				if ((tmp8)){
					HX_STACK_LINE(2299)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(2300)
					while((true)){
						HX_STACK_LINE(2301)
						(parent->colour)++;
						HX_STACK_LINE(2302)
						(parent->prev->colour)--;
						HX_STACK_LINE(2303)
						(parent->next->colour)--;
						HX_STACK_LINE(2304)
						{
							HX_STACK_LINE(2305)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(2306)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2306)
							if ((tmp9)){
								HX_STACK_LINE(2307)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2307)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(2308)
								break;
							}
							else{
								HX_STACK_LINE(2310)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2310)
								if ((tmp10)){
									HX_STACK_LINE(2311)
									{
										HX_STACK_LINE(2312)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2312)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2312)
										if ((tmp11)){
											HX_STACK_LINE(2312)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2312)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2312)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(2312)
											tmp12 = false;
										}
										HX_STACK_LINE(2312)
										if ((tmp12)){
											HX_STACK_LINE(2313)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2313)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(2314)
											break;
										}
									}
									HX_STACK_LINE(2317)
									{
										HX_STACK_LINE(2318)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2318)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2318)
										if ((tmp11)){
											HX_STACK_LINE(2318)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2318)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2318)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(2318)
											tmp12 = false;
										}
										HX_STACK_LINE(2318)
										if ((tmp12)){
											HX_STACK_LINE(2319)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2319)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(2320)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(2325)
						{
							HX_STACK_LINE(2326)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(2327)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2327)
							if ((tmp9)){
								HX_STACK_LINE(2328)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2328)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(2329)
								break;
							}
							else{
								HX_STACK_LINE(2331)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2331)
								if ((tmp10)){
									HX_STACK_LINE(2332)
									{
										HX_STACK_LINE(2333)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2333)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2333)
										if ((tmp11)){
											HX_STACK_LINE(2333)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2333)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2333)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(2333)
											tmp12 = false;
										}
										HX_STACK_LINE(2333)
										if ((tmp12)){
											HX_STACK_LINE(2334)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2334)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(2335)
											break;
										}
									}
									HX_STACK_LINE(2338)
									{
										HX_STACK_LINE(2339)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2339)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2339)
										if ((tmp11)){
											HX_STACK_LINE(2339)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2339)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2339)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(2339)
											tmp12 = false;
										}
										HX_STACK_LINE(2339)
										if ((tmp12)){
											HX_STACK_LINE(2340)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2340)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(2341)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(2346)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2346)
						if ((tmp9)){
							HX_STACK_LINE(2347)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2347)
							if ((tmp10)){
								HX_STACK_LINE(2348)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(2351)
								parent = parent->parent;
								HX_STACK_LINE(2352)
								continue;
							}
						}
						HX_STACK_LINE(2355)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(2359)
		{
			HX_STACK_LINE(2360)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(2361)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2361)
			if ((tmp5)){
				HX_STACK_LINE(2362)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(2364)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2364)
				if ((tmp6)){
					HX_STACK_LINE(2364)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(2365)
					par->next = child;
				}
			}
			HX_STACK_LINE(2366)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2366)
			if ((tmp6)){
				HX_STACK_LINE(2366)
				child->parent = par;
			}
		}
		HX_STACK_LINE(2368)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2368)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2368)
		cur->parent = tmp6;
		HX_STACK_LINE(2369)
		{
			HX_STACK_LINE(2370)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2379)
			{
				HX_STACK_LINE(2379)
				o->data = null();
				HX_STACK_LINE(2379)
				o->lt = null();
				HX_STACK_LINE(2379)
				o->swapped = null();
			}
			HX_STACK_LINE(2380)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2380)
			o->next = tmp7;
			HX_STACK_LINE(2381)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,remove_node,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","clear",0x8013213b,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.clear","zpp_nape/util/RBTree.hx",2388,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2388)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2388)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2388)
		if ((tmp1)){
			HX_STACK_LINE(2388)
			Dynamic();
		}
		else{
			HX_STACK_LINE(2388)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2388)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2388)
			while((true)){
				HX_STACK_LINE(2388)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2388)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2388)
				if ((tmp4)){
					HX_STACK_LINE(2388)
					break;
				}
				HX_STACK_LINE(2388)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2388)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2388)
				if ((tmp5)){
					HX_STACK_LINE(2388)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(2388)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2388)
					if ((tmp7)){
						HX_STACK_LINE(2388)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(2388)
						::zpp_nape::geom::ZPP_PartitionVertex tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2388)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(2388)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2388)
						if ((tmp9)){
							HX_STACK_LINE(2388)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2388)
							if ((tmp10)){
								HX_STACK_LINE(2388)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(2388)
								ret->next = null();
							}
							HX_STACK_LINE(2388)
							cur->parent = null();
						}
						HX_STACK_LINE(2388)
						{
							HX_STACK_LINE(2388)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2388)
							{
								HX_STACK_LINE(2388)
								o->data = null();
								HX_STACK_LINE(2388)
								o->lt = null();
								HX_STACK_LINE(2388)
								o->swapped = null();
							}
							HX_STACK_LINE(2388)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2388)
							o->next = tmp10;
							HX_STACK_LINE(2388)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2388)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(2388)
				cur = tmp6;
			}
			HX_STACK_LINE(2388)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,clear,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","clear_with",0xbb0d1aca,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.clear_with","zpp_nape/util/RBTree.hx",2391,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(2392)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2392)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2392)
		if ((tmp1)){
			HX_STACK_LINE(2392)
			return null();
		}
		else{
			HX_STACK_LINE(2394)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2394)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2395)
			while((true)){
				HX_STACK_LINE(2395)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2395)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2395)
				if ((tmp4)){
					HX_STACK_LINE(2395)
					break;
				}
				HX_STACK_LINE(2395)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2395)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2395)
				if ((tmp5)){
					HX_STACK_LINE(2395)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(2395)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2395)
					if ((tmp7)){
						HX_STACK_LINE(2395)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(2395)
						::zpp_nape::geom::ZPP_PartitionVertex tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2395)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(2395)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(2395)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2395)
						if ((tmp9)){
							HX_STACK_LINE(2395)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2395)
							if ((tmp10)){
								HX_STACK_LINE(2395)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(2395)
								ret->next = null();
							}
							HX_STACK_LINE(2395)
							cur->parent = null();
						}
						HX_STACK_LINE(2395)
						{
							HX_STACK_LINE(2395)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2395)
							{
								HX_STACK_LINE(2395)
								o->data = null();
								HX_STACK_LINE(2395)
								o->lt = null();
								HX_STACK_LINE(2395)
								o->swapped = null();
							}
							HX_STACK_LINE(2395)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2395)
							o->next = tmp10;
							HX_STACK_LINE(2395)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2395)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(2395)
				cur = tmp6;
			}
			HX_STACK_LINE(2396)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","clear_node",0xb51eaec6,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.clear_node","zpp_nape/util/RBTree.hx",2400,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(2409)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2409)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(2410)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2411)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2411)
	if ((tmp1)){
		HX_STACK_LINE(2412)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2412)
		if ((tmp2)){
			HX_STACK_LINE(2412)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(2413)
			ret->next = null();
		}
		HX_STACK_LINE(2414)
		node->parent = null();
	}
	HX_STACK_LINE(2416)
	{
		HX_STACK_LINE(2417)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2426)
		{
			HX_STACK_LINE(2426)
			o->data = null();
			HX_STACK_LINE(2426)
			o->lt = null();
			HX_STACK_LINE(2426)
			o->swapped = null();
		}
		HX_STACK_LINE(2427)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2427)
		o->next = tmp2;
		HX_STACK_LINE(2428)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2433)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2433)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_PartitionVertex_obj,clear_node,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","__fix_neg_red",0x15c41d86,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.__fix_neg_red","zpp_nape/util/RBTree.hx",2435,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(2436)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(2437)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2437)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2437)
		if ((tmp)){
			HX_STACK_LINE(2438)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(2439)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(2440)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(2441)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(2442)
			nl->colour = (int)0;
			HX_STACK_LINE(2443)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2443)
			negred->colour = tmp2;
			HX_STACK_LINE(2444)
			{
				HX_STACK_LINE(2445)
				negred->next = trl;
				HX_STACK_LINE(2446)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2446)
				if ((tmp3)){
					HX_STACK_LINE(2446)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(2448)
			{
				HX_STACK_LINE(2449)
				::zpp_nape::geom::ZPP_PartitionVertex t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2450)
				parent->data = nr->data;
				HX_STACK_LINE(2451)
				nr->data = t;
			}
			HX_STACK_LINE(2453)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2453)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2453)
			if ((tmp4)){
				HX_STACK_LINE(2453)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2453)
				::zpp_nape::geom::ZPP_PartitionVertex tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2453)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(2454)
			{
				HX_STACK_LINE(2455)
				nr->prev = trr;
				HX_STACK_LINE(2456)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2456)
				if ((tmp5)){
					HX_STACK_LINE(2456)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(2458)
			{
				HX_STACK_LINE(2459)
				nr->next = parent->next;
				HX_STACK_LINE(2460)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2460)
				if ((tmp5)){
					HX_STACK_LINE(2460)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(2462)
			{
				HX_STACK_LINE(2463)
				parent->next = nr;
				HX_STACK_LINE(2464)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2464)
				if ((tmp5)){
					HX_STACK_LINE(2464)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(2466)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(2469)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(2470)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(2471)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(2472)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(2473)
			nl->colour = (int)0;
			HX_STACK_LINE(2474)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2474)
			negred->colour = tmp2;
			HX_STACK_LINE(2475)
			{
				HX_STACK_LINE(2476)
				negred->prev = trl;
				HX_STACK_LINE(2477)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2477)
				if ((tmp3)){
					HX_STACK_LINE(2477)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(2479)
			{
				HX_STACK_LINE(2480)
				::zpp_nape::geom::ZPP_PartitionVertex t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2481)
				parent->data = nr->data;
				HX_STACK_LINE(2482)
				nr->data = t;
			}
			HX_STACK_LINE(2484)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2484)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2484)
			if ((tmp4)){
				HX_STACK_LINE(2484)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2484)
				::zpp_nape::geom::ZPP_PartitionVertex tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2484)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(2485)
			{
				HX_STACK_LINE(2486)
				nr->next = trr;
				HX_STACK_LINE(2487)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2487)
				if ((tmp5)){
					HX_STACK_LINE(2487)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(2489)
			{
				HX_STACK_LINE(2490)
				nr->prev = parent->prev;
				HX_STACK_LINE(2491)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2491)
				if ((tmp5)){
					HX_STACK_LINE(2491)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(2493)
			{
				HX_STACK_LINE(2494)
				parent->prev = nr;
				HX_STACK_LINE(2495)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2495)
				if ((tmp5)){
					HX_STACK_LINE(2495)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(2497)
			tmp1 = nl;
		}
		HX_STACK_LINE(2437)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(2499)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2499)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2499)
		if ((tmp2)){
			HX_STACK_LINE(2499)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2499)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2499)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(2499)
			tmp3 = false;
		}
		HX_STACK_LINE(2499)
		if ((tmp3)){
			HX_STACK_LINE(2499)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2499)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(2500)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2500)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2500)
			if ((tmp4)){
				HX_STACK_LINE(2500)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2500)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2500)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(2500)
				tmp5 = false;
			}
			HX_STACK_LINE(2500)
			if ((tmp5)){
				HX_STACK_LINE(2500)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2500)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","__fix_dbl_red",0x23dc4b64,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.__fix_dbl_red","zpp_nape/util/RBTree.hx",2503,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(2503)
		while((true)){
			HX_STACK_LINE(2504)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(2505)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(2506)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2506)
			if ((tmp)){
				HX_STACK_LINE(2507)
				par->colour = (int)1;
				HX_STACK_LINE(2508)
				break;
			}
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(2511)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2511)
			if ((tmp1)){
				HX_STACK_LINE(2512)
				n3 = g;
				HX_STACK_LINE(2513)
				t4 = g->next;
				HX_STACK_LINE(2514)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2514)
				if ((tmp2)){
					HX_STACK_LINE(2515)
					n1 = x;
					HX_STACK_LINE(2516)
					n2 = par;
					HX_STACK_LINE(2517)
					t1 = x->prev;
					HX_STACK_LINE(2518)
					t2 = x->next;
					HX_STACK_LINE(2519)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(2522)
					n1 = par;
					HX_STACK_LINE(2523)
					n2 = x;
					HX_STACK_LINE(2524)
					t1 = par->prev;
					HX_STACK_LINE(2525)
					t2 = x->prev;
					HX_STACK_LINE(2526)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(2530)
				n1 = g;
				HX_STACK_LINE(2531)
				t1 = g->prev;
				HX_STACK_LINE(2532)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2532)
				if ((tmp2)){
					HX_STACK_LINE(2533)
					n2 = x;
					HX_STACK_LINE(2534)
					n3 = par;
					HX_STACK_LINE(2535)
					t2 = x->prev;
					HX_STACK_LINE(2536)
					t3 = x->next;
					HX_STACK_LINE(2537)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(2540)
					n2 = par;
					HX_STACK_LINE(2541)
					n3 = x;
					HX_STACK_LINE(2542)
					t2 = par->prev;
					HX_STACK_LINE(2543)
					t3 = x->prev;
					HX_STACK_LINE(2544)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(2547)
			{
				HX_STACK_LINE(2548)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(2549)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2549)
				if ((tmp2)){
					HX_STACK_LINE(2550)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(2552)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2552)
					if ((tmp3)){
						HX_STACK_LINE(2552)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(2553)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(2554)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2554)
				if ((tmp3)){
					HX_STACK_LINE(2554)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(2556)
			{
				HX_STACK_LINE(2557)
				n1->prev = t1;
				HX_STACK_LINE(2558)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2558)
				if ((tmp2)){
					HX_STACK_LINE(2558)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(2560)
			{
				HX_STACK_LINE(2561)
				n1->next = t2;
				HX_STACK_LINE(2562)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2562)
				if ((tmp2)){
					HX_STACK_LINE(2562)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(2564)
			{
				HX_STACK_LINE(2565)
				n2->prev = n1;
				HX_STACK_LINE(2566)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2566)
				if ((tmp2)){
					HX_STACK_LINE(2566)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(2568)
			{
				HX_STACK_LINE(2569)
				n2->next = n3;
				HX_STACK_LINE(2570)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2570)
				if ((tmp2)){
					HX_STACK_LINE(2570)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(2572)
			{
				HX_STACK_LINE(2573)
				n3->prev = t3;
				HX_STACK_LINE(2574)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2574)
				if ((tmp2)){
					HX_STACK_LINE(2574)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(2576)
			{
				HX_STACK_LINE(2577)
				n3->next = t4;
				HX_STACK_LINE(2578)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2578)
				if ((tmp2)){
					HX_STACK_LINE(2578)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(2580)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2580)
			n2->colour = tmp2;
			HX_STACK_LINE(2581)
			n1->colour = (int)1;
			HX_STACK_LINE(2582)
			n3->colour = (int)1;
			HX_STACK_LINE(2583)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2583)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2583)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2583)
			if ((tmp5)){
				HX_STACK_LINE(2583)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2583)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(2584)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2584)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2584)
				if ((tmp6)){
					HX_STACK_LINE(2584)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2584)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2584)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(2584)
					tmp7 = false;
				}
				HX_STACK_LINE(2584)
				if ((tmp7)){
					HX_STACK_LINE(2585)
					x = n2;
					HX_STACK_LINE(2586)
					continue;
				}
			}
			HX_STACK_LINE(2588)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_PartitionVertex_obj::try_insert_bool( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","try_insert_bool",0x7ee1e71a,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.try_insert_bool","zpp_nape/util/RBTree.hx",2591,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2592)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2593)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2594)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2594)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2594)
	if ((tmp1)){
		HX_STACK_LINE(2595)
		{
			HX_STACK_LINE(2596)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2596)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2596)
			if ((tmp3)){
				HX_STACK_LINE(2597)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2597)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(2603)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2603)
				x = tmp4;
				HX_STACK_LINE(2604)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
				HX_STACK_LINE(2605)
				x->next = null();
			}
			HX_STACK_LINE(2610)
			Dynamic();
		}
		HX_STACK_LINE(2612)
		x->data = obj;
		HX_STACK_LINE(2613)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2616)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2616)
		cur = tmp2;
		HX_STACK_LINE(2617)
		while((true)){
			HX_STACK_LINE(2618)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2618)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2618)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2618)
			if ((tmp5)){
				HX_STACK_LINE(2619)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2619)
				if ((tmp6)){
					HX_STACK_LINE(2620)
					{
						HX_STACK_LINE(2621)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2621)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2621)
						if ((tmp8)){
							HX_STACK_LINE(2622)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2622)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(2628)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2628)
							x = tmp9;
							HX_STACK_LINE(2629)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
							HX_STACK_LINE(2630)
							x->next = null();
						}
						HX_STACK_LINE(2635)
						Dynamic();
					}
					HX_STACK_LINE(2637)
					x->data = obj;
					HX_STACK_LINE(2638)
					cur->prev = x;
					HX_STACK_LINE(2639)
					x->parent = cur;
					HX_STACK_LINE(2640)
					break;
				}
				else{
					HX_STACK_LINE(2642)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2644)
				::zpp_nape::geom::ZPP_PartitionVertex tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2644)
				::zpp_nape::geom::ZPP_PartitionVertex tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2644)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2644)
				if ((tmp8)){
					HX_STACK_LINE(2645)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2645)
					if ((tmp9)){
						HX_STACK_LINE(2646)
						{
							HX_STACK_LINE(2647)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2647)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2647)
							if ((tmp11)){
								HX_STACK_LINE(2648)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2648)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(2654)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2654)
								x = tmp12;
								HX_STACK_LINE(2655)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
								HX_STACK_LINE(2656)
								x->next = null();
							}
							HX_STACK_LINE(2661)
							Dynamic();
						}
						HX_STACK_LINE(2663)
						x->data = obj;
						HX_STACK_LINE(2664)
						cur->next = x;
						HX_STACK_LINE(2665)
						x->parent = cur;
						HX_STACK_LINE(2666)
						break;
					}
					else{
						HX_STACK_LINE(2668)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(2670)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2673)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2673)
	if ((tmp2)){
		HX_STACK_LINE(2673)
		return false;
	}
	else{
		HX_STACK_LINE(2675)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2675)
		if ((tmp3)){
			HX_STACK_LINE(2675)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(2677)
			x->colour = (int)0;
			HX_STACK_LINE(2678)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2678)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2678)
			if ((tmp5)){
				HX_STACK_LINE(2678)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2678)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(2680)
		return true;
	}
	HX_STACK_LINE(2673)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::try_insert( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","try_insert",0x9d92128f,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.try_insert","zpp_nape/util/RBTree.hx",2683,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2684)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2685)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2686)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2686)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2686)
	if ((tmp1)){
		HX_STACK_LINE(2687)
		{
			HX_STACK_LINE(2688)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2688)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2688)
			if ((tmp3)){
				HX_STACK_LINE(2689)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2689)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(2695)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2695)
				x = tmp4;
				HX_STACK_LINE(2696)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
				HX_STACK_LINE(2697)
				x->next = null();
			}
			HX_STACK_LINE(2702)
			Dynamic();
		}
		HX_STACK_LINE(2704)
		x->data = obj;
		HX_STACK_LINE(2705)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2708)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2708)
		cur = tmp2;
		HX_STACK_LINE(2709)
		while((true)){
			HX_STACK_LINE(2710)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2710)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2710)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2710)
			if ((tmp5)){
				HX_STACK_LINE(2711)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2711)
				if ((tmp6)){
					HX_STACK_LINE(2712)
					{
						HX_STACK_LINE(2713)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2713)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2713)
						if ((tmp8)){
							HX_STACK_LINE(2714)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2714)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(2720)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2720)
							x = tmp9;
							HX_STACK_LINE(2721)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
							HX_STACK_LINE(2722)
							x->next = null();
						}
						HX_STACK_LINE(2727)
						Dynamic();
					}
					HX_STACK_LINE(2729)
					x->data = obj;
					HX_STACK_LINE(2730)
					cur->prev = x;
					HX_STACK_LINE(2731)
					x->parent = cur;
					HX_STACK_LINE(2732)
					break;
				}
				else{
					HX_STACK_LINE(2734)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2736)
				::zpp_nape::geom::ZPP_PartitionVertex tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2736)
				::zpp_nape::geom::ZPP_PartitionVertex tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2736)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2736)
				if ((tmp8)){
					HX_STACK_LINE(2737)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2737)
					if ((tmp9)){
						HX_STACK_LINE(2738)
						{
							HX_STACK_LINE(2739)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2739)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2739)
							if ((tmp11)){
								HX_STACK_LINE(2740)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2740)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(2746)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2746)
								x = tmp12;
								HX_STACK_LINE(2747)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
								HX_STACK_LINE(2748)
								x->next = null();
							}
							HX_STACK_LINE(2753)
							Dynamic();
						}
						HX_STACK_LINE(2755)
						x->data = obj;
						HX_STACK_LINE(2756)
						cur->next = x;
						HX_STACK_LINE(2757)
						x->parent = cur;
						HX_STACK_LINE(2758)
						break;
					}
					else{
						HX_STACK_LINE(2760)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(2762)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2765)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2765)
	if ((tmp2)){
		HX_STACK_LINE(2765)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2765)
		return tmp3;
	}
	else{
		HX_STACK_LINE(2767)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2767)
		if ((tmp3)){
			HX_STACK_LINE(2767)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(2769)
			x->colour = (int)0;
			HX_STACK_LINE(2770)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2770)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2770)
			if ((tmp5)){
				HX_STACK_LINE(2770)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2770)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(2772)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2772)
		return tmp4;
	}
	HX_STACK_LINE(2765)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::insert( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","insert",0x26df4bcb,"zpp_nape.util.ZPP_Set_ZPP_PartitionVertex.insert","zpp_nape/util/RBTree.hx",2775,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2784)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2785)
	{
		HX_STACK_LINE(2786)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2786)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2786)
		if ((tmp1)){
			HX_STACK_LINE(2787)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2787)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(2793)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2793)
			x = tmp2;
			HX_STACK_LINE(2794)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
			HX_STACK_LINE(2795)
			x->next = null();
		}
		HX_STACK_LINE(2800)
		Dynamic();
	}
	HX_STACK_LINE(2802)
	x->data = obj;
	HX_STACK_LINE(2803)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2803)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2803)
	if ((tmp1)){
		HX_STACK_LINE(2803)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2805)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2805)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2806)
		while((true)){
			HX_STACK_LINE(2807)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2807)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2807)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2807)
			if ((tmp5)){
				HX_STACK_LINE(2808)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2808)
				if ((tmp6)){
					HX_STACK_LINE(2809)
					cur->prev = x;
					HX_STACK_LINE(2810)
					x->parent = cur;
					HX_STACK_LINE(2811)
					break;
				}
				else{
					HX_STACK_LINE(2813)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2816)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2816)
				if ((tmp6)){
					HX_STACK_LINE(2817)
					cur->next = x;
					HX_STACK_LINE(2818)
					x->parent = cur;
					HX_STACK_LINE(2819)
					break;
				}
				else{
					HX_STACK_LINE(2821)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(2825)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2825)
	if ((tmp2)){
		HX_STACK_LINE(2825)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(2827)
		x->colour = (int)0;
		HX_STACK_LINE(2828)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2828)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2828)
		if ((tmp4)){
			HX_STACK_LINE(2828)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2828)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(2838)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2838)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;


ZPP_Set_ZPP_PartitionVertex_obj::ZPP_Set_ZPP_PartitionVertex_obj()
{
}

void ZPP_Set_ZPP_PartitionVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_PartitionVertex);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_PartitionVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { return lt; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		if (HX_FIELD_EQ(inName,"verify") ) { return verify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { return swapped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"singular") ) { return singular_dyn(); }
		if (HX_FIELD_EQ(inName,"has_weak") ) { return has_weak_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"find_weak") ) { return find_weak_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_front") ) { return pop_front_dyn(); }
		if (HX_FIELD_EQ(inName,"successor") ) { return successor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clear_with") ) { return clear_with_dyn(); }
		if (HX_FIELD_EQ(inName,"clear_node") ) { return clear_node_dyn(); }
		if (HX_FIELD_EQ(inName,"try_insert") ) { return try_insert_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lower_bound") ) { return lower_bound_dyn(); }
		if (HX_FIELD_EQ(inName,"predecessor") ) { return predecessor_dyn(); }
		if (HX_FIELD_EQ(inName,"remove_node") ) { return remove_node_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__fix_neg_red") ) { return __fix_neg_red_dyn(); }
		if (HX_FIELD_EQ(inName,"__fix_dbl_red") ) { return __fix_dbl_red_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"successor_node") ) { return successor_node_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"try_insert_bool") ) { return try_insert_bool_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"predecessor_node") ) { return predecessor_node_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Set_ZPP_PartitionVertex_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_PartitionVertex_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_PartitionVertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_PartitionVertex_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(void *) &ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("lt","\x88","\x5e","\x00","\x00"),
	HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"),
	HX_HCSTRING("verify","\x79","\x83","\x3f","\xa1"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("singular","\xd7","\xa8","\x26","\x57"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("find","\x39","\xd0","\xbb","\x43"),
	HX_HCSTRING("has_weak","\xbd","\x52","\x31","\xfb"),
	HX_HCSTRING("find_weak","\x7e","\x39","\xd0","\x5d"),
	HX_HCSTRING("lower_bound","\x40","\xe8","\xb0","\x94"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("pop_front","\x3b","\xc0","\x56","\x4a"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("successor_node","\x7b","\x2e","\xf6","\x81"),
	HX_HCSTRING("predecessor_node","\x78","\x46","\x51","\x3b"),
	HX_HCSTRING("successor","\xa6","\xbd","\x75","\x04"),
	HX_HCSTRING("predecessor","\xc9","\xa6","\x8b","\x04"),
	HX_HCSTRING("remove_node","\x1d","\x93","\x21","\x67"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clear_with","\x38","\x61","\xe6","\x43"),
	HX_HCSTRING("clear_node","\x34","\xf5","\xf7","\x3d"),
	HX_HCSTRING("__fix_neg_red","\xd8","\x0f","\x30","\x68"),
	HX_HCSTRING("__fix_dbl_red","\xb6","\x3d","\x48","\x76"),
	HX_HCSTRING("try_insert_bool","\xec","\x91","\xec","\x39"),
	HX_HCSTRING("try_insert","\xfd","\x58","\x6b","\x26"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_PartitionVertex_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_PartitionVertex_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex","\x9c","\xf9","\x77","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_PartitionVertex_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_PartitionVertex_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_PartitionVertex_obj >;
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

void ZPP_Set_ZPP_PartitionVertex_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
