#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_CbSetPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","new",0xe7ff089d,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.new","zpp_nape/util/RBTree.hx",1064,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1105)
	this->colour = (int)0;
	HX_STACK_LINE(1104)
	this->parent = null();
	HX_STACK_LINE(1103)
	this->next = null();
	HX_STACK_LINE(1102)
	this->prev = null();
	HX_STACK_LINE(1101)
	this->data = null();
	HX_STACK_LINE(1100)
	this->swapped = null();
	HX_STACK_LINE(1099)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_CbSetPair_obj::~ZPP_Set_ZPP_CbSetPair_obj() { }

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_CbSetPair_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > ZPP_Set_ZPP_CbSetPair_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > _result_ = new ZPP_Set_ZPP_CbSetPair_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > _result_ = new ZPP_Set_ZPP_CbSetPair_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_CbSetPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","free",0x11e899cf,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.free","zpp_nape/util/RBTree.hx",1091,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1092)
		this->data = null();
		HX_STACK_LINE(1093)
		this->lt = null();
		HX_STACK_LINE(1094)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,free,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","alloc",0xb4ab25f2,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.alloc","zpp_nape/util/RBTree.hx",1098,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,alloc,(void))

bool ZPP_Set_ZPP_CbSetPair_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","verify",0xc2b94f5c,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.verify","zpp_nape/util/RBTree.hx",1107,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1108)
	{
		HX_STACK_LINE(1117)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1117)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1117)
		if ((tmp1)){
			HX_STACK_LINE(1118)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1118)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1119)
			while((true)){
				HX_STACK_LINE(1119)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1119)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1119)
				if ((tmp4)){
					HX_STACK_LINE(1119)
					break;
				}
				HX_STACK_LINE(1119)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1120)
			while((true)){
				HX_STACK_LINE(1120)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1120)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1120)
				if ((tmp4)){
					HX_STACK_LINE(1120)
					break;
				}
				HX_STACK_LINE(1121)
				::zpp_nape::callbacks::ZPP_CbSetPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1122)
				{
					HX_STACK_LINE(1123)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(1124)
					{
						HX_STACK_LINE(1133)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1133)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1133)
						if ((tmp6)){
							HX_STACK_LINE(1134)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1134)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(1135)
							while((true)){
								HX_STACK_LINE(1135)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1135)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1135)
								if ((tmp9)){
									HX_STACK_LINE(1135)
									break;
								}
								HX_STACK_LINE(1135)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(1136)
							while((true)){
								HX_STACK_LINE(1136)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1136)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1136)
								if ((tmp9)){
									HX_STACK_LINE(1136)
									break;
								}
								HX_STACK_LINE(1137)
								::zpp_nape::callbacks::ZPP_CbSetPair j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1138)
								{
									HX_STACK_LINE(1139)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1139)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1139)
									if ((tmp11)){
										HX_STACK_LINE(1140)
										::zpp_nape::callbacks::ZPP_CbSetPair tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1140)
										::zpp_nape::callbacks::ZPP_CbSetPair tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1140)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1140)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1140)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1140)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1140)
										if ((tmp16)){
											HX_STACK_LINE(1140)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1140)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1140)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1140)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1140)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(1140)
											tmp17 = false;
										}
										HX_STACK_LINE(1140)
										if ((tmp17)){
											HX_STACK_LINE(1140)
											return false;
										}
									}
									else{
										HX_STACK_LINE(1142)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1142)
										if ((tmp12)){
											HX_STACK_LINE(1142)
											prei = false;
										}
										else{
											HX_STACK_LINE(1144)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1144)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1144)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1144)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1144)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1144)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1144)
											if ((tmp17)){
												HX_STACK_LINE(1144)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1144)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1144)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1144)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1144)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(1144)
												tmp18 = false;
											}
											HX_STACK_LINE(1144)
											if ((tmp18)){
												HX_STACK_LINE(1144)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(1147)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1147)
								if ((tmp10)){
									HX_STACK_LINE(1148)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(1149)
									while((true)){
										HX_STACK_LINE(1149)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1149)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1149)
										if ((tmp12)){
											HX_STACK_LINE(1149)
											break;
										}
										HX_STACK_LINE(1149)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(1152)
									while((true)){
										HX_STACK_LINE(1152)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1152)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1152)
										if ((tmp11)){
											HX_STACK_LINE(1152)
											::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1152)
											::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1152)
											::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1152)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(1152)
											tmp12 = false;
										}
										HX_STACK_LINE(1152)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1152)
										if ((tmp13)){
											HX_STACK_LINE(1152)
											break;
										}
										HX_STACK_LINE(1152)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(1153)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(1159)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1159)
				if ((tmp5)){
					HX_STACK_LINE(1160)
					set_ite = set_ite->next;
					HX_STACK_LINE(1161)
					while((true)){
						HX_STACK_LINE(1161)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1161)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1161)
						if ((tmp7)){
							HX_STACK_LINE(1161)
							break;
						}
						HX_STACK_LINE(1161)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1164)
					while((true)){
						HX_STACK_LINE(1164)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1164)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1164)
						if ((tmp6)){
							HX_STACK_LINE(1164)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1164)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1164)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1164)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(1164)
							tmp7 = false;
						}
						HX_STACK_LINE(1164)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1164)
						if ((tmp8)){
							HX_STACK_LINE(1164)
							break;
						}
						HX_STACK_LINE(1164)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1165)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(1170)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,verify,return )

