#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_PartitionPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","new",0x0fb4ae44,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.new","zpp_nape/util/RBTree.hx",2842,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2883)
	this->colour = (int)0;
	HX_STACK_LINE(2882)
	this->parent = null();
	HX_STACK_LINE(2881)
	this->next = null();
	HX_STACK_LINE(2880)
	this->prev = null();
	HX_STACK_LINE(2879)
	this->data = null();
	HX_STACK_LINE(2878)
	this->swapped = null();
	HX_STACK_LINE(2877)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_PartitionPair_obj::~ZPP_Set_ZPP_PartitionPair_obj() { }

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_PartitionPair_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > ZPP_Set_ZPP_PartitionPair_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > _result_ = new ZPP_Set_ZPP_PartitionPair_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > _result_ = new ZPP_Set_ZPP_PartitionPair_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_PartitionPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","free",0xa923e648,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.free","zpp_nape/util/RBTree.hx",2869,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2870)
		this->data = null();
		HX_STACK_LINE(2871)
		this->lt = null();
		HX_STACK_LINE(2872)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,free,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","alloc",0x7152c359,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.alloc","zpp_nape/util/RBTree.hx",2876,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,alloc,(void))

bool ZPP_Set_ZPP_PartitionPair_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","verify",0x18bb6c15,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.verify","zpp_nape/util/RBTree.hx",2885,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2886)
	{
		HX_STACK_LINE(2895)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2895)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2895)
		if ((tmp1)){
			HX_STACK_LINE(2896)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2896)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(2897)
			while((true)){
				HX_STACK_LINE(2897)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2897)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2897)
				if ((tmp4)){
					HX_STACK_LINE(2897)
					break;
				}
				HX_STACK_LINE(2897)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(2898)
			while((true)){
				HX_STACK_LINE(2898)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2898)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2898)
				if ((tmp4)){
					HX_STACK_LINE(2898)
					break;
				}
				HX_STACK_LINE(2899)
				::zpp_nape::geom::ZPP_PartitionPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2900)
				{
					HX_STACK_LINE(2901)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(2902)
					{
						HX_STACK_LINE(2911)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2911)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2911)
						if ((tmp6)){
							HX_STACK_LINE(2912)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2912)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(2913)
							while((true)){
								HX_STACK_LINE(2913)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2913)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2913)
								if ((tmp9)){
									HX_STACK_LINE(2913)
									break;
								}
								HX_STACK_LINE(2913)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(2914)
							while((true)){
								HX_STACK_LINE(2914)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2914)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2914)
								if ((tmp9)){
									HX_STACK_LINE(2914)
									break;
								}
								HX_STACK_LINE(2915)
								::zpp_nape::geom::ZPP_PartitionPair j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2916)
								{
									HX_STACK_LINE(2917)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(2917)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(2917)
									if ((tmp11)){
										HX_STACK_LINE(2918)
										::zpp_nape::geom::ZPP_PartitionPair tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2918)
										::zpp_nape::geom::ZPP_PartitionPair tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(2918)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(2918)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(2918)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(2918)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(2918)
										if ((tmp16)){
											HX_STACK_LINE(2918)
											::zpp_nape::geom::ZPP_PartitionPair tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(2918)
											::zpp_nape::geom::ZPP_PartitionPair tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(2918)
											::zpp_nape::geom::ZPP_PartitionPair tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(2918)
											::zpp_nape::geom::ZPP_PartitionPair tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2918)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(2918)
											tmp17 = false;
										}
										HX_STACK_LINE(2918)
										if ((tmp17)){
											HX_STACK_LINE(2918)
											return false;
										}
									}
									else{
										HX_STACK_LINE(2920)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2920)
										if ((tmp12)){
											HX_STACK_LINE(2920)
											prei = false;
										}
										else{
											HX_STACK_LINE(2922)
											::zpp_nape::geom::ZPP_PartitionPair tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2922)
											::zpp_nape::geom::ZPP_PartitionPair tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2922)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(2922)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(2922)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(2922)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(2922)
											if ((tmp17)){
												HX_STACK_LINE(2922)
												::zpp_nape::geom::ZPP_PartitionPair tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(2922)
												::zpp_nape::geom::ZPP_PartitionPair tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(2922)
												::zpp_nape::geom::ZPP_PartitionPair tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(2922)
												::zpp_nape::geom::ZPP_PartitionPair tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(2922)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(2922)
												tmp18 = false;
											}
											HX_STACK_LINE(2922)
											if ((tmp18)){
												HX_STACK_LINE(2922)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(2925)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2925)
								if ((tmp10)){
									HX_STACK_LINE(2926)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(2927)
									while((true)){
										HX_STACK_LINE(2927)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2927)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2927)
										if ((tmp12)){
											HX_STACK_LINE(2927)
											break;
										}
										HX_STACK_LINE(2927)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(2930)
									while((true)){
										HX_STACK_LINE(2930)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2930)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2930)
										if ((tmp11)){
											HX_STACK_LINE(2930)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2930)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2930)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(2930)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(2930)
											tmp12 = false;
										}
										HX_STACK_LINE(2930)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(2930)
										if ((tmp13)){
											HX_STACK_LINE(2930)
											break;
										}
										HX_STACK_LINE(2930)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(2931)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(2937)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2937)
				if ((tmp5)){
					HX_STACK_LINE(2938)
					set_ite = set_ite->next;
					HX_STACK_LINE(2939)
					while((true)){
						HX_STACK_LINE(2939)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2939)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2939)
						if ((tmp7)){
							HX_STACK_LINE(2939)
							break;
						}
						HX_STACK_LINE(2939)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2942)
					while((true)){
						HX_STACK_LINE(2942)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2942)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2942)
						if ((tmp6)){
							HX_STACK_LINE(2942)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2942)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2942)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2942)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(2942)
							tmp7 = false;
						}
						HX_STACK_LINE(2942)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2942)
						if ((tmp8)){
							HX_STACK_LINE(2942)
							break;
						}
						HX_STACK_LINE(2942)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2943)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2948)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,verify,return )

