#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_CbSet_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","new",0x79a60ee3,"zpp_nape.util.ZPP_Set_ZPP_CbSet.new","zpp_nape/util/RBTree.hx",6398,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(6439)
	this->colour = (int)0;
	HX_STACK_LINE(6438)
	this->parent = null();
	HX_STACK_LINE(6437)
	this->next = null();
	HX_STACK_LINE(6436)
	this->prev = null();
	HX_STACK_LINE(6435)
	this->data = null();
	HX_STACK_LINE(6434)
	this->swapped = null();
	HX_STACK_LINE(6433)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_CbSet_obj::~ZPP_Set_ZPP_CbSet_obj() { }

Dynamic ZPP_Set_ZPP_CbSet_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_CbSet_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > ZPP_Set_ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > _result_ = new ZPP_Set_ZPP_CbSet_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > _result_ = new ZPP_Set_ZPP_CbSet_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_CbSet_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","free",0xf26710c9,"zpp_nape.util.ZPP_Set_ZPP_CbSet.free","zpp_nape/util/RBTree.hx",6425,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6426)
		this->data = null();
		HX_STACK_LINE(6427)
		this->lt = null();
		HX_STACK_LINE(6428)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,free,(void))

Void ZPP_Set_ZPP_CbSet_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","alloc",0x42d4c9b8,"zpp_nape.util.ZPP_Set_ZPP_CbSet.alloc","zpp_nape/util/RBTree.hx",6432,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,alloc,(void))

bool ZPP_Set_ZPP_CbSet_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","verify",0x98fef8d6,"zpp_nape.util.ZPP_Set_ZPP_CbSet.verify","zpp_nape/util/RBTree.hx",6441,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6442)
	{
		HX_STACK_LINE(6451)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6451)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6451)
		if ((tmp1)){
			HX_STACK_LINE(6452)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6452)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(6453)
			while((true)){
				HX_STACK_LINE(6453)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6453)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6453)
				if ((tmp4)){
					HX_STACK_LINE(6453)
					break;
				}
				HX_STACK_LINE(6453)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(6454)
			while((true)){
				HX_STACK_LINE(6454)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6454)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6454)
				if ((tmp4)){
					HX_STACK_LINE(6454)
					break;
				}
				HX_STACK_LINE(6455)
				::zpp_nape::callbacks::ZPP_CbSet i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(6456)
				{
					HX_STACK_LINE(6457)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(6458)
					{
						HX_STACK_LINE(6467)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(6467)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6467)
						if ((tmp6)){
							HX_STACK_LINE(6468)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(6468)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(6469)
							while((true)){
								HX_STACK_LINE(6469)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(6469)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(6469)
								if ((tmp9)){
									HX_STACK_LINE(6469)
									break;
								}
								HX_STACK_LINE(6469)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(6470)
							while((true)){
								HX_STACK_LINE(6470)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(6470)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(6470)
								if ((tmp9)){
									HX_STACK_LINE(6470)
									break;
								}
								HX_STACK_LINE(6471)
								::zpp_nape::callbacks::ZPP_CbSet j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(6472)
								{
									HX_STACK_LINE(6473)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(6473)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(6473)
									if ((tmp11)){
										HX_STACK_LINE(6474)
										::zpp_nape::callbacks::ZPP_CbSet tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6474)
										::zpp_nape::callbacks::ZPP_CbSet tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(6474)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(6474)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(6474)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(6474)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(6474)
										if ((tmp16)){
											HX_STACK_LINE(6474)
											::zpp_nape::callbacks::ZPP_CbSet tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(6474)
											::zpp_nape::callbacks::ZPP_CbSet tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(6474)
											::zpp_nape::callbacks::ZPP_CbSet tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(6474)
											::zpp_nape::callbacks::ZPP_CbSet tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(6474)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(6474)
											tmp17 = false;
										}
										HX_STACK_LINE(6474)
										if ((tmp17)){
											HX_STACK_LINE(6474)
											return false;
										}
									}
									else{
										HX_STACK_LINE(6476)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6476)
										if ((tmp12)){
											HX_STACK_LINE(6476)
											prei = false;
										}
										else{
											HX_STACK_LINE(6478)
											::zpp_nape::callbacks::ZPP_CbSet tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6478)
											::zpp_nape::callbacks::ZPP_CbSet tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(6478)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(6478)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(6478)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(6478)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(6478)
											if ((tmp17)){
												HX_STACK_LINE(6478)
												::zpp_nape::callbacks::ZPP_CbSet tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(6478)
												::zpp_nape::callbacks::ZPP_CbSet tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(6478)
												::zpp_nape::callbacks::ZPP_CbSet tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(6478)
												::zpp_nape::callbacks::ZPP_CbSet tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(6478)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(6478)
												tmp18 = false;
											}
											HX_STACK_LINE(6478)
											if ((tmp18)){
												HX_STACK_LINE(6478)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(6481)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(6481)
								if ((tmp10)){
									HX_STACK_LINE(6482)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(6483)
									while((true)){
										HX_STACK_LINE(6483)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(6483)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6483)
										if ((tmp12)){
											HX_STACK_LINE(6483)
											break;
										}
										HX_STACK_LINE(6483)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(6486)
									while((true)){
										HX_STACK_LINE(6486)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(6486)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6486)
										if ((tmp11)){
											HX_STACK_LINE(6486)
											::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6486)
											::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(6486)
											::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(6486)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(6486)
											tmp12 = false;
										}
										HX_STACK_LINE(6486)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(6486)
										if ((tmp13)){
											HX_STACK_LINE(6486)
											break;
										}
										HX_STACK_LINE(6486)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(6487)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(6493)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6493)
				if ((tmp5)){
					HX_STACK_LINE(6494)
					set_ite = set_ite->next;
					HX_STACK_LINE(6495)
					while((true)){
						HX_STACK_LINE(6495)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6495)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6495)
						if ((tmp7)){
							HX_STACK_LINE(6495)
							break;
						}
						HX_STACK_LINE(6495)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(6498)
					while((true)){
						HX_STACK_LINE(6498)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6498)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6498)
						if ((tmp6)){
							HX_STACK_LINE(6498)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(6498)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6498)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6498)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(6498)
							tmp7 = false;
						}
						HX_STACK_LINE(6498)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(6498)
						if ((tmp8)){
							HX_STACK_LINE(6498)
							break;
						}
						HX_STACK_LINE(6498)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(6499)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(6504)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,verify,return )

