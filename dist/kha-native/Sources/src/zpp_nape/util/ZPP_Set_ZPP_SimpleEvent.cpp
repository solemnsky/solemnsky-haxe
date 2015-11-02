#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","new",0x161d0028,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.new","zpp_nape/util/RBTree.hx",5509,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5550)
	this->colour = (int)0;
	HX_STACK_LINE(5549)
	this->parent = null();
	HX_STACK_LINE(5548)
	this->next = null();
	HX_STACK_LINE(5547)
	this->prev = null();
	HX_STACK_LINE(5546)
	this->data = null();
	HX_STACK_LINE(5545)
	this->swapped = null();
	HX_STACK_LINE(5544)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_SimpleEvent_obj::~ZPP_Set_ZPP_SimpleEvent_obj() { }

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > ZPP_Set_ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > _result_ = new ZPP_Set_ZPP_SimpleEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > _result_ = new ZPP_Set_ZPP_SimpleEvent_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_SimpleEvent_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","free",0x3e033be4,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.free","zpp_nape/util/RBTree.hx",5536,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5537)
		this->data = null();
		HX_STACK_LINE(5538)
		this->lt = null();
		HX_STACK_LINE(5539)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,free,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","alloc",0x1fde563d,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.alloc","zpp_nape/util/RBTree.hx",5543,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,alloc,(void))

bool ZPP_Set_ZPP_SimpleEvent_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","verify",0x245060b1,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.verify","zpp_nape/util/RBTree.hx",5552,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5553)
	{
		HX_STACK_LINE(5562)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5562)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5562)
		if ((tmp1)){
			HX_STACK_LINE(5563)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5563)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(5564)
			while((true)){
				HX_STACK_LINE(5564)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5564)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5564)
				if ((tmp4)){
					HX_STACK_LINE(5564)
					break;
				}
				HX_STACK_LINE(5564)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(5565)
			while((true)){
				HX_STACK_LINE(5565)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5565)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5565)
				if ((tmp4)){
					HX_STACK_LINE(5565)
					break;
				}
				HX_STACK_LINE(5566)
				::zpp_nape::geom::ZPP_SimpleEvent i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5567)
				{
					HX_STACK_LINE(5568)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(5569)
					{
						HX_STACK_LINE(5578)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(5578)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5578)
						if ((tmp6)){
							HX_STACK_LINE(5579)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(5579)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(5580)
							while((true)){
								HX_STACK_LINE(5580)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(5580)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(5580)
								if ((tmp9)){
									HX_STACK_LINE(5580)
									break;
								}
								HX_STACK_LINE(5580)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(5581)
							while((true)){
								HX_STACK_LINE(5581)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(5581)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(5581)
								if ((tmp9)){
									HX_STACK_LINE(5581)
									break;
								}
								HX_STACK_LINE(5582)
								::zpp_nape::geom::ZPP_SimpleEvent j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(5583)
								{
									HX_STACK_LINE(5584)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(5584)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(5584)
									if ((tmp11)){
										HX_STACK_LINE(5585)
										::zpp_nape::geom::ZPP_SimpleEvent tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5585)
										::zpp_nape::geom::ZPP_SimpleEvent tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(5585)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(5585)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(5585)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(5585)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(5585)
										if ((tmp16)){
											HX_STACK_LINE(5585)
											::zpp_nape::geom::ZPP_SimpleEvent tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(5585)
											::zpp_nape::geom::ZPP_SimpleEvent tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(5585)
											::zpp_nape::geom::ZPP_SimpleEvent tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(5585)
											::zpp_nape::geom::ZPP_SimpleEvent tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(5585)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(5585)
											tmp17 = false;
										}
										HX_STACK_LINE(5585)
										if ((tmp17)){
											HX_STACK_LINE(5585)
											return false;
										}
									}
									else{
										HX_STACK_LINE(5587)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5587)
										if ((tmp12)){
											HX_STACK_LINE(5587)
											prei = false;
										}
										else{
											HX_STACK_LINE(5589)
											::zpp_nape::geom::ZPP_SimpleEvent tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5589)
											::zpp_nape::geom::ZPP_SimpleEvent tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5589)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(5589)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(5589)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(5589)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(5589)
											if ((tmp17)){
												HX_STACK_LINE(5589)
												::zpp_nape::geom::ZPP_SimpleEvent tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(5589)
												::zpp_nape::geom::ZPP_SimpleEvent tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(5589)
												::zpp_nape::geom::ZPP_SimpleEvent tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(5589)
												::zpp_nape::geom::ZPP_SimpleEvent tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(5589)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(5589)
												tmp18 = false;
											}
											HX_STACK_LINE(5589)
											if ((tmp18)){
												HX_STACK_LINE(5589)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(5592)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(5592)
								if ((tmp10)){
									HX_STACK_LINE(5593)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(5594)
									while((true)){
										HX_STACK_LINE(5594)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5594)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5594)
										if ((tmp12)){
											HX_STACK_LINE(5594)
											break;
										}
										HX_STACK_LINE(5594)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(5597)
									while((true)){
										HX_STACK_LINE(5597)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5597)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5597)
										if ((tmp11)){
											HX_STACK_LINE(5597)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5597)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5597)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(5597)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(5597)
											tmp12 = false;
										}
										HX_STACK_LINE(5597)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(5597)
										if ((tmp13)){
											HX_STACK_LINE(5597)
											break;
										}
										HX_STACK_LINE(5597)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(5598)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(5604)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5604)
				if ((tmp5)){
					HX_STACK_LINE(5605)
					set_ite = set_ite->next;
					HX_STACK_LINE(5606)
					while((true)){
						HX_STACK_LINE(5606)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5606)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5606)
						if ((tmp7)){
							HX_STACK_LINE(5606)
							break;
						}
						HX_STACK_LINE(5606)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(5609)
					while((true)){
						HX_STACK_LINE(5609)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5609)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5609)
						if ((tmp6)){
							HX_STACK_LINE(5609)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(5609)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5609)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5609)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(5609)
							tmp7 = false;
						}
						HX_STACK_LINE(5609)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5609)
						if ((tmp8)){
							HX_STACK_LINE(5609)
							break;
						}
						HX_STACK_LINE(5609)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(5610)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(5615)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,verify,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","empty",0x6e24ec55,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.empty","zpp_nape/util/RBTree.hx",5617,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5618)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5618)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5618)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,empty,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","singular",0x6613440f,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.singular","zpp_nape/util/RBTree.hx",5620,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5621)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5621)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5621)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5621)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5621)
	if ((tmp2)){
		HX_STACK_LINE(5621)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5621)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(5621)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(5621)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(5621)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(5621)
		tmp3 = false;
	}
	HX_STACK_LINE(5621)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(5621)
	if ((tmp3)){
		HX_STACK_LINE(5621)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(5621)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(5621)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(5621)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(5621)
		tmp4 = false;
	}
	HX_STACK_LINE(5621)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,singular,return )