bool ZPP_Set_ZPP_PartitionPair_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","empty",0xbf995971,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.empty","zpp_nape/util/RBTree.hx",2950,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2951)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2951)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2951)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,empty,return )

bool ZPP_Set_ZPP_PartitionPair_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","singular",0x93e2f073,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.singular","zpp_nape/util/RBTree.hx",2953,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2954)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2954)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2954)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2954)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2954)
	if ((tmp2)){
		HX_STACK_LINE(2954)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2954)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2954)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2954)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2954)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(2954)
		tmp3 = false;
	}
	HX_STACK_LINE(2954)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2954)
	if ((tmp3)){
		HX_STACK_LINE(2954)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2954)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2954)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2954)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(2954)
		tmp4 = false;
	}
	HX_STACK_LINE(2954)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,singular,return )

int ZPP_Set_ZPP_PartitionPair_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","size",0xb1b4ea5d,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.size","zpp_nape/util/RBTree.hx",2956,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2957)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2958)
	{
		HX_STACK_LINE(2967)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2967)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2967)
		if ((tmp1)){
			HX_STACK_LINE(2968)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2968)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(2969)
			while((true)){
				HX_STACK_LINE(2969)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2969)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2969)
				if ((tmp4)){
					HX_STACK_LINE(2969)
					break;
				}
				HX_STACK_LINE(2969)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(2970)
			while((true)){
				HX_STACK_LINE(2970)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2970)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2970)
				if ((tmp4)){
					HX_STACK_LINE(2970)
					break;
				}
				HX_STACK_LINE(2971)
				::zpp_nape::geom::ZPP_PartitionPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2972)
				(ret)++;
				HX_STACK_LINE(2973)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2973)
				if ((tmp5)){
					HX_STACK_LINE(2974)
					set_ite = set_ite->next;
					HX_STACK_LINE(2975)
					while((true)){
						HX_STACK_LINE(2975)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2975)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2975)
						if ((tmp7)){
							HX_STACK_LINE(2975)
							break;
						}
						HX_STACK_LINE(2975)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2978)
					while((true)){
						HX_STACK_LINE(2978)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2978)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2978)
						if ((tmp6)){
							HX_STACK_LINE(2978)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2978)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2978)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2978)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(2978)
							tmp7 = false;
						}
						HX_STACK_LINE(2978)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2978)
						if ((tmp8)){
							HX_STACK_LINE(2978)
							break;
						}
						HX_STACK_LINE(2978)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2979)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2984)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2984)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,size,return )

bool ZPP_Set_ZPP_PartitionPair_obj::has( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","has",0x0fb01d3e,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.has","zpp_nape/util/RBTree.hx",2986,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2987)
	::zpp_nape::geom::ZPP_PartitionPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2987)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2987)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2987)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::find( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","find",0xa91d19d5,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.find","zpp_nape/util/RBTree.hx",2989,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2990)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2990)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2991)
	while((true)){
		HX_STACK_LINE(2991)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2991)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2991)
		if ((tmp1)){
			HX_STACK_LINE(2991)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(2991)
			tmp2 = false;
		}
		HX_STACK_LINE(2991)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2991)
		if ((tmp3)){
			HX_STACK_LINE(2991)
			break;
		}
		HX_STACK_LINE(2992)
		::zpp_nape::geom::ZPP_PartitionPair tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2992)
		::zpp_nape::geom::ZPP_PartitionPair tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2992)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2992)
		if ((tmp6)){
			HX_STACK_LINE(2992)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2993)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(2995)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2995)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,find,return )