bool ZPP_Set_ZPP_CbSet_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","empty",0x911b5fd0,"zpp_nape.util.ZPP_Set_ZPP_CbSet.empty","zpp_nape/util/RBTree.hx",6506,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6507)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6507)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6507)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,empty,return )

bool ZPP_Set_ZPP_CbSet_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","singular",0x55b3ef74,"zpp_nape.util.ZPP_Set_ZPP_CbSet.singular","zpp_nape/util/RBTree.hx",6509,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6510)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6510)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6510)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6510)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6510)
	if ((tmp2)){
		HX_STACK_LINE(6510)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6510)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(6510)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(6510)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(6510)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(6510)
		tmp3 = false;
	}
	HX_STACK_LINE(6510)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6510)
	if ((tmp3)){
		HX_STACK_LINE(6510)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(6510)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(6510)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(6510)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(6510)
		tmp4 = false;
	}
	HX_STACK_LINE(6510)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,singular,return )

int ZPP_Set_ZPP_CbSet_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","size",0xfaf814de,"zpp_nape.util.ZPP_Set_ZPP_CbSet.size","zpp_nape/util/RBTree.hx",6512,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6513)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6514)
	{
		HX_STACK_LINE(6523)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6523)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6523)
		if ((tmp1)){
			HX_STACK_LINE(6524)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6524)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(6525)
			while((true)){
				HX_STACK_LINE(6525)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6525)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6525)
				if ((tmp4)){
					HX_STACK_LINE(6525)
					break;
				}
				HX_STACK_LINE(6525)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(6526)
			while((true)){
				HX_STACK_LINE(6526)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6526)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6526)
				if ((tmp4)){
					HX_STACK_LINE(6526)
					break;
				}
				HX_STACK_LINE(6527)
				::zpp_nape::callbacks::ZPP_CbSet i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(6528)
				(ret)++;
				HX_STACK_LINE(6529)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6529)
				if ((tmp5)){
					HX_STACK_LINE(6530)
					set_ite = set_ite->next;
					HX_STACK_LINE(6531)
					while((true)){
						HX_STACK_LINE(6531)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6531)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6531)
						if ((tmp7)){
							HX_STACK_LINE(6531)
							break;
						}
						HX_STACK_LINE(6531)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(6534)
					while((true)){
						HX_STACK_LINE(6534)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6534)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6534)
						if ((tmp6)){
							HX_STACK_LINE(6534)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(6534)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6534)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6534)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(6534)
							tmp7 = false;
						}
						HX_STACK_LINE(6534)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(6534)
						if ((tmp8)){
							HX_STACK_LINE(6534)
							break;
						}
						HX_STACK_LINE(6534)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(6535)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(6540)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6540)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,size,return )

bool ZPP_Set_ZPP_CbSet_obj::has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","has",0x79a17ddd,"zpp_nape.util.ZPP_Set_ZPP_CbSet.has","zpp_nape/util/RBTree.hx",6542,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6543)
	::zpp_nape::callbacks::ZPP_CbSet tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6543)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6543)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6543)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::find( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","find",0xf2604456,"zpp_nape.util.ZPP_Set_ZPP_CbSet.find","zpp_nape/util/RBTree.hx",6545,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6546)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6546)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6547)
	while((true)){
		HX_STACK_LINE(6547)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6547)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6547)
		if ((tmp1)){
			HX_STACK_LINE(6547)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(6547)
			tmp2 = false;
		}
		HX_STACK_LINE(6547)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6547)
		if ((tmp3)){
			HX_STACK_LINE(6547)
			break;
		}
		HX_STACK_LINE(6548)
		::zpp_nape::callbacks::ZPP_CbSet tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6548)
		::zpp_nape::callbacks::ZPP_CbSet tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(6548)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(6548)
		if ((tmp6)){
			HX_STACK_LINE(6548)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(6549)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(6551)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6551)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,find,return )

