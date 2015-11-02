#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CbSetManager_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","new",0x664c1caa,"zpp_nape.space.ZPP_CbSetManager.new","zpp_nape/space/Space.hx",1191,0x2b65ed03)
HX_STACK_THIS(this)
HX_STACK_ARG(space,"space")
{
	HX_STACK_LINE(1193)
	this->space = null();
	HX_STACK_LINE(1192)
	this->cbsets = null();
	HX_STACK_LINE(1296)
	{
		HX_STACK_LINE(1297)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1297)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1297)
		if ((tmp1)){
			HX_STACK_LINE(1298)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1298)
			this->cbsets = tmp2;
		}
		else{
			HX_STACK_LINE(1304)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1304)
			this->cbsets = tmp2;
			HX_STACK_LINE(1305)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = this->cbsets;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1305)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = tmp3->next;
			HX_STACK_LINE(1306)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = this->cbsets;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1306)
			tmp4->next = null();
		}
		HX_STACK_LINE(1311)
		Dynamic();
	}
	HX_STACK_LINE(1313)
	Dynamic tmp = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1313)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = this->cbsets;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1313)
	tmp1->lt = tmp;
	HX_STACK_LINE(1314)
	this->space = space;
}
;
	return null();
}

//ZPP_CbSetManager_obj::~ZPP_CbSetManager_obj() { }

Dynamic ZPP_CbSetManager_obj::__CreateEmpty() { return  new ZPP_CbSetManager_obj; }
hx::ObjectPtr< ZPP_CbSetManager_obj > ZPP_CbSetManager_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > _result_ = new ZPP_CbSetManager_obj();
	_result_->__construct(space);
	return _result_;}

Dynamic ZPP_CbSetManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > _result_ = new ZPP_CbSetManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSetManager_obj::get( ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","get",0x6646cce0,"zpp_nape.space.ZPP_CbSetManager.get","zpp_nape/space/Space.hx",1194,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cbTypes,"cbTypes")
	HX_STACK_LINE(1195)
	bool tmp = (cbTypes->head == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1195)
	if ((tmp)){
		HX_STACK_LINE(1195)
		return null();
	}
	HX_STACK_LINE(1198)
	::zpp_nape::callbacks::ZPP_CbSet fake;		HX_STACK_VAR(fake,"fake");
	HX_STACK_LINE(1199)
	{
		HX_STACK_LINE(1200)
		::zpp_nape::callbacks::ZPP_CbSet tmp1 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1200)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1200)
		if ((tmp2)){
			HX_STACK_LINE(1201)
			::zpp_nape::callbacks::ZPP_CbSet tmp3 = ::zpp_nape::callbacks::ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1201)
			fake = tmp3;
		}
		else{
			HX_STACK_LINE(1207)
			::zpp_nape::callbacks::ZPP_CbSet tmp3 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1207)
			fake = tmp3;
			HX_STACK_LINE(1208)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = fake->next;
			HX_STACK_LINE(1209)
			fake->next = null();
		}
		HX_STACK_LINE(1214)
		Dynamic();
	}
	HX_STACK_LINE(1216)
	::zpp_nape::util::ZNPList_ZPP_CbType faketypes = fake->cbTypes;		HX_STACK_VAR(faketypes,"faketypes");
	HX_STACK_LINE(1217)
	fake->cbTypes = cbTypes;
	HX_STACK_LINE(1218)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp1 = this->cbsets;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1218)
	::zpp_nape::callbacks::ZPP_CbSet tmp2 = fake;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1218)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = tmp1->find_weak(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1218)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet res = tmp3;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(1219)
	bool tmp4 = (res != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1219)
	::zpp_nape::callbacks::ZPP_CbSet tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1219)
	if ((tmp4)){
		HX_STACK_LINE(1219)
		tmp5 = res->data;
	}
	else{
		HX_STACK_LINE(1220)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1220)
		::zpp_nape::callbacks::ZPP_CbSet tmp7 = ::zpp_nape::callbacks::ZPP_CbSet_obj::get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1220)
		::zpp_nape::callbacks::ZPP_CbSet set = tmp7;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(1229)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp8 = this->cbsets;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1229)
		::zpp_nape::callbacks::ZPP_CbSet tmp9 = set;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1229)
		tmp8->insert(tmp9);
		HX_STACK_LINE(1230)
		set->manager = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1231)
		tmp5 = set;
	}
	HX_STACK_LINE(1219)
	::zpp_nape::callbacks::ZPP_CbSet ret = tmp5;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1233)
	fake->cbTypes = faketypes;
	HX_STACK_LINE(1234)
	{
		HX_STACK_LINE(1235)
		::zpp_nape::callbacks::ZPP_CbSet o = fake;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1244)
		{
			HX_STACK_LINE(1244)
			o->listeners->clear();
			HX_STACK_LINE(1244)
			o->zip_listeners = true;
			HX_STACK_LINE(1244)
			o->bodylisteners->clear();
			HX_STACK_LINE(1244)
			o->zip_bodylisteners = true;
			HX_STACK_LINE(1244)
			o->conlisteners->clear();
			HX_STACK_LINE(1244)
			o->zip_conlisteners = true;
			HX_STACK_LINE(1244)
			while((true)){
				HX_STACK_LINE(1244)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = o->cbTypes->head;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1244)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1244)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1244)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1244)
				if ((tmp9)){
					HX_STACK_LINE(1244)
					break;
				}
				HX_STACK_LINE(1244)
				::zpp_nape::callbacks::ZPP_CbType tmp10 = o->cbTypes->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1244)
				::zpp_nape::callbacks::ZPP_CbType cb = tmp10;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1244)
				::zpp_nape::callbacks::ZPP_CbSet tmp11 = o;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1244)
				cb->cbsets->remove(tmp11);
			}
			HX_STACK_LINE(1244)
			Dynamic();
		}
		HX_STACK_LINE(1245)
		::zpp_nape::callbacks::ZPP_CbSet tmp6 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1245)
		o->next = tmp6;
		HX_STACK_LINE(1246)
		::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1251)
	::zpp_nape::callbacks::ZPP_CbSet tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1251)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,get,return )