bool ZPP_Set_ZPP_PartitionPair_obj::has_weak( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","has_weak",0x37ed9a59,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.has_weak","zpp_nape/util/RBTree.hx",2997,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2998)
	::zpp_nape::geom::ZPP_PartitionPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2998)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2998)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2998)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::find_weak( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","find_weak",0x45d29a62,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.find_weak","zpp_nape/util/RBTree.hx",3000,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3001)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3001)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3002)
	while((true)){
		HX_STACK_LINE(3002)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3002)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3002)
		if ((tmp2)){
			HX_STACK_LINE(3002)
			break;
		}
		HX_STACK_LINE(3003)
		::zpp_nape::geom::ZPP_PartitionPair tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3003)
		::zpp_nape::geom::ZPP_PartitionPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3003)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3003)
		if ((tmp5)){
			HX_STACK_LINE(3003)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3004)
			::zpp_nape::geom::ZPP_PartitionPair tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(3004)
			::zpp_nape::geom::ZPP_PartitionPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(3004)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(3004)
			if ((tmp8)){
				HX_STACK_LINE(3004)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(3005)
				break;
			}
		}
	}
	HX_STACK_LINE(3007)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3007)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,find_weak,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::lower_bound( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","lower_bound",0x4ab84a24,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.lower_bound","zpp_nape/util/RBTree.hx",3009,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3010)
	::zpp_nape::geom::ZPP_PartitionPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3010)
	{
		HX_STACK_LINE(3011)
		::zpp_nape::geom::ZPP_PartitionPair ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3012)
		{
			HX_STACK_LINE(3021)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3021)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3021)
			if ((tmp2)){
				HX_STACK_LINE(3022)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3022)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(3023)
				while((true)){
					HX_STACK_LINE(3023)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3023)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(3023)
					if ((tmp5)){
						HX_STACK_LINE(3023)
						break;
					}
					HX_STACK_LINE(3023)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(3024)
				while((true)){
					HX_STACK_LINE(3024)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3024)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(3024)
					if ((tmp5)){
						HX_STACK_LINE(3024)
						break;
					}
					HX_STACK_LINE(3025)
					::zpp_nape::geom::ZPP_PartitionPair elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(3026)
					{
						HX_STACK_LINE(3027)
						::zpp_nape::geom::ZPP_PartitionPair tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3027)
						::zpp_nape::geom::ZPP_PartitionPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3027)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3027)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(3027)
						if ((tmp9)){
							HX_STACK_LINE(3028)
							ret = elt;
							HX_STACK_LINE(3029)
							break;
						}
					}
					HX_STACK_LINE(3032)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(3032)
					if ((tmp6)){
						HX_STACK_LINE(3033)
						set_ite = set_ite->next;
						HX_STACK_LINE(3034)
						while((true)){
							HX_STACK_LINE(3034)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(3034)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(3034)
							if ((tmp8)){
								HX_STACK_LINE(3034)
								break;
							}
							HX_STACK_LINE(3034)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(3037)
						while((true)){
							HX_STACK_LINE(3037)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(3037)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(3037)
							if ((tmp7)){
								HX_STACK_LINE(3037)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(3037)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(3037)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(3037)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(3037)
								tmp8 = false;
							}
							HX_STACK_LINE(3037)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3037)
							if ((tmp9)){
								HX_STACK_LINE(3037)
								break;
							}
							HX_STACK_LINE(3037)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(3038)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(3043)
		tmp = ret;
	}
	HX_STACK_LINE(3010)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,lower_bound,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","first",0x505c9714,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.first","zpp_nape/util/RBTree.hx",3046,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3055)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3055)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3056)
	while((true)){
		HX_STACK_LINE(3056)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3056)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3056)
		if ((tmp2)){
			HX_STACK_LINE(3056)
			break;
		}
		HX_STACK_LINE(3056)
		cur = cur->prev;
	}
	HX_STACK_LINE(3057)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3057)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,first,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","pop_front",0x3259211f,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.pop_front","zpp_nape/util/RBTree.hx",3059,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3068)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3068)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3069)
	while((true)){
		HX_STACK_LINE(3069)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3069)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3069)
		if ((tmp2)){
			HX_STACK_LINE(3069)
			break;
		}
		HX_STACK_LINE(3069)
		cur = cur->prev;
	}
	HX_STACK_LINE(3070)
	::zpp_nape::geom::ZPP_PartitionPair ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3071)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3071)
	this->remove_node(tmp1);
	HX_STACK_LINE(3072)
	::zpp_nape::geom::ZPP_PartitionPair tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3072)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,pop_front,return )

Void ZPP_Set_ZPP_PartitionPair_obj::remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","remove",0x7c0484e0,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.remove","zpp_nape/util/RBTree.hx",3074,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(3075)
		::zpp_nape::geom::ZPP_PartitionPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3075)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3075)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(3084)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3084)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","successor_node",0xbeb61317,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.successor_node","zpp_nape/util/RBTree.hx",3086,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(3095)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3095)
	if ((tmp)){
		HX_STACK_LINE(3096)
		cur = cur->next;
		HX_STACK_LINE(3097)
		while((true)){
			HX_STACK_LINE(3097)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3097)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3097)
			if ((tmp2)){
				HX_STACK_LINE(3097)
				break;
			}
			HX_STACK_LINE(3097)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(3100)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3101)
		cur = cur->parent;
		HX_STACK_LINE(3102)
		while((true)){
			HX_STACK_LINE(3102)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3102)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3102)
			if ((tmp1)){
				HX_STACK_LINE(3102)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(3102)
				tmp2 = false;
			}
			HX_STACK_LINE(3102)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3102)
			if ((tmp3)){
				HX_STACK_LINE(3102)
				break;
			}
			HX_STACK_LINE(3103)
			pre = cur;
			HX_STACK_LINE(3104)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3107)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3107)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","predecessor_node",0x13488a14,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.predecessor_node","zpp_nape/util/RBTree.hx",3109,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(3118)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3118)
	if ((tmp)){
		HX_STACK_LINE(3119)
		cur = cur->prev;
		HX_STACK_LINE(3120)
		while((true)){
			HX_STACK_LINE(3120)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3120)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3120)
			if ((tmp2)){
				HX_STACK_LINE(3120)
				break;
			}
			HX_STACK_LINE(3120)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(3123)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3124)
		cur = cur->parent;
		HX_STACK_LINE(3125)
		while((true)){
			HX_STACK_LINE(3125)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3125)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3125)
			if ((tmp1)){
				HX_STACK_LINE(3125)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(3125)
				tmp2 = false;
			}
			HX_STACK_LINE(3125)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3125)
			if ((tmp3)){
				HX_STACK_LINE(3125)
				break;
			}
			HX_STACK_LINE(3126)
			pre = cur;
			HX_STACK_LINE(3127)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3130)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3130)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,predecessor_node,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::successor( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","successor",0xec781e8a,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.successor","zpp_nape/util/RBTree.hx",3132,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3141)
	::zpp_nape::geom::ZPP_PartitionPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3141)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3141)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3141)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3142)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3142)
	::zpp_nape::geom::ZPP_PartitionPair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(3142)
	if ((tmp3)){
		HX_STACK_LINE(3142)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(3142)
		tmp4 = node->data;
	}
	HX_STACK_LINE(3142)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,successor,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::predecessor( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","predecessor",0xba9308ad,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.predecessor","zpp_nape/util/RBTree.hx",3144,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3153)
	::zpp_nape::geom::ZPP_PartitionPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3153)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3153)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3153)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3154)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3154)
	::zpp_nape::geom::ZPP_PartitionPair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(3154)
	if ((tmp3)){
		HX_STACK_LINE(3154)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(3154)
		tmp4 = node->data;
	}
	HX_STACK_LINE(3154)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,predecessor,return )

