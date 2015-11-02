#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_BodyListener_obj::__construct(::nape::callbacks::OptionType options,int event,Dynamic handler)
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_BodyListener","new",0xc407e6ae,"zpp_nape.callbacks.ZPP_BodyListener.new","zpp_nape/callbacks/Listener.hx",202,0x87b155a7)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
HX_STACK_ARG(event,"event")
HX_STACK_ARG(handler,"handler")
{
	HX_STACK_LINE(205)
	this->handler = null();
	HX_STACK_LINE(204)
	this->options = null();
	HX_STACK_LINE(203)
	this->outer_zn = null();
	HX_STACK_LINE(214)
	super::__construct();
	HX_STACK_LINE(215)
	this->event = event;
	HX_STACK_LINE(216)
	this->handler = handler;
	HX_STACK_LINE(217)
	this->body = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(218)
	int tmp = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_BODY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	this->type = tmp;
	HX_STACK_LINE(219)
	this->options = options->zpp_inner;
}
;
	return null();
}

//ZPP_BodyListener_obj::~ZPP_BodyListener_obj() { }

Dynamic ZPP_BodyListener_obj::__CreateEmpty() { return  new ZPP_BodyListener_obj; }
hx::ObjectPtr< ZPP_BodyListener_obj > ZPP_BodyListener_obj::__new(::nape::callbacks::OptionType options,int event,Dynamic handler)
{  hx::ObjectPtr< ZPP_BodyListener_obj > _result_ = new ZPP_BodyListener_obj();
	_result_->__construct(options,event,handler);
	return _result_;}