bool ZPP_Set_ZPP_CbSet_obj::has_weak( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","has_weak",0xf9be995a,"zpp_nape.util.ZPP_Set_ZPP_CbSet.has_weak","zpp_nape/util/RBTree.hx",6553,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6554)
	::zpp_nape::callbacks::ZPP_CbSet tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6554)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6554)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6554)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::find_weak( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","find_weak",0x1ae0bc41,"zpp_nape.util.ZPP_Set_ZPP_CbSet.find_weak","zpp_nape/util/RBTree.hx",6556,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6557)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6557)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6558)
	while((true)){
		HX_STACK_LINE(6558)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6558)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6558)
		if ((tmp2)){
			HX_STACK_LINE(6558)
			break;
		}
		HX_STACK_LINE(6559)
		::zpp_nape::callbacks::ZPP_CbSet tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6559)
		::zpp_nape::callbacks::ZPP_CbSet tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6559)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(6559)
		if ((tmp5)){
			HX_STACK_LINE(6559)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(6560)
			::zpp_nape::callbacks::ZPP_CbSet tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(6560)
			::zpp_nape::callbacks::ZPP_CbSet tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(6560)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(6560)
			if ((tmp8)){
				HX_STACK_LINE(6560)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(6561)
				break;
			}
		}
	}
	HX_STACK_LINE(6563)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6563)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,find_weak,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::lower_bound( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","lower_bound",0x18f9e1c3,"zpp_nape.util.ZPP_Set_ZPP_CbSet.lower_bound","zpp_nape/util/RBTree.hx",6565,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6566)
	::zpp_nape::callbacks::ZPP_CbSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6566)
	{
		HX_STACK_LINE(6567)
		::zpp_nape::callbacks::ZPP_CbSet ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6568)
		{
			HX_STACK_LINE(6577)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6577)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6577)
			if ((tmp2)){
				HX_STACK_LINE(6578)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6578)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(6579)
				while((true)){
					HX_STACK_LINE(6579)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6579)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(6579)
					if ((tmp5)){
						HX_STACK_LINE(6579)
						break;
					}
					HX_STACK_LINE(6579)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(6580)
				while((true)){
					HX_STACK_LINE(6580)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6580)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(6580)
					if ((tmp5)){
						HX_STACK_LINE(6580)
						break;
					}
					HX_STACK_LINE(6581)
					::zpp_nape::callbacks::ZPP_CbSet elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(6582)
					{
						HX_STACK_LINE(6583)
						::zpp_nape::callbacks::ZPP_CbSet tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6583)
						::zpp_nape::callbacks::ZPP_CbSet tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6583)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(6583)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(6583)
						if ((tmp9)){
							HX_STACK_LINE(6584)
							ret = elt;
							HX_STACK_LINE(6585)
							break;
						}
					}
					HX_STACK_LINE(6588)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(6588)
					if ((tmp6)){
						HX_STACK_LINE(6589)
						set_ite = set_ite->next;
						HX_STACK_LINE(6590)
						while((true)){
							HX_STACK_LINE(6590)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(6590)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(6590)
							if ((tmp8)){
								HX_STACK_LINE(6590)
								break;
							}
							HX_STACK_LINE(6590)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(6593)
						while((true)){
							HX_STACK_LINE(6593)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(6593)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(6593)
							if ((tmp7)){
								HX_STACK_LINE(6593)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(6593)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(6593)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(6593)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(6593)
								tmp8 = false;
							}
							HX_STACK_LINE(6593)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6593)
							if ((tmp9)){
								HX_STACK_LINE(6593)
								break;
							}
							HX_STACK_LINE(6593)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(6594)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(6599)
		tmp = ret;
	}
	HX_STACK_LINE(6566)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,lower_bound,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","first",0x21de9d73,"zpp_nape.util.ZPP_Set_ZPP_CbSet.first","zpp_nape/util/RBTree.hx",6602,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6611)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6611)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6612)
	while((true)){
		HX_STACK_LINE(6612)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6612)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6612)
		if ((tmp2)){
			HX_STACK_LINE(6612)
			break;
		}
		HX_STACK_LINE(6612)
		cur = cur->prev;
	}
	HX_STACK_LINE(6613)
	::zpp_nape::callbacks::ZPP_CbSet tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6613)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,first,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","pop_front",0x076742fe,"zpp_nape.util.ZPP_Set_ZPP_CbSet.pop_front","zpp_nape/util/RBTree.hx",6615,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6624)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6624)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6625)
	while((true)){
		HX_STACK_LINE(6625)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6625)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6625)
		if ((tmp2)){
			HX_STACK_LINE(6625)
			break;
		}
		HX_STACK_LINE(6625)
		cur = cur->prev;
	}
	HX_STACK_LINE(6626)
	::zpp_nape::callbacks::ZPP_CbSet ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6627)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6627)
	this->remove_node(tmp1);
	HX_STACK_LINE(6628)
	::zpp_nape::callbacks::ZPP_CbSet tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6628)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,pop_front,return )

Void ZPP_Set_ZPP_CbSet_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","remove",0xfc4811a1,"zpp_nape.util.ZPP_Set_ZPP_CbSet.remove","zpp_nape/util/RBTree.hx",6630,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(6631)
		::zpp_nape::callbacks::ZPP_CbSet tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6631)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6631)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(6640)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6640)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","successor_node",0xc765c8d8,"zpp_nape.util.ZPP_Set_ZPP_CbSet.successor_node","zpp_nape/util/RBTree.hx",6642,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(6651)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6651)
	if ((tmp)){
		HX_STACK_LINE(6652)
		cur = cur->next;
		HX_STACK_LINE(6653)
		while((true)){
			HX_STACK_LINE(6653)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6653)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6653)
			if ((tmp2)){
				HX_STACK_LINE(6653)
				break;
			}
			HX_STACK_LINE(6653)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(6656)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6657)
		cur = cur->parent;
		HX_STACK_LINE(6658)
		while((true)){
			HX_STACK_LINE(6658)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6658)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6658)
			if ((tmp1)){
				HX_STACK_LINE(6658)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(6658)
				tmp2 = false;
			}
			HX_STACK_LINE(6658)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6658)
			if ((tmp3)){
				HX_STACK_LINE(6658)
				break;
			}
			HX_STACK_LINE(6659)
			pre = cur;
			HX_STACK_LINE(6660)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(6663)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6663)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","predecessor_node",0x6fa1f215,"zpp_nape.util.ZPP_Set_ZPP_CbSet.predecessor_node","zpp_nape/util/RBTree.hx",6665,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(6674)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6674)
	if ((tmp)){
		HX_STACK_LINE(6675)
		cur = cur->prev;
		HX_STACK_LINE(6676)
		while((true)){
			HX_STACK_LINE(6676)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6676)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6676)
			if ((tmp2)){
				HX_STACK_LINE(6676)
				break;
			}
			HX_STACK_LINE(6676)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(6679)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6680)
		cur = cur->parent;
		HX_STACK_LINE(6681)
		while((true)){
			HX_STACK_LINE(6681)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6681)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6681)
			if ((tmp1)){
				HX_STACK_LINE(6681)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(6681)
				tmp2 = false;
			}
			HX_STACK_LINE(6681)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6681)
			if ((tmp3)){
				HX_STACK_LINE(6681)
				break;
			}
			HX_STACK_LINE(6682)
			pre = cur;
			HX_STACK_LINE(6683)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(6686)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6686)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,predecessor_node,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::successor( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","successor",0xc1864069,"zpp_nape.util.ZPP_Set_ZPP_CbSet.successor","zpp_nape/util/RBTree.hx",6688,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6697)
	::zpp_nape::callbacks::ZPP_CbSet tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6697)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6697)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6697)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(6698)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6698)
	::zpp_nape::callbacks::ZPP_CbSet tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6698)
	if ((tmp3)){
		HX_STACK_LINE(6698)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(6698)
		tmp4 = node->data;
	}
	HX_STACK_LINE(6698)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,successor,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::predecessor( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","predecessor",0x88d4a04c,"zpp_nape.util.ZPP_Set_ZPP_CbSet.predecessor","zpp_nape/util/RBTree.hx",6700,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6709)
	::zpp_nape::callbacks::ZPP_CbSet tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6709)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6709)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6709)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(6710)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6710)
	::zpp_nape::callbacks::ZPP_CbSet tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6710)
	if ((tmp3)){
		HX_STACK_LINE(6710)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(6710)
		tmp4 = node->data;
	}
	HX_STACK_LINE(6710)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,predecessor,return )