Void ZPP_Set_ZPP_PartitionPair_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","remove_node",0x1d28f501,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.remove_node","zpp_nape/util/RBTree.hx",3156,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(3165)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3165)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3165)
		if ((tmp)){
			HX_STACK_LINE(3165)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(3165)
			tmp1 = false;
		}
		HX_STACK_LINE(3165)
		if ((tmp1)){
			HX_STACK_LINE(3166)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(3167)
			while((true)){
				HX_STACK_LINE(3167)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3167)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3167)
				if ((tmp3)){
					HX_STACK_LINE(3167)
					break;
				}
				HX_STACK_LINE(3167)
				sm = sm->prev;
			}
			HX_STACK_LINE(3168)
			{
				HX_STACK_LINE(3169)
				::zpp_nape::geom::ZPP_PartitionPair t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3170)
				cur->data = sm->data;
				HX_STACK_LINE(3171)
				sm->data = t;
			}
			HX_STACK_LINE(3173)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3173)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3173)
			if ((tmp3)){
				HX_STACK_LINE(3173)
				::zpp_nape::geom::ZPP_PartitionPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3173)
				::zpp_nape::geom::ZPP_PartitionPair tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3173)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(3174)
			cur = sm;
		}
		HX_STACK_LINE(3184)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3184)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3184)
		if ((tmp2)){
			HX_STACK_LINE(3184)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(3184)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(3184)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(3185)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3185)
		if ((tmp4)){
			HX_STACK_LINE(3186)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3186)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(3186)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(3186)
			if ((tmp6)){
				HX_STACK_LINE(3186)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(3186)
				tmp7 = true;
			}
			HX_STACK_LINE(3186)
			if ((tmp7)){
				HX_STACK_LINE(3186)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(3187)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(3187)
				if ((tmp8)){
					HX_STACK_LINE(3188)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(3189)
					while((true)){
						HX_STACK_LINE(3190)
						(parent->colour)++;
						HX_STACK_LINE(3191)
						(parent->prev->colour)--;
						HX_STACK_LINE(3192)
						(parent->next->colour)--;
						HX_STACK_LINE(3193)
						{
							HX_STACK_LINE(3194)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(3195)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3195)
							if ((tmp9)){
								HX_STACK_LINE(3196)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(3196)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(3197)
								break;
							}
							else{
								HX_STACK_LINE(3199)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(3199)
								if ((tmp10)){
									HX_STACK_LINE(3200)
									{
										HX_STACK_LINE(3201)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(3201)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3201)
										if ((tmp11)){
											HX_STACK_LINE(3201)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3201)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(3201)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(3201)
											tmp12 = false;
										}
										HX_STACK_LINE(3201)
										if ((tmp12)){
											HX_STACK_LINE(3202)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3202)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(3203)
											break;
										}
									}
									HX_STACK_LINE(3206)
									{
										HX_STACK_LINE(3207)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(3207)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3207)
										if ((tmp11)){
											HX_STACK_LINE(3207)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3207)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(3207)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(3207)
											tmp12 = false;
										}
										HX_STACK_LINE(3207)
										if ((tmp12)){
											HX_STACK_LINE(3208)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3208)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(3209)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(3214)
						{
							HX_STACK_LINE(3215)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(3216)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3216)
							if ((tmp9)){
								HX_STACK_LINE(3217)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(3217)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(3218)
								break;
							}
							else{
								HX_STACK_LINE(3220)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(3220)
								if ((tmp10)){
									HX_STACK_LINE(3221)
									{
										HX_STACK_LINE(3222)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(3222)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3222)
										if ((tmp11)){
											HX_STACK_LINE(3222)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3222)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(3222)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(3222)
											tmp12 = false;
										}
										HX_STACK_LINE(3222)
										if ((tmp12)){
											HX_STACK_LINE(3223)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3223)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(3224)
											break;
										}
									}
									HX_STACK_LINE(3227)
									{
										HX_STACK_LINE(3228)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(3228)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3228)
										if ((tmp11)){
											HX_STACK_LINE(3228)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3228)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(3228)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(3228)
											tmp12 = false;
										}
										HX_STACK_LINE(3228)
										if ((tmp12)){
											HX_STACK_LINE(3229)
											::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3229)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(3230)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(3235)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(3235)
						if ((tmp9)){
							HX_STACK_LINE(3236)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3236)
							if ((tmp10)){
								HX_STACK_LINE(3237)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(3240)
								parent = parent->parent;
								HX_STACK_LINE(3241)
								continue;
							}
						}
						HX_STACK_LINE(3244)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(3248)
		{
			HX_STACK_LINE(3249)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(3250)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3250)
			if ((tmp5)){
				HX_STACK_LINE(3251)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(3253)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3253)
				if ((tmp6)){
					HX_STACK_LINE(3253)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(3254)
					par->next = child;
				}
			}
			HX_STACK_LINE(3255)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(3255)
			if ((tmp6)){
				HX_STACK_LINE(3255)
				child->parent = par;
			}
		}
		HX_STACK_LINE(3257)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3257)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(3257)
		cur->parent = tmp6;
		HX_STACK_LINE(3258)
		{
			HX_STACK_LINE(3259)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3268)
			{
				HX_STACK_LINE(3268)
				o->data = null();
				HX_STACK_LINE(3268)
				o->lt = null();
				HX_STACK_LINE(3268)
				o->swapped = null();
			}
			HX_STACK_LINE(3269)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(3269)
			o->next = tmp7;
			HX_STACK_LINE(3270)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,remove_node,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","clear",0x981a9071,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.clear","zpp_nape/util/RBTree.hx",3277,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3277)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3277)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3277)
		if ((tmp1)){
			HX_STACK_LINE(3277)
			Dynamic();
		}
		else{
			HX_STACK_LINE(3277)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3277)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3277)
			while((true)){
				HX_STACK_LINE(3277)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3277)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3277)
				if ((tmp4)){
					HX_STACK_LINE(3277)
					break;
				}
				HX_STACK_LINE(3277)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3277)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3277)
				if ((tmp5)){
					HX_STACK_LINE(3277)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(3277)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(3277)
					if ((tmp7)){
						HX_STACK_LINE(3277)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(3277)
						::zpp_nape::geom::ZPP_PartitionPair tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3277)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(3277)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(3277)
						if ((tmp9)){
							HX_STACK_LINE(3277)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3277)
							if ((tmp10)){
								HX_STACK_LINE(3277)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(3277)
								ret->next = null();
							}
							HX_STACK_LINE(3277)
							cur->parent = null();
						}
						HX_STACK_LINE(3277)
						{
							HX_STACK_LINE(3277)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3277)
							{
								HX_STACK_LINE(3277)
								o->data = null();
								HX_STACK_LINE(3277)
								o->lt = null();
								HX_STACK_LINE(3277)
								o->swapped = null();
							}
							HX_STACK_LINE(3277)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3277)
							o->next = tmp10;
							HX_STACK_LINE(3277)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3277)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(3277)
				cur = tmp6;
			}
			HX_STACK_LINE(3277)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,clear,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","clear_with",0x5df8c7d4,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.clear_with","zpp_nape/util/RBTree.hx",3280,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(3281)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3281)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3281)
		if ((tmp1)){
			HX_STACK_LINE(3281)
			return null();
		}
		else{
			HX_STACK_LINE(3283)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3283)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3284)
			while((true)){
				HX_STACK_LINE(3284)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3284)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3284)
				if ((tmp4)){
					HX_STACK_LINE(3284)
					break;
				}
				HX_STACK_LINE(3284)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3284)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3284)
				if ((tmp5)){
					HX_STACK_LINE(3284)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(3284)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(3284)
					if ((tmp7)){
						HX_STACK_LINE(3284)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(3284)
						::zpp_nape::geom::ZPP_PartitionPair tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3284)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(3284)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(3284)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(3284)
						if ((tmp9)){
							HX_STACK_LINE(3284)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3284)
							if ((tmp10)){
								HX_STACK_LINE(3284)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(3284)
								ret->next = null();
							}
							HX_STACK_LINE(3284)
							cur->parent = null();
						}
						HX_STACK_LINE(3284)
						{
							HX_STACK_LINE(3284)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3284)
							{
								HX_STACK_LINE(3284)
								o->data = null();
								HX_STACK_LINE(3284)
								o->lt = null();
								HX_STACK_LINE(3284)
								o->swapped = null();
							}
							HX_STACK_LINE(3284)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3284)
							o->next = tmp10;
							HX_STACK_LINE(3284)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3284)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(3284)
				cur = tmp6;
			}
			HX_STACK_LINE(3285)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","clear_node",0x580a5bd0,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.clear_node","zpp_nape/util/RBTree.hx",3289,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(3298)
	::zpp_nape::geom::ZPP_PartitionPair tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3298)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(3299)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3300)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3300)
	if ((tmp1)){
		HX_STACK_LINE(3301)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3301)
		if ((tmp2)){
			HX_STACK_LINE(3301)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(3302)
			ret->next = null();
		}
		HX_STACK_LINE(3303)
		node->parent = null();
	}
	HX_STACK_LINE(3305)
	{
		HX_STACK_LINE(3306)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3315)
		{
			HX_STACK_LINE(3315)
			o->data = null();
			HX_STACK_LINE(3315)
			o->lt = null();
			HX_STACK_LINE(3315)
			o->swapped = null();
		}
		HX_STACK_LINE(3316)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3316)
		o->next = tmp2;
		HX_STACK_LINE(3317)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3322)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3322)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_PartitionPair_obj,clear_node,return )