Dynamic ZPP_BodyListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_BodyListener_obj > _result_ = new ZPP_BodyListener_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ZPP_BodyListener_obj::immutable_options( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_BodyListener","immutable_options",0x953c09ef,"zpp_nape.callbacks.ZPP_BodyListener.immutable_options","zpp_nape/callbacks/Listener.hx",207,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		if ((tmp1)){
			HX_STACK_LINE(208)
			::zpp_nape::space::ZPP_Space tmp3 = this->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(208)
			::zpp_nape::space::ZPP_Space tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			tmp2 = tmp4->midstep;
		}
		else{
			HX_STACK_LINE(208)
			tmp2 = false;
		}
		HX_STACK_LINE(208)
		if ((tmp2)){
			HX_STACK_LINE(209)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot change listener type options during space.step()","\x17","\x01","\xc2","\xdc"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyListener_obj,immutable_options,(void))

Void ZPP_BodyListener_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_BodyListener","addedToSpace",0x2c79f45d,"zpp_nape.callbacks.ZPP_BodyListener.addedToSpace","zpp_nape/callbacks/Listener.hx",221,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		Dynamic tmp = this->cbtype_change_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		::zpp_nape::callbacks::ZPP_OptionType tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		tmp1->handler = tmp;
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(224)
			::zpp_nape::callbacks::ZPP_OptionType tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = tmp2->includes->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(225)
			while((true)){
				HX_STACK_LINE(225)
				bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(225)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				if ((tmp5)){
					HX_STACK_LINE(225)
					break;
				}
				HX_STACK_LINE(226)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp6 = cb->bodylisteners->head;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(228)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite1 = tmp6;		HX_STACK_VAR(cx_ite1,"cx_ite1");
							HX_STACK_LINE(228)
							while((true)){
								HX_STACK_LINE(228)
								bool tmp7 = (cx_ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(228)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(228)
								if ((tmp8)){
									HX_STACK_LINE(228)
									break;
								}
								HX_STACK_LINE(228)
								::zpp_nape::callbacks::ZPP_BodyListener j = cx_ite1->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(228)
								{
									HX_STACK_LINE(228)
									int tmp9 = this->precedence;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(228)
									int tmp10 = j->precedence;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(228)
									bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(228)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(228)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(228)
									if ((tmp12)){
										HX_STACK_LINE(228)
										int tmp14 = this->precedence;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(228)
										int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(228)
										int tmp16 = j->precedence;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(228)
										bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(228)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(228)
										bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(228)
										if ((tmp19)){
											HX_STACK_LINE(228)
											int tmp20 = this->id;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(228)
											int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(228)
											int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(228)
											int tmp23 = j->id;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(228)
											tmp13 = (tmp22 > tmp23);
										}
										else{
											HX_STACK_LINE(228)
											tmp13 = false;
										}
									}
									else{
										HX_STACK_LINE(228)
										tmp13 = true;
									}
									HX_STACK_LINE(228)
									if ((tmp13)){
										HX_STACK_LINE(228)
										break;
									}
									HX_STACK_LINE(228)
									pre = cx_ite1;
								}
								HX_STACK_LINE(228)
								cx_ite1 = cx_ite1->next;
							}
						}
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							::zpp_nape::util::ZNPList_ZPP_BodyListener _this = cb->bodylisteners;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(228)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(228)
								{
									HX_STACK_LINE(228)
									::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp7 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(228)
									bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(228)
									if ((tmp8)){
										HX_STACK_LINE(228)
										::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp9 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(228)
										ret = tmp9;
									}
									else{
										HX_STACK_LINE(228)
										::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp9 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(228)
										ret = tmp9;
										HX_STACK_LINE(228)
										::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
										HX_STACK_LINE(228)
										ret->next = null();
									}
									HX_STACK_LINE(228)
									Dynamic();
								}
								HX_STACK_LINE(228)
								ret->elt = hx::ObjectPtr<OBJ_>(this);
								HX_STACK_LINE(228)
								tmp6 = ret;
							}
							HX_STACK_LINE(228)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = tmp6;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(228)
							bool tmp7 = (pre == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(228)
							if ((tmp7)){
								HX_STACK_LINE(228)
								temp->next = _this->head;
								HX_STACK_LINE(228)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(228)
								temp->next = pre->next;
								HX_STACK_LINE(228)
								pre->next = temp;
							}
							HX_STACK_LINE(228)
							bool tmp8 = _this->modified = true;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(228)
							_this->pushmod = tmp8;
							HX_STACK_LINE(228)
							(_this->length)++;
							HX_STACK_LINE(228)
							temp;
						}
					}
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						::zpp_nape::util::ZNPNode_ZPP_CbSet tmp6 = cb->cbsets->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(228)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = tmp6;		HX_STACK_VAR(cx_ite1,"cx_ite1");
						HX_STACK_LINE(228)
						while((true)){
							HX_STACK_LINE(228)
							bool tmp7 = (cx_ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(228)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(228)
							if ((tmp8)){
								HX_STACK_LINE(228)
								break;
							}
							HX_STACK_LINE(228)
							::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite1->elt;		HX_STACK_VAR(cb1,"cb1");
							HX_STACK_LINE(228)
							cb1->zip_bodylisteners = true;
							HX_STACK_LINE(228)
							cx_ite1 = cx_ite1->next;
						}
					}
				}
				HX_STACK_LINE(230)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


Void ZPP_BodyListener_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_BodyListener","removedFromSpace",0xe996d42e,"zpp_nape.callbacks.ZPP_BodyListener.removedFromSpace","zpp_nape/callbacks/Listener.hx",234,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(236)
			::zpp_nape::callbacks::ZPP_OptionType tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(236)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = tmp->includes->head;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(237)
			while((true)){
				HX_STACK_LINE(237)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(237)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(237)
				if ((tmp3)){
					HX_STACK_LINE(237)
					break;
				}
				HX_STACK_LINE(238)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					cb->bodylisteners->remove(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						::zpp_nape::util::ZNPNode_ZPP_CbSet tmp4 = cb->cbsets->head;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(240)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = tmp4;		HX_STACK_VAR(cx_ite1,"cx_ite1");
						HX_STACK_LINE(240)
						while((true)){
							HX_STACK_LINE(240)
							bool tmp5 = (cx_ite1 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(240)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(240)
							if ((tmp6)){
								HX_STACK_LINE(240)
								break;
							}
							HX_STACK_LINE(240)
							::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite1->elt;		HX_STACK_VAR(cb1,"cb1");
							HX_STACK_LINE(240)
							cb1->zip_bodylisteners = true;
							HX_STACK_LINE(240)
							cx_ite1 = cx_ite1->next;
						}
					}
				}
				HX_STACK_LINE(242)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(245)
		::zpp_nape::callbacks::ZPP_OptionType tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		tmp->handler = null();
	}
