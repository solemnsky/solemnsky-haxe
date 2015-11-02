#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleSeg_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","new",0x4ea2ae23,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.new","zpp_nape/util/RBTree.hx",4620,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(4661)
	this->colour = (int)0;
	HX_STACK_LINE(4660)
	this->parent = null();
	HX_STACK_LINE(4659)
	this->next = null();
	HX_STACK_LINE(4658)
	this->prev = null();
	HX_STACK_LINE(4657)
	this->data = null();
	HX_STACK_LINE(4656)
	this->swapped = null();
	HX_STACK_LINE(4655)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_SimpleSeg_obj::~ZPP_Set_ZPP_SimpleSeg_obj() { }

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleSeg_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > ZPP_Set_ZPP_SimpleSeg_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > _result_ = new ZPP_Set_ZPP_SimpleSeg_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > _result_ = new ZPP_Set_ZPP_SimpleSeg_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_SimpleSeg_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","free",0x7a75c989,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.free","zpp_nape/util/RBTree.hx",4647,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4648)
		this->data = null();
		HX_STACK_LINE(4649)
		this->lt = null();
		HX_STACK_LINE(4650)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,free,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","alloc",0xc7a7b8f8,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.alloc","zpp_nape/util/RBTree.hx",4654,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,alloc,(void))

bool ZPP_Set_ZPP_SimpleSeg_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","verify",0x4cbd6196,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.verify","zpp_nape/util/RBTree.hx",4663,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4664)
	{
		HX_STACK_LINE(4673)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4673)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4673)
		if ((tmp1)){
			HX_STACK_LINE(4674)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4674)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(4675)
			while((true)){
				HX_STACK_LINE(4675)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4675)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4675)
				if ((tmp4)){
					HX_STACK_LINE(4675)
					break;
				}
				HX_STACK_LINE(4675)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(4676)
			while((true)){
				HX_STACK_LINE(4676)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4676)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4676)
				if ((tmp4)){
					HX_STACK_LINE(4676)
					break;
				}
				HX_STACK_LINE(4677)
				::zpp_nape::geom::ZPP_SimpleSeg i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4678)
				{
					HX_STACK_LINE(4679)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(4680)
					{
						HX_STACK_LINE(4689)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4689)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4689)
						if ((tmp6)){
							HX_STACK_LINE(4690)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(4690)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(4691)
							while((true)){
								HX_STACK_LINE(4691)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(4691)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(4691)
								if ((tmp9)){
									HX_STACK_LINE(4691)
									break;
								}
								HX_STACK_LINE(4691)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(4692)
							while((true)){
								HX_STACK_LINE(4692)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(4692)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(4692)
								if ((tmp9)){
									HX_STACK_LINE(4692)
									break;
								}
								HX_STACK_LINE(4693)
								::zpp_nape::geom::ZPP_SimpleSeg j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(4694)
								{
									HX_STACK_LINE(4695)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(4695)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(4695)
									if ((tmp11)){
										HX_STACK_LINE(4696)
										::zpp_nape::geom::ZPP_SimpleSeg tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4696)
										::zpp_nape::geom::ZPP_SimpleSeg tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(4696)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(4696)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(4696)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(4696)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(4696)
										if ((tmp16)){
											HX_STACK_LINE(4696)
											::zpp_nape::geom::ZPP_SimpleSeg tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(4696)
											::zpp_nape::geom::ZPP_SimpleSeg tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(4696)
											::zpp_nape::geom::ZPP_SimpleSeg tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(4696)
											::zpp_nape::geom::ZPP_SimpleSeg tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(4696)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(4696)
											tmp17 = false;
										}
										HX_STACK_LINE(4696)
										if ((tmp17)){
											HX_STACK_LINE(4696)
											return false;
										}
									}
									else{
										HX_STACK_LINE(4698)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4698)
										if ((tmp12)){
											HX_STACK_LINE(4698)
											prei = false;
										}
										else{
											HX_STACK_LINE(4700)
											::zpp_nape::geom::ZPP_SimpleSeg tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4700)
											::zpp_nape::geom::ZPP_SimpleSeg tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4700)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(4700)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(4700)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(4700)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(4700)
											if ((tmp17)){
												HX_STACK_LINE(4700)
												::zpp_nape::geom::ZPP_SimpleSeg tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(4700)
												::zpp_nape::geom::ZPP_SimpleSeg tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(4700)
												::zpp_nape::geom::ZPP_SimpleSeg tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(4700)
												::zpp_nape::geom::ZPP_SimpleSeg tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(4700)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(4700)
												tmp18 = false;
											}
											HX_STACK_LINE(4700)
											if ((tmp18)){
												HX_STACK_LINE(4700)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(4703)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4703)
								if ((tmp10)){
									HX_STACK_LINE(4704)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(4705)
									while((true)){
										HX_STACK_LINE(4705)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4705)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4705)
										if ((tmp12)){
											HX_STACK_LINE(4705)
											break;
										}
										HX_STACK_LINE(4705)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(4708)
									while((true)){
										HX_STACK_LINE(4708)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4708)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4708)
										if ((tmp11)){
											HX_STACK_LINE(4708)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4708)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4708)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(4708)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(4708)
											tmp12 = false;
										}
										HX_STACK_LINE(4708)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(4708)
										if ((tmp13)){
											HX_STACK_LINE(4708)
											break;
										}
										HX_STACK_LINE(4708)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(4709)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(4715)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4715)
				if ((tmp5)){
					HX_STACK_LINE(4716)
					set_ite = set_ite->next;
					HX_STACK_LINE(4717)
					while((true)){
						HX_STACK_LINE(4717)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4717)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4717)
						if ((tmp7)){
							HX_STACK_LINE(4717)
							break;
						}
						HX_STACK_LINE(4717)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(4720)
					while((true)){
						HX_STACK_LINE(4720)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4720)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4720)
						if ((tmp6)){
							HX_STACK_LINE(4720)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(4720)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4720)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4720)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(4720)
							tmp7 = false;
						}
						HX_STACK_LINE(4720)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(4720)
						if ((tmp8)){
							HX_STACK_LINE(4720)
							break;
						}
						HX_STACK_LINE(4720)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(4721)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(4726)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,verify,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","empty",0x15ee4f10,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.empty","zpp_nape/util/RBTree.hx",4728,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4729)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4729)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4729)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,empty,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","singular",0x446e0834,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.singular","zpp_nape/util/RBTree.hx",4731,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4732)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4732)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4732)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4732)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4732)
	if ((tmp2)){
		HX_STACK_LINE(4732)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4732)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(4732)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(4732)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(4732)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(4732)
		tmp3 = false;
	}
	HX_STACK_LINE(4732)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(4732)
	if ((tmp3)){
		HX_STACK_LINE(4732)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(4732)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(4732)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(4732)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(4732)
		tmp4 = false;
	}
	HX_STACK_LINE(4732)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,singular,return )