int ZPP_Set_ZPP_SimpleEvent_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","size",0x46943ff9,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.size","zpp_nape/util/RBTree.hx",5623,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5624)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5625)
	{
		HX_STACK_LINE(5634)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5634)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5634)
		if ((tmp1)){
			HX_STACK_LINE(5635)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5635)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(5636)
			while((true)){
				HX_STACK_LINE(5636)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5636)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5636)
				if ((tmp4)){
					HX_STACK_LINE(5636)
					break;
				}
				HX_STACK_LINE(5636)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(5637)
			while((true)){
				HX_STACK_LINE(5637)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5637)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5637)
				if ((tmp4)){
					HX_STACK_LINE(5637)
					break;
				}
				HX_STACK_LINE(5638)
				::zpp_nape::geom::ZPP_SimpleEvent i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5639)
				(ret)++;
				HX_STACK_LINE(5640)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5640)
				if ((tmp5)){
					HX_STACK_LINE(5641)
					set_ite = set_ite->next;
					HX_STACK_LINE(5642)
					while((true)){
						HX_STACK_LINE(5642)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5642)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5642)
						if ((tmp7)){
							HX_STACK_LINE(5642)
							break;
						}
						HX_STACK_LINE(5642)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(5645)
					while((true)){
						HX_STACK_LINE(5645)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5645)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5645)
						if ((tmp6)){
							HX_STACK_LINE(5645)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(5645)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5645)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5645)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(5645)
							tmp7 = false;
						}
						HX_STACK_LINE(5645)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5645)
						if ((tmp8)){
							HX_STACK_LINE(5645)
							break;
						}
						HX_STACK_LINE(5645)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(5646)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(5651)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5651)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,size,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","has",0x16186f22,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.has","zpp_nape/util/RBTree.hx",5653,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5654)
	::zpp_nape::geom::ZPP_SimpleEvent tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5654)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5654)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5654)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::find( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","find",0x3dfc6f71,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.find","zpp_nape/util/RBTree.hx",5656,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5657)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5657)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5658)
	while((true)){
		HX_STACK_LINE(5658)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5658)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5658)
		if ((tmp1)){
			HX_STACK_LINE(5658)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(5658)
			tmp2 = false;
		}
		HX_STACK_LINE(5658)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5658)
		if ((tmp3)){
			HX_STACK_LINE(5658)
			break;
		}
		HX_STACK_LINE(5659)
		::zpp_nape::geom::ZPP_SimpleEvent tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5659)
		::zpp_nape::geom::ZPP_SimpleEvent tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(5659)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(5659)
		if ((tmp6)){
			HX_STACK_LINE(5659)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(5660)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(5662)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5662)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,find,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","has_weak",0x0a1dedf5,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.has_weak","zpp_nape/util/RBTree.hx",5664,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5665)
	::zpp_nape::geom::ZPP_SimpleEvent tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5665)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5665)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5665)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","find_weak",0x5deb6f46,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.find_weak","zpp_nape/util/RBTree.hx",5667,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5668)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5668)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5669)
	while((true)){
		HX_STACK_LINE(5669)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5669)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5669)
		if ((tmp2)){
			HX_STACK_LINE(5669)
			break;
		}
		HX_STACK_LINE(5670)
		::zpp_nape::geom::ZPP_SimpleEvent tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5670)
		::zpp_nape::geom::ZPP_SimpleEvent tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5670)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(5670)
		if ((tmp5)){
			HX_STACK_LINE(5670)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(5671)
			::zpp_nape::geom::ZPP_SimpleEvent tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5671)
			::zpp_nape::geom::ZPP_SimpleEvent tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(5671)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(5671)
			if ((tmp8)){
				HX_STACK_LINE(5671)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(5672)
				break;
			}
		}
	}
	HX_STACK_LINE(5674)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5674)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,find_weak,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","lower_bound",0x3a5b2008,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.lower_bound","zpp_nape/util/RBTree.hx",5676,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5677)
	::zpp_nape::geom::ZPP_SimpleEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5677)
	{
		HX_STACK_LINE(5678)
		::zpp_nape::geom::ZPP_SimpleEvent ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5679)
		{
			HX_STACK_LINE(5688)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5688)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5688)
			if ((tmp2)){
				HX_STACK_LINE(5689)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5689)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(5690)
				while((true)){
					HX_STACK_LINE(5690)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5690)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5690)
					if ((tmp5)){
						HX_STACK_LINE(5690)
						break;
					}
					HX_STACK_LINE(5690)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(5691)
				while((true)){
					HX_STACK_LINE(5691)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5691)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5691)
					if ((tmp5)){
						HX_STACK_LINE(5691)
						break;
					}
					HX_STACK_LINE(5692)
					::zpp_nape::geom::ZPP_SimpleEvent elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(5693)
					{
						HX_STACK_LINE(5694)
						::zpp_nape::geom::ZPP_SimpleEvent tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5694)
						::zpp_nape::geom::ZPP_SimpleEvent tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5694)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5694)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(5694)
						if ((tmp9)){
							HX_STACK_LINE(5695)
							ret = elt;
							HX_STACK_LINE(5696)
							break;
						}
					}
					HX_STACK_LINE(5699)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(5699)
					if ((tmp6)){
						HX_STACK_LINE(5700)
						set_ite = set_ite->next;
						HX_STACK_LINE(5701)
						while((true)){
							HX_STACK_LINE(5701)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(5701)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(5701)
							if ((tmp8)){
								HX_STACK_LINE(5701)
								break;
							}
							HX_STACK_LINE(5701)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(5704)
						while((true)){
							HX_STACK_LINE(5704)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(5704)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(5704)
							if ((tmp7)){
								HX_STACK_LINE(5704)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(5704)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(5704)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(5704)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(5704)
								tmp8 = false;
							}
							HX_STACK_LINE(5704)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5704)
							if ((tmp9)){
								HX_STACK_LINE(5704)
								break;
							}
							HX_STACK_LINE(5704)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(5705)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(5710)
		tmp = ret;
	}
	HX_STACK_LINE(5677)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,lower_bound,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","first",0xfee829f8,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.first","zpp_nape/util/RBTree.hx",5713,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5722)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5722)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5723)
	while((true)){
		HX_STACK_LINE(5723)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5723)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5723)
		if ((tmp2)){
			HX_STACK_LINE(5723)
			break;
		}
		HX_STACK_LINE(5723)
		cur = cur->prev;
	}
	HX_STACK_LINE(5724)
	::zpp_nape::geom::ZPP_SimpleEvent tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5724)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,first,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","pop_front",0x4a71f603,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.pop_front","zpp_nape/util/RBTree.hx",5726,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5735)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5735)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5736)
	while((true)){
		HX_STACK_LINE(5736)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5736)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5736)
		if ((tmp2)){
			HX_STACK_LINE(5736)
			break;
		}
		HX_STACK_LINE(5736)
		cur = cur->prev;
	}
	HX_STACK_LINE(5737)
	::zpp_nape::geom::ZPP_SimpleEvent ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5738)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5738)
	this->remove_node(tmp1);
	HX_STACK_LINE(5739)
	::zpp_nape::geom::ZPP_SimpleEvent tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5739)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,pop_front,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","remove",0x8799797c,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.remove","zpp_nape/util/RBTree.hx",5741,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(5742)
		::zpp_nape::geom::ZPP_SimpleEvent tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5742)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5742)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(5751)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5751)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","successor_node",0x217b03b3,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.successor_node","zpp_nape/util/RBTree.hx",5753,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(5762)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5762)
	if ((tmp)){
		HX_STACK_LINE(5763)
		cur = cur->next;
		HX_STACK_LINE(5764)
		while((true)){
			HX_STACK_LINE(5764)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5764)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5764)
			if ((tmp2)){
				HX_STACK_LINE(5764)
				break;
			}
			HX_STACK_LINE(5764)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(5767)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5768)
		cur = cur->parent;
		HX_STACK_LINE(5769)
		while((true)){
			HX_STACK_LINE(5769)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5769)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5769)
			if ((tmp1)){
				HX_STACK_LINE(5769)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(5769)
				tmp2 = false;
			}
			HX_STACK_LINE(5769)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5769)
			if ((tmp3)){
				HX_STACK_LINE(5769)
				break;
			}
			HX_STACK_LINE(5770)
			pre = cur;
			HX_STACK_LINE(5771)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(5774)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5774)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","predecessor_node",0x659fd9b0,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.predecessor_node","zpp_nape/util/RBTree.hx",5776,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(5785)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5785)
	if ((tmp)){
		HX_STACK_LINE(5786)
		cur = cur->prev;
		HX_STACK_LINE(5787)
		while((true)){
			HX_STACK_LINE(5787)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5787)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5787)
			if ((tmp2)){
				HX_STACK_LINE(5787)
				break;
			}
			HX_STACK_LINE(5787)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(5790)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5791)
		cur = cur->parent;
		HX_STACK_LINE(5792)
		while((true)){
			HX_STACK_LINE(5792)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5792)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5792)
			if ((tmp1)){
				HX_STACK_LINE(5792)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(5792)
				tmp2 = false;
			}
			HX_STACK_LINE(5792)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5792)
			if ((tmp3)){
				HX_STACK_LINE(5792)
				break;
			}
			HX_STACK_LINE(5793)
			pre = cur;
			HX_STACK_LINE(5794)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(5797)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5797)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,predecessor_node,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::successor( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","successor",0x0490f36e,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.successor","zpp_nape/util/RBTree.hx",5799,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5808)
	::zpp_nape::geom::ZPP_SimpleEvent tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5808)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5808)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5808)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(5809)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5809)
	::zpp_nape::geom::ZPP_SimpleEvent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(5809)
	if ((tmp3)){
		HX_STACK_LINE(5809)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(5809)
		tmp4 = node->data;
	}
	HX_STACK_LINE(5809)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,successor,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","predecessor",0xaa35de91,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.predecessor","zpp_nape/util/RBTree.hx",5811,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5820)
	::zpp_nape::geom::ZPP_SimpleEvent tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5820)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5820)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5820)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(5821)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5821)
	::zpp_nape::geom::ZPP_SimpleEvent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(5821)
	if ((tmp3)){
		HX_STACK_LINE(5821)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(5821)
		tmp4 = node->data;
	}
	HX_STACK_LINE(5821)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,predecessor,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","remove_node",0x0ccbcae5,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.remove_node","zpp_nape/util/RBTree.hx",5823,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(5832)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5832)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5832)
		if ((tmp)){
			HX_STACK_LINE(5832)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(5832)
			tmp1 = false;
		}
		HX_STACK_LINE(5832)
		if ((tmp1)){
			HX_STACK_LINE(5833)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(5834)
			while((true)){
				HX_STACK_LINE(5834)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5834)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5834)
				if ((tmp3)){
					HX_STACK_LINE(5834)
					break;
				}
				HX_STACK_LINE(5834)
				sm = sm->prev;
			}
			HX_STACK_LINE(5835)
			{
				HX_STACK_LINE(5836)
				::zpp_nape::geom::ZPP_SimpleEvent t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(5837)
				cur->data = sm->data;
				HX_STACK_LINE(5838)
				sm->data = t;
			}
			HX_STACK_LINE(5840)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5840)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5840)
			if ((tmp3)){
				HX_STACK_LINE(5840)
				::zpp_nape::geom::ZPP_SimpleEvent tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5840)
				::zpp_nape::geom::ZPP_SimpleEvent tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5840)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(5841)
			cur = sm;
		}
		HX_STACK_LINE(5851)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5851)
		if ((tmp2)){
			HX_STACK_LINE(5851)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(5851)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(5852)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5852)
		if ((tmp4)){
			HX_STACK_LINE(5853)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5853)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5853)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(5853)
			if ((tmp6)){
				HX_STACK_LINE(5853)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(5853)
				tmp7 = true;
			}
			HX_STACK_LINE(5853)
			if ((tmp7)){
				HX_STACK_LINE(5853)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(5854)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(5854)
				if ((tmp8)){
					HX_STACK_LINE(5855)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(5856)
					while((true)){
						HX_STACK_LINE(5857)
						(parent->colour)++;
						HX_STACK_LINE(5858)
						(parent->prev->colour)--;
						HX_STACK_LINE(5859)
						(parent->next->colour)--;
						HX_STACK_LINE(5860)
						{
							HX_STACK_LINE(5861)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(5862)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5862)
							if ((tmp9)){
								HX_STACK_LINE(5863)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(5863)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(5864)
								break;
							}
							else{
								HX_STACK_LINE(5866)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(5866)
								if ((tmp10)){
									HX_STACK_LINE(5867)
									{
										HX_STACK_LINE(5868)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5868)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5868)
										if ((tmp11)){
											HX_STACK_LINE(5868)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5868)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5868)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(5868)
											tmp12 = false;
										}
										HX_STACK_LINE(5868)
										if ((tmp12)){
											HX_STACK_LINE(5869)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5869)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(5870)
											break;
										}
									}
									HX_STACK_LINE(5873)
									{
										HX_STACK_LINE(5874)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5874)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5874)
										if ((tmp11)){
											HX_STACK_LINE(5874)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5874)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5874)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(5874)
											tmp12 = false;
										}
										HX_STACK_LINE(5874)
										if ((tmp12)){
											HX_STACK_LINE(5875)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5875)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(5876)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(5881)
						{
							HX_STACK_LINE(5882)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(5883)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(5883)
							if ((tmp9)){
								HX_STACK_LINE(5884)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(5884)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(5885)
								break;
							}
							else{
								HX_STACK_LINE(5887)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(5887)
								if ((tmp10)){
									HX_STACK_LINE(5888)
									{
										HX_STACK_LINE(5889)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5889)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5889)
										if ((tmp11)){
											HX_STACK_LINE(5889)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5889)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5889)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(5889)
											tmp12 = false;
										}
										HX_STACK_LINE(5889)
										if ((tmp12)){
											HX_STACK_LINE(5890)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5890)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(5891)
											break;
										}
									}
									HX_STACK_LINE(5894)
									{
										HX_STACK_LINE(5895)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(5895)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(5895)
										if ((tmp11)){
											HX_STACK_LINE(5895)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5895)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(5895)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(5895)
											tmp12 = false;
										}
										HX_STACK_LINE(5895)
										if ((tmp12)){
											HX_STACK_LINE(5896)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(5896)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(5897)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(5902)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(5902)
						if ((tmp9)){
							HX_STACK_LINE(5903)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5903)
							if ((tmp10)){
								HX_STACK_LINE(5904)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(5907)
								parent = parent->parent;
								HX_STACK_LINE(5908)
								continue;
							}
						}
						HX_STACK_LINE(5911)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(5915)
		{
			HX_STACK_LINE(5916)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5917)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5917)
			if ((tmp5)){
				HX_STACK_LINE(5918)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(5920)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5920)
				if ((tmp6)){
					HX_STACK_LINE(5920)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(5921)
					par->next = child;
				}
			}
			HX_STACK_LINE(5922)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5922)
			if ((tmp6)){
				HX_STACK_LINE(5922)
				child->parent = par;
			}
		}
		HX_STACK_LINE(5924)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(5924)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(5924)
		cur->parent = tmp6;
		HX_STACK_LINE(5925)
		{
			HX_STACK_LINE(5926)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5935)
			{
				HX_STACK_LINE(5935)
				o->data = null();
				HX_STACK_LINE(5935)
				o->lt = null();
				HX_STACK_LINE(5935)
				o->swapped = null();
			}
			HX_STACK_LINE(5936)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(5936)
			o->next = tmp7;
			HX_STACK_LINE(5937)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,remove_node,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","clear",0x46a62355,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.clear","zpp_nape/util/RBTree.hx",5944,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5944)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5944)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5944)
		if ((tmp1)){
			HX_STACK_LINE(5944)
			Dynamic();
		}
		else{
			HX_STACK_LINE(5944)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5944)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5944)
			while((true)){
				HX_STACK_LINE(5944)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5944)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5944)
				if ((tmp4)){
					HX_STACK_LINE(5944)
					break;
				}
				HX_STACK_LINE(5944)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5944)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5944)
				if ((tmp5)){
					HX_STACK_LINE(5944)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(5944)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(5944)
					if ((tmp7)){
						HX_STACK_LINE(5944)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(5944)
						::zpp_nape::geom::ZPP_SimpleEvent tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5944)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(5944)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(5944)
						if ((tmp9)){
							HX_STACK_LINE(5944)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5944)
							if ((tmp10)){
								HX_STACK_LINE(5944)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(5944)
								ret->next = null();
							}
							HX_STACK_LINE(5944)
							cur->parent = null();
						}
						HX_STACK_LINE(5944)
						{
							HX_STACK_LINE(5944)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5944)
							{
								HX_STACK_LINE(5944)
								o->data = null();
								HX_STACK_LINE(5944)
								o->lt = null();
								HX_STACK_LINE(5944)
								o->swapped = null();
							}
							HX_STACK_LINE(5944)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5944)
							o->next = tmp10;
							HX_STACK_LINE(5944)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5944)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(5944)
				cur = tmp6;
			}
			HX_STACK_LINE(5944)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","clear_with",0x5b9a3a70,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.clear_with","zpp_nape/util/RBTree.hx",5947,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(5948)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5948)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5948)
		if ((tmp1)){
			HX_STACK_LINE(5948)
			return null();
		}
		else{
			HX_STACK_LINE(5950)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5950)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5951)
			while((true)){
				HX_STACK_LINE(5951)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5951)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5951)
				if ((tmp4)){
					HX_STACK_LINE(5951)
					break;
				}
				HX_STACK_LINE(5951)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5951)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(5951)
				if ((tmp5)){
					HX_STACK_LINE(5951)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(5951)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(5951)
					if ((tmp7)){
						HX_STACK_LINE(5951)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(5951)
						::zpp_nape::geom::ZPP_SimpleEvent tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(5951)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(5951)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(5951)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(5951)
						if ((tmp9)){
							HX_STACK_LINE(5951)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5951)
							if ((tmp10)){
								HX_STACK_LINE(5951)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(5951)
								ret->next = null();
							}
							HX_STACK_LINE(5951)
							cur->parent = null();
						}
						HX_STACK_LINE(5951)
						{
							HX_STACK_LINE(5951)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5951)
							{
								HX_STACK_LINE(5951)
								o->data = null();
								HX_STACK_LINE(5951)
								o->lt = null();
								HX_STACK_LINE(5951)
								o->swapped = null();
							}
							HX_STACK_LINE(5951)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(5951)
							o->next = tmp10;
							HX_STACK_LINE(5951)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5951)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(5951)
				cur = tmp6;
			}
			HX_STACK_LINE(5952)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","clear_node",0x55abce6c,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.clear_node","zpp_nape/util/RBTree.hx",5956,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(5965)
	::zpp_nape::geom::ZPP_SimpleEvent tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5965)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(5966)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5967)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5967)
	if ((tmp1)){
		HX_STACK_LINE(5968)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5968)
		if ((tmp2)){
			HX_STACK_LINE(5968)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(5969)
			ret->next = null();
		}
		HX_STACK_LINE(5970)
		node->parent = null();
	}
	HX_STACK_LINE(5972)
	{
		HX_STACK_LINE(5973)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5982)
		{
			HX_STACK_LINE(5982)
			o->data = null();
			HX_STACK_LINE(5982)
			o->lt = null();
			HX_STACK_LINE(5982)
			o->swapped = null();
		}
		HX_STACK_LINE(5983)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5983)
		o->next = tmp2;
		HX_STACK_LINE(5984)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5989)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5989)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleEvent_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","__fix_neg_red",0x76adc9a0,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.__fix_neg_red","zpp_nape/util/RBTree.hx",5991,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(5992)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(5993)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5993)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5993)
		if ((tmp)){
			HX_STACK_LINE(5994)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(5995)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(5996)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(5997)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(5998)
			nl->colour = (int)0;
			HX_STACK_LINE(5999)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5999)
			negred->colour = tmp2;
			HX_STACK_LINE(6000)
			{
				HX_STACK_LINE(6001)
				negred->next = trl;
				HX_STACK_LINE(6002)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6002)
				if ((tmp3)){
					HX_STACK_LINE(6002)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(6004)
			{
				HX_STACK_LINE(6005)
				::zpp_nape::geom::ZPP_SimpleEvent t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(6006)
				parent->data = nr->data;
				HX_STACK_LINE(6007)
				nr->data = t;
			}
			HX_STACK_LINE(6009)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6009)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6009)
			if ((tmp4)){
				HX_STACK_LINE(6009)
				::zpp_nape::geom::ZPP_SimpleEvent tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6009)
				::zpp_nape::geom::ZPP_SimpleEvent tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6009)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(6010)
			{
				HX_STACK_LINE(6011)
				nr->prev = trr;
				HX_STACK_LINE(6012)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6012)
				if ((tmp5)){
					HX_STACK_LINE(6012)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(6014)
			{
				HX_STACK_LINE(6015)
				nr->next = parent->next;
				HX_STACK_LINE(6016)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6016)
				if ((tmp5)){
					HX_STACK_LINE(6016)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(6018)
			{
				HX_STACK_LINE(6019)
				parent->next = nr;
				HX_STACK_LINE(6020)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6020)
				if ((tmp5)){
					HX_STACK_LINE(6020)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(6022)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(6025)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(6026)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(6027)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(6028)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(6029)
			nl->colour = (int)0;
			HX_STACK_LINE(6030)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6030)
			negred->colour = tmp2;
			HX_STACK_LINE(6031)
			{
				HX_STACK_LINE(6032)
				negred->prev = trl;
				HX_STACK_LINE(6033)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6033)
				if ((tmp3)){
					HX_STACK_LINE(6033)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(6035)
			{
				HX_STACK_LINE(6036)
				::zpp_nape::geom::ZPP_SimpleEvent t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(6037)
				parent->data = nr->data;
				HX_STACK_LINE(6038)
				nr->data = t;
			}
			HX_STACK_LINE(6040)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6040)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6040)
			if ((tmp4)){
				HX_STACK_LINE(6040)
				::zpp_nape::geom::ZPP_SimpleEvent tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6040)
				::zpp_nape::geom::ZPP_SimpleEvent tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6040)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(6041)
			{
				HX_STACK_LINE(6042)
				nr->next = trr;
				HX_STACK_LINE(6043)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6043)
				if ((tmp5)){
					HX_STACK_LINE(6043)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(6045)
			{
				HX_STACK_LINE(6046)
				nr->prev = parent->prev;
				HX_STACK_LINE(6047)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6047)
				if ((tmp5)){
					HX_STACK_LINE(6047)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(6049)
			{
				HX_STACK_LINE(6050)
				parent->prev = nr;
				HX_STACK_LINE(6051)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6051)
				if ((tmp5)){
					HX_STACK_LINE(6051)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(6053)
			tmp1 = nl;
		}
		HX_STACK_LINE(5993)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6055)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6055)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6055)
		if ((tmp2)){
			HX_STACK_LINE(6055)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6055)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6055)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(6055)
			tmp3 = false;
		}
		HX_STACK_LINE(6055)
		if ((tmp3)){
			HX_STACK_LINE(6055)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6055)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(6056)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6056)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6056)
			if ((tmp4)){
				HX_STACK_LINE(6056)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6056)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(6056)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(6056)
				tmp5 = false;
			}
			HX_STACK_LINE(6056)
			if ((tmp5)){
				HX_STACK_LINE(6056)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6056)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","__fix_dbl_red",0x84c5f77e,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.__fix_dbl_red","zpp_nape/util/RBTree.hx",6059,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(6059)
		while((true)){
			HX_STACK_LINE(6060)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6061)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(6062)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6062)
			if ((tmp)){
				HX_STACK_LINE(6063)
				par->colour = (int)1;
				HX_STACK_LINE(6064)
				break;
			}
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(6067)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6067)
			if ((tmp1)){
				HX_STACK_LINE(6068)
				n3 = g;
				HX_STACK_LINE(6069)
				t4 = g->next;
				HX_STACK_LINE(6070)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6070)
				if ((tmp2)){
					HX_STACK_LINE(6071)
					n1 = x;
					HX_STACK_LINE(6072)
					n2 = par;
					HX_STACK_LINE(6073)
					t1 = x->prev;
					HX_STACK_LINE(6074)
					t2 = x->next;
					HX_STACK_LINE(6075)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(6078)
					n1 = par;
					HX_STACK_LINE(6079)
					n2 = x;
					HX_STACK_LINE(6080)
					t1 = par->prev;
					HX_STACK_LINE(6081)
					t2 = x->prev;
					HX_STACK_LINE(6082)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(6086)
				n1 = g;
				HX_STACK_LINE(6087)
				t1 = g->prev;
				HX_STACK_LINE(6088)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6088)
				if ((tmp2)){
					HX_STACK_LINE(6089)
					n2 = x;
					HX_STACK_LINE(6090)
					n3 = par;
					HX_STACK_LINE(6091)
					t2 = x->prev;
					HX_STACK_LINE(6092)
					t3 = x->next;
					HX_STACK_LINE(6093)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(6096)
					n2 = par;
					HX_STACK_LINE(6097)
					n3 = x;
					HX_STACK_LINE(6098)
					t2 = par->prev;
					HX_STACK_LINE(6099)
					t3 = x->prev;
					HX_STACK_LINE(6100)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(6103)
			{
				HX_STACK_LINE(6104)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(6105)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6105)
				if ((tmp2)){
					HX_STACK_LINE(6106)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(6108)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(6108)
					if ((tmp3)){
						HX_STACK_LINE(6108)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(6109)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(6110)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6110)
				if ((tmp3)){
					HX_STACK_LINE(6110)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(6112)
			{
				HX_STACK_LINE(6113)
				n1->prev = t1;
				HX_STACK_LINE(6114)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6114)
				if ((tmp2)){
					HX_STACK_LINE(6114)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(6116)
			{
				HX_STACK_LINE(6117)
				n1->next = t2;
				HX_STACK_LINE(6118)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6118)
				if ((tmp2)){
					HX_STACK_LINE(6118)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(6120)
			{
				HX_STACK_LINE(6121)
				n2->prev = n1;
				HX_STACK_LINE(6122)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6122)
				if ((tmp2)){
					HX_STACK_LINE(6122)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(6124)
			{
				HX_STACK_LINE(6125)
				n2->next = n3;
				HX_STACK_LINE(6126)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6126)
				if ((tmp2)){
					HX_STACK_LINE(6126)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(6128)
			{
				HX_STACK_LINE(6129)
				n3->prev = t3;
				HX_STACK_LINE(6130)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6130)
				if ((tmp2)){
					HX_STACK_LINE(6130)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(6132)
			{
				HX_STACK_LINE(6133)
				n3->next = t4;
				HX_STACK_LINE(6134)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6134)
				if ((tmp2)){
					HX_STACK_LINE(6134)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(6136)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6136)
			n2->colour = tmp2;
			HX_STACK_LINE(6137)
			n1->colour = (int)1;
			HX_STACK_LINE(6138)
			n3->colour = (int)1;
			HX_STACK_LINE(6139)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6139)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6139)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6139)
			if ((tmp5)){
				HX_STACK_LINE(6139)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6139)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(6140)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6140)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(6140)
				if ((tmp6)){
					HX_STACK_LINE(6140)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(6140)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(6140)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(6140)
					tmp7 = false;
				}
				HX_STACK_LINE(6140)
				if ((tmp7)){
					HX_STACK_LINE(6141)
					x = n2;
					HX_STACK_LINE(6142)
					continue;
				}
			}
			HX_STACK_LINE(6144)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_SimpleEvent_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","try_insert_bool",0x2ea24db4,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.try_insert_bool","zpp_nape/util/RBTree.hx",6147,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6148)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6149)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6150)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6150)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6150)
	if ((tmp1)){
		HX_STACK_LINE(6151)
		{
			HX_STACK_LINE(6152)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6152)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6152)
			if ((tmp3)){
				HX_STACK_LINE(6153)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6153)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(6159)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6159)
				x = tmp4;
				HX_STACK_LINE(6160)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
				HX_STACK_LINE(6161)
				x->next = null();
			}
			HX_STACK_LINE(6166)
			Dynamic();
		}
		HX_STACK_LINE(6168)
		x->data = obj;
		HX_STACK_LINE(6169)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6172)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6172)
		cur = tmp2;
		HX_STACK_LINE(6173)
		while((true)){
			HX_STACK_LINE(6174)
			::zpp_nape::geom::ZPP_SimpleEvent tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6174)
			::zpp_nape::geom::ZPP_SimpleEvent tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6174)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6174)
			if ((tmp5)){
				HX_STACK_LINE(6175)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6175)
				if ((tmp6)){
					HX_STACK_LINE(6176)
					{
						HX_STACK_LINE(6177)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6177)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(6177)
						if ((tmp8)){
							HX_STACK_LINE(6178)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6178)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(6184)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6184)
							x = tmp9;
							HX_STACK_LINE(6185)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
							HX_STACK_LINE(6186)
							x->next = null();
						}
						HX_STACK_LINE(6191)
						Dynamic();
					}
					HX_STACK_LINE(6193)
					x->data = obj;
					HX_STACK_LINE(6194)
					cur->prev = x;
					HX_STACK_LINE(6195)
					x->parent = cur;
					HX_STACK_LINE(6196)
					break;
				}
				else{
					HX_STACK_LINE(6198)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6200)
				::zpp_nape::geom::ZPP_SimpleEvent tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6200)
				::zpp_nape::geom::ZPP_SimpleEvent tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(6200)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(6200)
				if ((tmp8)){
					HX_STACK_LINE(6201)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(6201)
					if ((tmp9)){
						HX_STACK_LINE(6202)
						{
							HX_STACK_LINE(6203)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6203)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(6203)
							if ((tmp11)){
								HX_STACK_LINE(6204)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(6204)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(6210)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(6210)
								x = tmp12;
								HX_STACK_LINE(6211)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
								HX_STACK_LINE(6212)
								x->next = null();
							}
							HX_STACK_LINE(6217)
							Dynamic();
						}
						HX_STACK_LINE(6219)
						x->data = obj;
						HX_STACK_LINE(6220)
						cur->next = x;
						HX_STACK_LINE(6221)
						x->parent = cur;
						HX_STACK_LINE(6222)
						break;
					}
					else{
						HX_STACK_LINE(6224)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(6226)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(6229)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6229)
	if ((tmp2)){
		HX_STACK_LINE(6229)
		return false;
	}
	else{
		HX_STACK_LINE(6231)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6231)
		if ((tmp3)){
			HX_STACK_LINE(6231)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(6233)
			x->colour = (int)0;
			HX_STACK_LINE(6234)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6234)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6234)
			if ((tmp5)){
				HX_STACK_LINE(6234)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6234)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(6236)
		return true;
	}
	HX_STACK_LINE(6229)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","try_insert",0x3e1f3235,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.try_insert","zpp_nape/util/RBTree.hx",6239,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6240)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6241)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6242)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6242)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6242)
	if ((tmp1)){
		HX_STACK_LINE(6243)
		{
			HX_STACK_LINE(6244)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6244)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6244)
			if ((tmp3)){
				HX_STACK_LINE(6245)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6245)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(6251)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6251)
				x = tmp4;
				HX_STACK_LINE(6252)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
				HX_STACK_LINE(6253)
				x->next = null();
			}
			HX_STACK_LINE(6258)
			Dynamic();
		}
		HX_STACK_LINE(6260)
		x->data = obj;
		HX_STACK_LINE(6261)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6264)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6264)
		cur = tmp2;
		HX_STACK_LINE(6265)
		while((true)){
			HX_STACK_LINE(6266)
			::zpp_nape::geom::ZPP_SimpleEvent tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6266)
			::zpp_nape::geom::ZPP_SimpleEvent tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6266)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6266)
			if ((tmp5)){
				HX_STACK_LINE(6267)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6267)
				if ((tmp6)){
					HX_STACK_LINE(6268)
					{
						HX_STACK_LINE(6269)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6269)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(6269)
						if ((tmp8)){
							HX_STACK_LINE(6270)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6270)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(6276)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(6276)
							x = tmp9;
							HX_STACK_LINE(6277)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
							HX_STACK_LINE(6278)
							x->next = null();
						}
						HX_STACK_LINE(6283)
						Dynamic();
					}
					HX_STACK_LINE(6285)
					x->data = obj;
					HX_STACK_LINE(6286)
					cur->prev = x;
					HX_STACK_LINE(6287)
					x->parent = cur;
					HX_STACK_LINE(6288)
					break;
				}
				else{
					HX_STACK_LINE(6290)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6292)
				::zpp_nape::geom::ZPP_SimpleEvent tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6292)
				::zpp_nape::geom::ZPP_SimpleEvent tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(6292)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(6292)
				if ((tmp8)){
					HX_STACK_LINE(6293)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(6293)
					if ((tmp9)){
						HX_STACK_LINE(6294)
						{
							HX_STACK_LINE(6295)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(6295)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(6295)
							if ((tmp11)){
								HX_STACK_LINE(6296)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(6296)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(6302)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(6302)
								x = tmp12;
								HX_STACK_LINE(6303)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
								HX_STACK_LINE(6304)
								x->next = null();
							}
							HX_STACK_LINE(6309)
							Dynamic();
						}
						HX_STACK_LINE(6311)
						x->data = obj;
						HX_STACK_LINE(6312)
						cur->next = x;
						HX_STACK_LINE(6313)
						x->parent = cur;
						HX_STACK_LINE(6314)
						break;
					}
					else{
						HX_STACK_LINE(6316)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(6318)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(6321)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6321)
	if ((tmp2)){
		HX_STACK_LINE(6321)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6321)
		return tmp3;
	}
	else{
		HX_STACK_LINE(6323)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6323)
		if ((tmp3)){
			HX_STACK_LINE(6323)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(6325)
			x->colour = (int)0;
			HX_STACK_LINE(6326)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6326)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6326)
			if ((tmp5)){
				HX_STACK_LINE(6326)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6326)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(6328)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6328)
		return tmp4;
	}
	HX_STACK_LINE(6321)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::insert( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","insert",0x20ee2071,"zpp_nape.util.ZPP_Set_ZPP_SimpleEvent.insert","zpp_nape/util/RBTree.hx",6331,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6340)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6341)
	{
		HX_STACK_LINE(6342)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6342)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6342)
		if ((tmp1)){
			HX_STACK_LINE(6343)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6343)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(6349)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6349)
			x = tmp2;
			HX_STACK_LINE(6350)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
			HX_STACK_LINE(6351)
			x->next = null();
		}
		HX_STACK_LINE(6356)
		Dynamic();
	}
	HX_STACK_LINE(6358)
	x->data = obj;
	HX_STACK_LINE(6359)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6359)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6359)
	if ((tmp1)){
		HX_STACK_LINE(6359)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6361)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6361)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6362)
		while((true)){
			HX_STACK_LINE(6363)
			::zpp_nape::geom::ZPP_SimpleEvent tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6363)
			::zpp_nape::geom::ZPP_SimpleEvent tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6363)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6363)
			if ((tmp5)){
				HX_STACK_LINE(6364)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6364)
				if ((tmp6)){
					HX_STACK_LINE(6365)
					cur->prev = x;
					HX_STACK_LINE(6366)
					x->parent = cur;
					HX_STACK_LINE(6367)
					break;
				}
				else{
					HX_STACK_LINE(6369)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6372)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6372)
				if ((tmp6)){
					HX_STACK_LINE(6373)
					cur->next = x;
					HX_STACK_LINE(6374)
					x->parent = cur;
					HX_STACK_LINE(6375)
					break;
				}
				else{
					HX_STACK_LINE(6377)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(6381)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6381)
	if ((tmp2)){
		HX_STACK_LINE(6381)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(6383)
		x->colour = (int)0;
		HX_STACK_LINE(6384)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6384)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6384)
		if ((tmp4)){
			HX_STACK_LINE(6384)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6384)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(6394)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6394)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;


ZPP_Set_ZPP_SimpleEvent_obj::ZPP_Set_ZPP_SimpleEvent_obj()
{
}

void ZPP_Set_ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_Set_ZPP_SimpleEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_SimpleEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleEvent_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleEvent_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleEvent*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleEvent_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleEvent_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleEvent_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleEvent_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_SimpleEvent_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent*/ ,(void *) &ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_SimpleEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_SimpleEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent","\x36","\x0c","\xc8","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_SimpleEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_SimpleEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_SimpleEvent_obj >;
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

void ZPP_Set_ZPP_SimpleEvent_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