return null();
}


Void ZPP_BodyListener_obj::cbtype_change( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_BodyListener","cbtype_change",0xbad29f24,"zpp_nape.callbacks.ZPP_BodyListener.cbtype_change","zpp_nape/callbacks/Listener.hx",247,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(248)
		this->removedFromSpace();
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::zpp_nape::callbacks::ZPP_OptionType tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(249)
			::zpp_nape::callbacks::ZPP_OptionType _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(249)
			bool tmp1 = included;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			if ((tmp1)){
				HX_STACK_LINE(249)
				bool tmp2 = added;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(249)
				if ((tmp2)){
					HX_STACK_LINE(249)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = _this->includes->head;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(249)
						while((true)){
							HX_STACK_LINE(249)
							bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(249)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(249)
							if ((tmp5)){
								HX_STACK_LINE(249)
								break;
							}
							HX_STACK_LINE(249)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(249)
							{
								HX_STACK_LINE(249)
								bool tmp6 = (cb->id < j->id);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(249)
								if ((tmp6)){
									HX_STACK_LINE(249)
									break;
								}
								HX_STACK_LINE(249)
								pre = cx_ite;
							}
							HX_STACK_LINE(249)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPList_ZPP_CbType _this1 = _this->includes;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(249)
						{
							HX_STACK_LINE(249)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(249)
							{
								HX_STACK_LINE(249)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(249)
								bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(249)
								if ((tmp5)){
									HX_STACK_LINE(249)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(249)
									ret = tmp6;
								}
								else{
									HX_STACK_LINE(249)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(249)
									ret = tmp6;
									HX_STACK_LINE(249)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(249)
									ret->next = null();
								}
								HX_STACK_LINE(249)
								Dynamic();
							}
							HX_STACK_LINE(249)
							ret->elt = cb;
							HX_STACK_LINE(249)
							tmp3 = ret;
						}
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp3;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(249)
						bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(249)
						if ((tmp4)){
							HX_STACK_LINE(249)
							temp->next = _this1->head;
							HX_STACK_LINE(249)
							_this1->head = temp;
						}
						else{
							HX_STACK_LINE(249)
							temp->next = pre->next;
							HX_STACK_LINE(249)
							pre->next = temp;
						}
						HX_STACK_LINE(249)
						bool tmp5 = _this1->modified = true;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(249)
						_this1->pushmod = tmp5;
						HX_STACK_LINE(249)
						(_this1->length)++;
						HX_STACK_LINE(249)
						temp;
					}
				}
				else{
					HX_STACK_LINE(249)
					::zpp_nape::callbacks::ZPP_CbType tmp3 = cb;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(249)
					_this->includes->remove(tmp3);
				}
			}
			else{
				HX_STACK_LINE(249)
				bool tmp2 = added;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(249)
				if ((tmp2)){
					HX_STACK_LINE(249)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = _this->excludes->head;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(249)
						while((true)){
							HX_STACK_LINE(249)
							bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(249)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(249)
							if ((tmp5)){
								HX_STACK_LINE(249)
								break;
							}
							HX_STACK_LINE(249)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(249)
							{
								HX_STACK_LINE(249)
								bool tmp6 = (cb->id < j->id);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(249)
								if ((tmp6)){
									HX_STACK_LINE(249)
									break;
								}
								HX_STACK_LINE(249)
								pre = cx_ite;
							}
							HX_STACK_LINE(249)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPList_ZPP_CbType _this1 = _this->excludes;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(249)
						{
							HX_STACK_LINE(249)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(249)
							{
								HX_STACK_LINE(249)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(249)
								bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(249)
								if ((tmp5)){
									HX_STACK_LINE(249)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(249)
									ret = tmp6;
								}
								else{
									HX_STACK_LINE(249)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(249)
									ret = tmp6;
									HX_STACK_LINE(249)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(249)
									ret->next = null();
								}
								HX_STACK_LINE(249)
								Dynamic();
							}
							HX_STACK_LINE(249)
							ret->elt = cb;
							HX_STACK_LINE(249)
							tmp3 = ret;
						}
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp3;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(249)
						bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(249)
						if ((tmp4)){
							HX_STACK_LINE(249)
							temp->next = _this1->head;
							HX_STACK_LINE(249)
							_this1->head = temp;
						}
						else{
							HX_STACK_LINE(249)
							temp->next = pre->next;
							HX_STACK_LINE(249)
							pre->next = temp;
						}
						HX_STACK_LINE(249)
						bool tmp5 = _this1->modified = true;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(249)
						_this1->pushmod = tmp5;
						HX_STACK_LINE(249)
						(_this1->length)++;
						HX_STACK_LINE(249)
						temp;
					}
				}
				else{
					HX_STACK_LINE(249)
					::zpp_nape::callbacks::ZPP_CbType tmp3 = cb;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(249)
					_this->excludes->remove(tmp3);
				}
			}
		}
		HX_STACK_LINE(250)
		this->addedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_BodyListener_obj,cbtype_change,(void))