bool ZPP_Set_ZPP_CbSetPair_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","empty",0x02f1bc0a,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.empty","zpp_nape/util/RBTree.hx",1172,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1173)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1173)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1173)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,empty,return )

bool ZPP_Set_ZPP_CbSetPair_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","singular",0x2395737a,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.singular","zpp_nape/util/RBTree.hx",1175,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1176)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1176)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1176)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1176)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1176)
	if ((tmp2)){
		HX_STACK_LINE(1176)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1176)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1176)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1176)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1176)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(1176)
		tmp3 = false;
	}
	HX_STACK_LINE(1176)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1176)
	if ((tmp3)){
		HX_STACK_LINE(1176)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1176)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1176)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1176)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(1176)
		tmp4 = false;
	}
	HX_STACK_LINE(1176)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,singular,return )

int ZPP_Set_ZPP_CbSetPair_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","size",0x1a799de4,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.size","zpp_nape/util/RBTree.hx",1178,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1179)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1180)
	{
		HX_STACK_LINE(1189)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1189)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1189)
		if ((tmp1)){
			HX_STACK_LINE(1190)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1190)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1191)
			while((true)){
				HX_STACK_LINE(1191)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1191)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1191)
				if ((tmp4)){
					HX_STACK_LINE(1191)
					break;
				}
				HX_STACK_LINE(1191)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1192)
			while((true)){
				HX_STACK_LINE(1192)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1192)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1192)
				if ((tmp4)){
					HX_STACK_LINE(1192)
					break;
				}
				HX_STACK_LINE(1193)
				::zpp_nape::callbacks::ZPP_CbSetPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1194)
				(ret)++;
				HX_STACK_LINE(1195)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1195)
				if ((tmp5)){
					HX_STACK_LINE(1196)
					set_ite = set_ite->next;
					HX_STACK_LINE(1197)
					while((true)){
						HX_STACK_LINE(1197)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1197)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1197)
						if ((tmp7)){
							HX_STACK_LINE(1197)
							break;
						}
						HX_STACK_LINE(1197)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1200)
					while((true)){
						HX_STACK_LINE(1200)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1200)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1200)
						if ((tmp6)){
							HX_STACK_LINE(1200)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1200)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1200)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1200)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(1200)
							tmp7 = false;
						}
						HX_STACK_LINE(1200)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1200)
						if ((tmp8)){
							HX_STACK_LINE(1200)
							break;
						}
						HX_STACK_LINE(1200)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1201)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(1206)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1206)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,size,return )

bool ZPP_Set_ZPP_CbSetPair_obj::has( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","has",0xe7fa7797,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.has","zpp_nape/util/RBTree.hx",1208,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1209)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1209)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1209)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1209)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::find( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","find",0x11e1cd5c,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.find","zpp_nape/util/RBTree.hx",1211,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1212)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1212)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1213)
	while((true)){
		HX_STACK_LINE(1213)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1213)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1213)
		if ((tmp1)){
			HX_STACK_LINE(1213)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(1213)
			tmp2 = false;
		}
		HX_STACK_LINE(1213)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1213)
		if ((tmp3)){
			HX_STACK_LINE(1213)
			break;
		}
		HX_STACK_LINE(1214)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1214)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1214)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1214)
		if ((tmp6)){
			HX_STACK_LINE(1214)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(1215)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(1217)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1217)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,find,return )