int ZPP_Set_ZPP_SimpleSeg_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","size",0x8306cd9e,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.size","zpp_nape/util/RBTree.hx",4734,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4735)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4736)
	{
		HX_STACK_LINE(4745)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4745)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4745)
		if ((tmp1)){
			HX_STACK_LINE(4746)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4746)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(4747)
			while((true)){
				HX_STACK_LINE(4747)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4747)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4747)
				if ((tmp4)){
					HX_STACK_LINE(4747)
					break;
				}
				HX_STACK_LINE(4747)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(4748)
			while((true)){
				HX_STACK_LINE(4748)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4748)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4748)
				if ((tmp4)){
					HX_STACK_LINE(4748)
					break;
				}
				HX_STACK_LINE(4749)
				::zpp_nape::geom::ZPP_SimpleSeg i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4750)
				(ret)++;
				HX_STACK_LINE(4751)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4751)
				if ((tmp5)){
					HX_STACK_LINE(4752)
					set_ite = set_ite->next;
					HX_STACK_LINE(4753)
					while((true)){
						HX_STACK_LINE(4753)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4753)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4753)
						if ((tmp7)){
							HX_STACK_LINE(4753)
							break;
						}
						HX_STACK_LINE(4753)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(4756)
					while((true)){
						HX_STACK_LINE(4756)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4756)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4756)
						if ((tmp6)){
							HX_STACK_LINE(4756)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(4756)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4756)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4756)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(4756)
							tmp7 = false;
						}
						HX_STACK_LINE(4756)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(4756)
						if ((tmp8)){
							HX_STACK_LINE(4756)
							break;
						}
						HX_STACK_LINE(4756)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(4757)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(4762)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4762)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,size,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::has( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","has",0x4e9e1d1d,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.has","zpp_nape/util/RBTree.hx",4764,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4765)
	::zpp_nape::geom::ZPP_SimpleSeg tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4765)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4765)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4765)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::find( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","find",0x7a6efd16,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.find","zpp_nape/util/RBTree.hx",4767,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4768)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4768)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4769)
	while((true)){
		HX_STACK_LINE(4769)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4769)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4769)
		if ((tmp1)){
			HX_STACK_LINE(4769)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(4769)
			tmp2 = false;
		}
		HX_STACK_LINE(4769)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4769)
		if ((tmp3)){
			HX_STACK_LINE(4769)
			break;
		}
		HX_STACK_LINE(4770)
		::zpp_nape::geom::ZPP_SimpleSeg tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4770)
		::zpp_nape::geom::ZPP_SimpleSeg tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(4770)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(4770)
		if ((tmp6)){
			HX_STACK_LINE(4770)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(4771)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(4773)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4773)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,find,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","has_weak",0xe878b21a,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.has_weak","zpp_nape/util/RBTree.hx",4775,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4776)
	::zpp_nape::geom::ZPP_SimpleSeg tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4776)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4776)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4776)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","find_weak",0x0efc4b81,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.find_weak","zpp_nape/util/RBTree.hx",4778,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4779)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4779)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4780)
	while((true)){
		HX_STACK_LINE(4780)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4780)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4780)
		if ((tmp2)){
			HX_STACK_LINE(4780)
			break;
		}
		HX_STACK_LINE(4781)
		::zpp_nape::geom::ZPP_SimpleSeg tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4781)
		::zpp_nape::geom::ZPP_SimpleSeg tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4781)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(4781)
		if ((tmp5)){
			HX_STACK_LINE(4781)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(4782)
			::zpp_nape::geom::ZPP_SimpleSeg tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4782)
			::zpp_nape::geom::ZPP_SimpleSeg tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(4782)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(4782)
			if ((tmp8)){
				HX_STACK_LINE(4782)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(4783)
				break;
			}
		}
	}
	HX_STACK_LINE(4785)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4785)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,find_weak,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","lower_bound",0xf687c103,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.lower_bound","zpp_nape/util/RBTree.hx",4787,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4788)
	::zpp_nape::geom::ZPP_SimpleSeg tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4788)
	{
		HX_STACK_LINE(4789)
		::zpp_nape::geom::ZPP_SimpleSeg ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4790)
		{
			HX_STACK_LINE(4799)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4799)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4799)
			if ((tmp2)){
				HX_STACK_LINE(4800)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4800)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(4801)
				while((true)){
					HX_STACK_LINE(4801)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4801)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4801)
					if ((tmp5)){
						HX_STACK_LINE(4801)
						break;
					}
					HX_STACK_LINE(4801)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(4802)
				while((true)){
					HX_STACK_LINE(4802)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4802)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4802)
					if ((tmp5)){
						HX_STACK_LINE(4802)
						break;
					}
					HX_STACK_LINE(4803)
					::zpp_nape::geom::ZPP_SimpleSeg elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(4804)
					{
						HX_STACK_LINE(4805)
						::zpp_nape::geom::ZPP_SimpleSeg tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4805)
						::zpp_nape::geom::ZPP_SimpleSeg tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4805)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(4805)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(4805)
						if ((tmp9)){
							HX_STACK_LINE(4806)
							ret = elt;
							HX_STACK_LINE(4807)
							break;
						}
					}
					HX_STACK_LINE(4810)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(4810)
					if ((tmp6)){
						HX_STACK_LINE(4811)
						set_ite = set_ite->next;
						HX_STACK_LINE(4812)
						while((true)){
							HX_STACK_LINE(4812)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(4812)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(4812)
							if ((tmp8)){
								HX_STACK_LINE(4812)
								break;
							}
							HX_STACK_LINE(4812)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(4815)
						while((true)){
							HX_STACK_LINE(4815)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(4815)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(4815)
							if ((tmp7)){
								HX_STACK_LINE(4815)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(4815)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4815)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(4815)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(4815)
								tmp8 = false;
							}
							HX_STACK_LINE(4815)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4815)
							if ((tmp9)){
								HX_STACK_LINE(4815)
								break;
							}
							HX_STACK_LINE(4815)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(4816)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(4821)
		tmp = ret;
	}
	HX_STACK_LINE(4788)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,lower_bound,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","first",0xa6b18cb3,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.first","zpp_nape/util/RBTree.hx",4824,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4833)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4833)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4834)
	while((true)){
		HX_STACK_LINE(4834)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4834)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4834)
		if ((tmp2)){
			HX_STACK_LINE(4834)
			break;
		}
		HX_STACK_LINE(4834)
		cur = cur->prev;
	}
	HX_STACK_LINE(4835)
	::zpp_nape::geom::ZPP_SimpleSeg tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4835)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,first,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","pop_front",0xfb82d23e,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.pop_front","zpp_nape/util/RBTree.hx",4837,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4846)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4846)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4847)
	while((true)){
		HX_STACK_LINE(4847)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4847)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4847)
		if ((tmp2)){
			HX_STACK_LINE(4847)
			break;
		}
		HX_STACK_LINE(4847)
		cur = cur->prev;
	}
	HX_STACK_LINE(4848)
	::zpp_nape::geom::ZPP_SimpleSeg ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4849)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4849)
	this->remove_node(tmp1);
	HX_STACK_LINE(4850)
	::zpp_nape::geom::ZPP_SimpleSeg tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4850)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,pop_front,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::remove( ::zpp_nape::geom::ZPP_SimpleSeg obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","remove",0xb0067a61,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.remove","zpp_nape/util/RBTree.hx",4852,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4853)
		::zpp_nape::geom::ZPP_SimpleSeg tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4853)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4853)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(4862)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4862)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","successor_node",0xb0daf198,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.successor_node","zpp_nape/util/RBTree.hx",4864,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(4873)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4873)
	if ((tmp)){
		HX_STACK_LINE(4874)
		cur = cur->next;
		HX_STACK_LINE(4875)
		while((true)){
			HX_STACK_LINE(4875)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4875)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4875)
			if ((tmp2)){
				HX_STACK_LINE(4875)
				break;
			}
			HX_STACK_LINE(4875)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(4878)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4879)
		cur = cur->parent;
		HX_STACK_LINE(4880)
		while((true)){
			HX_STACK_LINE(4880)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4880)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4880)
			if ((tmp1)){
				HX_STACK_LINE(4880)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(4880)
				tmp2 = false;
			}
			HX_STACK_LINE(4880)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4880)
			if ((tmp3)){
				HX_STACK_LINE(4880)
				break;
			}
			HX_STACK_LINE(4881)
			pre = cur;
			HX_STACK_LINE(4882)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4885)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4885)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","predecessor_node",0x7f42cad5,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.predecessor_node","zpp_nape/util/RBTree.hx",4887,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(4896)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4896)
	if ((tmp)){
		HX_STACK_LINE(4897)
		cur = cur->prev;
		HX_STACK_LINE(4898)
		while((true)){
			HX_STACK_LINE(4898)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4898)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4898)
			if ((tmp2)){
				HX_STACK_LINE(4898)
				break;
			}
			HX_STACK_LINE(4898)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(4901)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4902)
		cur = cur->parent;
		HX_STACK_LINE(4903)
		while((true)){
			HX_STACK_LINE(4903)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4903)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4903)
			if ((tmp1)){
				HX_STACK_LINE(4903)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(4903)
				tmp2 = false;
			}
			HX_STACK_LINE(4903)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4903)
			if ((tmp3)){
				HX_STACK_LINE(4903)
				break;
			}
			HX_STACK_LINE(4904)
			pre = cur;
			HX_STACK_LINE(4905)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4908)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4908)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,predecessor_node,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::successor( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","successor",0xb5a1cfa9,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.successor","zpp_nape/util/RBTree.hx",4910,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4919)
	::zpp_nape::geom::ZPP_SimpleSeg tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4919)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4919)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4919)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4920)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4920)
	::zpp_nape::geom::ZPP_SimpleSeg tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(4920)
	if ((tmp3)){
		HX_STACK_LINE(4920)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(4920)
		tmp4 = node->data;
	}
	HX_STACK_LINE(4920)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,successor,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","predecessor",0x66627f8c,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.predecessor","zpp_nape/util/RBTree.hx",4922,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4931)
	::zpp_nape::geom::ZPP_SimpleSeg tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4931)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4931)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4931)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4932)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4932)
	::zpp_nape::geom::ZPP_SimpleSeg tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(4932)
	if ((tmp3)){
		HX_STACK_LINE(4932)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(4932)
		tmp4 = node->data;
	}
	HX_STACK_LINE(4932)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,predecessor,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","remove_node",0xc8f86be0,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.remove_node","zpp_nape/util/RBTree.hx",4934,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(4943)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4943)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4943)
		if ((tmp)){
			HX_STACK_LINE(4943)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(4943)
			tmp1 = false;
		}
		HX_STACK_LINE(4943)
		if ((tmp1)){
			HX_STACK_LINE(4944)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(4945)
			while((true)){
				HX_STACK_LINE(4945)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4945)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4945)
				if ((tmp3)){
					HX_STACK_LINE(4945)
					break;
				}
				HX_STACK_LINE(4945)
				sm = sm->prev;
			}
			HX_STACK_LINE(4946)
			{
				HX_STACK_LINE(4947)
				::zpp_nape::geom::ZPP_SimpleSeg t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(4948)
				cur->data = sm->data;
				HX_STACK_LINE(4949)
				sm->data = t;
			}
			HX_STACK_LINE(4951)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4951)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4951)
			if ((tmp3)){
				HX_STACK_LINE(4951)
				::zpp_nape::geom::ZPP_SimpleSeg tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4951)
				::zpp_nape::geom::ZPP_SimpleSeg tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4951)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(4952)
			cur = sm;
		}
		HX_STACK_LINE(4962)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4962)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4962)
		if ((tmp2)){
			HX_STACK_LINE(4962)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(4962)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(4962)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4963)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4963)
		if ((tmp4)){
			HX_STACK_LINE(4964)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4964)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4964)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(4964)
			if ((tmp6)){
				HX_STACK_LINE(4964)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(4964)
				tmp7 = true;
			}
			HX_STACK_LINE(4964)
			if ((tmp7)){
				HX_STACK_LINE(4964)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4965)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(4965)
				if ((tmp8)){
					HX_STACK_LINE(4966)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(4967)
					while((true)){
						HX_STACK_LINE(4968)
						(parent->colour)++;
						HX_STACK_LINE(4969)
						(parent->prev->colour)--;
						HX_STACK_LINE(4970)
						(parent->next->colour)--;
						HX_STACK_LINE(4971)
						{
							HX_STACK_LINE(4972)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4973)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4973)
							if ((tmp9)){
								HX_STACK_LINE(4974)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4974)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(4975)
								break;
							}
							else{
								HX_STACK_LINE(4977)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4977)
								if ((tmp10)){
									HX_STACK_LINE(4978)
									{
										HX_STACK_LINE(4979)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4979)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4979)
										if ((tmp11)){
											HX_STACK_LINE(4979)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4979)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4979)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(4979)
											tmp12 = false;
										}
										HX_STACK_LINE(4979)
										if ((tmp12)){
											HX_STACK_LINE(4980)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4980)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(4981)
											break;
										}
									}
									HX_STACK_LINE(4984)
									{
										HX_STACK_LINE(4985)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4985)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4985)
										if ((tmp11)){
											HX_STACK_LINE(4985)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4985)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4985)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(4985)
											tmp12 = false;
										}
										HX_STACK_LINE(4985)
										if ((tmp12)){
											HX_STACK_LINE(4986)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4986)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(4987)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(4992)
						{
							HX_STACK_LINE(4993)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4994)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4994)
							if ((tmp9)){
								HX_STACK_LINE(4995)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4995)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(4996)
								break;
							}
							else{
								HX_STACK_LINE(4998)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4998)
								if ((tmp10)){
									HX_STACK_LINE(4999)
									{
										HX_STACK_LINE(5000)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5000)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5000)
										if ((tmp11)){
											HX_STACK_LINE(5000)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5000)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5000)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(5000)
											tmp12 = false;
										}
										HX_STACK_LINE(5000)
										if ((tmp12)){
											HX_STACK_LINE(5001)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5001)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(5002)
											break;
										}
									}
									HX_STACK_LINE(5005)
									{
										HX_STACK_LINE(5006)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5006)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5006)
										if ((tmp11)){
											HX_STACK_LINE(5006)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5006)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5006)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(5006)
											tmp12 = false;
										}
										HX_STACK_LINE(5006)
										if ((tmp12)){
											HX_STACK_LINE(5007)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5007)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(5008)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(5013)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(5013)
						if ((tmp9)){
							HX_STACK_LINE(5014)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5014)
							if ((tmp10)){
								HX_STACK_LINE(5015)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(5018)
								parent = parent->parent;
								HX_STACK_LINE(5019)
								continue;
							}
						}
						HX_STACK_LINE(5022)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(5026)
		{
			HX_STACK_LINE(5027)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5028)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5028)
			if ((tmp5)){
				HX_STACK_LINE(5029)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(5031)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5031)
				if ((tmp6)){
					HX_STACK_LINE(5031)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(5032)
					par->next = child;
				}
			}
			HX_STACK_LINE(5033)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5033)
			if ((tmp6)){
				HX_STACK_LINE(5033)
				child->parent = par;
			}
		}
		HX_STACK_LINE(5035)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(5035)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(5035)
		cur->parent = tmp6;
		HX_STACK_LINE(5036)
		{
			HX_STACK_LINE(5037)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5046)
			{
				HX_STACK_LINE(5046)
				o->data = null();
				HX_STACK_LINE(5046)
				o->lt = null();
				HX_STACK_LINE(5046)
				o->swapped = null();
			}
			HX_STACK_LINE(5047)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(5047)
			o->next = tmp7;
			HX_STACK_LINE(5048)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,remove_node,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","clear",0xee6f8610,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.clear","zpp_nape/util/RBTree.hx",5055,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5055)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5055)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5055)
		if ((tmp1)){
			HX_STACK_LINE(5055)
			Dynamic();
		}
		else{
			HX_STACK_LINE(5055)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5055)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5055)
			while((true)){
				HX_STACK_LINE(5055)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5055)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5055)
				if ((tmp4)){
					HX_STACK_LINE(5055)
					break;
				}
				HX_STACK_LINE(5055)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5055)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5055)
				if ((tmp5)){
					HX_STACK_LINE(5055)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(5055)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(5055)
					if ((tmp7)){
						HX_STACK_LINE(5055)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(5055)
						::zpp_nape::geom::ZPP_SimpleSeg tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5055)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(5055)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(5055)
						if ((tmp9)){
							HX_STACK_LINE(5055)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5055)
							if ((tmp10)){
								HX_STACK_LINE(5055)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(5055)
								ret->next = null();
							}
							HX_STACK_LINE(5055)
							cur->parent = null();
						}
						HX_STACK_LINE(5055)
						{
							HX_STACK_LINE(5055)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5055)
							{
								HX_STACK_LINE(5055)
								o->data = null();
								HX_STACK_LINE(5055)
								o->lt = null();
								HX_STACK_LINE(5055)
								o->swapped = null();
							}
							HX_STACK_LINE(5055)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5055)
							o->next = tmp10;
							HX_STACK_LINE(5055)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5055)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(5055)
				cur = tmp6;
			}
			HX_STACK_LINE(5055)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","clear_with",0x994a11d5,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.clear_with","zpp_nape/util/RBTree.hx",5058,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(5059)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5059)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5059)
		if ((tmp1)){
			HX_STACK_LINE(5059)
			return null();
		}
		else{
			HX_STACK_LINE(5061)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5061)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5062)
			while((true)){
				HX_STACK_LINE(5062)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5062)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5062)
				if ((tmp4)){
					HX_STACK_LINE(5062)
					break;
				}
				HX_STACK_LINE(5062)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5062)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5062)
				if ((tmp5)){
					HX_STACK_LINE(5062)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(5062)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(5062)
					if ((tmp7)){
						HX_STACK_LINE(5062)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(5062)
						::zpp_nape::geom::ZPP_SimpleSeg tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5062)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(5062)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(5062)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(5062)
						if ((tmp9)){
							HX_STACK_LINE(5062)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5062)
							if ((tmp10)){
								HX_STACK_LINE(5062)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(5062)
								ret->next = null();
							}
							HX_STACK_LINE(5062)
							cur->parent = null();
						}
						HX_STACK_LINE(5062)
						{
							HX_STACK_LINE(5062)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5062)
							{
								HX_STACK_LINE(5062)
								o->data = null();
								HX_STACK_LINE(5062)
								o->lt = null();
								HX_STACK_LINE(5062)
								o->swapped = null();
							}
							HX_STACK_LINE(5062)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5062)
							o->next = tmp10;
							HX_STACK_LINE(5062)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5062)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(5062)
				cur = tmp6;
			}
			HX_STACK_LINE(5063)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","clear_node",0x935ba5d1,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.clear_node","zpp_nape/util/RBTree.hx",5067,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(5076)
	::zpp_nape::geom::ZPP_SimpleSeg tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5076)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(5077)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5078)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5078)
	if ((tmp1)){
		HX_STACK_LINE(5079)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5079)
		if ((tmp2)){
			HX_STACK_LINE(5079)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(5080)
			ret->next = null();
		}
		HX_STACK_LINE(5081)
		node->parent = null();
	}
	HX_STACK_LINE(5083)
	{
		HX_STACK_LINE(5084)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5093)
		{
			HX_STACK_LINE(5093)
			o->data = null();
			HX_STACK_LINE(5093)
			o->lt = null();
			HX_STACK_LINE(5093)
			o->swapped = null();
		}
		HX_STACK_LINE(5094)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5094)
		o->next = tmp2;
		HX_STACK_LINE(5095)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5100)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleSeg_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","__fix_neg_red",0x1000df5b,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.__fix_neg_red","zpp_nape/util/RBTree.hx",5102,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(5103)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(5104)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5104)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5104)
		if ((tmp)){
			HX_STACK_LINE(5105)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(5106)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(5107)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(5108)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(5109)
			nl->colour = (int)0;
			HX_STACK_LINE(5110)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5110)
			negred->colour = tmp2;
			HX_STACK_LINE(5111)
			{
				HX_STACK_LINE(5112)
				negred->next = trl;
				HX_STACK_LINE(5113)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5113)
				if ((tmp3)){
					HX_STACK_LINE(5113)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(5115)
			{
				HX_STACK_LINE(5116)
				::zpp_nape::geom::ZPP_SimpleSeg t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(5117)
				parent->data = nr->data;
				HX_STACK_LINE(5118)
				nr->data = t;
			}
			HX_STACK_LINE(5120)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5120)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5120)
			if ((tmp4)){
				HX_STACK_LINE(5120)
				::zpp_nape::geom::ZPP_SimpleSeg tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5120)
				::zpp_nape::geom::ZPP_SimpleSeg tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5120)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(5121)
			{
				HX_STACK_LINE(5122)
				nr->prev = trr;
				HX_STACK_LINE(5123)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5123)
				if ((tmp5)){
					HX_STACK_LINE(5123)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(5125)
			{
				HX_STACK_LINE(5126)
				nr->next = parent->next;
				HX_STACK_LINE(5127)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5127)
				if ((tmp5)){
					HX_STACK_LINE(5127)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(5129)
			{
				HX_STACK_LINE(5130)
				parent->next = nr;
				HX_STACK_LINE(5131)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5131)
				if ((tmp5)){
					HX_STACK_LINE(5131)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(5133)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(5136)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(5137)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(5138)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(5139)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(5140)
			nl->colour = (int)0;
			HX_STACK_LINE(5141)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5141)
			negred->colour = tmp2;
			HX_STACK_LINE(5142)
			{
				HX_STACK_LINE(5143)
				negred->prev = trl;
				HX_STACK_LINE(5144)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5144)
				if ((tmp3)){
					HX_STACK_LINE(5144)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(5146)
			{
				HX_STACK_LINE(5147)
				::zpp_nape::geom::ZPP_SimpleSeg t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(5148)
				parent->data = nr->data;
				HX_STACK_LINE(5149)
				nr->data = t;
			}
			HX_STACK_LINE(5151)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5151)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5151)
			if ((tmp4)){
				HX_STACK_LINE(5151)
				::zpp_nape::geom::ZPP_SimpleSeg tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5151)
				::zpp_nape::geom::ZPP_SimpleSeg tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5151)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(5152)
			{
				HX_STACK_LINE(5153)
				nr->next = trr;
				HX_STACK_LINE(5154)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5154)
				if ((tmp5)){
					HX_STACK_LINE(5154)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(5156)
			{
				HX_STACK_LINE(5157)
				nr->prev = parent->prev;
				HX_STACK_LINE(5158)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5158)
				if ((tmp5)){
					HX_STACK_LINE(5158)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(5160)
			{
				HX_STACK_LINE(5161)
				parent->prev = nr;
				HX_STACK_LINE(5162)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5162)
				if ((tmp5)){
					HX_STACK_LINE(5162)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(5164)
			tmp1 = nl;
		}
		HX_STACK_LINE(5104)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(5166)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5166)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5166)
		if ((tmp2)){
			HX_STACK_LINE(5166)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5166)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5166)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(5166)
			tmp3 = false;
		}
		HX_STACK_LINE(5166)
		if ((tmp3)){
			HX_STACK_LINE(5166)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5166)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(5167)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5167)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5167)
			if ((tmp4)){
				HX_STACK_LINE(5167)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5167)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(5167)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(5167)
				tmp5 = false;
			}
			HX_STACK_LINE(5167)
			if ((tmp5)){
				HX_STACK_LINE(5167)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5167)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","__fix_dbl_red",0x1e190d39,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.__fix_dbl_red","zpp_nape/util/RBTree.hx",5170,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(5170)
		while((true)){
			HX_STACK_LINE(5171)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5172)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(5173)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5173)
			if ((tmp)){
				HX_STACK_LINE(5174)
				par->colour = (int)1;
				HX_STACK_LINE(5175)
				break;
			}
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(5178)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5178)
			if ((tmp1)){
				HX_STACK_LINE(5179)
				n3 = g;
				HX_STACK_LINE(5180)
				t4 = g->next;
				HX_STACK_LINE(5181)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5181)
				if ((tmp2)){
					HX_STACK_LINE(5182)
					n1 = x;
					HX_STACK_LINE(5183)
					n2 = par;
					HX_STACK_LINE(5184)
					t1 = x->prev;
					HX_STACK_LINE(5185)
					t2 = x->next;
					HX_STACK_LINE(5186)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(5189)
					n1 = par;
					HX_STACK_LINE(5190)
					n2 = x;
					HX_STACK_LINE(5191)
					t1 = par->prev;
					HX_STACK_LINE(5192)
					t2 = x->prev;
					HX_STACK_LINE(5193)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(5197)
				n1 = g;
				HX_STACK_LINE(5198)
				t1 = g->prev;
				HX_STACK_LINE(5199)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5199)
				if ((tmp2)){
					HX_STACK_LINE(5200)
					n2 = x;
					HX_STACK_LINE(5201)
					n3 = par;
					HX_STACK_LINE(5202)
					t2 = x->prev;
					HX_STACK_LINE(5203)
					t3 = x->next;
					HX_STACK_LINE(5204)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(5207)
					n2 = par;
					HX_STACK_LINE(5208)
					n3 = x;
					HX_STACK_LINE(5209)
					t2 = par->prev;
					HX_STACK_LINE(5210)
					t3 = x->prev;
					HX_STACK_LINE(5211)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(5214)
			{
				HX_STACK_LINE(5215)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(5216)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5216)
				if ((tmp2)){
					HX_STACK_LINE(5217)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(5219)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(5219)
					if ((tmp3)){
						HX_STACK_LINE(5219)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(5220)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(5221)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5221)
				if ((tmp3)){
					HX_STACK_LINE(5221)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(5223)
			{
				HX_STACK_LINE(5224)
				n1->prev = t1;
				HX_STACK_LINE(5225)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5225)
				if ((tmp2)){
					HX_STACK_LINE(5225)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(5227)
			{
				HX_STACK_LINE(5228)
				n1->next = t2;
				HX_STACK_LINE(5229)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5229)
				if ((tmp2)){
					HX_STACK_LINE(5229)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(5231)
			{
				HX_STACK_LINE(5232)
				n2->prev = n1;
				HX_STACK_LINE(5233)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5233)
				if ((tmp2)){
					HX_STACK_LINE(5233)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(5235)
			{
				HX_STACK_LINE(5236)
				n2->next = n3;
				HX_STACK_LINE(5237)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5237)
				if ((tmp2)){
					HX_STACK_LINE(5237)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(5239)
			{
				HX_STACK_LINE(5240)
				n3->prev = t3;
				HX_STACK_LINE(5241)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5241)
				if ((tmp2)){
					HX_STACK_LINE(5241)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(5243)
			{
				HX_STACK_LINE(5244)
				n3->next = t4;
				HX_STACK_LINE(5245)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5245)
				if ((tmp2)){
					HX_STACK_LINE(5245)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(5247)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5247)
			n2->colour = tmp2;
			HX_STACK_LINE(5248)
			n1->colour = (int)1;
			HX_STACK_LINE(5249)
			n3->colour = (int)1;
			HX_STACK_LINE(5250)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5250)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5250)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5250)
			if ((tmp5)){
				HX_STACK_LINE(5250)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5250)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(5251)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5251)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(5251)
				if ((tmp6)){
					HX_STACK_LINE(5251)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(5251)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(5251)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(5251)
					tmp7 = false;
				}
				HX_STACK_LINE(5251)
				if ((tmp7)){
					HX_STACK_LINE(5252)
					x = n2;
					HX_STACK_LINE(5253)
					continue;
				}
			}
			HX_STACK_LINE(5255)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_SimpleSeg_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","try_insert_bool",0x1332882f,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.try_insert_bool","zpp_nape/util/RBTree.hx",5258,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5259)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5260)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5261)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5261)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5261)
	if ((tmp1)){
		HX_STACK_LINE(5262)
		{
			HX_STACK_LINE(5263)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5263)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5263)
			if ((tmp3)){
				HX_STACK_LINE(5264)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5264)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(5270)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5270)
				x = tmp4;
				HX_STACK_LINE(5271)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
				HX_STACK_LINE(5272)
				x->next = null();
			}
			HX_STACK_LINE(5277)
			Dynamic();
		}
		HX_STACK_LINE(5279)
		x->data = obj;
		HX_STACK_LINE(5280)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5283)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5283)
		cur = tmp2;
		HX_STACK_LINE(5284)
		while((true)){
			HX_STACK_LINE(5285)
			::zpp_nape::geom::ZPP_SimpleSeg tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5285)
			::zpp_nape::geom::ZPP_SimpleSeg tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5285)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5285)
			if ((tmp5)){
				HX_STACK_LINE(5286)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5286)
				if ((tmp6)){
					HX_STACK_LINE(5287)
					{
						HX_STACK_LINE(5288)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5288)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5288)
						if ((tmp8)){
							HX_STACK_LINE(5289)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5289)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(5295)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5295)
							x = tmp9;
							HX_STACK_LINE(5296)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
							HX_STACK_LINE(5297)
							x->next = null();
						}
						HX_STACK_LINE(5302)
						Dynamic();
					}
					HX_STACK_LINE(5304)
					x->data = obj;
					HX_STACK_LINE(5305)
					cur->prev = x;
					HX_STACK_LINE(5306)
					x->parent = cur;
					HX_STACK_LINE(5307)
					break;
				}
				else{
					HX_STACK_LINE(5309)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5311)
				::zpp_nape::geom::ZPP_SimpleSeg tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5311)
				::zpp_nape::geom::ZPP_SimpleSeg tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(5311)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(5311)
				if ((tmp8)){
					HX_STACK_LINE(5312)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(5312)
					if ((tmp9)){
						HX_STACK_LINE(5313)
						{
							HX_STACK_LINE(5314)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5314)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(5314)
							if ((tmp11)){
								HX_STACK_LINE(5315)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(5315)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(5321)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(5321)
								x = tmp12;
								HX_STACK_LINE(5322)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
								HX_STACK_LINE(5323)
								x->next = null();
							}
							HX_STACK_LINE(5328)
							Dynamic();
						}
						HX_STACK_LINE(5330)
						x->data = obj;
						HX_STACK_LINE(5331)
						cur->next = x;
						HX_STACK_LINE(5332)
						x->parent = cur;
						HX_STACK_LINE(5333)
						break;
					}
					else{
						HX_STACK_LINE(5335)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(5337)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(5340)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5340)
	if ((tmp2)){
		HX_STACK_LINE(5340)
		return false;
	}
	else{
		HX_STACK_LINE(5342)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5342)
		if ((tmp3)){
			HX_STACK_LINE(5342)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(5344)
			x->colour = (int)0;
			HX_STACK_LINE(5345)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5345)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5345)
			if ((tmp5)){
				HX_STACK_LINE(5345)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5345)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(5347)
		return true;
	}
	HX_STACK_LINE(5340)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","try_insert",0x7bcf099a,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.try_insert","zpp_nape/util/RBTree.hx",5350,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5351)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5352)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5353)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5353)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5353)
	if ((tmp1)){
		HX_STACK_LINE(5354)
		{
			HX_STACK_LINE(5355)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5355)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5355)
			if ((tmp3)){
				HX_STACK_LINE(5356)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5356)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(5362)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5362)
				x = tmp4;
				HX_STACK_LINE(5363)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
				HX_STACK_LINE(5364)
				x->next = null();
			}
			HX_STACK_LINE(5369)
			Dynamic();
		}
		HX_STACK_LINE(5371)
		x->data = obj;
		HX_STACK_LINE(5372)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5375)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5375)
		cur = tmp2;
		HX_STACK_LINE(5376)
		while((true)){
			HX_STACK_LINE(5377)
			::zpp_nape::geom::ZPP_SimpleSeg tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5377)
			::zpp_nape::geom::ZPP_SimpleSeg tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5377)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5377)
			if ((tmp5)){
				HX_STACK_LINE(5378)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5378)
				if ((tmp6)){
					HX_STACK_LINE(5379)
					{
						HX_STACK_LINE(5380)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5380)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5380)
						if ((tmp8)){
							HX_STACK_LINE(5381)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5381)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(5387)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5387)
							x = tmp9;
							HX_STACK_LINE(5388)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
							HX_STACK_LINE(5389)
							x->next = null();
						}
						HX_STACK_LINE(5394)
						Dynamic();
					}
					HX_STACK_LINE(5396)
					x->data = obj;
					HX_STACK_LINE(5397)
					cur->prev = x;
					HX_STACK_LINE(5398)
					x->parent = cur;
					HX_STACK_LINE(5399)
					break;
				}
				else{
					HX_STACK_LINE(5401)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5403)
				::zpp_nape::geom::ZPP_SimpleSeg tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5403)
				::zpp_nape::geom::ZPP_SimpleSeg tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(5403)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(5403)
				if ((tmp8)){
					HX_STACK_LINE(5404)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(5404)
					if ((tmp9)){
						HX_STACK_LINE(5405)
						{
							HX_STACK_LINE(5406)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5406)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(5406)
							if ((tmp11)){
								HX_STACK_LINE(5407)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(5407)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(5413)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(5413)
								x = tmp12;
								HX_STACK_LINE(5414)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
								HX_STACK_LINE(5415)
								x->next = null();
							}
							HX_STACK_LINE(5420)
							Dynamic();
						}
						HX_STACK_LINE(5422)
						x->data = obj;
						HX_STACK_LINE(5423)
						cur->next = x;
						HX_STACK_LINE(5424)
						x->parent = cur;
						HX_STACK_LINE(5425)
						break;
					}
					else{
						HX_STACK_LINE(5427)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(5429)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(5432)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5432)
	if ((tmp2)){
		HX_STACK_LINE(5432)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5432)
		return tmp3;
	}
	else{
		HX_STACK_LINE(5434)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5434)
		if ((tmp3)){
			HX_STACK_LINE(5434)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(5436)
			x->colour = (int)0;
			HX_STACK_LINE(5437)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5437)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5437)
			if ((tmp5)){
				HX_STACK_LINE(5437)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5437)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(5439)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5439)
		return tmp4;
	}
	HX_STACK_LINE(5432)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::insert( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","insert",0x495b2156,"zpp_nape.util.ZPP_Set_ZPP_SimpleSeg.insert","zpp_nape/util/RBTree.hx",5442,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5451)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5452)
	{
		HX_STACK_LINE(5453)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5453)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5453)
		if ((tmp1)){
			HX_STACK_LINE(5454)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5454)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(5460)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5460)
			x = tmp2;
			HX_STACK_LINE(5461)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
			HX_STACK_LINE(5462)
			x->next = null();
		}
		HX_STACK_LINE(5467)
		Dynamic();
	}
	HX_STACK_LINE(5469)
	x->data = obj;
	HX_STACK_LINE(5470)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5470)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5470)
	if ((tmp1)){
		HX_STACK_LINE(5470)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5472)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5472)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5473)
		while((true)){
			HX_STACK_LINE(5474)
			::zpp_nape::geom::ZPP_SimpleSeg tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5474)
			::zpp_nape::geom::ZPP_SimpleSeg tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5474)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5474)
			if ((tmp5)){
				HX_STACK_LINE(5475)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5475)
				if ((tmp6)){
					HX_STACK_LINE(5476)
					cur->prev = x;
					HX_STACK_LINE(5477)
					x->parent = cur;
					HX_STACK_LINE(5478)
					break;
				}
				else{
					HX_STACK_LINE(5480)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5483)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5483)
				if ((tmp6)){
					HX_STACK_LINE(5484)
					cur->next = x;
					HX_STACK_LINE(5485)
					x->parent = cur;
					HX_STACK_LINE(5486)
					break;
				}
				else{
					HX_STACK_LINE(5488)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(5492)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5492)
	if ((tmp2)){
		HX_STACK_LINE(5492)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(5494)
		x->colour = (int)0;
		HX_STACK_LINE(5495)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5495)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5495)
		if ((tmp4)){
			HX_STACK_LINE(5495)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5495)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(5505)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5505)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;


ZPP_Set_ZPP_SimpleSeg_obj::ZPP_Set_ZPP_SimpleSeg_obj()
{
}

void ZPP_Set_ZPP_SimpleSeg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleSeg);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleSeg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_Set_ZPP_SimpleSeg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_SimpleSeg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_SimpleSeg_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleSeg_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleSeg_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleSeg_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleSeg_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleSeg_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleSeg_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_SimpleSeg_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(void *) &ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_SimpleSeg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_SimpleSeg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg","\xb1","\x60","\x4a","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_SimpleSeg_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_SimpleSeg_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_SimpleSeg_obj >;
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

void ZPP_Set_ZPP_SimpleSeg_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