Void ZPP_BodyListener_obj::invalidate_precedence( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_BodyListener","invalidate_precedence",0x49b8b75c,"zpp_nape.callbacks.ZPP_BodyListener.invalidate_precedence","zpp_nape/callbacks/Listener.hx",252,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		if ((tmp1)){
			HX_STACK_LINE(254)
			this->removedFromSpace();
			HX_STACK_LINE(255)
			this->addedToSpace();
		}
	}
return null();
}


Void ZPP_BodyListener_obj::swapEvent( int newev){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_BodyListener","swapEvent",0xf1e49d55,"zpp_nape.callbacks.ZPP_BodyListener.swapEvent","zpp_nape/callbacks/Listener.hx",258,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newev,"newev")
		HX_STACK_LINE(260)
		int tmp = newev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(260)
		if ((tmp2)){
			HX_STACK_LINE(260)
			int tmp4 = newev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_SLEEP;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(260)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(260)
			tmp3 = (tmp4 != tmp6);
		}
		else{
			HX_STACK_LINE(260)
			tmp3 = false;
		}
		HX_STACK_LINE(260)
		if ((tmp3)){
			HX_STACK_LINE(261)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: BodyListener event must be either WAKE or SLEEP only","\xe9","\x56","\xbc","\x02"));
		}
		HX_STACK_LINE(264)
		this->removedFromSpace();
		HX_STACK_LINE(265)
		this->event = newev;
		HX_STACK_LINE(266)
		this->addedToSpace();
	}
return null();
}



ZPP_BodyListener_obj::ZPP_BodyListener_obj()
{
}

void ZPP_BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_BodyListener);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(handler,"handler");
	::zpp_nape::callbacks::ZPP_Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	::zpp_nape::callbacks::ZPP_Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_BodyListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cbtype_change") ) { return cbtype_change_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_options") ) { return immutable_options_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_BodyListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::callbacks::BodyListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_BodyListener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_BodyListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::BodyListener*/ ,(int)offsetof(ZPP_BodyListener_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_OptionType*/ ,(int)offsetof(ZPP_BodyListener_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_BodyListener_obj,handler),HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"),
	HX_HCSTRING("immutable_options","\x21","\xc7","\x22","\x3a"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	HX_HCSTRING("cbtype_change","\x56","\x5b","\x22","\x6d"),
	HX_HCSTRING("invalidate_precedence","\x8e","\xf5","\x4a","\xdf"),
	HX_HCSTRING("swapEvent","\x87","\xd8","\x71","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_BodyListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_BodyListener_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_BodyListener_obj::__mClass;

void ZPP_BodyListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_BodyListener","\xbc","\xb7","\x4f","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_BodyListener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_BodyListener_obj >;
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
} // end namespace callbacks