bool ZPP_Set_ZPP_CbSetPair_obj::has_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","has_weak",0xc7a01d60,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.has_weak","zpp_nape/util/RBTree.hx",1219,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1220)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1220)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1220)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1220)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::find_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","find_weak",0x7252bd7b,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.find_weak","zpp_nape/util/RBTree.hx",1222,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1223)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1223)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1224)
	while((true)){
		HX_STACK_LINE(1224)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1224)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1224)
		if ((tmp2)){
			HX_STACK_LINE(1224)
			break;
		}
		HX_STACK_LINE(1225)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1225)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1225)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1225)
		if ((tmp5)){
			HX_STACK_LINE(1225)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(1226)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1226)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1226)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1226)
			if ((tmp8)){
				HX_STACK_LINE(1226)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(1227)
				break;
			}
		}
	}
	HX_STACK_LINE(1229)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1229)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,find_weak,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::lower_bound( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","lower_bound",0xb1da257d,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.lower_bound","zpp_nape/util/RBTree.hx",1231,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1232)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1232)
	{
		HX_STACK_LINE(1233)
		::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1234)
		{
			HX_STACK_LINE(1243)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1243)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1243)
			if ((tmp2)){
				HX_STACK_LINE(1244)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1244)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(1245)
				while((true)){
					HX_STACK_LINE(1245)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1245)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1245)
					if ((tmp5)){
						HX_STACK_LINE(1245)
						break;
					}
					HX_STACK_LINE(1245)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(1246)
				while((true)){
					HX_STACK_LINE(1246)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1246)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1246)
					if ((tmp5)){
						HX_STACK_LINE(1246)
						break;
					}
					HX_STACK_LINE(1247)
					::zpp_nape::callbacks::ZPP_CbSetPair elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(1248)
					{
						HX_STACK_LINE(1249)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1249)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1249)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1249)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1249)
						if ((tmp9)){
							HX_STACK_LINE(1250)
							ret = elt;
							HX_STACK_LINE(1251)
							break;
						}
					}
					HX_STACK_LINE(1254)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1254)
					if ((tmp6)){
						HX_STACK_LINE(1255)
						set_ite = set_ite->next;
						HX_STACK_LINE(1256)
						while((true)){
							HX_STACK_LINE(1256)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1256)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1256)
							if ((tmp8)){
								HX_STACK_LINE(1256)
								break;
							}
							HX_STACK_LINE(1256)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(1259)
						while((true)){
							HX_STACK_LINE(1259)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1259)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1259)
							if ((tmp7)){
								HX_STACK_LINE(1259)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1259)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1259)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1259)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(1259)
								tmp8 = false;
							}
							HX_STACK_LINE(1259)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1259)
							if ((tmp9)){
								HX_STACK_LINE(1259)
								break;
							}
							HX_STACK_LINE(1259)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(1260)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(1265)
		tmp = ret;
	}
	HX_STACK_LINE(1232)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,lower_bound,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","first",0x93b4f9ad,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.first","zpp_nape/util/RBTree.hx",1268,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1277)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1277)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1278)
	while((true)){
		HX_STACK_LINE(1278)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1278)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1278)
		if ((tmp2)){
			HX_STACK_LINE(1278)
			break;
		}
		HX_STACK_LINE(1278)
		cur = cur->prev;
	}
	HX_STACK_LINE(1279)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1279)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,first,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","pop_front",0x5ed94438,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.pop_front","zpp_nape/util/RBTree.hx",1281,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1290)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1290)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1291)
	while((true)){
		HX_STACK_LINE(1291)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1291)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1291)
		if ((tmp2)){
			HX_STACK_LINE(1291)
			break;
		}
		HX_STACK_LINE(1291)
		cur = cur->prev;
	}
	HX_STACK_LINE(1292)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1293)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1293)
	this->remove_node(tmp1);
	HX_STACK_LINE(1294)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1294)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,pop_front,return )

Void ZPP_Set_ZPP_CbSetPair_obj::remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","remove",0x26026827,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.remove","zpp_nape/util/RBTree.hx",1296,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1297)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1297)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1297)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1306)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1306)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","successor_node",0xbec3155e,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.successor_node","zpp_nape/util/RBTree.hx",1308,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(1317)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1317)
	if ((tmp)){
		HX_STACK_LINE(1318)
		cur = cur->next;
		HX_STACK_LINE(1319)
		while((true)){
			HX_STACK_LINE(1319)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1319)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1319)
			if ((tmp2)){
				HX_STACK_LINE(1319)
				break;
			}
			HX_STACK_LINE(1319)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(1322)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1323)
		cur = cur->parent;
		HX_STACK_LINE(1324)
		while((true)){
			HX_STACK_LINE(1324)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1324)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1324)
			if ((tmp1)){
				HX_STACK_LINE(1324)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(1324)
				tmp2 = false;
			}
			HX_STACK_LINE(1324)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1324)
			if ((tmp3)){
				HX_STACK_LINE(1324)
				break;
			}
			HX_STACK_LINE(1325)
			pre = cur;
			HX_STACK_LINE(1326)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(1329)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1329)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","predecessor_node",0xf24fec1b,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.predecessor_node","zpp_nape/util/RBTree.hx",1331,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(1340)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1340)
	if ((tmp)){
		HX_STACK_LINE(1341)
		cur = cur->prev;
		HX_STACK_LINE(1342)
		while((true)){
			HX_STACK_LINE(1342)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1342)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1342)
			if ((tmp2)){
				HX_STACK_LINE(1342)
				break;
			}
			HX_STACK_LINE(1342)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(1345)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1346)
		cur = cur->parent;
		HX_STACK_LINE(1347)
		while((true)){
			HX_STACK_LINE(1347)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1347)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1347)
			if ((tmp1)){
				HX_STACK_LINE(1347)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(1347)
				tmp2 = false;
			}
			HX_STACK_LINE(1347)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1347)
			if ((tmp3)){
				HX_STACK_LINE(1347)
				break;
			}
			HX_STACK_LINE(1348)
			pre = cur;
			HX_STACK_LINE(1349)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(1352)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1352)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,predecessor_node,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::successor( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","successor",0x18f841a3,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.successor","zpp_nape/util/RBTree.hx",1354,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1363)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1363)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1363)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1363)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(1364)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1364)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1364)
	if ((tmp3)){
		HX_STACK_LINE(1364)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(1364)
		tmp4 = node->data;
	}
	HX_STACK_LINE(1364)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,successor,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::predecessor( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","predecessor",0x21b4e406,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.predecessor","zpp_nape/util/RBTree.hx",1366,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1375)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1375)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1375)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1375)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(1376)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1376)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1376)
	if ((tmp3)){
		HX_STACK_LINE(1376)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(1376)
		tmp4 = node->data;
	}
	HX_STACK_LINE(1376)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,predecessor,return )