Void ZPP_Set_ZPP_CbSet_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","remove_node",0xeb6a8ca0,"zpp_nape.util.ZPP_Set_ZPP_CbSet.remove_node","zpp_nape/util/RBTree.hx",6712,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(6721)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6721)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6721)
		if ((tmp)){
			HX_STACK_LINE(6721)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(6721)
			tmp1 = false;
		}
		HX_STACK_LINE(6721)
		if ((tmp1)){
			HX_STACK_LINE(6722)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(6723)
			while((true)){
				HX_STACK_LINE(6723)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6723)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6723)
				if ((tmp3)){
					HX_STACK_LINE(6723)
					break;
				}
				HX_STACK_LINE(6723)
				sm = sm->prev;
			}
			HX_STACK_LINE(6724)
			{
				HX_STACK_LINE(6725)
				::zpp_nape::callbacks::ZPP_CbSet t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(6726)
				cur->data = sm->data;
				HX_STACK_LINE(6727)
				sm->data = t;
			}
			HX_STACK_LINE(6729)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6729)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6729)
			if ((tmp3)){
				HX_STACK_LINE(6729)
				::zpp_nape::callbacks::ZPP_CbSet tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6729)
				::zpp_nape::callbacks::ZPP_CbSet tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6729)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(6730)
			cur = sm;
		}
		HX_STACK_LINE(6740)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6740)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6740)
		if ((tmp2)){
			HX_STACK_LINE(6740)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(6740)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(6740)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6741)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6741)
		if ((tmp4)){
			HX_STACK_LINE(6742)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6742)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(6742)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(6742)
			if ((tmp6)){
				HX_STACK_LINE(6742)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(6742)
				tmp7 = true;
			}
			HX_STACK_LINE(6742)
			if ((tmp7)){
				HX_STACK_LINE(6742)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(6743)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(6743)
				if ((tmp8)){
					HX_STACK_LINE(6744)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(6745)
					while((true)){
						HX_STACK_LINE(6746)
						(parent->colour)++;
						HX_STACK_LINE(6747)
						(parent->prev->colour)--;
						HX_STACK_LINE(6748)
						(parent->next->colour)--;
						HX_STACK_LINE(6749)
						{
							HX_STACK_LINE(6750)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(6751)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6751)
							if ((tmp9)){
								HX_STACK_LINE(6752)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(6752)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(6753)
								break;
							}
							else{
								HX_STACK_LINE(6755)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(6755)
								if ((tmp10)){
									HX_STACK_LINE(6756)
									{
										HX_STACK_LINE(6757)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(6757)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6757)
										if ((tmp11)){
											HX_STACK_LINE(6757)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6757)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(6757)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(6757)
											tmp12 = false;
										}
										HX_STACK_LINE(6757)
										if ((tmp12)){
											HX_STACK_LINE(6758)
											::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6758)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(6759)
											break;
										}
									}
									HX_STACK_LINE(6762)
									{
										HX_STACK_LINE(6763)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(6763)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6763)
										if ((tmp11)){
											HX_STACK_LINE(6763)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6763)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(6763)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(6763)
											tmp12 = false;
										}
										HX_STACK_LINE(6763)
										if ((tmp12)){
											HX_STACK_LINE(6764)
											::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6764)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(6765)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(6770)
						{
							HX_STACK_LINE(6771)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(6772)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6772)
							if ((tmp9)){
								HX_STACK_LINE(6773)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(6773)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(6774)
								break;
							}
							else{
								HX_STACK_LINE(6776)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(6776)
								if ((tmp10)){
									HX_STACK_LINE(6777)
									{
										HX_STACK_LINE(6778)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(6778)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6778)
										if ((tmp11)){
											HX_STACK_LINE(6778)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6778)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(6778)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(6778)
											tmp12 = false;
										}
										HX_STACK_LINE(6778)
										if ((tmp12)){
											HX_STACK_LINE(6779)
											::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6779)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(6780)
											break;
										}
									}
									HX_STACK_LINE(6783)
									{
										HX_STACK_LINE(6784)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(6784)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(6784)
										if ((tmp11)){
											HX_STACK_LINE(6784)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6784)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(6784)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(6784)
											tmp12 = false;
										}
										HX_STACK_LINE(6784)
										if ((tmp12)){
											HX_STACK_LINE(6785)
											::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(6785)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(6786)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(6791)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(6791)
						if ((tmp9)){
							HX_STACK_LINE(6792)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6792)
							if ((tmp10)){
								HX_STACK_LINE(6793)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(6796)
								parent = parent->parent;
								HX_STACK_LINE(6797)
								continue;
							}
						}
						HX_STACK_LINE(6800)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(6804)
		{
			HX_STACK_LINE(6805)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6806)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6806)
			if ((tmp5)){
				HX_STACK_LINE(6807)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(6809)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6809)
				if ((tmp6)){
					HX_STACK_LINE(6809)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(6810)
					par->next = child;
				}
			}
			HX_STACK_LINE(6811)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(6811)
			if ((tmp6)){
				HX_STACK_LINE(6811)
				child->parent = par;
			}
		}
		HX_STACK_LINE(6813)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(6813)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(6813)
		cur->parent = tmp6;
		HX_STACK_LINE(6814)
		{
			HX_STACK_LINE(6815)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6824)
			{
				HX_STACK_LINE(6824)
				o->data = null();
				HX_STACK_LINE(6824)
				o->lt = null();
				HX_STACK_LINE(6824)
				o->swapped = null();
			}
			HX_STACK_LINE(6825)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(6825)
			o->next = tmp7;
			HX_STACK_LINE(6826)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,remove_node,(void))