Void ZPP_Set_ZPP_PartitionPair_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","__fix_neg_red",0x383eb2bc,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.__fix_neg_red","zpp_nape/util/RBTree.hx",3324,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(3325)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(3326)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3326)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3326)
		if ((tmp)){
			HX_STACK_LINE(3327)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(3328)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(3329)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(3330)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(3331)
			nl->colour = (int)0;
			HX_STACK_LINE(3332)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3332)
			negred->colour = tmp2;
			HX_STACK_LINE(3333)
			{
				HX_STACK_LINE(3334)
				negred->next = trl;
				HX_STACK_LINE(3335)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3335)
				if ((tmp3)){
					HX_STACK_LINE(3335)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(3337)
			{
				HX_STACK_LINE(3338)
				::zpp_nape::geom::ZPP_PartitionPair t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3339)
				parent->data = nr->data;
				HX_STACK_LINE(3340)
				nr->data = t;
			}
			HX_STACK_LINE(3342)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3342)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3342)
			if ((tmp4)){
				HX_STACK_LINE(3342)
				::zpp_nape::geom::ZPP_PartitionPair tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3342)
				::zpp_nape::geom::ZPP_PartitionPair tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3342)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(3343)
			{
				HX_STACK_LINE(3344)
				nr->prev = trr;
				HX_STACK_LINE(3345)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3345)
				if ((tmp5)){
					HX_STACK_LINE(3345)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(3347)
			{
				HX_STACK_LINE(3348)
				nr->next = parent->next;
				HX_STACK_LINE(3349)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3349)
				if ((tmp5)){
					HX_STACK_LINE(3349)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(3351)
			{
				HX_STACK_LINE(3352)
				parent->next = nr;
				HX_STACK_LINE(3353)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3353)
				if ((tmp5)){
					HX_STACK_LINE(3353)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(3355)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(3358)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(3359)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(3360)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(3361)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(3362)
			nl->colour = (int)0;
			HX_STACK_LINE(3363)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3363)
			negred->colour = tmp2;
			HX_STACK_LINE(3364)
			{
				HX_STACK_LINE(3365)
				negred->prev = trl;
				HX_STACK_LINE(3366)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3366)
				if ((tmp3)){
					HX_STACK_LINE(3366)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(3368)
			{
				HX_STACK_LINE(3369)
				::zpp_nape::geom::ZPP_PartitionPair t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3370)
				parent->data = nr->data;
				HX_STACK_LINE(3371)
				nr->data = t;
			}
			HX_STACK_LINE(3373)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3373)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3373)
			if ((tmp4)){
				HX_STACK_LINE(3373)
				::zpp_nape::geom::ZPP_PartitionPair tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3373)
				::zpp_nape::geom::ZPP_PartitionPair tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3373)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(3374)
			{
				HX_STACK_LINE(3375)
				nr->next = trr;
				HX_STACK_LINE(3376)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3376)
				if ((tmp5)){
					HX_STACK_LINE(3376)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(3378)
			{
				HX_STACK_LINE(3379)
				nr->prev = parent->prev;
				HX_STACK_LINE(3380)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3380)
				if ((tmp5)){
					HX_STACK_LINE(3380)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(3382)
			{
				HX_STACK_LINE(3383)
				parent->prev = nr;
				HX_STACK_LINE(3384)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3384)
				if ((tmp5)){
					HX_STACK_LINE(3384)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(3386)
			tmp1 = nl;
		}
		HX_STACK_LINE(3326)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(3388)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3388)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3388)
		if ((tmp2)){
			HX_STACK_LINE(3388)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3388)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3388)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(3388)
			tmp3 = false;
		}
		HX_STACK_LINE(3388)
		if ((tmp3)){
			HX_STACK_LINE(3388)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3388)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(3389)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3389)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3389)
			if ((tmp4)){
				HX_STACK_LINE(3389)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3389)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(3389)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(3389)
				tmp5 = false;
			}
			HX_STACK_LINE(3389)
			if ((tmp5)){
				HX_STACK_LINE(3389)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3389)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","__fix_dbl_red",0x4656e09a,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.__fix_dbl_red","zpp_nape/util/RBTree.hx",3392,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(3392)
		while((true)){
			HX_STACK_LINE(3393)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(3394)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(3395)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3395)
			if ((tmp)){
				HX_STACK_LINE(3396)
				par->colour = (int)1;
				HX_STACK_LINE(3397)
				break;
			}
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(3399)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(3400)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3400)
			if ((tmp1)){
				HX_STACK_LINE(3401)
				n3 = g;
				HX_STACK_LINE(3402)
				t4 = g->next;
				HX_STACK_LINE(3403)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3403)
				if ((tmp2)){
					HX_STACK_LINE(3404)
					n1 = x;
					HX_STACK_LINE(3405)
					n2 = par;
					HX_STACK_LINE(3406)
					t1 = x->prev;
					HX_STACK_LINE(3407)
					t2 = x->next;
					HX_STACK_LINE(3408)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(3411)
					n1 = par;
					HX_STACK_LINE(3412)
					n2 = x;
					HX_STACK_LINE(3413)
					t1 = par->prev;
					HX_STACK_LINE(3414)
					t2 = x->prev;
					HX_STACK_LINE(3415)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(3419)
				n1 = g;
				HX_STACK_LINE(3420)
				t1 = g->prev;
				HX_STACK_LINE(3421)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3421)
				if ((tmp2)){
					HX_STACK_LINE(3422)
					n2 = x;
					HX_STACK_LINE(3423)
					n3 = par;
					HX_STACK_LINE(3424)
					t2 = x->prev;
					HX_STACK_LINE(3425)
					t3 = x->next;
					HX_STACK_LINE(3426)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(3429)
					n2 = par;
					HX_STACK_LINE(3430)
					n3 = x;
					HX_STACK_LINE(3431)
					t2 = par->prev;
					HX_STACK_LINE(3432)
					t3 = x->prev;
					HX_STACK_LINE(3433)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(3436)
			{
				HX_STACK_LINE(3437)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(3438)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3438)
				if ((tmp2)){
					HX_STACK_LINE(3439)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(3441)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(3441)
					if ((tmp3)){
						HX_STACK_LINE(3441)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(3442)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(3443)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3443)
				if ((tmp3)){
					HX_STACK_LINE(3443)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(3445)
			{
				HX_STACK_LINE(3446)
				n1->prev = t1;
				HX_STACK_LINE(3447)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3447)
				if ((tmp2)){
					HX_STACK_LINE(3447)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(3449)
			{
				HX_STACK_LINE(3450)
				n1->next = t2;
				HX_STACK_LINE(3451)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3451)
				if ((tmp2)){
					HX_STACK_LINE(3451)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(3453)
			{
				HX_STACK_LINE(3454)
				n2->prev = n1;
				HX_STACK_LINE(3455)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3455)
				if ((tmp2)){
					HX_STACK_LINE(3455)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(3457)
			{
				HX_STACK_LINE(3458)
				n2->next = n3;
				HX_STACK_LINE(3459)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3459)
				if ((tmp2)){
					HX_STACK_LINE(3459)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(3461)
			{
				HX_STACK_LINE(3462)
				n3->prev = t3;
				HX_STACK_LINE(3463)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3463)
				if ((tmp2)){
					HX_STACK_LINE(3463)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(3465)
			{
				HX_STACK_LINE(3466)
				n3->next = t4;
				HX_STACK_LINE(3467)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3467)
				if ((tmp2)){
					HX_STACK_LINE(3467)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(3469)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3469)
			n2->colour = tmp2;
			HX_STACK_LINE(3470)
			n1->colour = (int)1;
			HX_STACK_LINE(3471)
			n3->colour = (int)1;
			HX_STACK_LINE(3472)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3472)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3472)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3472)
			if ((tmp5)){
				HX_STACK_LINE(3472)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3472)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(3473)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3473)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(3473)
				if ((tmp6)){
					HX_STACK_LINE(3473)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(3473)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(3473)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(3473)
					tmp7 = false;
				}
				HX_STACK_LINE(3473)
				if ((tmp7)){
					HX_STACK_LINE(3474)
					x = n2;
					HX_STACK_LINE(3475)
					continue;
				}
			}
			HX_STACK_LINE(3477)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_PartitionPair_obj::try_insert_bool( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","try_insert_bool",0x2514b5d0,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.try_insert_bool","zpp_nape/util/RBTree.hx",3480,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3481)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3482)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3483)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3483)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3483)
	if ((tmp1)){
		HX_STACK_LINE(3484)
		{
			HX_STACK_LINE(3485)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3485)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3485)
			if ((tmp3)){
				HX_STACK_LINE(3486)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3486)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(3492)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3492)
				x = tmp4;
				HX_STACK_LINE(3493)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(3494)
				x->next = null();
			}
			HX_STACK_LINE(3499)
			Dynamic();
		}
		HX_STACK_LINE(3501)
		x->data = obj;
		HX_STACK_LINE(3502)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3505)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3505)
		cur = tmp2;
		HX_STACK_LINE(3506)
		while((true)){
			HX_STACK_LINE(3507)
			::zpp_nape::geom::ZPP_PartitionPair tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3507)
			::zpp_nape::geom::ZPP_PartitionPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3507)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3507)
			if ((tmp5)){
				HX_STACK_LINE(3508)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3508)
				if ((tmp6)){
					HX_STACK_LINE(3509)
					{
						HX_STACK_LINE(3510)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3510)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3510)
						if ((tmp8)){
							HX_STACK_LINE(3511)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3511)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(3517)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3517)
							x = tmp9;
							HX_STACK_LINE(3518)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(3519)
							x->next = null();
						}
						HX_STACK_LINE(3524)
						Dynamic();
					}
					HX_STACK_LINE(3526)
					x->data = obj;
					HX_STACK_LINE(3527)
					cur->prev = x;
					HX_STACK_LINE(3528)
					x->parent = cur;
					HX_STACK_LINE(3529)
					break;
				}
				else{
					HX_STACK_LINE(3531)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3533)
				::zpp_nape::geom::ZPP_PartitionPair tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3533)
				::zpp_nape::geom::ZPP_PartitionPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(3533)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(3533)
				if ((tmp8)){
					HX_STACK_LINE(3534)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(3534)
					if ((tmp9)){
						HX_STACK_LINE(3535)
						{
							HX_STACK_LINE(3536)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3536)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(3536)
							if ((tmp11)){
								HX_STACK_LINE(3537)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(3537)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(3543)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(3543)
								x = tmp12;
								HX_STACK_LINE(3544)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(3545)
								x->next = null();
							}
							HX_STACK_LINE(3550)
							Dynamic();
						}
						HX_STACK_LINE(3552)
						x->data = obj;
						HX_STACK_LINE(3553)
						cur->next = x;
						HX_STACK_LINE(3554)
						x->parent = cur;
						HX_STACK_LINE(3555)
						break;
					}
					else{
						HX_STACK_LINE(3557)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(3559)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(3562)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3562)
	if ((tmp2)){
		HX_STACK_LINE(3562)
		return false;
	}
	else{
		HX_STACK_LINE(3564)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3564)
		if ((tmp3)){
			HX_STACK_LINE(3564)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(3566)
			x->colour = (int)0;
			HX_STACK_LINE(3567)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3567)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3567)
			if ((tmp5)){
				HX_STACK_LINE(3567)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3567)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(3569)
		return true;
	}
	HX_STACK_LINE(3562)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::try_insert( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","try_insert",0x407dbf99,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.try_insert","zpp_nape/util/RBTree.hx",3572,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3573)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3574)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3575)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3575)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3575)
	if ((tmp1)){
		HX_STACK_LINE(3576)
		{
			HX_STACK_LINE(3577)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3577)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3577)
			if ((tmp3)){
				HX_STACK_LINE(3578)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3578)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(3584)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3584)
				x = tmp4;
				HX_STACK_LINE(3585)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(3586)
				x->next = null();
			}
			HX_STACK_LINE(3591)
			Dynamic();
		}
		HX_STACK_LINE(3593)
		x->data = obj;
		HX_STACK_LINE(3594)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3597)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3597)
		cur = tmp2;
		HX_STACK_LINE(3598)
		while((true)){
			HX_STACK_LINE(3599)
			::zpp_nape::geom::ZPP_PartitionPair tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3599)
			::zpp_nape::geom::ZPP_PartitionPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3599)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3599)
			if ((tmp5)){
				HX_STACK_LINE(3600)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3600)
				if ((tmp6)){
					HX_STACK_LINE(3601)
					{
						HX_STACK_LINE(3602)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3602)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3602)
						if ((tmp8)){
							HX_STACK_LINE(3603)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3603)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(3609)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3609)
							x = tmp9;
							HX_STACK_LINE(3610)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(3611)
							x->next = null();
						}
						HX_STACK_LINE(3616)
						Dynamic();
					}
					HX_STACK_LINE(3618)
					x->data = obj;
					HX_STACK_LINE(3619)
					cur->prev = x;
					HX_STACK_LINE(3620)
					x->parent = cur;
					HX_STACK_LINE(3621)
					break;
				}
				else{
					HX_STACK_LINE(3623)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3625)
				::zpp_nape::geom::ZPP_PartitionPair tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3625)
				::zpp_nape::geom::ZPP_PartitionPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(3625)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(3625)
				if ((tmp8)){
					HX_STACK_LINE(3626)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(3626)
					if ((tmp9)){
						HX_STACK_LINE(3627)
						{
							HX_STACK_LINE(3628)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3628)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(3628)
							if ((tmp11)){
								HX_STACK_LINE(3629)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(3629)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(3635)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(3635)
								x = tmp12;
								HX_STACK_LINE(3636)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(3637)
								x->next = null();
							}
							HX_STACK_LINE(3642)
							Dynamic();
						}
						HX_STACK_LINE(3644)
						x->data = obj;
						HX_STACK_LINE(3645)
						cur->next = x;
						HX_STACK_LINE(3646)
						x->parent = cur;
						HX_STACK_LINE(3647)
						break;
					}
					else{
						HX_STACK_LINE(3649)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(3651)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(3654)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3654)
	if ((tmp2)){
		HX_STACK_LINE(3654)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3654)
		return tmp3;
	}
	else{
		HX_STACK_LINE(3656)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3656)
		if ((tmp3)){
			HX_STACK_LINE(3656)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(3658)
			x->colour = (int)0;
			HX_STACK_LINE(3659)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3659)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3659)
			if ((tmp5)){
				HX_STACK_LINE(3659)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3659)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(3661)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3661)
		return tmp4;
	}
	HX_STACK_LINE(3654)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::insert( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","insert",0x15592bd5,"zpp_nape.util.ZPP_Set_ZPP_PartitionPair.insert","zpp_nape/util/RBTree.hx",3664,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3673)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3674)
	{
		HX_STACK_LINE(3675)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3675)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3675)
		if ((tmp1)){
			HX_STACK_LINE(3676)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3676)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(3682)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3682)
			x = tmp2;
			HX_STACK_LINE(3683)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
			HX_STACK_LINE(3684)
			x->next = null();
		}
		HX_STACK_LINE(3689)
		Dynamic();
	}
	HX_STACK_LINE(3691)
	x->data = obj;
	HX_STACK_LINE(3692)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3692)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3692)
	if ((tmp1)){
		HX_STACK_LINE(3692)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3694)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3694)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3695)
		while((true)){
			HX_STACK_LINE(3696)
			::zpp_nape::geom::ZPP_PartitionPair tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3696)
			::zpp_nape::geom::ZPP_PartitionPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3696)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3696)
			if ((tmp5)){
				HX_STACK_LINE(3697)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3697)
				if ((tmp6)){
					HX_STACK_LINE(3698)
					cur->prev = x;
					HX_STACK_LINE(3699)
					x->parent = cur;
					HX_STACK_LINE(3700)
					break;
				}
				else{
					HX_STACK_LINE(3702)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3705)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(3705)
				if ((tmp6)){
					HX_STACK_LINE(3706)
					cur->next = x;
					HX_STACK_LINE(3707)
					x->parent = cur;
					HX_STACK_LINE(3708)
					break;
				}
				else{
					HX_STACK_LINE(3710)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(3714)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3714)
	if ((tmp2)){
		HX_STACK_LINE(3714)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(3716)
		x->colour = (int)0;
		HX_STACK_LINE(3717)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3717)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3717)
		if ((tmp4)){
			HX_STACK_LINE(3717)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3717)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(3727)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3727)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;


ZPP_Set_ZPP_PartitionPair_obj::ZPP_Set_ZPP_PartitionPair_obj()
{
}

void ZPP_Set_ZPP_PartitionPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_PartitionPair);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_PartitionPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_Set_ZPP_PartitionPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_PartitionPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_PartitionPair_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionPair_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionPair_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionPair*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionPair_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionPair*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionPair_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionPair*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionPair_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionPair*/ ,(int)offsetof(ZPP_Set_ZPP_PartitionPair_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_PartitionPair_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionPair*/ ,(void *) &ZPP_Set_ZPP_PartitionPair_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_PartitionPair_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_PartitionPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_PartitionPair","\x52","\x7c","\xaf","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_PartitionPair_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_PartitionPair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_PartitionPair_obj >;
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

void ZPP_Set_ZPP_PartitionPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