Void ZPP_Set_ZPP_CbSetPair_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","remove_node",0x844ad05a,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.remove_node","zpp_nape/util/RBTree.hx",1378,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(1387)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1387)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1387)
		if ((tmp)){
			HX_STACK_LINE(1387)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(1387)
			tmp1 = false;
		}
		HX_STACK_LINE(1387)
		if ((tmp1)){
			HX_STACK_LINE(1388)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(1389)
			while((true)){
				HX_STACK_LINE(1389)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1389)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1389)
				if ((tmp3)){
					HX_STACK_LINE(1389)
					break;
				}
				HX_STACK_LINE(1389)
				sm = sm->prev;
			}
			HX_STACK_LINE(1390)
			{
				HX_STACK_LINE(1391)
				::zpp_nape::callbacks::ZPP_CbSetPair t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1392)
				cur->data = sm->data;
				HX_STACK_LINE(1393)
				sm->data = t;
			}
			HX_STACK_LINE(1395)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1395)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1395)
			if ((tmp3)){
				HX_STACK_LINE(1395)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1395)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1395)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(1396)
			cur = sm;
		}
		HX_STACK_LINE(1406)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1406)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1406)
		if ((tmp2)){
			HX_STACK_LINE(1406)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(1406)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(1406)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(1407)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1407)
		if ((tmp4)){
			HX_STACK_LINE(1408)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1408)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1408)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1408)
			if ((tmp6)){
				HX_STACK_LINE(1408)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(1408)
				tmp7 = true;
			}
			HX_STACK_LINE(1408)
			if ((tmp7)){
				HX_STACK_LINE(1408)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(1409)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1409)
				if ((tmp8)){
					HX_STACK_LINE(1410)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(1411)
					while((true)){
						HX_STACK_LINE(1412)
						(parent->colour)++;
						HX_STACK_LINE(1413)
						(parent->prev->colour)--;
						HX_STACK_LINE(1414)
						(parent->next->colour)--;
						HX_STACK_LINE(1415)
						{
							HX_STACK_LINE(1416)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1417)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1417)
							if ((tmp9)){
								HX_STACK_LINE(1418)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1418)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(1419)
								break;
							}
							else{
								HX_STACK_LINE(1421)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1421)
								if ((tmp10)){
									HX_STACK_LINE(1422)
									{
										HX_STACK_LINE(1423)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1423)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1423)
										if ((tmp11)){
											HX_STACK_LINE(1423)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1423)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1423)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(1423)
											tmp12 = false;
										}
										HX_STACK_LINE(1423)
										if ((tmp12)){
											HX_STACK_LINE(1424)
											::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1424)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(1425)
											break;
										}
									}
									HX_STACK_LINE(1428)
									{
										HX_STACK_LINE(1429)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1429)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1429)
										if ((tmp11)){
											HX_STACK_LINE(1429)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1429)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1429)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(1429)
											tmp12 = false;
										}
										HX_STACK_LINE(1429)
										if ((tmp12)){
											HX_STACK_LINE(1430)
											::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1430)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(1431)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1436)
						{
							HX_STACK_LINE(1437)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1438)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1438)
							if ((tmp9)){
								HX_STACK_LINE(1439)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1439)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(1440)
								break;
							}
							else{
								HX_STACK_LINE(1442)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1442)
								if ((tmp10)){
									HX_STACK_LINE(1443)
									{
										HX_STACK_LINE(1444)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1444)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1444)
										if ((tmp11)){
											HX_STACK_LINE(1444)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1444)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1444)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(1444)
											tmp12 = false;
										}
										HX_STACK_LINE(1444)
										if ((tmp12)){
											HX_STACK_LINE(1445)
											::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1445)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(1446)
											break;
										}
									}
									HX_STACK_LINE(1449)
									{
										HX_STACK_LINE(1450)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1450)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1450)
										if ((tmp11)){
											HX_STACK_LINE(1450)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1450)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1450)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(1450)
											tmp12 = false;
										}
										HX_STACK_LINE(1450)
										if ((tmp12)){
											HX_STACK_LINE(1451)
											::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1451)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(1452)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1457)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1457)
						if ((tmp9)){
							HX_STACK_LINE(1458)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1458)
							if ((tmp10)){
								HX_STACK_LINE(1459)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(1462)
								parent = parent->parent;
								HX_STACK_LINE(1463)
								continue;
							}
						}
						HX_STACK_LINE(1466)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1470)
		{
			HX_STACK_LINE(1471)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(1472)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1472)
			if ((tmp5)){
				HX_STACK_LINE(1473)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(1475)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1475)
				if ((tmp6)){
					HX_STACK_LINE(1475)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(1476)
					par->next = child;
				}
			}
			HX_STACK_LINE(1477)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1477)
			if ((tmp6)){
				HX_STACK_LINE(1477)
				child->parent = par;
			}
		}
		HX_STACK_LINE(1479)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1479)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1479)
		cur->parent = tmp6;
		HX_STACK_LINE(1480)
		{
			HX_STACK_LINE(1481)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1490)
			{
				HX_STACK_LINE(1490)
				o->data = null();
				HX_STACK_LINE(1490)
				o->lt = null();
				HX_STACK_LINE(1490)
				o->swapped = null();
			}
			HX_STACK_LINE(1491)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1491)
			o->next = tmp7;
			HX_STACK_LINE(1492)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,remove_node,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","clear",0xdb72f30a,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.clear","zpp_nape/util/RBTree.hx",1499,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1499)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1499)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1499)
		if ((tmp1)){
			HX_STACK_LINE(1499)
			Dynamic();
		}
		else{
			HX_STACK_LINE(1499)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1499)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1499)
			while((true)){
				HX_STACK_LINE(1499)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1499)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1499)
				if ((tmp4)){
					HX_STACK_LINE(1499)
					break;
				}
				HX_STACK_LINE(1499)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1499)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1499)
				if ((tmp5)){
					HX_STACK_LINE(1499)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(1499)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1499)
					if ((tmp7)){
						HX_STACK_LINE(1499)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(1499)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1499)
						::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1499)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1499)
						if ((tmp9)){
							HX_STACK_LINE(1499)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1499)
							if ((tmp10)){
								HX_STACK_LINE(1499)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(1499)
								ret->next = null();
							}
							HX_STACK_LINE(1499)
							cur->parent = null();
						}
						HX_STACK_LINE(1499)
						{
							HX_STACK_LINE(1499)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1499)
							{
								HX_STACK_LINE(1499)
								o->data = null();
								HX_STACK_LINE(1499)
								o->lt = null();
								HX_STACK_LINE(1499)
								o->swapped = null();
							}
							HX_STACK_LINE(1499)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1499)
							o->next = tmp10;
							HX_STACK_LINE(1499)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1499)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(1499)
				cur = tmp6;
			}
			HX_STACK_LINE(1499)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,clear,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","clear_with",0x21975a9b,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.clear_with","zpp_nape/util/RBTree.hx",1502,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(1503)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1503)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1503)
		if ((tmp1)){
			HX_STACK_LINE(1503)
			return null();
		}
		else{
			HX_STACK_LINE(1505)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1505)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1506)
			while((true)){
				HX_STACK_LINE(1506)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1506)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1506)
				if ((tmp4)){
					HX_STACK_LINE(1506)
					break;
				}
				HX_STACK_LINE(1506)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1506)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1506)
				if ((tmp5)){
					HX_STACK_LINE(1506)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(1506)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1506)
					if ((tmp7)){
						HX_STACK_LINE(1506)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(1506)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1506)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(1506)
						::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1506)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1506)
						if ((tmp9)){
							HX_STACK_LINE(1506)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1506)
							if ((tmp10)){
								HX_STACK_LINE(1506)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(1506)
								ret->next = null();
							}
							HX_STACK_LINE(1506)
							cur->parent = null();
						}
						HX_STACK_LINE(1506)
						{
							HX_STACK_LINE(1506)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1506)
							{
								HX_STACK_LINE(1506)
								o->data = null();
								HX_STACK_LINE(1506)
								o->lt = null();
								HX_STACK_LINE(1506)
								o->swapped = null();
							}
							HX_STACK_LINE(1506)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1506)
							o->next = tmp10;
							HX_STACK_LINE(1506)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1506)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(1506)
				cur = tmp6;
			}
			HX_STACK_LINE(1507)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","clear_node",0x1ba8ee97,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.clear_node","zpp_nape/util/RBTree.hx",1511,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(1520)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1520)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(1521)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1522)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1522)
	if ((tmp1)){
		HX_STACK_LINE(1523)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1523)
		if ((tmp2)){
			HX_STACK_LINE(1523)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(1524)
			ret->next = null();
		}
		HX_STACK_LINE(1525)
		node->parent = null();
	}
	HX_STACK_LINE(1527)
	{
		HX_STACK_LINE(1528)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1537)
		{
			HX_STACK_LINE(1537)
			o->data = null();
			HX_STACK_LINE(1537)
			o->lt = null();
			HX_STACK_LINE(1537)
			o->swapped = null();
		}
		HX_STACK_LINE(1538)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1538)
		o->next = tmp2;
		HX_STACK_LINE(1539)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1544)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1544)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_CbSetPair_obj,clear_node,return )