Void ZPP_Set_ZPP_CbSet_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","clear",0x699c96d0,"zpp_nape.util.ZPP_Set_ZPP_CbSet.clear","zpp_nape/util/RBTree.hx",6833,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6833)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6833)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6833)
		if ((tmp1)){
			HX_STACK_LINE(6833)
			Dynamic();
		}
		else{
			HX_STACK_LINE(6833)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6833)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6833)
			while((true)){
				HX_STACK_LINE(6833)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6833)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6833)
				if ((tmp4)){
					HX_STACK_LINE(6833)
					break;
				}
				HX_STACK_LINE(6833)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6833)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6833)
				if ((tmp5)){
					HX_STACK_LINE(6833)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(6833)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(6833)
					if ((tmp7)){
						HX_STACK_LINE(6833)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(6833)
						::zpp_nape::callbacks::ZPP_CbSet tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(6833)
						::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(6833)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(6833)
						if ((tmp9)){
							HX_STACK_LINE(6833)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6833)
							if ((tmp10)){
								HX_STACK_LINE(6833)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(6833)
								ret->next = null();
							}
							HX_STACK_LINE(6833)
							cur->parent = null();
						}
						HX_STACK_LINE(6833)
						{
							HX_STACK_LINE(6833)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6833)
							{
								HX_STACK_LINE(6833)
								o->data = null();
								HX_STACK_LINE(6833)
								o->lt = null();
								HX_STACK_LINE(6833)
								o->swapped = null();
							}
							HX_STACK_LINE(6833)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6833)
							o->next = tmp10;
							HX_STACK_LINE(6833)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6833)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(6833)
				cur = tmp6;
			}
			HX_STACK_LINE(6833)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,clear,(void))

Void ZPP_Set_ZPP_CbSet_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","clear_with",0xf5484915,"zpp_nape.util.ZPP_Set_ZPP_CbSet.clear_with","zpp_nape/util/RBTree.hx",6836,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(6837)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6837)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6837)
		if ((tmp1)){
			HX_STACK_LINE(6837)
			return null();
		}
		else{
			HX_STACK_LINE(6839)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6839)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6840)
			while((true)){
				HX_STACK_LINE(6840)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6840)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6840)
				if ((tmp4)){
					HX_STACK_LINE(6840)
					break;
				}
				HX_STACK_LINE(6840)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6840)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6840)
				if ((tmp5)){
					HX_STACK_LINE(6840)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(6840)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(6840)
					if ((tmp7)){
						HX_STACK_LINE(6840)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(6840)
						::zpp_nape::callbacks::ZPP_CbSet tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(6840)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(6840)
						::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(6840)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(6840)
						if ((tmp9)){
							HX_STACK_LINE(6840)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6840)
							if ((tmp10)){
								HX_STACK_LINE(6840)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(6840)
								ret->next = null();
							}
							HX_STACK_LINE(6840)
							cur->parent = null();
						}
						HX_STACK_LINE(6840)
						{
							HX_STACK_LINE(6840)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6840)
							{
								HX_STACK_LINE(6840)
								o->data = null();
								HX_STACK_LINE(6840)
								o->lt = null();
								HX_STACK_LINE(6840)
								o->swapped = null();
							}
							HX_STACK_LINE(6840)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6840)
							o->next = tmp10;
							HX_STACK_LINE(6840)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6840)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(6840)
				cur = tmp6;
			}
			HX_STACK_LINE(6841)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","clear_node",0xef59dd11,"zpp_nape.util.ZPP_Set_ZPP_CbSet.clear_node","zpp_nape/util/RBTree.hx",6845,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(6854)
	::zpp_nape::callbacks::ZPP_CbSet tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6854)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(6855)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6856)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6856)
	if ((tmp1)){
		HX_STACK_LINE(6857)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6857)
		if ((tmp2)){
			HX_STACK_LINE(6857)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(6858)
			ret->next = null();
		}
		HX_STACK_LINE(6859)
		node->parent = null();
	}
	HX_STACK_LINE(6861)
	{
		HX_STACK_LINE(6862)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6871)
		{
			HX_STACK_LINE(6871)
			o->data = null();
			HX_STACK_LINE(6871)
			o->lt = null();
			HX_STACK_LINE(6871)
			o->swapped = null();
		}
		HX_STACK_LINE(6872)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6872)
		o->next = tmp2;
		HX_STACK_LINE(6873)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6878)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6878)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_CbSet_obj,clear_node,return )