Void ZPP_CbSetManager_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet set){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","remove",0x16b19a3a,"zpp_nape.space.ZPP_CbSetManager.remove","zpp_nape/space/Space.hx",1253,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(set,"set")
		HX_STACK_LINE(1254)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1254)
		::zpp_nape::callbacks::ZPP_CbSet tmp1 = set;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1254)
		tmp->remove(tmp1);
		HX_STACK_LINE(1256)
		while((true)){
			HX_STACK_LINE(1256)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair tmp2 = set->cbpairs->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1256)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1256)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1256)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1256)
			if ((tmp5)){
				HX_STACK_LINE(1256)
				break;
			}
			HX_STACK_LINE(1257)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = set->cbpairs->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1257)
			::zpp_nape::callbacks::ZPP_CbSetPair pair = tmp6;		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(1258)
			{
				HX_STACK_LINE(1259)
				bool tmp7 = (pair->a != pair->b);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1259)
				if ((tmp7)){
					HX_STACK_LINE(1260)
					bool tmp8 = (set == pair->a);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1260)
					if ((tmp8)){
						HX_STACK_LINE(1260)
						::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp9 = pair->b->cbpairs;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1260)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = pair;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1260)
						tmp9->remove(tmp10);
					}
					else{
						HX_STACK_LINE(1261)
						::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp9 = pair->a->cbpairs;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1261)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = pair;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1261)
						tmp9->remove(tmp10);
					}
				}
				HX_STACK_LINE(1263)
				{
					HX_STACK_LINE(1264)
					::zpp_nape::callbacks::ZPP_CbSetPair o = pair;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						::zpp_nape::callbacks::ZPP_CbSet tmp8 = o->b = null();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1273)
						o->a = tmp8;
						HX_STACK_LINE(1273)
						o->listeners->clear();
					}
					HX_STACK_LINE(1274)
					::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1274)
					o->next = tmp8;
					HX_STACK_LINE(1275)
					::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1283)
		set->manager = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,remove,(void))