Void ZPP_Set_ZPP_CbSetPair_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","__fix_neg_red",0x1010d655,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.__fix_neg_red","zpp_nape/util/RBTree.hx",1546,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(1547)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(1548)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1548)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1548)
		if ((tmp)){
			HX_STACK_LINE(1549)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(1550)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(1551)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(1552)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(1553)
			nl->colour = (int)0;
			HX_STACK_LINE(1554)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1554)
			negred->colour = tmp2;
			HX_STACK_LINE(1555)
			{
				HX_STACK_LINE(1556)
				negred->next = trl;
				HX_STACK_LINE(1557)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1557)
				if ((tmp3)){
					HX_STACK_LINE(1557)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(1559)
			{
				HX_STACK_LINE(1560)
				::zpp_nape::callbacks::ZPP_CbSetPair t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1561)
				parent->data = nr->data;
				HX_STACK_LINE(1562)
				nr->data = t;
			}
			HX_STACK_LINE(1564)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1564)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1564)
			if ((tmp4)){
				HX_STACK_LINE(1564)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1564)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1564)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(1565)
			{
				HX_STACK_LINE(1566)
				nr->prev = trr;
				HX_STACK_LINE(1567)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1567)
				if ((tmp5)){
					HX_STACK_LINE(1567)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(1569)
			{
				HX_STACK_LINE(1570)
				nr->next = parent->next;
				HX_STACK_LINE(1571)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1571)
				if ((tmp5)){
					HX_STACK_LINE(1571)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(1573)
			{
				HX_STACK_LINE(1574)
				parent->next = nr;
				HX_STACK_LINE(1575)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1575)
				if ((tmp5)){
					HX_STACK_LINE(1575)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(1577)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(1580)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(1581)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(1582)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(1583)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(1584)
			nl->colour = (int)0;
			HX_STACK_LINE(1585)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1585)
			negred->colour = tmp2;
			HX_STACK_LINE(1586)
			{
				HX_STACK_LINE(1587)
				negred->prev = trl;
				HX_STACK_LINE(1588)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1588)
				if ((tmp3)){
					HX_STACK_LINE(1588)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(1590)
			{
				HX_STACK_LINE(1591)
				::zpp_nape::callbacks::ZPP_CbSetPair t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1592)
				parent->data = nr->data;
				HX_STACK_LINE(1593)
				nr->data = t;
			}
			HX_STACK_LINE(1595)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1595)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1595)
			if ((tmp4)){
				HX_STACK_LINE(1595)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1595)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1595)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(1596)
			{
				HX_STACK_LINE(1597)
				nr->next = trr;
				HX_STACK_LINE(1598)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1598)
				if ((tmp5)){
					HX_STACK_LINE(1598)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(1600)
			{
				HX_STACK_LINE(1601)
				nr->prev = parent->prev;
				HX_STACK_LINE(1602)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1602)
				if ((tmp5)){
					HX_STACK_LINE(1602)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(1604)
			{
				HX_STACK_LINE(1605)
				parent->prev = nr;
				HX_STACK_LINE(1606)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1606)
				if ((tmp5)){
					HX_STACK_LINE(1606)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(1608)
			tmp1 = nl;
		}
		HX_STACK_LINE(1548)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(1610)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1610)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1610)
		if ((tmp2)){
			HX_STACK_LINE(1610)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1610)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1610)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(1610)
			tmp3 = false;
		}
		HX_STACK_LINE(1610)
		if ((tmp3)){
			HX_STACK_LINE(1610)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1610)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(1611)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1611)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1611)
			if ((tmp4)){
				HX_STACK_LINE(1611)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1611)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1611)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(1611)
				tmp5 = false;
			}
			HX_STACK_LINE(1611)
			if ((tmp5)){
				HX_STACK_LINE(1611)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1611)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","__fix_dbl_red",0x1e290433,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.__fix_dbl_red","zpp_nape/util/RBTree.hx",1614,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1614)
		while((true)){
			HX_STACK_LINE(1615)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(1616)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(1617)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1617)
			if ((tmp)){
				HX_STACK_LINE(1618)
				par->colour = (int)1;
				HX_STACK_LINE(1619)
				break;
			}
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(1622)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1622)
			if ((tmp1)){
				HX_STACK_LINE(1623)
				n3 = g;
				HX_STACK_LINE(1624)
				t4 = g->next;
				HX_STACK_LINE(1625)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1625)
				if ((tmp2)){
					HX_STACK_LINE(1626)
					n1 = x;
					HX_STACK_LINE(1627)
					n2 = par;
					HX_STACK_LINE(1628)
					t1 = x->prev;
					HX_STACK_LINE(1629)
					t2 = x->next;
					HX_STACK_LINE(1630)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(1633)
					n1 = par;
					HX_STACK_LINE(1634)
					n2 = x;
					HX_STACK_LINE(1635)
					t1 = par->prev;
					HX_STACK_LINE(1636)
					t2 = x->prev;
					HX_STACK_LINE(1637)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(1641)
				n1 = g;
				HX_STACK_LINE(1642)
				t1 = g->prev;
				HX_STACK_LINE(1643)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1643)
				if ((tmp2)){
					HX_STACK_LINE(1644)
					n2 = x;
					HX_STACK_LINE(1645)
					n3 = par;
					HX_STACK_LINE(1646)
					t2 = x->prev;
					HX_STACK_LINE(1647)
					t3 = x->next;
					HX_STACK_LINE(1648)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(1651)
					n2 = par;
					HX_STACK_LINE(1652)
					n3 = x;
					HX_STACK_LINE(1653)
					t2 = par->prev;
					HX_STACK_LINE(1654)
					t3 = x->prev;
					HX_STACK_LINE(1655)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(1658)
			{
				HX_STACK_LINE(1659)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(1660)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1660)
				if ((tmp2)){
					HX_STACK_LINE(1661)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(1663)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1663)
					if ((tmp3)){
						HX_STACK_LINE(1663)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(1664)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(1665)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1665)
				if ((tmp3)){
					HX_STACK_LINE(1665)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(1667)
			{
				HX_STACK_LINE(1668)
				n1->prev = t1;
				HX_STACK_LINE(1669)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1669)
				if ((tmp2)){
					HX_STACK_LINE(1669)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(1671)
			{
				HX_STACK_LINE(1672)
				n1->next = t2;
				HX_STACK_LINE(1673)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1673)
				if ((tmp2)){
					HX_STACK_LINE(1673)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(1675)
			{
				HX_STACK_LINE(1676)
				n2->prev = n1;
				HX_STACK_LINE(1677)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1677)
				if ((tmp2)){
					HX_STACK_LINE(1677)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(1679)
			{
				HX_STACK_LINE(1680)
				n2->next = n3;
				HX_STACK_LINE(1681)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1681)
				if ((tmp2)){
					HX_STACK_LINE(1681)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(1683)
			{
				HX_STACK_LINE(1684)
				n3->prev = t3;
				HX_STACK_LINE(1685)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1685)
				if ((tmp2)){
					HX_STACK_LINE(1685)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(1687)
			{
				HX_STACK_LINE(1688)
				n3->next = t4;
				HX_STACK_LINE(1689)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1689)
				if ((tmp2)){
					HX_STACK_LINE(1689)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(1691)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1691)
			n2->colour = tmp2;
			HX_STACK_LINE(1692)
			n1->colour = (int)1;
			HX_STACK_LINE(1693)
			n3->colour = (int)1;
			HX_STACK_LINE(1694)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1694)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1694)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1694)
			if ((tmp5)){
				HX_STACK_LINE(1694)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1694)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(1695)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1695)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1695)
				if ((tmp6)){
					HX_STACK_LINE(1695)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1695)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1695)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(1695)
					tmp7 = false;
				}
				HX_STACK_LINE(1695)
				if ((tmp7)){
					HX_STACK_LINE(1696)
					x = n2;
					HX_STACK_LINE(1697)
					continue;
				}
			}
			HX_STACK_LINE(1699)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_CbSetPair_obj::try_insert_bool( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","try_insert_bool",0x3069b1a9,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.try_insert_bool","zpp_nape/util/RBTree.hx",1702,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1703)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1704)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1705)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1705)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1705)
	if ((tmp1)){
		HX_STACK_LINE(1706)
		{
			HX_STACK_LINE(1707)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1707)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1707)
			if ((tmp3)){
				HX_STACK_LINE(1708)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1708)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(1714)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1714)
				x = tmp4;
				HX_STACK_LINE(1715)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(1716)
				x->next = null();
			}
			HX_STACK_LINE(1721)
			Dynamic();
		}
		HX_STACK_LINE(1723)
		x->data = obj;
		HX_STACK_LINE(1724)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1727)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1727)
		cur = tmp2;
		HX_STACK_LINE(1728)
		while((true)){
			HX_STACK_LINE(1729)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1729)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1729)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1729)
			if ((tmp5)){
				HX_STACK_LINE(1730)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1730)
				if ((tmp6)){
					HX_STACK_LINE(1731)
					{
						HX_STACK_LINE(1732)
						::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1732)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1732)
						if ((tmp8)){
							HX_STACK_LINE(1733)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1733)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(1739)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1739)
							x = tmp9;
							HX_STACK_LINE(1740)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(1741)
							x->next = null();
						}
						HX_STACK_LINE(1746)
						Dynamic();
					}
					HX_STACK_LINE(1748)
					x->data = obj;
					HX_STACK_LINE(1749)
					cur->prev = x;
					HX_STACK_LINE(1750)
					x->parent = cur;
					HX_STACK_LINE(1751)
					break;
				}
				else{
					HX_STACK_LINE(1753)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1755)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1755)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1755)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1755)
				if ((tmp8)){
					HX_STACK_LINE(1756)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1756)
					if ((tmp9)){
						HX_STACK_LINE(1757)
						{
							HX_STACK_LINE(1758)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1758)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1758)
							if ((tmp11)){
								HX_STACK_LINE(1759)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1759)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(1765)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1765)
								x = tmp12;
								HX_STACK_LINE(1766)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(1767)
								x->next = null();
							}
							HX_STACK_LINE(1772)
							Dynamic();
						}
						HX_STACK_LINE(1774)
						x->data = obj;
						HX_STACK_LINE(1775)
						cur->next = x;
						HX_STACK_LINE(1776)
						x->parent = cur;
						HX_STACK_LINE(1777)
						break;
					}
					else{
						HX_STACK_LINE(1779)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(1781)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1784)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1784)
	if ((tmp2)){
		HX_STACK_LINE(1784)
		return false;
	}
	else{
		HX_STACK_LINE(1786)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1786)
		if ((tmp3)){
			HX_STACK_LINE(1786)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(1788)
			x->colour = (int)0;
			HX_STACK_LINE(1789)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1789)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1789)
			if ((tmp5)){
				HX_STACK_LINE(1789)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1789)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(1791)
		return true;
	}
	HX_STACK_LINE(1784)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::try_insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","try_insert",0x041c5260,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.try_insert","zpp_nape/util/RBTree.hx",1794,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1795)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1796)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1797)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1797)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1797)
	if ((tmp1)){
		HX_STACK_LINE(1798)
		{
			HX_STACK_LINE(1799)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1799)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1799)
			if ((tmp3)){
				HX_STACK_LINE(1800)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1800)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(1806)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1806)
				x = tmp4;
				HX_STACK_LINE(1807)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(1808)
				x->next = null();
			}
			HX_STACK_LINE(1813)
			Dynamic();
		}
		HX_STACK_LINE(1815)
		x->data = obj;
		HX_STACK_LINE(1816)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1819)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1819)
		cur = tmp2;
		HX_STACK_LINE(1820)
		while((true)){
			HX_STACK_LINE(1821)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1821)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1821)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1821)
			if ((tmp5)){
				HX_STACK_LINE(1822)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1822)
				if ((tmp6)){
					HX_STACK_LINE(1823)
					{
						HX_STACK_LINE(1824)
						::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1824)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1824)
						if ((tmp8)){
							HX_STACK_LINE(1825)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1825)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(1831)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1831)
							x = tmp9;
							HX_STACK_LINE(1832)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(1833)
							x->next = null();
						}
						HX_STACK_LINE(1838)
						Dynamic();
					}
					HX_STACK_LINE(1840)
					x->data = obj;
					HX_STACK_LINE(1841)
					cur->prev = x;
					HX_STACK_LINE(1842)
					x->parent = cur;
					HX_STACK_LINE(1843)
					break;
				}
				else{
					HX_STACK_LINE(1845)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1847)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1847)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1847)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1847)
				if ((tmp8)){
					HX_STACK_LINE(1848)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1848)
					if ((tmp9)){
						HX_STACK_LINE(1849)
						{
							HX_STACK_LINE(1850)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1850)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1850)
							if ((tmp11)){
								HX_STACK_LINE(1851)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1851)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(1857)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1857)
								x = tmp12;
								HX_STACK_LINE(1858)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(1859)
								x->next = null();
							}
							HX_STACK_LINE(1864)
							Dynamic();
						}
						HX_STACK_LINE(1866)
						x->data = obj;
						HX_STACK_LINE(1867)
						cur->next = x;
						HX_STACK_LINE(1868)
						x->parent = cur;
						HX_STACK_LINE(1869)
						break;
					}
					else{
						HX_STACK_LINE(1871)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(1873)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1876)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1876)
	if ((tmp2)){
		HX_STACK_LINE(1876)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1876)
		return tmp3;
	}
	else{
		HX_STACK_LINE(1878)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1878)
		if ((tmp3)){
			HX_STACK_LINE(1878)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(1880)
			x->colour = (int)0;
			HX_STACK_LINE(1881)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1881)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1881)
			if ((tmp5)){
				HX_STACK_LINE(1881)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1881)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(1883)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1883)
		return tmp4;
	}
	HX_STACK_LINE(1876)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","insert",0xbf570f1c,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair.insert","zpp_nape/util/RBTree.hx",1886,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1895)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1896)
	{
		HX_STACK_LINE(1897)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1897)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1897)
		if ((tmp1)){
			HX_STACK_LINE(1898)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1898)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(1904)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1904)
			x = tmp2;
			HX_STACK_LINE(1905)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
			HX_STACK_LINE(1906)
			x->next = null();
		}
		HX_STACK_LINE(1911)
		Dynamic();
	}
	HX_STACK_LINE(1913)
	x->data = obj;
	HX_STACK_LINE(1914)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1914)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1914)
	if ((tmp1)){
		HX_STACK_LINE(1914)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1916)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1916)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1917)
		while((true)){
			HX_STACK_LINE(1918)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1918)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1918)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1918)
			if ((tmp5)){
				HX_STACK_LINE(1919)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1919)
				if ((tmp6)){
					HX_STACK_LINE(1920)
					cur->prev = x;
					HX_STACK_LINE(1921)
					x->parent = cur;
					HX_STACK_LINE(1922)
					break;
				}
				else{
					HX_STACK_LINE(1924)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1927)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1927)
				if ((tmp6)){
					HX_STACK_LINE(1928)
					cur->next = x;
					HX_STACK_LINE(1929)
					x->parent = cur;
					HX_STACK_LINE(1930)
					break;
				}
				else{
					HX_STACK_LINE(1932)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(1936)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1936)
	if ((tmp2)){
		HX_STACK_LINE(1936)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(1938)
		x->colour = (int)0;
		HX_STACK_LINE(1939)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1939)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1939)
		if ((tmp4)){
			HX_STACK_LINE(1939)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1939)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(1949)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1949)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;


ZPP_Set_ZPP_CbSetPair_obj::ZPP_Set_ZPP_CbSetPair_obj()
{
}

void ZPP_Set_ZPP_CbSetPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_CbSetPair);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_CbSetPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_Set_ZPP_CbSetPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSetPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_CbSetPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_CbSetPair_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_CbSetPair_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_CbSetPair_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSetPair*/ ,(int)offsetof(ZPP_Set_ZPP_CbSetPair_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSetPair*/ ,(int)offsetof(ZPP_Set_ZPP_CbSetPair_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSetPair*/ ,(int)offsetof(ZPP_Set_ZPP_CbSetPair_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSetPair*/ ,(int)offsetof(ZPP_Set_ZPP_CbSetPair_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_CbSetPair_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSetPair*/ ,(void *) &ZPP_Set_ZPP_CbSetPair_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_CbSetPair_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_CbSetPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_CbSetPair","\x2b","\x76","\x15","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_CbSetPair_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_CbSetPair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_CbSetPair_obj >;
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

void ZPP_Set_ZPP_CbSetPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