Void ZPP_Set_ZPP_CbSet_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSet negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","__fix_neg_red",0x4bccb01b,"zpp_nape.util.ZPP_Set_ZPP_CbSet.__fix_neg_red","zpp_nape/util/RBTree.hx",6880,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(6881)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(6882)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6882)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6882)
		if ((tmp)){
			HX_STACK_LINE(6883)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(6884)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(6885)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(6886)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(6887)
			nl->colour = (int)0;
			HX_STACK_LINE(6888)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6888)
			negred->colour = tmp2;
			HX_STACK_LINE(6889)
			{
				HX_STACK_LINE(6890)
				negred->next = trl;
				HX_STACK_LINE(6891)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6891)
				if ((tmp3)){
					HX_STACK_LINE(6891)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(6893)
			{
				HX_STACK_LINE(6894)
				::zpp_nape::callbacks::ZPP_CbSet t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(6895)
				parent->data = nr->data;
				HX_STACK_LINE(6896)
				nr->data = t;
			}
			HX_STACK_LINE(6898)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6898)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6898)
			if ((tmp4)){
				HX_STACK_LINE(6898)
				::zpp_nape::callbacks::ZPP_CbSet tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6898)
				::zpp_nape::callbacks::ZPP_CbSet tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6898)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(6899)
			{
				HX_STACK_LINE(6900)
				nr->prev = trr;
				HX_STACK_LINE(6901)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6901)
				if ((tmp5)){
					HX_STACK_LINE(6901)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(6903)
			{
				HX_STACK_LINE(6904)
				nr->next = parent->next;
				HX_STACK_LINE(6905)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6905)
				if ((tmp5)){
					HX_STACK_LINE(6905)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(6907)
			{
				HX_STACK_LINE(6908)
				parent->next = nr;
				HX_STACK_LINE(6909)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6909)
				if ((tmp5)){
					HX_STACK_LINE(6909)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(6911)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(6914)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(6915)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(6916)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(6917)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(6918)
			nl->colour = (int)0;
			HX_STACK_LINE(6919)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6919)
			negred->colour = tmp2;
			HX_STACK_LINE(6920)
			{
				HX_STACK_LINE(6921)
				negred->prev = trl;
				HX_STACK_LINE(6922)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6922)
				if ((tmp3)){
					HX_STACK_LINE(6922)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(6924)
			{
				HX_STACK_LINE(6925)
				::zpp_nape::callbacks::ZPP_CbSet t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(6926)
				parent->data = nr->data;
				HX_STACK_LINE(6927)
				nr->data = t;
			}
			HX_STACK_LINE(6929)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6929)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6929)
			if ((tmp4)){
				HX_STACK_LINE(6929)
				::zpp_nape::callbacks::ZPP_CbSet tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6929)
				::zpp_nape::callbacks::ZPP_CbSet tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6929)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(6930)
			{
				HX_STACK_LINE(6931)
				nr->next = trr;
				HX_STACK_LINE(6932)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6932)
				if ((tmp5)){
					HX_STACK_LINE(6932)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(6934)
			{
				HX_STACK_LINE(6935)
				nr->prev = parent->prev;
				HX_STACK_LINE(6936)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6936)
				if ((tmp5)){
					HX_STACK_LINE(6936)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(6938)
			{
				HX_STACK_LINE(6939)
				parent->prev = nr;
				HX_STACK_LINE(6940)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6940)
				if ((tmp5)){
					HX_STACK_LINE(6940)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(6942)
			tmp1 = nl;
		}
		HX_STACK_LINE(6882)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6944)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6944)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6944)
		if ((tmp2)){
			HX_STACK_LINE(6944)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6944)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6944)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(6944)
			tmp3 = false;
		}
		HX_STACK_LINE(6944)
		if ((tmp3)){
			HX_STACK_LINE(6944)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6944)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(6945)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6945)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6945)
			if ((tmp4)){
				HX_STACK_LINE(6945)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6945)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(6945)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(6945)
				tmp5 = false;
			}
			HX_STACK_LINE(6945)
			if ((tmp5)){
				HX_STACK_LINE(6945)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6945)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_CbSet_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSet x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","__fix_dbl_red",0x59e4ddf9,"zpp_nape.util.ZPP_Set_ZPP_CbSet.__fix_dbl_red","zpp_nape/util/RBTree.hx",6948,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(6948)
		while((true)){
			HX_STACK_LINE(6949)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6950)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(6951)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6951)
			if ((tmp)){
				HX_STACK_LINE(6952)
				par->colour = (int)1;
				HX_STACK_LINE(6953)
				break;
			}
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(6956)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6956)
			if ((tmp1)){
				HX_STACK_LINE(6957)
				n3 = g;
				HX_STACK_LINE(6958)
				t4 = g->next;
				HX_STACK_LINE(6959)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6959)
				if ((tmp2)){
					HX_STACK_LINE(6960)
					n1 = x;
					HX_STACK_LINE(6961)
					n2 = par;
					HX_STACK_LINE(6962)
					t1 = x->prev;
					HX_STACK_LINE(6963)
					t2 = x->next;
					HX_STACK_LINE(6964)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(6967)
					n1 = par;
					HX_STACK_LINE(6968)
					n2 = x;
					HX_STACK_LINE(6969)
					t1 = par->prev;
					HX_STACK_LINE(6970)
					t2 = x->prev;
					HX_STACK_LINE(6971)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(6975)
				n1 = g;
				HX_STACK_LINE(6976)
				t1 = g->prev;
				HX_STACK_LINE(6977)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6977)
				if ((tmp2)){
					HX_STACK_LINE(6978)
					n2 = x;
					HX_STACK_LINE(6979)
					n3 = par;
					HX_STACK_LINE(6980)
					t2 = x->prev;
					HX_STACK_LINE(6981)
					t3 = x->next;
					HX_STACK_LINE(6982)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(6985)
					n2 = par;
					HX_STACK_LINE(6986)
					n3 = x;
					HX_STACK_LINE(6987)
					t2 = par->prev;
					HX_STACK_LINE(6988)
					t3 = x->prev;
					HX_STACK_LINE(6989)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(6992)
			{
				HX_STACK_LINE(6993)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(6994)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6994)
				if ((tmp2)){
					HX_STACK_LINE(6995)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(6997)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(6997)
					if ((tmp3)){
						HX_STACK_LINE(6997)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(6998)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(6999)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6999)
				if ((tmp3)){
					HX_STACK_LINE(6999)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(7001)
			{
				HX_STACK_LINE(7002)
				n1->prev = t1;
				HX_STACK_LINE(7003)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7003)
				if ((tmp2)){
					HX_STACK_LINE(7003)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(7005)
			{
				HX_STACK_LINE(7006)
				n1->next = t2;
				HX_STACK_LINE(7007)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7007)
				if ((tmp2)){
					HX_STACK_LINE(7007)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(7009)
			{
				HX_STACK_LINE(7010)
				n2->prev = n1;
				HX_STACK_LINE(7011)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7011)
				if ((tmp2)){
					HX_STACK_LINE(7011)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(7013)
			{
				HX_STACK_LINE(7014)
				n2->next = n3;
				HX_STACK_LINE(7015)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7015)
				if ((tmp2)){
					HX_STACK_LINE(7015)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(7017)
			{
				HX_STACK_LINE(7018)
				n3->prev = t3;
				HX_STACK_LINE(7019)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7019)
				if ((tmp2)){
					HX_STACK_LINE(7019)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(7021)
			{
				HX_STACK_LINE(7022)
				n3->next = t4;
				HX_STACK_LINE(7023)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7023)
				if ((tmp2)){
					HX_STACK_LINE(7023)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(7025)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7025)
			n2->colour = tmp2;
			HX_STACK_LINE(7026)
			n1->colour = (int)1;
			HX_STACK_LINE(7027)
			n3->colour = (int)1;
			HX_STACK_LINE(7028)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7028)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7028)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7028)
			if ((tmp5)){
				HX_STACK_LINE(7028)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7028)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(7029)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7029)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(7029)
				if ((tmp6)){
					HX_STACK_LINE(7029)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(7029)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(7029)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(7029)
					tmp7 = false;
				}
				HX_STACK_LINE(7029)
				if ((tmp7)){
					HX_STACK_LINE(7030)
					x = n2;
					HX_STACK_LINE(7031)
					continue;
				}
			}
			HX_STACK_LINE(7033)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_CbSet_obj::try_insert_bool( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","try_insert_bool",0xb62408ef,"zpp_nape.util.ZPP_Set_ZPP_CbSet.try_insert_bool","zpp_nape/util/RBTree.hx",7036,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7037)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7038)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7039)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7039)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7039)
	if ((tmp1)){
		HX_STACK_LINE(7040)
		{
			HX_STACK_LINE(7041)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7041)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7041)
			if ((tmp3)){
				HX_STACK_LINE(7042)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(7042)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(7048)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(7048)
				x = tmp4;
				HX_STACK_LINE(7049)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
				HX_STACK_LINE(7050)
				x->next = null();
			}
			HX_STACK_LINE(7055)
			Dynamic();
		}
		HX_STACK_LINE(7057)
		x->data = obj;
		HX_STACK_LINE(7058)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7061)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7061)
		cur = tmp2;
		HX_STACK_LINE(7062)
		while((true)){
			HX_STACK_LINE(7063)
			::zpp_nape::callbacks::ZPP_CbSet tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7063)
			::zpp_nape::callbacks::ZPP_CbSet tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7063)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7063)
			if ((tmp5)){
				HX_STACK_LINE(7064)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7064)
				if ((tmp6)){
					HX_STACK_LINE(7065)
					{
						HX_STACK_LINE(7066)
						::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7066)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(7066)
						if ((tmp8)){
							HX_STACK_LINE(7067)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(7067)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(7073)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(7073)
							x = tmp9;
							HX_STACK_LINE(7074)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
							HX_STACK_LINE(7075)
							x->next = null();
						}
						HX_STACK_LINE(7080)
						Dynamic();
					}
					HX_STACK_LINE(7082)
					x->data = obj;
					HX_STACK_LINE(7083)
					cur->prev = x;
					HX_STACK_LINE(7084)
					x->parent = cur;
					HX_STACK_LINE(7085)
					break;
				}
				else{
					HX_STACK_LINE(7087)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7089)
				::zpp_nape::callbacks::ZPP_CbSet tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7089)
				::zpp_nape::callbacks::ZPP_CbSet tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(7089)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(7089)
				if ((tmp8)){
					HX_STACK_LINE(7090)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(7090)
					if ((tmp9)){
						HX_STACK_LINE(7091)
						{
							HX_STACK_LINE(7092)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(7092)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(7092)
							if ((tmp11)){
								HX_STACK_LINE(7093)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(7093)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(7099)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(7099)
								x = tmp12;
								HX_STACK_LINE(7100)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
								HX_STACK_LINE(7101)
								x->next = null();
							}
							HX_STACK_LINE(7106)
							Dynamic();
						}
						HX_STACK_LINE(7108)
						x->data = obj;
						HX_STACK_LINE(7109)
						cur->next = x;
						HX_STACK_LINE(7110)
						x->parent = cur;
						HX_STACK_LINE(7111)
						break;
					}
					else{
						HX_STACK_LINE(7113)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(7115)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(7118)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7118)
	if ((tmp2)){
		HX_STACK_LINE(7118)
		return false;
	}
	else{
		HX_STACK_LINE(7120)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7120)
		if ((tmp3)){
			HX_STACK_LINE(7120)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(7122)
			x->colour = (int)0;
			HX_STACK_LINE(7123)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7123)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7123)
			if ((tmp5)){
				HX_STACK_LINE(7123)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7123)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(7125)
		return true;
	}
	HX_STACK_LINE(7118)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::try_insert( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","try_insert",0xd7cd40da,"zpp_nape.util.ZPP_Set_ZPP_CbSet.try_insert","zpp_nape/util/RBTree.hx",7128,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7129)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7130)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7131)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7131)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7131)
	if ((tmp1)){
		HX_STACK_LINE(7132)
		{
			HX_STACK_LINE(7133)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7133)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7133)
			if ((tmp3)){
				HX_STACK_LINE(7134)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(7134)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(7140)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(7140)
				x = tmp4;
				HX_STACK_LINE(7141)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
				HX_STACK_LINE(7142)
				x->next = null();
			}
			HX_STACK_LINE(7147)
			Dynamic();
		}
		HX_STACK_LINE(7149)
		x->data = obj;
		HX_STACK_LINE(7150)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7153)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7153)
		cur = tmp2;
		HX_STACK_LINE(7154)
		while((true)){
			HX_STACK_LINE(7155)
			::zpp_nape::callbacks::ZPP_CbSet tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7155)
			::zpp_nape::callbacks::ZPP_CbSet tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7155)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7155)
			if ((tmp5)){
				HX_STACK_LINE(7156)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7156)
				if ((tmp6)){
					HX_STACK_LINE(7157)
					{
						HX_STACK_LINE(7158)
						::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7158)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(7158)
						if ((tmp8)){
							HX_STACK_LINE(7159)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(7159)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(7165)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(7165)
							x = tmp9;
							HX_STACK_LINE(7166)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
							HX_STACK_LINE(7167)
							x->next = null();
						}
						HX_STACK_LINE(7172)
						Dynamic();
					}
					HX_STACK_LINE(7174)
					x->data = obj;
					HX_STACK_LINE(7175)
					cur->prev = x;
					HX_STACK_LINE(7176)
					x->parent = cur;
					HX_STACK_LINE(7177)
					break;
				}
				else{
					HX_STACK_LINE(7179)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7181)
				::zpp_nape::callbacks::ZPP_CbSet tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7181)
				::zpp_nape::callbacks::ZPP_CbSet tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(7181)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(7181)
				if ((tmp8)){
					HX_STACK_LINE(7182)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(7182)
					if ((tmp9)){
						HX_STACK_LINE(7183)
						{
							HX_STACK_LINE(7184)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(7184)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(7184)
							if ((tmp11)){
								HX_STACK_LINE(7185)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(7185)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(7191)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(7191)
								x = tmp12;
								HX_STACK_LINE(7192)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
								HX_STACK_LINE(7193)
								x->next = null();
							}
							HX_STACK_LINE(7198)
							Dynamic();
						}
						HX_STACK_LINE(7200)
						x->data = obj;
						HX_STACK_LINE(7201)
						cur->next = x;
						HX_STACK_LINE(7202)
						x->parent = cur;
						HX_STACK_LINE(7203)
						break;
					}
					else{
						HX_STACK_LINE(7205)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(7207)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(7210)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7210)
	if ((tmp2)){
		HX_STACK_LINE(7210)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7210)
		return tmp3;
	}
	else{
		HX_STACK_LINE(7212)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7212)
		if ((tmp3)){
			HX_STACK_LINE(7212)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(7214)
			x->colour = (int)0;
			HX_STACK_LINE(7215)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7215)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7215)
			if ((tmp5)){
				HX_STACK_LINE(7215)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7215)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(7217)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7217)
		return tmp4;
	}
	HX_STACK_LINE(7210)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::insert( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSet","insert",0x959cb896,"zpp_nape.util.ZPP_Set_ZPP_CbSet.insert","zpp_nape/util/RBTree.hx",7220,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7229)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7230)
	{
		HX_STACK_LINE(7231)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7231)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7231)
		if ((tmp1)){
			HX_STACK_LINE(7232)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7232)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(7238)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7238)
			x = tmp2;
			HX_STACK_LINE(7239)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
			HX_STACK_LINE(7240)
			x->next = null();
		}
		HX_STACK_LINE(7245)
		Dynamic();
	}
	HX_STACK_LINE(7247)
	x->data = obj;
	HX_STACK_LINE(7248)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7248)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7248)
	if ((tmp1)){
		HX_STACK_LINE(7248)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7250)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7250)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7251)
		while((true)){
			HX_STACK_LINE(7252)
			::zpp_nape::callbacks::ZPP_CbSet tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7252)
			::zpp_nape::callbacks::ZPP_CbSet tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7252)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7252)
			if ((tmp5)){
				HX_STACK_LINE(7253)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7253)
				if ((tmp6)){
					HX_STACK_LINE(7254)
					cur->prev = x;
					HX_STACK_LINE(7255)
					x->parent = cur;
					HX_STACK_LINE(7256)
					break;
				}
				else{
					HX_STACK_LINE(7258)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7261)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(7261)
				if ((tmp6)){
					HX_STACK_LINE(7262)
					cur->next = x;
					HX_STACK_LINE(7263)
					x->parent = cur;
					HX_STACK_LINE(7264)
					break;
				}
				else{
					HX_STACK_LINE(7266)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(7270)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7270)
	if ((tmp2)){
		HX_STACK_LINE(7270)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(7272)
		x->colour = (int)0;
		HX_STACK_LINE(7273)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7273)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7273)
		if ((tmp4)){
			HX_STACK_LINE(7273)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7273)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(7283)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(7283)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::zpp_pool;


ZPP_Set_ZPP_CbSet_obj::ZPP_Set_ZPP_CbSet_obj()
{
}

void ZPP_Set_ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_CbSet);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_CbSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_Set_ZPP_CbSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_CbSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_CbSet_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_CbSet_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_Set_ZPP_CbSet_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSet*/ ,(int)offsetof(ZPP_Set_ZPP_CbSet_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSet*/ ,(int)offsetof(ZPP_Set_ZPP_CbSet_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSet*/ ,(int)offsetof(ZPP_Set_ZPP_CbSet_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_CbSet_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSet*/ ,(void *) &ZPP_Set_ZPP_CbSet_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_CbSet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_CbSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_CbSet","\x71","\x61","\x5e","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_CbSet_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_CbSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_CbSet_obj >;
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

void ZPP_Set_ZPP_CbSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