Void ZPP_CbSetManager_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","clear",0x5636e457,"zpp_nape.space.ZPP_CbSetManager.clear","zpp_nape/space/Space.hx",1286,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,clear,(void))

Void ZPP_CbSetManager_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","validate",0xb1c0b80c,"zpp_nape.space.ZPP_CbSetManager.validate","zpp_nape/space/Space.hx",1319,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1328)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1328)
		bool tmp1 = tmp->empty();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1328)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1328)
		if ((tmp2)){
			HX_STACK_LINE(1329)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = this->cbsets;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1329)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = tmp3->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1330)
			while((true)){
				HX_STACK_LINE(1330)
				bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1330)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1330)
				if ((tmp5)){
					HX_STACK_LINE(1330)
					break;
				}
				HX_STACK_LINE(1330)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1331)
			while((true)){
				HX_STACK_LINE(1331)
				bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1331)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1331)
				if ((tmp5)){
					HX_STACK_LINE(1331)
					break;
				}
				HX_STACK_LINE(1332)
				::zpp_nape::callbacks::ZPP_CbSet cb = set_ite->data;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1333)
				cb->validate();
				HX_STACK_LINE(1334)
				bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1334)
				if ((tmp6)){
					HX_STACK_LINE(1335)
					set_ite = set_ite->next;
					HX_STACK_LINE(1336)
					while((true)){
						HX_STACK_LINE(1336)
						bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1336)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1336)
						if ((tmp8)){
							HX_STACK_LINE(1336)
							break;
						}
						HX_STACK_LINE(1336)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1339)
					while((true)){
						HX_STACK_LINE(1339)
						bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1339)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1339)
						if ((tmp7)){
							HX_STACK_LINE(1339)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1339)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1339)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1339)
							tmp8 = (tmp9 == tmp11);
						}
						else{
							HX_STACK_LINE(1339)
							tmp8 = false;
						}
						HX_STACK_LINE(1339)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1339)
						if ((tmp9)){
							HX_STACK_LINE(1339)
							break;
						}
						HX_STACK_LINE(1339)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1340)
					set_ite = set_ite->parent;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,validate,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetManager_obj::pair( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","pair",0x1d9c5090,"zpp_nape.space.ZPP_CbSetManager.pair","zpp_nape/space/Space.hx",1348,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(1349)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1350)
	int tmp = a->cbpairs->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1350)
	int tmp1 = b->cbpairs->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1350)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1350)
	::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1350)
	if ((tmp2)){
		HX_STACK_LINE(1350)
		tmp3 = a->cbpairs;
	}
	else{
		HX_STACK_LINE(1350)
		tmp3 = b->cbpairs;
	}
	HX_STACK_LINE(1350)
	::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs = tmp3;		HX_STACK_VAR(pairs,"pairs");
	HX_STACK_LINE(1351)
	{
		HX_STACK_LINE(1352)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1353)
		while((true)){
			HX_STACK_LINE(1353)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1353)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1353)
			if ((tmp5)){
				HX_STACK_LINE(1353)
				break;
			}
			HX_STACK_LINE(1354)
			::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1355)
			{
				HX_STACK_LINE(1356)
				bool tmp6 = (p->a == a);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1356)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1356)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1356)
				if ((tmp7)){
					HX_STACK_LINE(1356)
					tmp8 = (p->b == b);
				}
				else{
					HX_STACK_LINE(1356)
					tmp8 = false;
				}
				HX_STACK_LINE(1356)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1356)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1356)
				if ((tmp9)){
					HX_STACK_LINE(1356)
					bool tmp11 = (p->a == b);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1356)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1356)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1356)
					if ((tmp13)){
						HX_STACK_LINE(1356)
						tmp10 = (p->b == a);
					}
					else{
						HX_STACK_LINE(1356)
						tmp10 = false;
					}
				}
				else{
					HX_STACK_LINE(1356)
					tmp10 = true;
				}
				HX_STACK_LINE(1356)
				if ((tmp10)){
					HX_STACK_LINE(1357)
					ret = p;
					HX_STACK_LINE(1358)
					break;
				}
			}
			HX_STACK_LINE(1361)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1364)
	bool tmp4 = (ret == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1364)
	if ((tmp4)){
		HX_STACK_LINE(1365)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1365)
		{
			HX_STACK_LINE(1365)
			::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(1365)
			{
				HX_STACK_LINE(1365)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1365)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1365)
				if ((tmp7)){
					HX_STACK_LINE(1365)
					::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1365)
					ret1 = tmp8;
				}
				else{
					HX_STACK_LINE(1365)
					::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1365)
					ret1 = tmp8;
					HX_STACK_LINE(1365)
					::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(1365)
					ret1->next = null();
				}
				HX_STACK_LINE(1365)
				ret1->zip_listeners = true;
			}
			HX_STACK_LINE(1365)
			::zpp_nape::callbacks::ZPP_CbSet tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1365)
			::zpp_nape::callbacks::ZPP_CbSet tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1365)
			bool tmp8 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1365)
			if ((tmp8)){
				HX_STACK_LINE(1365)
				ret1->a = a;
				HX_STACK_LINE(1365)
				ret1->b = b;
			}
			else{
				HX_STACK_LINE(1365)
				ret1->a = b;
				HX_STACK_LINE(1365)
				ret1->b = a;
			}
			HX_STACK_LINE(1365)
			tmp5 = ret1;
		}
		HX_STACK_LINE(1365)
		ret = tmp5;
		HX_STACK_LINE(1366)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1366)
		a->cbpairs->add(tmp6);
		HX_STACK_LINE(1367)
		bool tmp7 = (b != a);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1367)
		if ((tmp7)){
			HX_STACK_LINE(1367)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1367)
			b->cbpairs->add(tmp8);
		}
	}
	HX_STACK_LINE(1369)
	{
		HX_STACK_LINE(1369)
		bool tmp5 = ret->zip_listeners;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1369)
		if ((tmp5)){
			HX_STACK_LINE(1369)
			ret->zip_listeners = false;
			HX_STACK_LINE(1369)
			ret->__validate();
		}
	}
	HX_STACK_LINE(1370)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1370)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetManager_obj,pair,return )

bool ZPP_CbSetManager_obj::valid_listener( ::zpp_nape::callbacks::ZPP_Listener i){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CbSetManager","valid_listener",0x2197e74d,"zpp_nape.space.ZPP_CbSetManager.valid_listener","zpp_nape/space/Space.hx",1374,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(1375)
	::zpp_nape::space::ZPP_Space tmp = i->space;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1375)
	::zpp_nape::space::ZPP_Space tmp1 = this->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1375)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1375)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,valid_listener,return )


ZPP_CbSetManager_obj::ZPP_CbSetManager_obj()
{
}

void ZPP_CbSetManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSetManager);
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_END_CLASS();
}

void ZPP_CbSetManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
	HX_VISIT_MEMBER_NAME(space,"space");
}

Dynamic ZPP_CbSetManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { return pair_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"valid_listener") ) { return valid_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CbSetManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CbSetManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_CbSetManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_CbSet*/ ,(int)offsetof(ZPP_CbSetManager_obj,cbsets),HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_CbSetManager_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a"),
	HX_HCSTRING("valid_listener","\x57","\x03","\xaf","\x5e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_CbSetManager_obj::__mClass;

void ZPP_CbSetManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_CbSetManager","\xb8","\x3f","\x4a","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_CbSetManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CbSetManager_obj >;
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
} // end namespace space
