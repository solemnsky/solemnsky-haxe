#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_InteractionListener_obj::__construct(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type)
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","new",0xf921f592,"zpp_nape.callbacks.ZPP_InteractionListener.new","zpp_nape/callbacks/Listener.hx",338,0x87b155a7)
HX_STACK_THIS(this)
HX_STACK_ARG(options1,"options1")
HX_STACK_ARG(options2,"options2")
HX_STACK_ARG(event,"event")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(347)
	this->handlerp = null();
	HX_STACK_LINE(346)
	this->pure = false;
	HX_STACK_LINE(345)
	this->allowSleepingCallbacks = false;
	HX_STACK_LINE(344)
	this->handleri = null();
	HX_STACK_LINE(343)
	this->options2 = null();
	HX_STACK_LINE(342)
	this->options1 = null();
	HX_STACK_LINE(341)
	this->itype = (int)0;
	HX_STACK_LINE(340)
	this->outer_znp = null();
	HX_STACK_LINE(339)
	this->outer_zni = null();
	HX_STACK_LINE(354)
	super::__construct();
	HX_STACK_LINE(355)
	this->type = type;
	HX_STACK_LINE(356)
	this->interaction = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(357)
	this->event = event;
	HX_STACK_LINE(358)
	this->options1 = options1->zpp_inner;
	HX_STACK_LINE(359)
	this->options2 = options2->zpp_inner;
	HX_STACK_LINE(360)
	this->allowSleepingCallbacks = false;
}
;
	return null();
}

//ZPP_InteractionListener_obj::~ZPP_InteractionListener_obj() { }

Dynamic ZPP_InteractionListener_obj::__CreateEmpty() { return  new ZPP_InteractionListener_obj; }
hx::ObjectPtr< ZPP_InteractionListener_obj > ZPP_InteractionListener_obj::__new(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type)
{  hx::ObjectPtr< ZPP_InteractionListener_obj > _result_ = new ZPP_InteractionListener_obj();
	_result_->__construct(options1,options2,event,type);
	return _result_;}

Dynamic ZPP_InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_InteractionListener_obj > _result_ = new ZPP_InteractionListener_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void ZPP_InteractionListener_obj::setInteractionType( int itype){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","setInteractionType",0x9488fd38,"zpp_nape.callbacks.ZPP_InteractionListener.setInteractionType","zpp_nape/callbacks/Listener.hx",351,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(itype,"itype")
		HX_STACK_LINE(351)
		this->itype = itype;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,setInteractionType,(void))

Void ZPP_InteractionListener_obj::wake( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","wake",0x0a84c2b2,"zpp_nape.callbacks.ZPP_InteractionListener.wake","zpp_nape/callbacks/Listener.hx",371,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(371)
		::zpp_nape::callbacks::ZPP_OptionType tmp = this->options1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = tmp->includes->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = tmp1;		HX_STACK_VAR(ite1,"ite1");
		HX_STACK_LINE(371)
		::zpp_nape::callbacks::ZPP_OptionType tmp2 = this->options2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(371)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = tmp2->includes->head;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(371)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = tmp3;		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			bool tmp4 = (ite1 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			if ((tmp4)){
				HX_STACK_LINE(371)
				tmp5 = (ite2 != null());
			}
			else{
				HX_STACK_LINE(371)
				tmp5 = false;
			}
			HX_STACK_LINE(371)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(371)
			if ((tmp6)){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
			HX_STACK_LINE(371)
			bool tmp7 = (cb1 == cb2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(371)
			if ((tmp7)){
				HX_STACK_LINE(371)
				::zpp_nape::callbacks::ZPP_CbType tmp8 = cb1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(373)
					::zpp_nape::util::ZNPNode_ZPP_Interactor tmp9 = tmp8->interactors->head;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(373)
					::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(374)
					while((true)){
						HX_STACK_LINE(374)
						bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(374)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(374)
						if ((tmp11)){
							HX_STACK_LINE(374)
							break;
						}
						HX_STACK_LINE(375)
						::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(377)
						i->wake();
						HX_STACK_LINE(379)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(371)
				ite1 = ite1->next;
				HX_STACK_LINE(371)
				ite2 = ite2->next;
			}
			else{
				HX_STACK_LINE(371)
				bool tmp8 = (cb1->id < cb2->id);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(371)
				if ((tmp8)){
					HX_STACK_LINE(371)
					::zpp_nape::callbacks::ZPP_CbType tmp9 = cb1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(373)
						::zpp_nape::util::ZNPNode_ZPP_Interactor tmp10 = tmp9->interactors->head;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(373)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(374)
						while((true)){
							HX_STACK_LINE(374)
							bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(374)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(374)
							if ((tmp12)){
								HX_STACK_LINE(374)
								break;
							}
							HX_STACK_LINE(375)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(377)
							i->wake();
							HX_STACK_LINE(379)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(371)
					ite1 = ite1->next;
				}
				else{
					HX_STACK_LINE(371)
					::zpp_nape::callbacks::ZPP_CbType tmp9 = cb2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(373)
						::zpp_nape::util::ZNPNode_ZPP_Interactor tmp10 = tmp9->interactors->head;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(373)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(374)
						while((true)){
							HX_STACK_LINE(374)
							bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(374)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(374)
							if ((tmp12)){
								HX_STACK_LINE(374)
								break;
							}
							HX_STACK_LINE(375)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(377)
							i->wake();
							HX_STACK_LINE(379)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(371)
					ite2 = ite2->next;
				}
			}
		}
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			bool tmp4 = (ite1 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			if ((tmp5)){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = ite1->elt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(373)
				::zpp_nape::util::ZNPNode_ZPP_Interactor tmp7 = tmp6->interactors->head;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(374)
				while((true)){
					HX_STACK_LINE(374)
					bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(374)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(374)
					if ((tmp9)){
						HX_STACK_LINE(374)
						break;
					}
					HX_STACK_LINE(375)
					::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(377)
					i->wake();
					HX_STACK_LINE(379)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(371)
			ite1 = ite1->next;
		}
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			bool tmp4 = (ite2 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			if ((tmp5)){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = ite2->elt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(373)
				::zpp_nape::util::ZNPNode_ZPP_Interactor tmp7 = tmp6->interactors->head;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(374)
				while((true)){
					HX_STACK_LINE(374)
					bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(374)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(374)
					if ((tmp9)){
						HX_STACK_LINE(374)
						break;
					}
					HX_STACK_LINE(375)
					::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(377)
					i->wake();
					HX_STACK_LINE(379)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(371)
			ite2 = ite2->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionListener_obj,wake,(void))

Void ZPP_InteractionListener_obj::CbSetset( ::zpp_nape::util::ZNPList_ZPP_CbSet A,::zpp_nape::util::ZNPList_ZPP_CbSet B,Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","CbSetset",0x162afeed,"zpp_nape.callbacks.ZPP_InteractionListener.CbSetset","zpp_nape/callbacks/Listener.hx",390,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(A,"A")
		HX_STACK_ARG(B,"B")
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(391)
		::zpp_nape::util::ZNPList_ZPP_CbSet tmp = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		::zpp_nape::util::ZNPList_ZPP_CbSet U = tmp;		HX_STACK_VAR(U,"U");
		HX_STACK_LINE(392)
		::zpp_nape::util::ZNPList_ZPP_CbSet tmp1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		::zpp_nape::util::ZNPList_ZPP_CbSet V = tmp1;		HX_STACK_VAR(V,"V");
		HX_STACK_LINE(393)
		::zpp_nape::util::ZNPList_ZPP_CbSet tmp2 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		::zpp_nape::util::ZNPList_ZPP_CbSet W = tmp2;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(394)
		::zpp_nape::util::ZNPNode_ZPP_CbSet aite = A->head;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(395)
		::zpp_nape::util::ZNPNode_ZPP_CbSet bite = B->head;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(396)
		while((true)){
			HX_STACK_LINE(396)
			bool tmp3 = (aite != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(396)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(396)
			if ((tmp3)){
				HX_STACK_LINE(396)
				tmp4 = (bite != null());
			}
			else{
				HX_STACK_LINE(396)
				tmp4 = false;
			}
			HX_STACK_LINE(396)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(396)
			if ((tmp5)){
				HX_STACK_LINE(396)
				break;
			}
			HX_STACK_LINE(397)
			::zpp_nape::callbacks::ZPP_CbSet a = aite->elt;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(398)
			::zpp_nape::callbacks::ZPP_CbSet b = bite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(399)
			bool tmp6 = (a == b);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			if ((tmp6)){
				HX_STACK_LINE(400)
				{
					HX_STACK_LINE(400)
					::zpp_nape::util::ZNPNode_ZPP_CbSet tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(400)
					{
						HX_STACK_LINE(400)
						::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(400)
						{
							HX_STACK_LINE(400)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(400)
							bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(400)
							if ((tmp9)){
								HX_STACK_LINE(400)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(400)
								ret = tmp10;
							}
							else{
								HX_STACK_LINE(400)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(400)
								ret = tmp10;
								HX_STACK_LINE(400)
								::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
								HX_STACK_LINE(400)
								ret->next = null();
							}
							HX_STACK_LINE(400)
							Dynamic();
						}
						HX_STACK_LINE(400)
						ret->elt = a;
						HX_STACK_LINE(400)
						tmp7 = ret;
					}
					HX_STACK_LINE(400)
					::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp7;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(400)
					temp->next = W->head;
					HX_STACK_LINE(400)
					W->head = temp;
					HX_STACK_LINE(400)
					W->modified = true;
					HX_STACK_LINE(400)
					(W->length)++;
					HX_STACK_LINE(400)
					a;
				}
				HX_STACK_LINE(401)
				aite = aite->next;
				HX_STACK_LINE(402)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(404)
				::zpp_nape::callbacks::ZPP_CbSet tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(404)
				::zpp_nape::callbacks::ZPP_CbSet tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(404)
				bool tmp9 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(404)
				if ((tmp9)){
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						::zpp_nape::util::ZNPNode_ZPP_CbSet tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(405)
							{
								HX_STACK_LINE(405)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp11 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(405)
								bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(405)
								if ((tmp12)){
									HX_STACK_LINE(405)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(405)
									ret = tmp13;
								}
								else{
									HX_STACK_LINE(405)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(405)
									ret = tmp13;
									HX_STACK_LINE(405)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(405)
									ret->next = null();
								}
								HX_STACK_LINE(405)
								Dynamic();
							}
							HX_STACK_LINE(405)
							ret->elt = a;
							HX_STACK_LINE(405)
							tmp10 = ret;
						}
						HX_STACK_LINE(405)
						::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp10;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(405)
						temp->next = U->head;
						HX_STACK_LINE(405)
						U->head = temp;
						HX_STACK_LINE(405)
						U->modified = true;
						HX_STACK_LINE(405)
						(U->length)++;
						HX_STACK_LINE(405)
						a;
					}
					HX_STACK_LINE(406)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::util::ZNPNode_ZPP_CbSet tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(409)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp11 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(409)
								bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(409)
								if ((tmp12)){
									HX_STACK_LINE(409)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(409)
									ret = tmp13;
								}
								else{
									HX_STACK_LINE(409)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(409)
									ret = tmp13;
									HX_STACK_LINE(409)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(409)
									ret->next = null();
								}
								HX_STACK_LINE(409)
								Dynamic();
							}
							HX_STACK_LINE(409)
							ret->elt = b;
							HX_STACK_LINE(409)
							tmp10 = ret;
						}
						HX_STACK_LINE(409)
						::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp10;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(409)
						temp->next = V->head;
						HX_STACK_LINE(409)
						V->head = temp;
						HX_STACK_LINE(409)
						V->modified = true;
						HX_STACK_LINE(409)
						(V->length)++;
						HX_STACK_LINE(409)
						b;
					}
					HX_STACK_LINE(410)
					bite = bite->next;
				}
			}
		}
		HX_STACK_LINE(413)
		while((true)){
			HX_STACK_LINE(413)
			bool tmp3 = (aite != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(413)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(413)
			if ((tmp4)){
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				::zpp_nape::callbacks::ZPP_CbSet o = aite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(414)
				::zpp_nape::util::ZNPNode_ZPP_CbSet tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(414)
				{
					HX_STACK_LINE(414)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(414)
					{
						HX_STACK_LINE(414)
						::zpp_nape::util::ZNPNode_ZPP_CbSet tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(414)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(414)
						if ((tmp7)){
							HX_STACK_LINE(414)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(414)
							ret = tmp8;
						}
						else{
							HX_STACK_LINE(414)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(414)
							ret = tmp8;
							HX_STACK_LINE(414)
							::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
							HX_STACK_LINE(414)
							ret->next = null();
						}
						HX_STACK_LINE(414)
						Dynamic();
					}
					HX_STACK_LINE(414)
					ret->elt = o;
					HX_STACK_LINE(414)
					tmp5 = ret;
				}
				HX_STACK_LINE(414)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp5;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(414)
				temp->next = U->head;
				HX_STACK_LINE(414)
				U->head = temp;
				HX_STACK_LINE(414)
				U->modified = true;
				HX_STACK_LINE(414)
				(U->length)++;
				HX_STACK_LINE(414)
				o;
			}
			HX_STACK_LINE(415)
			aite = aite->next;
		}
		HX_STACK_LINE(417)
		while((true)){
			HX_STACK_LINE(417)
			bool tmp3 = (bite != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			if ((tmp4)){
				HX_STACK_LINE(417)
				break;
			}
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				::zpp_nape::callbacks::ZPP_CbSet o = bite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(418)
				::zpp_nape::util::ZNPNode_ZPP_CbSet tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						::zpp_nape::util::ZNPNode_ZPP_CbSet tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(418)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(418)
						if ((tmp7)){
							HX_STACK_LINE(418)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(418)
							ret = tmp8;
						}
						else{
							HX_STACK_LINE(418)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(418)
							ret = tmp8;
							HX_STACK_LINE(418)
							::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
							HX_STACK_LINE(418)
							ret->next = null();
						}
						HX_STACK_LINE(418)
						Dynamic();
					}
					HX_STACK_LINE(418)
					ret->elt = o;
					HX_STACK_LINE(418)
					tmp5 = ret;
				}
				HX_STACK_LINE(418)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp5;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(418)
				temp->next = V->head;
				HX_STACK_LINE(418)
				V->head = temp;
				HX_STACK_LINE(418)
				V->modified = true;
				HX_STACK_LINE(418)
				(V->length)++;
				HX_STACK_LINE(418)
				o;
			}
			HX_STACK_LINE(419)
			bite = bite->next;
		}
		HX_STACK_LINE(422)
		while((true)){
			HX_STACK_LINE(422)
			bool tmp3 = (U->head == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(422)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			if ((tmp5)){
				HX_STACK_LINE(422)
				break;
			}
			HX_STACK_LINE(423)
			::zpp_nape::callbacks::ZPP_CbSet tmp6 = U->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(423)
			::zpp_nape::callbacks::ZPP_CbSet x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(425)
				::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(426)
				while((true)){
					HX_STACK_LINE(426)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(426)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(426)
					if ((tmp8)){
						HX_STACK_LINE(426)
						break;
					}
					HX_STACK_LINE(427)
					::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(428)
					::zpp_nape::callbacks::ZPP_CbSet tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(428)
					::zpp_nape::callbacks::ZPP_CbSet tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(428)
					lambda(tmp9,tmp10).Cast< Void >();
					HX_STACK_LINE(429)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(435)
		while((true)){
			HX_STACK_LINE(435)
			bool tmp3 = (V->head == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(435)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(435)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(435)
			if ((tmp5)){
				HX_STACK_LINE(435)
				break;
			}
			HX_STACK_LINE(436)
			::zpp_nape::callbacks::ZPP_CbSet tmp6 = V->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(436)
			::zpp_nape::callbacks::ZPP_CbSet x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(438)
				::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(439)
				while((true)){
					HX_STACK_LINE(439)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(439)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(439)
					if ((tmp8)){
						HX_STACK_LINE(439)
						break;
					}
					HX_STACK_LINE(440)
					::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(441)
					::zpp_nape::callbacks::ZPP_CbSet tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(441)
					::zpp_nape::callbacks::ZPP_CbSet tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(441)
					lambda(tmp9,tmp10).Cast< Void >();
					HX_STACK_LINE(442)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(448)
		while((true)){
			HX_STACK_LINE(448)
			bool tmp3 = (W->head == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(448)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(448)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(448)
			if ((tmp5)){
				HX_STACK_LINE(448)
				break;
			}
			HX_STACK_LINE(449)
			::zpp_nape::callbacks::ZPP_CbSet tmp6 = W->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(449)
			::zpp_nape::callbacks::ZPP_CbSet x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(451)
				::zpp_nape::callbacks::ZPP_CbSet tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(451)
				::zpp_nape::callbacks::ZPP_CbSet tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(451)
				lambda(tmp7,tmp8).Cast< Void >();
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(453)
					::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(454)
					while((true)){
						HX_STACK_LINE(454)
						bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(454)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(454)
						if ((tmp10)){
							HX_STACK_LINE(454)
							break;
						}
						HX_STACK_LINE(455)
						::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(456)
						::zpp_nape::callbacks::ZPP_CbSet tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(456)
						::zpp_nape::callbacks::ZPP_CbSet tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(456)
						lambda(tmp11,tmp12).Cast< Void >();
						HX_STACK_LINE(457)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,CbSetset,(void))

Void ZPP_InteractionListener_obj::CbTypeset( ::zpp_nape::util::ZNPList_ZPP_CbType A,::zpp_nape::util::ZNPList_ZPP_CbType B,Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","CbTypeset",0x215c02db,"zpp_nape.callbacks.ZPP_InteractionListener.CbTypeset","zpp_nape/callbacks/Listener.hx",469,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(A,"A")
		HX_STACK_ARG(B,"B")
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(470)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		::zpp_nape::util::ZNPList_ZPP_CbType U = tmp;		HX_STACK_VAR(U,"U");
		HX_STACK_LINE(471)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		::zpp_nape::util::ZNPList_ZPP_CbType V = tmp1;		HX_STACK_VAR(V,"V");
		HX_STACK_LINE(472)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		::zpp_nape::util::ZNPList_ZPP_CbType W = tmp2;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(473)
		::zpp_nape::util::ZNPNode_ZPP_CbType aite = A->head;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(474)
		::zpp_nape::util::ZNPNode_ZPP_CbType bite = B->head;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(475)
		while((true)){
			HX_STACK_LINE(475)
			bool tmp3 = (aite != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(475)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(475)
			if ((tmp3)){
				HX_STACK_LINE(475)
				tmp4 = (bite != null());
			}
			else{
				HX_STACK_LINE(475)
				tmp4 = false;
			}
			HX_STACK_LINE(475)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(475)
			if ((tmp5)){
				HX_STACK_LINE(475)
				break;
			}
			HX_STACK_LINE(476)
			::zpp_nape::callbacks::ZPP_CbType a = aite->elt;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(477)
			::zpp_nape::callbacks::ZPP_CbType b = bite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(478)
			bool tmp6 = (a == b);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(478)
			if ((tmp6)){
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(479)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(479)
					{
						HX_STACK_LINE(479)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(479)
						{
							HX_STACK_LINE(479)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(479)
							bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(479)
							if ((tmp9)){
								HX_STACK_LINE(479)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(479)
								ret = tmp10;
							}
							else{
								HX_STACK_LINE(479)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(479)
								ret = tmp10;
								HX_STACK_LINE(479)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(479)
								ret->next = null();
							}
							HX_STACK_LINE(479)
							Dynamic();
						}
						HX_STACK_LINE(479)
						ret->elt = a;
						HX_STACK_LINE(479)
						tmp7 = ret;
					}
					HX_STACK_LINE(479)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp7;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(479)
					temp->next = W->head;
					HX_STACK_LINE(479)
					W->head = temp;
					HX_STACK_LINE(479)
					W->modified = true;
					HX_STACK_LINE(479)
					(W->length)++;
					HX_STACK_LINE(479)
					a;
				}
				HX_STACK_LINE(480)
				aite = aite->next;
				HX_STACK_LINE(481)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(483)
				bool tmp7 = (a->id < b->id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(483)
				if ((tmp7)){
					HX_STACK_LINE(484)
					{
						HX_STACK_LINE(484)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(484)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(484)
							{
								HX_STACK_LINE(484)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp9 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(484)
								bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(484)
								if ((tmp10)){
									HX_STACK_LINE(484)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp11 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(484)
									ret = tmp11;
								}
								else{
									HX_STACK_LINE(484)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp11 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(484)
									ret = tmp11;
									HX_STACK_LINE(484)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(484)
									ret->next = null();
								}
								HX_STACK_LINE(484)
								Dynamic();
							}
							HX_STACK_LINE(484)
							ret->elt = a;
							HX_STACK_LINE(484)
							tmp8 = ret;
						}
						HX_STACK_LINE(484)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp8;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(484)
						temp->next = U->head;
						HX_STACK_LINE(484)
						U->head = temp;
						HX_STACK_LINE(484)
						U->modified = true;
						HX_STACK_LINE(484)
						(U->length)++;
						HX_STACK_LINE(484)
						a;
					}
					HX_STACK_LINE(485)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(488)
					{
						HX_STACK_LINE(488)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(488)
						{
							HX_STACK_LINE(488)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(488)
							{
								HX_STACK_LINE(488)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp9 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(488)
								bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(488)
								if ((tmp10)){
									HX_STACK_LINE(488)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp11 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(488)
									ret = tmp11;
								}
								else{
									HX_STACK_LINE(488)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp11 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(488)
									ret = tmp11;
									HX_STACK_LINE(488)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(488)
									ret->next = null();
								}
								HX_STACK_LINE(488)
								Dynamic();
							}
							HX_STACK_LINE(488)
							ret->elt = b;
							HX_STACK_LINE(488)
							tmp8 = ret;
						}
						HX_STACK_LINE(488)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp8;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(488)
						temp->next = V->head;
						HX_STACK_LINE(488)
						V->head = temp;
						HX_STACK_LINE(488)
						V->modified = true;
						HX_STACK_LINE(488)
						(V->length)++;
						HX_STACK_LINE(488)
						b;
					}
					HX_STACK_LINE(489)
					bite = bite->next;
				}
			}
		}
		HX_STACK_LINE(492)
		while((true)){
			HX_STACK_LINE(492)
			bool tmp3 = (aite != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(492)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(492)
			if ((tmp4)){
				HX_STACK_LINE(492)
				break;
			}
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				::zpp_nape::callbacks::ZPP_CbType o = aite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(493)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(493)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(493)
						if ((tmp7)){
							HX_STACK_LINE(493)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(493)
							ret = tmp8;
						}
						else{
							HX_STACK_LINE(493)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(493)
							ret = tmp8;
							HX_STACK_LINE(493)
							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
							HX_STACK_LINE(493)
							ret->next = null();
						}
						HX_STACK_LINE(493)
						Dynamic();
					}
					HX_STACK_LINE(493)
					ret->elt = o;
					HX_STACK_LINE(493)
					tmp5 = ret;
				}
				HX_STACK_LINE(493)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp5;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(493)
				temp->next = U->head;
				HX_STACK_LINE(493)
				U->head = temp;
				HX_STACK_LINE(493)
				U->modified = true;
				HX_STACK_LINE(493)
				(U->length)++;
				HX_STACK_LINE(493)
				o;
			}
			HX_STACK_LINE(494)
			aite = aite->next;
		}
		HX_STACK_LINE(496)
		while((true)){
			HX_STACK_LINE(496)
			bool tmp3 = (bite != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(496)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(496)
			if ((tmp4)){
				HX_STACK_LINE(496)
				break;
			}
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				::zpp_nape::callbacks::ZPP_CbType o = bite->elt;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(497)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(497)
				{
					HX_STACK_LINE(497)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(497)
					{
						HX_STACK_LINE(497)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(497)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(497)
						if ((tmp7)){
							HX_STACK_LINE(497)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(497)
							ret = tmp8;
						}
						else{
							HX_STACK_LINE(497)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(497)
							ret = tmp8;
							HX_STACK_LINE(497)
							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
							HX_STACK_LINE(497)
							ret->next = null();
						}
						HX_STACK_LINE(497)
						Dynamic();
					}
					HX_STACK_LINE(497)
					ret->elt = o;
					HX_STACK_LINE(497)
					tmp5 = ret;
				}
				HX_STACK_LINE(497)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp5;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(497)
				temp->next = V->head;
				HX_STACK_LINE(497)
				V->head = temp;
				HX_STACK_LINE(497)
				V->modified = true;
				HX_STACK_LINE(497)
				(V->length)++;
				HX_STACK_LINE(497)
				o;
			}
			HX_STACK_LINE(498)
			bite = bite->next;
		}
		HX_STACK_LINE(501)
		while((true)){
			HX_STACK_LINE(501)
			bool tmp3 = (U->head == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(501)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(501)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(501)
			if ((tmp5)){
				HX_STACK_LINE(501)
				break;
			}
			HX_STACK_LINE(502)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = U->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(502)
			::zpp_nape::callbacks::ZPP_CbType x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(504)
				::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(505)
				while((true)){
					HX_STACK_LINE(505)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(505)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(505)
					if ((tmp8)){
						HX_STACK_LINE(505)
						break;
					}
					HX_STACK_LINE(506)
					::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(507)
					::zpp_nape::callbacks::ZPP_CbType tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(507)
					::zpp_nape::callbacks::ZPP_CbType tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(507)
					lambda(tmp9,tmp10).Cast< Void >();
					HX_STACK_LINE(508)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			bool tmp3 = (V->head == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(514)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(514)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(514)
			if ((tmp5)){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(515)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = V->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(515)
			::zpp_nape::callbacks::ZPP_CbType x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(517)
				::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(518)
				while((true)){
					HX_STACK_LINE(518)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(518)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(518)
					if ((tmp8)){
						HX_STACK_LINE(518)
						break;
					}
					HX_STACK_LINE(519)
					::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(520)
					::zpp_nape::callbacks::ZPP_CbType tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(520)
					::zpp_nape::callbacks::ZPP_CbType tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(520)
					lambda(tmp9,tmp10).Cast< Void >();
					HX_STACK_LINE(521)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(527)
		while((true)){
			HX_STACK_LINE(527)
			bool tmp3 = (W->head == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(527)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(527)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(527)
			if ((tmp5)){
				HX_STACK_LINE(527)
				break;
			}
			HX_STACK_LINE(528)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = W->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(528)
			::zpp_nape::callbacks::ZPP_CbType x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(529)
			{
				HX_STACK_LINE(530)
				::zpp_nape::callbacks::ZPP_CbType tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(530)
				::zpp_nape::callbacks::ZPP_CbType tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(530)
				lambda(tmp7,tmp8).Cast< Void >();
				HX_STACK_LINE(531)
				{
					HX_STACK_LINE(532)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(533)
					while((true)){
						HX_STACK_LINE(533)
						bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(533)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(533)
						if ((tmp10)){
							HX_STACK_LINE(533)
							break;
						}
						HX_STACK_LINE(534)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(535)
						::zpp_nape::callbacks::ZPP_CbType tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(535)
						::zpp_nape::callbacks::ZPP_CbType tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(535)
						lambda(tmp11,tmp12).Cast< Void >();
						HX_STACK_LINE(536)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,CbTypeset,(void))

Void ZPP_InteractionListener_obj::with_uniquesets( bool fresh){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","with_uniquesets",0x3718532d,"zpp_nape.callbacks.ZPP_InteractionListener.with_uniquesets","zpp_nape/callbacks/Listener.hx",543,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fresh,"fresh")
		HX_STACK_LINE(543)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(544)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(546)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(546)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(546)
			if ((tmp1)){
				HX_STACK_LINE(547)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(547)
				set = tmp2;
			}
			else{
				HX_STACK_LINE(553)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(553)
				set = tmp2;
				HX_STACK_LINE(554)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = set->next;
				HX_STACK_LINE(555)
				set->next = null();
			}
			HX_STACK_LINE(560)
			Dynamic();
		}
		HX_STACK_LINE(562)
		Dynamic tmp = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::setlt_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(562)
		set->lt = tmp;
		HX_STACK_LINE(563)
		{
			HX_STACK_LINE(563)
			::zpp_nape::callbacks::ZPP_OptionType tmp1 = this->options2;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType B = tmp1->includes;		HX_STACK_VAR(B,"B");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbType;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType U = tmp2;		HX_STACK_VAR(U,"U");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType V = tmp3;		HX_STACK_VAR(V,"V");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPList_ZPP_CbType W = tmp4;		HX_STACK_VAR(W,"W");
			HX_STACK_LINE(563)
			::zpp_nape::callbacks::ZPP_OptionType tmp5 = this->options1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = tmp5->includes->head;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPNode_ZPP_CbType aite = tmp6;		HX_STACK_VAR(aite,"aite");
			HX_STACK_LINE(563)
			::zpp_nape::util::ZNPNode_ZPP_CbType bite = B->head;		HX_STACK_VAR(bite,"bite");
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp7 = (aite != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(563)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				if ((tmp7)){
					HX_STACK_LINE(563)
					tmp8 = (bite != null());
				}
				else{
					HX_STACK_LINE(563)
					tmp8 = false;
				}
				HX_STACK_LINE(563)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(563)
				if ((tmp9)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType a = aite->elt;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType b = bite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(563)
				bool tmp10 = (a == b);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(563)
				if ((tmp10)){
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp12 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(563)
								bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(563)
								if ((tmp13)){
									HX_STACK_LINE(563)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp14 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(563)
									ret = tmp14;
								}
								else{
									HX_STACK_LINE(563)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp14 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(563)
									ret = tmp14;
									HX_STACK_LINE(563)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(563)
									ret->next = null();
								}
								HX_STACK_LINE(563)
								Dynamic();
							}
							HX_STACK_LINE(563)
							ret->elt = a;
							HX_STACK_LINE(563)
							tmp11 = ret;
						}
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp11;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(563)
						temp->next = W->head;
						HX_STACK_LINE(563)
						W->head = temp;
						HX_STACK_LINE(563)
						W->modified = true;
						HX_STACK_LINE(563)
						(W->length)++;
						HX_STACK_LINE(563)
						a;
					}
					HX_STACK_LINE(563)
					aite = aite->next;
					HX_STACK_LINE(563)
					bite = bite->next;
				}
				else{
					HX_STACK_LINE(563)
					bool tmp11 = (a->id < b->id);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(563)
					if ((tmp11)){
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(563)
								{
									HX_STACK_LINE(563)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp13 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(563)
									bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(563)
									if ((tmp14)){
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp15 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(563)
										ret = tmp15;
									}
									else{
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp15 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(563)
										ret = tmp15;
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(563)
										ret->next = null();
									}
									HX_STACK_LINE(563)
									Dynamic();
								}
								HX_STACK_LINE(563)
								ret->elt = a;
								HX_STACK_LINE(563)
								tmp12 = ret;
							}
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp12;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(563)
							temp->next = U->head;
							HX_STACK_LINE(563)
							U->head = temp;
							HX_STACK_LINE(563)
							U->modified = true;
							HX_STACK_LINE(563)
							(U->length)++;
							HX_STACK_LINE(563)
							a;
						}
						HX_STACK_LINE(563)
						aite = aite->next;
					}
					else{
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(563)
								{
									HX_STACK_LINE(563)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp13 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(563)
									bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(563)
									if ((tmp14)){
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp15 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(563)
										ret = tmp15;
									}
									else{
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp15 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(563)
										ret = tmp15;
										HX_STACK_LINE(563)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(563)
										ret->next = null();
									}
									HX_STACK_LINE(563)
									Dynamic();
								}
								HX_STACK_LINE(563)
								ret->elt = b;
								HX_STACK_LINE(563)
								tmp12 = ret;
							}
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp12;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(563)
							temp->next = V->head;
							HX_STACK_LINE(563)
							V->head = temp;
							HX_STACK_LINE(563)
							V->modified = true;
							HX_STACK_LINE(563)
							(V->length)++;
							HX_STACK_LINE(563)
							b;
						}
						HX_STACK_LINE(563)
						bite = bite->next;
					}
				}
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp7 = (aite != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(563)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				if ((tmp8)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::callbacks::ZPP_CbType o = aite->elt;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(563)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(563)
							if ((tmp11)){
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp12 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(563)
								ret = tmp12;
							}
							else{
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp12 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(563)
								ret = tmp12;
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(563)
								ret->next = null();
							}
							HX_STACK_LINE(563)
							Dynamic();
						}
						HX_STACK_LINE(563)
						ret->elt = o;
						HX_STACK_LINE(563)
						tmp9 = ret;
					}
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp9;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(563)
					temp->next = U->head;
					HX_STACK_LINE(563)
					U->head = temp;
					HX_STACK_LINE(563)
					U->modified = true;
					HX_STACK_LINE(563)
					(U->length)++;
					HX_STACK_LINE(563)
					o;
				}
				HX_STACK_LINE(563)
				aite = aite->next;
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp7 = (bite != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(563)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				if ((tmp8)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::callbacks::ZPP_CbType o = bite->elt;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(563)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(563)
							if ((tmp11)){
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp12 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(563)
								ret = tmp12;
							}
							else{
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp12 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(563)
								ret = tmp12;
								HX_STACK_LINE(563)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(563)
								ret->next = null();
							}
							HX_STACK_LINE(563)
							Dynamic();
						}
						HX_STACK_LINE(563)
						ret->elt = o;
						HX_STACK_LINE(563)
						tmp9 = ret;
					}
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp9;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(563)
					temp->next = V->head;
					HX_STACK_LINE(563)
					V->head = temp;
					HX_STACK_LINE(563)
					V->modified = true;
					HX_STACK_LINE(563)
					(V->length)++;
					HX_STACK_LINE(563)
					o;
				}
				HX_STACK_LINE(563)
				bite = bite->next;
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp7 = (U->head == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(563)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(563)
				if ((tmp9)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType tmp10 = U->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(563)
					while((true)){
						HX_STACK_LINE(563)
						bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(563)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(563)
						if ((tmp12)){
							HX_STACK_LINE(563)
							break;
						}
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(564)
						{
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet B1 = tmp14->cbsets;		HX_STACK_VAR(B1,"B1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet tmp15 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet U1 = tmp15;		HX_STACK_VAR(U1,"U1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet tmp16 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet V1 = tmp16;		HX_STACK_VAR(V1,"V1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet tmp17 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet W1 = tmp17;		HX_STACK_VAR(W1,"W1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp18 = tmp13->cbsets->head;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = tmp18;		HX_STACK_VAR(aite1,"aite1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (aite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								if ((tmp19)){
									HX_STACK_LINE(564)
									tmp20 = (bite1 != null());
								}
								else{
									HX_STACK_LINE(564)
									tmp20 = false;
								}
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(564)
								bool tmp22 = (a == b);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								if ((tmp22)){
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												if ((tmp25)){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
												}
												else{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = a;
											HX_STACK_LINE(564)
											tmp23 = ret;
										}
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp23;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										temp->next = W1->head;
										HX_STACK_LINE(564)
										W1->head = temp;
										HX_STACK_LINE(564)
										W1->modified = true;
										HX_STACK_LINE(564)
										(W1->length)++;
										HX_STACK_LINE(564)
										a;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
								else{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp23 = a;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp24 = b;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(564)
									bool tmp25 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(564)
									if ((tmp25)){
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(564)
													if ((tmp28)){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
													}
													else{
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = a;
												HX_STACK_LINE(564)
												tmp26 = ret;
											}
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp26;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											temp->next = U1->head;
											HX_STACK_LINE(564)
											U1->head = temp;
											HX_STACK_LINE(564)
											U1->modified = true;
											HX_STACK_LINE(564)
											(U1->length)++;
											HX_STACK_LINE(564)
											a;
										}
										HX_STACK_LINE(564)
										aite1 = aite1->next;
									}
									else{
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(564)
													if ((tmp28)){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
													}
													else{
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = b;
												HX_STACK_LINE(564)
												tmp26 = ret;
											}
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp26;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											temp->next = V1->head;
											HX_STACK_LINE(564)
											V1->head = temp;
											HX_STACK_LINE(564)
											V1->modified = true;
											HX_STACK_LINE(564)
											(V1->length)++;
											HX_STACK_LINE(564)
											b;
										}
										HX_STACK_LINE(564)
										bite1 = bite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (aite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								if ((tmp20)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											if ((tmp23)){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
											}
											else{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										tmp21 = ret;
									}
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp21;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									temp->next = U1->head;
									HX_STACK_LINE(564)
									U1->head = temp;
									HX_STACK_LINE(564)
									U1->modified = true;
									HX_STACK_LINE(564)
									(U1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								aite1 = aite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (bite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								if ((tmp20)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											if ((tmp23)){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
											}
											else{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										tmp21 = ret;
									}
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp21;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									temp->next = V1->head;
									HX_STACK_LINE(564)
									V1->head = temp;
									HX_STACK_LINE(564)
									V1->modified = true;
									HX_STACK_LINE(564)
									(V1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								bite1 = bite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (U1->head == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp22 = U1->pop_unsafe();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = tmp22;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										bool tmp23 = (cx_ite1 != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(564)
										if ((tmp24)){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(567)
											::zpp_nape::callbacks::ZPP_InteractionListener tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(567)
											bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(567)
											if ((tmp28)){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														if ((tmp31)){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
														}
														else{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp31 = y1;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(568)
													bool tmp32 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(568)
													if ((tmp32)){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													tmp29 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(tmp29);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (V1->head == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp22 = V1->pop_unsafe();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = tmp22;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										bool tmp23 = (cx_ite1 != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(564)
										if ((tmp24)){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(567)
											::zpp_nape::callbacks::ZPP_InteractionListener tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(567)
											bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(567)
											if ((tmp28)){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														if ((tmp31)){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
														}
														else{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp31 = y1;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(568)
													bool tmp32 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(568)
													if ((tmp32)){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													tmp29 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(tmp29);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (W1->head == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp22 = W1->pop_unsafe();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = tmp22;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										x1->validate();
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp24 = x1;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(567)
										::zpp_nape::callbacks::ZPP_InteractionListener tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(567)
										bool tmp26 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(567)
										if ((tmp26)){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(568)
													bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(568)
													if ((tmp29)){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
													}
													else{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp29 = x1;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(568)
												if ((tmp30)){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												tmp27 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(tmp27);
										}
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											bool tmp23 = (cx_ite1 != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(564)
											if ((tmp24)){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(567)
												::zpp_nape::callbacks::ZPP_InteractionListener tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(567)
												bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(567)
												if ((tmp28)){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(568)
															bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(568)
															if ((tmp31)){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(568)
																ret = tmp32;
															}
															else{
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(568)
																ret = tmp32;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp31 = y1;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														bool tmp32 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(568)
														if ((tmp32)){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														tmp29 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(tmp29);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(563)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp7 = (V->head == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(563)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(563)
				if ((tmp9)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType tmp10 = V->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(563)
					while((true)){
						HX_STACK_LINE(563)
						bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(563)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(563)
						if ((tmp12)){
							HX_STACK_LINE(563)
							break;
						}
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(563)
						::zpp_nape::callbacks::ZPP_CbType tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(564)
						{
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet B1 = tmp14->cbsets;		HX_STACK_VAR(B1,"B1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet tmp15 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet U1 = tmp15;		HX_STACK_VAR(U1,"U1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet tmp16 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet V1 = tmp16;		HX_STACK_VAR(V1,"V1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet tmp17 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPList_ZPP_CbSet W1 = tmp17;		HX_STACK_VAR(W1,"W1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp18 = tmp13->cbsets->head;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = tmp18;		HX_STACK_VAR(aite1,"aite1");
							HX_STACK_LINE(564)
							::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (aite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								if ((tmp19)){
									HX_STACK_LINE(564)
									tmp20 = (bite1 != null());
								}
								else{
									HX_STACK_LINE(564)
									tmp20 = false;
								}
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(564)
								bool tmp22 = (a == b);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								if ((tmp22)){
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												if ((tmp25)){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
												}
												else{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = a;
											HX_STACK_LINE(564)
											tmp23 = ret;
										}
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp23;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										temp->next = W1->head;
										HX_STACK_LINE(564)
										W1->head = temp;
										HX_STACK_LINE(564)
										W1->modified = true;
										HX_STACK_LINE(564)
										(W1->length)++;
										HX_STACK_LINE(564)
										a;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
								else{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp23 = a;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp24 = b;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(564)
									bool tmp25 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(564)
									if ((tmp25)){
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(564)
													if ((tmp28)){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
													}
													else{
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = a;
												HX_STACK_LINE(564)
												tmp26 = ret;
											}
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp26;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											temp->next = U1->head;
											HX_STACK_LINE(564)
											U1->head = temp;
											HX_STACK_LINE(564)
											U1->modified = true;
											HX_STACK_LINE(564)
											(U1->length)++;
											HX_STACK_LINE(564)
											a;
										}
										HX_STACK_LINE(564)
										aite1 = aite1->next;
									}
									else{
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(564)
													if ((tmp28)){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
													}
													else{
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														ret = tmp29;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = b;
												HX_STACK_LINE(564)
												tmp26 = ret;
											}
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp26;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											temp->next = V1->head;
											HX_STACK_LINE(564)
											V1->head = temp;
											HX_STACK_LINE(564)
											V1->modified = true;
											HX_STACK_LINE(564)
											(V1->length)++;
											HX_STACK_LINE(564)
											b;
										}
										HX_STACK_LINE(564)
										bite1 = bite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (aite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								if ((tmp20)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											if ((tmp23)){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
											}
											else{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										tmp21 = ret;
									}
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp21;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									temp->next = U1->head;
									HX_STACK_LINE(564)
									U1->head = temp;
									HX_STACK_LINE(564)
									U1->modified = true;
									HX_STACK_LINE(564)
									(U1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								aite1 = aite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (bite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								if ((tmp20)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											if ((tmp23)){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
											}
											else{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = o;
										HX_STACK_LINE(564)
										tmp21 = ret;
									}
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp21;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									temp->next = V1->head;
									HX_STACK_LINE(564)
									V1->head = temp;
									HX_STACK_LINE(564)
									V1->modified = true;
									HX_STACK_LINE(564)
									(V1->length)++;
									HX_STACK_LINE(564)
									o;
								}
								HX_STACK_LINE(564)
								bite1 = bite1->next;
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (U1->head == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp22 = U1->pop_unsafe();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = tmp22;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										bool tmp23 = (cx_ite1 != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(564)
										if ((tmp24)){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(567)
											::zpp_nape::callbacks::ZPP_InteractionListener tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(567)
											bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(567)
											if ((tmp28)){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														if ((tmp31)){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
														}
														else{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp31 = y1;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(568)
													bool tmp32 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(568)
													if ((tmp32)){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													tmp29 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(tmp29);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (V1->head == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp22 = V1->pop_unsafe();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = tmp22;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										bool tmp23 = (cx_ite1 != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(564)
										if ((tmp24)){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y1->validate();
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(567)
											::zpp_nape::callbacks::ZPP_InteractionListener tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(567)
											bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(567)
											if ((tmp28)){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														if ((tmp31)){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
														}
														else{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp31 = y1;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(568)
													bool tmp32 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(568)
													if ((tmp32)){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													tmp29 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(tmp29);
											}
										}
										HX_STACK_LINE(564)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(564)
							while((true)){
								HX_STACK_LINE(564)
								bool tmp19 = (W1->head == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								if ((tmp21)){
									HX_STACK_LINE(564)
									break;
								}
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp22 = W1->pop_unsafe();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet x1 = tmp22;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										x1->validate();
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp24 = x1;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(567)
										::zpp_nape::callbacks::ZPP_InteractionListener tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(567)
										bool tmp26 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(567)
										if ((tmp26)){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(568)
													bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(568)
													if ((tmp29)){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
													}
													else{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp29 = x1;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(568)
												if ((tmp30)){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												tmp27 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(tmp27);
										}
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											bool tmp23 = (cx_ite1 != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(564)
											if ((tmp24)){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(567)
												::zpp_nape::callbacks::ZPP_InteractionListener tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(567)
												bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(567)
												if ((tmp28)){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(568)
															bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(568)
															if ((tmp31)){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(568)
																ret = tmp32;
															}
															else{
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(568)
																ret = tmp32;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp31 = y1;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														bool tmp32 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(568)
														if ((tmp32)){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														tmp29 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(tmp29);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(563)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp7 = (W->head == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(563)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(563)
				if ((tmp9)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType tmp10 = W->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(563)
				::zpp_nape::callbacks::ZPP_CbType x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::zpp_nape::callbacks::ZPP_CbType tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(563)
					::zpp_nape::callbacks::ZPP_CbType tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(564)
					{
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet B1 = tmp12->cbsets;		HX_STACK_VAR(B1,"B1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet tmp13 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet U1 = tmp13;		HX_STACK_VAR(U1,"U1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet tmp14 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet V1 = tmp14;		HX_STACK_VAR(V1,"V1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet tmp15 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPList_ZPP_CbSet W1 = tmp15;		HX_STACK_VAR(W1,"W1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPNode_ZPP_CbSet tmp16 = tmp11->cbsets->head;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = tmp16;		HX_STACK_VAR(aite1,"aite1");
						HX_STACK_LINE(564)
						::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							bool tmp17 = (aite1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							if ((tmp17)){
								HX_STACK_LINE(564)
								tmp18 = (bite1 != null());
							}
							else{
								HX_STACK_LINE(564)
								tmp18 = false;
							}
							HX_STACK_LINE(564)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(564)
							if ((tmp19)){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(564)
							bool tmp20 = (a == b);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(564)
							if ((tmp20)){
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											if ((tmp23)){
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
											}
											else{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												ret = tmp24;
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
												HX_STACK_LINE(564)
												ret->next = null();
											}
											HX_STACK_LINE(564)
											Dynamic();
										}
										HX_STACK_LINE(564)
										ret->elt = a;
										HX_STACK_LINE(564)
										tmp21 = ret;
									}
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp21;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(564)
									temp->next = W1->head;
									HX_STACK_LINE(564)
									W1->head = temp;
									HX_STACK_LINE(564)
									W1->modified = true;
									HX_STACK_LINE(564)
									(W1->length)++;
									HX_STACK_LINE(564)
									a;
								}
								HX_STACK_LINE(564)
								aite1 = aite1->next;
								HX_STACK_LINE(564)
								bite1 = bite1->next;
							}
							else{
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp21 = a;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet tmp22 = b;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(564)
								bool tmp23 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(564)
								if ((tmp23)){
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp25 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(564)
												if ((tmp26)){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													ret = tmp27;
												}
												else{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													ret = tmp27;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = a;
											HX_STACK_LINE(564)
											tmp24 = ret;
										}
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp24;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										temp->next = U1->head;
										HX_STACK_LINE(564)
										U1->head = temp;
										HX_STACK_LINE(564)
										U1->modified = true;
										HX_STACK_LINE(564)
										(U1->length)++;
										HX_STACK_LINE(564)
										a;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
								}
								else{
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp25 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(564)
												if ((tmp26)){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													ret = tmp27;
												}
												else{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp27 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													ret = tmp27;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = b;
											HX_STACK_LINE(564)
											tmp24 = ret;
										}
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp24;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										temp->next = V1->head;
										HX_STACK_LINE(564)
										V1->head = temp;
										HX_STACK_LINE(564)
										V1->modified = true;
										HX_STACK_LINE(564)
										(V1->length)++;
										HX_STACK_LINE(564)
										b;
									}
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
							}
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							bool tmp17 = (aite1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							if ((tmp18)){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp20 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(564)
										bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(564)
										if ((tmp21)){
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											ret = tmp22;
										}
										else{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											ret = tmp22;
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
											HX_STACK_LINE(564)
											ret->next = null();
										}
										HX_STACK_LINE(564)
										Dynamic();
									}
									HX_STACK_LINE(564)
									ret->elt = o;
									HX_STACK_LINE(564)
									tmp19 = ret;
								}
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp19;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(564)
								temp->next = U1->head;
								HX_STACK_LINE(564)
								U1->head = temp;
								HX_STACK_LINE(564)
								U1->modified = true;
								HX_STACK_LINE(564)
								(U1->length)++;
								HX_STACK_LINE(564)
								o;
							}
							HX_STACK_LINE(564)
							aite1 = aite1->next;
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							bool tmp17 = (bite1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							if ((tmp18)){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp20 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(564)
										bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(564)
										if ((tmp21)){
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											ret = tmp22;
										}
										else{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp22 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(564)
											ret = tmp22;
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
											HX_STACK_LINE(564)
											ret->next = null();
										}
										HX_STACK_LINE(564)
										Dynamic();
									}
									HX_STACK_LINE(564)
									ret->elt = o;
									HX_STACK_LINE(564)
									tmp19 = ret;
								}
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp19;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(564)
								temp->next = V1->head;
								HX_STACK_LINE(564)
								V1->head = temp;
								HX_STACK_LINE(564)
								V1->modified = true;
								HX_STACK_LINE(564)
								(V1->length)++;
								HX_STACK_LINE(564)
								o;
							}
							HX_STACK_LINE(564)
							bite1 = bite1->next;
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							bool tmp17 = (U1->head == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(564)
							if ((tmp19)){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet tmp20 = U1->pop_unsafe();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet x1 = tmp20;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = B1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									if ((tmp22)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										y->validate();
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(567)
										::zpp_nape::callbacks::ZPP_InteractionListener tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(567)
										bool tmp26 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(567)
										if ((tmp26)){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(568)
													bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(568)
													if ((tmp29)){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
													}
													else{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(568)
												if ((tmp30)){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = y;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = y;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												tmp27 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(tmp27);
										}
									}
									HX_STACK_LINE(564)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							bool tmp17 = (V1->head == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(564)
							if ((tmp19)){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet tmp20 = V1->pop_unsafe();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet x1 = tmp20;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									if ((tmp22)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(565)
										x1->validate();
										HX_STACK_LINE(566)
										y->validate();
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(567)
										::zpp_nape::callbacks::ZPP_InteractionListener tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(567)
										bool tmp26 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(567)
										if ((tmp26)){
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(568)
													bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(568)
													if ((tmp29)){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
													}
													else{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														ret = tmp30;
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(568)
														ret->next = null();
													}
													HX_STACK_LINE(568)
													ret->zip_listeners = true;
												}
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(568)
												if ((tmp30)){
													HX_STACK_LINE(568)
													ret->a = x1;
													HX_STACK_LINE(568)
													ret->b = y;
												}
												else{
													HX_STACK_LINE(568)
													ret->a = y;
													HX_STACK_LINE(568)
													ret->b = x1;
												}
												HX_STACK_LINE(568)
												tmp27 = ret;
											}
											HX_STACK_LINE(568)
											set->try_insert(tmp27);
										}
									}
									HX_STACK_LINE(564)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(564)
						while((true)){
							HX_STACK_LINE(564)
							bool tmp17 = (W1->head == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(564)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(564)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(564)
							if ((tmp19)){
								HX_STACK_LINE(564)
								break;
							}
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet tmp20 = W1->pop_unsafe();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(564)
							::zpp_nape::callbacks::ZPP_CbSet x1 = tmp20;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(565)
									x1->validate();
									HX_STACK_LINE(566)
									x1->validate();
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp21 = x1;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp22 = x1;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(567)
									::zpp_nape::callbacks::ZPP_InteractionListener tmp23 = _g;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(567)
									bool tmp24 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(567)
									if ((tmp24)){
										HX_STACK_LINE(568)
										::zpp_nape::callbacks::ZPP_CbSetPair tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(568)
										{
											HX_STACK_LINE(568)
											::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(568)
											{
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp26 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(568)
												bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(568)
												if ((tmp27)){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(568)
													ret = tmp28;
												}
												else{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(568)
													ret = tmp28;
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
													HX_STACK_LINE(568)
													ret->next = null();
												}
												HX_STACK_LINE(568)
												ret->zip_listeners = true;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp26 = x1;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp27 = x1;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(568)
											bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(568)
											if ((tmp28)){
												HX_STACK_LINE(568)
												ret->a = x1;
												HX_STACK_LINE(568)
												ret->b = x1;
											}
											else{
												HX_STACK_LINE(568)
												ret->a = x1;
												HX_STACK_LINE(568)
												ret->b = x1;
											}
											HX_STACK_LINE(568)
											tmp25 = ret;
										}
										HX_STACK_LINE(568)
										set->try_insert(tmp25);
									}
								}
								HX_STACK_LINE(564)
								{
									HX_STACK_LINE(564)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(564)
									while((true)){
										HX_STACK_LINE(564)
										bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(564)
										bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(564)
										if ((tmp22)){
											HX_STACK_LINE(564)
											break;
										}
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											y->validate();
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(567)
											::zpp_nape::callbacks::ZPP_InteractionListener tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(567)
											bool tmp26 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(567)
											if ((tmp26)){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp28 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(568)
														bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(568)
														if ((tmp29)){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(568)
															ret = tmp30;
														}
														else{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(568)
															ret = tmp30;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(568)
													bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(568)
													if ((tmp30)){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = y;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = y;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													tmp27 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(tmp27);
											}
										}
										HX_STACK_LINE(564)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(563)
						while((true)){
							HX_STACK_LINE(563)
							bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(563)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(563)
							if ((tmp14)){
								HX_STACK_LINE(563)
								break;
							}
							HX_STACK_LINE(563)
							::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(563)
							::zpp_nape::callbacks::ZPP_CbType tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(563)
							::zpp_nape::callbacks::ZPP_CbType tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet B1 = tmp16->cbsets;		HX_STACK_VAR(B1,"B1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet tmp17 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet U1 = tmp17;		HX_STACK_VAR(U1,"U1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet tmp18 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet V1 = tmp18;		HX_STACK_VAR(V1,"V1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet tmp19 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPList_ZPP_CbSet W1 = tmp19;		HX_STACK_VAR(W1,"W1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp20 = tmp15->cbsets->head;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = tmp20;		HX_STACK_VAR(aite1,"aite1");
								HX_STACK_LINE(564)
								::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (aite1 != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									if ((tmp21)){
										HX_STACK_LINE(564)
										tmp22 = (bite1 != null());
									}
									else{
										HX_STACK_LINE(564)
										tmp22 = false;
									}
									HX_STACK_LINE(564)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(564)
									if ((tmp23)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(564)
									bool tmp24 = (a == b);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(564)
									if ((tmp24)){
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													if ((tmp27)){
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp28 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(564)
														ret = tmp28;
													}
													else{
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp28 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(564)
														ret = tmp28;
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(564)
														ret->next = null();
													}
													HX_STACK_LINE(564)
													Dynamic();
												}
												HX_STACK_LINE(564)
												ret->elt = a;
												HX_STACK_LINE(564)
												tmp25 = ret;
											}
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp25;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(564)
											temp->next = W1->head;
											HX_STACK_LINE(564)
											W1->head = temp;
											HX_STACK_LINE(564)
											W1->modified = true;
											HX_STACK_LINE(564)
											(W1->length)++;
											HX_STACK_LINE(564)
											a;
										}
										HX_STACK_LINE(564)
										aite1 = aite1->next;
										HX_STACK_LINE(564)
										bite1 = bite1->next;
									}
									else{
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp25 = a;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet tmp26 = b;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(564)
										bool tmp27 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(564)
										if ((tmp27)){
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(564)
													{
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(564)
														if ((tmp30)){
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet tmp31 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(564)
															ret = tmp31;
														}
														else{
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet tmp31 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(564)
															ret = tmp31;
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(564)
															ret->next = null();
														}
														HX_STACK_LINE(564)
														Dynamic();
													}
													HX_STACK_LINE(564)
													ret->elt = a;
													HX_STACK_LINE(564)
													tmp28 = ret;
												}
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp28;		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(564)
												temp->next = U1->head;
												HX_STACK_LINE(564)
												U1->head = temp;
												HX_STACK_LINE(564)
												U1->modified = true;
												HX_STACK_LINE(564)
												(U1->length)++;
												HX_STACK_LINE(564)
												a;
											}
											HX_STACK_LINE(564)
											aite1 = aite1->next;
										}
										else{
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(564)
													{
														HX_STACK_LINE(564)
														::zpp_nape::util::ZNPNode_ZPP_CbSet tmp29 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(564)
														bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(564)
														if ((tmp30)){
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet tmp31 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(564)
															ret = tmp31;
														}
														else{
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet tmp31 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(564)
															ret = tmp31;
															HX_STACK_LINE(564)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(564)
															ret->next = null();
														}
														HX_STACK_LINE(564)
														Dynamic();
													}
													HX_STACK_LINE(564)
													ret->elt = b;
													HX_STACK_LINE(564)
													tmp28 = ret;
												}
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp28;		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(564)
												temp->next = V1->head;
												HX_STACK_LINE(564)
												V1->head = temp;
												HX_STACK_LINE(564)
												V1->modified = true;
												HX_STACK_LINE(564)
												(V1->length)++;
												HX_STACK_LINE(564)
												b;
											}
											HX_STACK_LINE(564)
											bite1 = bite1->next;
										}
									}
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (aite1 != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									if ((tmp22)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												if ((tmp25)){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
												}
												else{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = o;
											HX_STACK_LINE(564)
											tmp23 = ret;
										}
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp23;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										temp->next = U1->head;
										HX_STACK_LINE(564)
										U1->head = temp;
										HX_STACK_LINE(564)
										U1->modified = true;
										HX_STACK_LINE(564)
										(U1->length)++;
										HX_STACK_LINE(564)
										o;
									}
									HX_STACK_LINE(564)
									aite1 = aite1->next;
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (bite1 != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									if ((tmp22)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(564)
												::zpp_nape::util::ZNPNode_ZPP_CbSet tmp24 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(564)
												bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												if ((tmp25)){
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
												}
												else{
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet tmp26 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													ret = tmp26;
													HX_STACK_LINE(564)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(564)
													ret->next = null();
												}
												HX_STACK_LINE(564)
												Dynamic();
											}
											HX_STACK_LINE(564)
											ret->elt = o;
											HX_STACK_LINE(564)
											tmp23 = ret;
										}
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = tmp23;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(564)
										temp->next = V1->head;
										HX_STACK_LINE(564)
										V1->head = temp;
										HX_STACK_LINE(564)
										V1->modified = true;
										HX_STACK_LINE(564)
										(V1->length)++;
										HX_STACK_LINE(564)
										o;
									}
									HX_STACK_LINE(564)
									bite1 = bite1->next;
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (U1->head == null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(564)
									if ((tmp23)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp24 = U1->pop_unsafe();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet x1 = tmp24;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											bool tmp25 = (cx_ite1 != null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(564)
											if ((tmp26)){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp27 = x1;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp28 = y1;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(567)
												::zpp_nape::callbacks::ZPP_InteractionListener tmp29 = _g;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(567)
												bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(567)
												if ((tmp30)){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp31;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(568)
															if ((tmp33)){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp34 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(568)
																ret = tmp34;
															}
															else{
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp34 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(568)
																ret = tmp34;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp32 = x1;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp33 = y1;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(568)
														bool tmp34 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(568)
														if ((tmp34)){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														tmp31 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(tmp31);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (V1->head == null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(564)
									if ((tmp23)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp24 = V1->pop_unsafe();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet x1 = tmp24;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(564)
										while((true)){
											HX_STACK_LINE(564)
											bool tmp25 = (cx_ite1 != null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(564)
											if ((tmp26)){
												HX_STACK_LINE(564)
												break;
											}
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(564)
											{
												HX_STACK_LINE(565)
												x1->validate();
												HX_STACK_LINE(566)
												y1->validate();
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp27 = x1;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet tmp28 = y1;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(567)
												::zpp_nape::callbacks::ZPP_InteractionListener tmp29 = _g;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(567)
												bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(567)
												if ((tmp30)){
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair tmp31;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(568)
															if ((tmp33)){
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp34 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(568)
																ret = tmp34;
															}
															else{
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp34 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(568)
																ret = tmp34;
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(568)
																ret->next = null();
															}
															HX_STACK_LINE(568)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp32 = x1;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(564)
														::zpp_nape::callbacks::ZPP_CbSet tmp33 = y1;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(568)
														bool tmp34 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(568)
														if ((tmp34)){
															HX_STACK_LINE(568)
															ret->a = x1;
															HX_STACK_LINE(568)
															ret->b = y1;
														}
														else{
															HX_STACK_LINE(568)
															ret->a = y1;
															HX_STACK_LINE(568)
															ret->b = x1;
														}
														HX_STACK_LINE(568)
														tmp31 = ret;
													}
													HX_STACK_LINE(568)
													set->try_insert(tmp31);
												}
											}
											HX_STACK_LINE(564)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
								HX_STACK_LINE(564)
								while((true)){
									HX_STACK_LINE(564)
									bool tmp21 = (W1->head == null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(564)
									if ((tmp23)){
										HX_STACK_LINE(564)
										break;
									}
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet tmp24 = W1->pop_unsafe();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(564)
									::zpp_nape::callbacks::ZPP_CbSet x1 = tmp24;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(564)
									{
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(565)
											x1->validate();
											HX_STACK_LINE(566)
											x1->validate();
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(564)
											::zpp_nape::callbacks::ZPP_CbSet tmp26 = x1;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(567)
											::zpp_nape::callbacks::ZPP_InteractionListener tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(567)
											bool tmp28 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(567)
											if ((tmp28)){
												HX_STACK_LINE(568)
												::zpp_nape::callbacks::ZPP_CbSetPair tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												{
													HX_STACK_LINE(568)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(568)
													{
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp30 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(568)
														bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														if ((tmp31)){
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
														}
														else{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(568)
															ret = tmp32;
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(568)
															ret->next = null();
														}
														HX_STACK_LINE(568)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp30 = x1;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp31 = x1;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(568)
													bool tmp32 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(568)
													if ((tmp32)){
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													else{
														HX_STACK_LINE(568)
														ret->a = x1;
														HX_STACK_LINE(568)
														ret->b = x1;
													}
													HX_STACK_LINE(568)
													tmp29 = ret;
												}
												HX_STACK_LINE(568)
												set->try_insert(tmp29);
											}
										}
										HX_STACK_LINE(564)
										{
											HX_STACK_LINE(564)
											::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(564)
											while((true)){
												HX_STACK_LINE(564)
												bool tmp25 = (cx_ite1 != null());		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(564)
												bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(564)
												if ((tmp26)){
													HX_STACK_LINE(564)
													break;
												}
												HX_STACK_LINE(564)
												::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
												HX_STACK_LINE(564)
												{
													HX_STACK_LINE(565)
													x1->validate();
													HX_STACK_LINE(566)
													y1->validate();
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp27 = x1;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(564)
													::zpp_nape::callbacks::ZPP_CbSet tmp28 = y1;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(567)
													::zpp_nape::callbacks::ZPP_InteractionListener tmp29 = _g;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(567)
													bool tmp30 = ::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(567)
													if ((tmp30)){
														HX_STACK_LINE(568)
														::zpp_nape::callbacks::ZPP_CbSetPair tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(568)
														{
															HX_STACK_LINE(568)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(568)
															{
																HX_STACK_LINE(568)
																::zpp_nape::callbacks::ZPP_CbSetPair tmp32 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(568)
																bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(568)
																if ((tmp33)){
																	HX_STACK_LINE(568)
																	::zpp_nape::callbacks::ZPP_CbSetPair tmp34 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(568)
																	ret = tmp34;
																}
																else{
																	HX_STACK_LINE(568)
																	::zpp_nape::callbacks::ZPP_CbSetPair tmp34 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(568)
																	ret = tmp34;
																	HX_STACK_LINE(568)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(568)
																	ret->next = null();
																}
																HX_STACK_LINE(568)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(564)
															::zpp_nape::callbacks::ZPP_CbSet tmp32 = x1;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(564)
															::zpp_nape::callbacks::ZPP_CbSet tmp33 = y1;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(568)
															bool tmp34 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(568)
															if ((tmp34)){
																HX_STACK_LINE(568)
																ret->a = x1;
																HX_STACK_LINE(568)
																ret->b = y1;
															}
															else{
																HX_STACK_LINE(568)
																ret->a = y1;
																HX_STACK_LINE(568)
																ret->b = x1;
															}
															HX_STACK_LINE(568)
															tmp31 = ret;
														}
														HX_STACK_LINE(568)
														set->try_insert(tmp31);
													}
												}
												HX_STACK_LINE(564)
												cx_ite1 = cx_ite1->next;
											}
										}
									}
								}
							}
							HX_STACK_LINE(563)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			bool tmp1 = (set->parent == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(572)
			if ((tmp1)){
				HX_STACK_LINE(572)
				Dynamic();
			}
			else{
				HX_STACK_LINE(572)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = set->parent;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(572)
				while((true)){
					HX_STACK_LINE(572)
					bool tmp2 = (cur != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(572)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(572)
					if ((tmp3)){
						HX_STACK_LINE(572)
						break;
					}
					HX_STACK_LINE(572)
					bool tmp4 = (cur->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(572)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(572)
					if ((tmp4)){
						HX_STACK_LINE(572)
						tmp5 = cur->prev;
					}
					else{
						HX_STACK_LINE(572)
						bool tmp6 = (cur->next != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(572)
						if ((tmp6)){
							HX_STACK_LINE(572)
							tmp5 = cur->next;
						}
						else{
							HX_STACK_LINE(572)
							::zpp_nape::callbacks::ZPP_CbSetPair tmp7 = cur->data;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(572)
							{
								HX_STACK_LINE(573)
								bool tmp8 = fresh;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(573)
								if ((tmp8)){
									HX_STACK_LINE(573)
									::zpp_nape::callbacks::ZPP_CbSet tmp9 = tmp7->a;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(573)
									::zpp_nape::callbacks::ZPP_CbSet tmp10 = tmp7->b;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(573)
									_g->space->freshListenerType(tmp9,tmp10);
								}
								else{
									HX_STACK_LINE(574)
									::zpp_nape::callbacks::ZPP_CbSet tmp9 = tmp7->a;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(574)
									::zpp_nape::callbacks::ZPP_CbSet tmp10 = tmp7->b;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(574)
									_g->space->nullListenerType(tmp9,tmp10);
								}
								HX_STACK_LINE(575)
								{
									HX_STACK_LINE(572)
									::zpp_nape::callbacks::ZPP_CbSetPair o = tmp7;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(585)
									{
										HX_STACK_LINE(585)
										::zpp_nape::callbacks::ZPP_CbSet tmp9 = o->b = null();		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(585)
										o->a = tmp9;
										HX_STACK_LINE(585)
										o->listeners->clear();
									}
									HX_STACK_LINE(586)
									::zpp_nape::callbacks::ZPP_CbSetPair tmp9 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(586)
									o->next = tmp9;
									HX_STACK_LINE(587)
									::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(572)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(572)
							bool tmp8 = (ret != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(572)
							if ((tmp8)){
								HX_STACK_LINE(572)
								bool tmp9 = (cur == ret->prev);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(572)
								if ((tmp9)){
									HX_STACK_LINE(572)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(572)
									ret->next = null();
								}
								HX_STACK_LINE(572)
								cur->parent = null();
							}
							HX_STACK_LINE(572)
							{
								HX_STACK_LINE(572)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(572)
								{
									HX_STACK_LINE(572)
									o->data = null();
									HX_STACK_LINE(572)
									o->lt = null();
									HX_STACK_LINE(572)
									o->swapped = null();
								}
								HX_STACK_LINE(572)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(572)
								o->next = tmp9;
								HX_STACK_LINE(572)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(572)
							tmp5 = ret;
						}
					}
					HX_STACK_LINE(572)
					cur = tmp5;
				}
				HX_STACK_LINE(572)
				set->parent = null();
			}
		}
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(594)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = set;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				o->data = null();
				HX_STACK_LINE(603)
				o->lt = null();
				HX_STACK_LINE(603)
				o->swapped = null();
			}
			HX_STACK_LINE(604)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp1 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(604)
			o->next = tmp1;
			HX_STACK_LINE(605)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,with_uniquesets,(void))

Void ZPP_InteractionListener_obj::with_union( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","with_union",0xad4f2fe4,"zpp_nape.callbacks.ZPP_InteractionListener.with_union","zpp_nape/callbacks/Listener.hx",613,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(614)
		::zpp_nape::callbacks::ZPP_OptionType tmp = this->options1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = tmp->includes->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = tmp1;		HX_STACK_VAR(ite1,"ite1");
		HX_STACK_LINE(615)
		::zpp_nape::callbacks::ZPP_OptionType tmp2 = this->options2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(615)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = tmp2->includes->head;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(615)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = tmp3;		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(616)
		while((true)){
			HX_STACK_LINE(616)
			bool tmp4 = (ite1 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(616)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(616)
			if ((tmp4)){
				HX_STACK_LINE(616)
				tmp5 = (ite2 != null());
			}
			else{
				HX_STACK_LINE(616)
				tmp5 = false;
			}
			HX_STACK_LINE(616)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(616)
			if ((tmp6)){
				HX_STACK_LINE(616)
				break;
			}
			HX_STACK_LINE(617)
			::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
			HX_STACK_LINE(618)
			::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
			HX_STACK_LINE(619)
			bool tmp7 = (cb1 == cb2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(619)
			if ((tmp7)){
				HX_STACK_LINE(620)
				::zpp_nape::callbacks::ZPP_CbType tmp8 = cb1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(620)
				lambda(tmp8).Cast< Void >();
				HX_STACK_LINE(621)
				ite1 = ite1->next;
				HX_STACK_LINE(622)
				ite2 = ite2->next;
			}
			else{
				HX_STACK_LINE(624)
				bool tmp8 = (cb1->id < cb2->id);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(624)
				if ((tmp8)){
					HX_STACK_LINE(625)
					::zpp_nape::callbacks::ZPP_CbType tmp9 = cb1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(625)
					lambda(tmp9).Cast< Void >();
					HX_STACK_LINE(626)
					ite1 = ite1->next;
				}
				else{
					HX_STACK_LINE(629)
					::zpp_nape::callbacks::ZPP_CbType tmp9 = cb2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(629)
					lambda(tmp9).Cast< Void >();
					HX_STACK_LINE(630)
					ite2 = ite2->next;
				}
			}
		}
		HX_STACK_LINE(633)
		while((true)){
			HX_STACK_LINE(633)
			bool tmp4 = (ite1 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(633)
			if ((tmp5)){
				HX_STACK_LINE(633)
				break;
			}
			HX_STACK_LINE(634)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = ite1->elt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(634)
			lambda(tmp6).Cast< Void >();
			HX_STACK_LINE(635)
			ite1 = ite1->next;
		}
		HX_STACK_LINE(637)
		while((true)){
			HX_STACK_LINE(637)
			bool tmp4 = (ite2 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(637)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(637)
			if ((tmp5)){
				HX_STACK_LINE(637)
				break;
			}
			HX_STACK_LINE(638)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = ite2->elt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(638)
			lambda(tmp6).Cast< Void >();
			HX_STACK_LINE(639)
			ite2 = ite2->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,with_union,(void))

Void ZPP_InteractionListener_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","addedToSpace",0xd900e8f9,"zpp_nape.callbacks.ZPP_InteractionListener.addedToSpace","zpp_nape/callbacks/Listener.hx",642,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(642)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(643)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(643)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(643)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(643)
		bool pre = tmp2;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(644)
		{
			HX_STACK_LINE(644)
			::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->options1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(644)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = tmp3->includes->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(644)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = tmp4;		HX_STACK_VAR(ite1,"ite1");
			HX_STACK_LINE(644)
			::zpp_nape::callbacks::ZPP_OptionType tmp5 = this->options2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(644)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = tmp5->includes->head;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(644)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = tmp6;		HX_STACK_VAR(ite2,"ite2");
			HX_STACK_LINE(644)
			while((true)){
				HX_STACK_LINE(644)
				bool tmp7 = (ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(644)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(644)
				if ((tmp7)){
					HX_STACK_LINE(644)
					tmp8 = (ite2 != null());
				}
				else{
					HX_STACK_LINE(644)
					tmp8 = false;
				}
				HX_STACK_LINE(644)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(644)
				if ((tmp9)){
					HX_STACK_LINE(644)
					break;
				}
				HX_STACK_LINE(644)
				::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(644)
				::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
				HX_STACK_LINE(644)
				bool tmp10 = (cb1 == cb2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(644)
				if ((tmp10)){
					HX_STACK_LINE(644)
					::zpp_nape::callbacks::ZPP_CbType tmp11 = cb1;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(644)
					{
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp12 = tmp11->listeners->head;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(645)
									while((true)){
										HX_STACK_LINE(645)
										bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(645)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(645)
										if ((tmp14)){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											bool tmp15 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(645)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(645)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(645)
											if ((tmp16)){
												HX_STACK_LINE(645)
												bool tmp18 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(645)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(645)
												bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(645)
												if ((tmp20)){
													HX_STACK_LINE(645)
													tmp17 = (_g->id > j->id);
												}
												else{
													HX_STACK_LINE(645)
													tmp17 = false;
												}
											}
											else{
												HX_STACK_LINE(645)
												tmp17 = true;
											}
											HX_STACK_LINE(645)
											if ((tmp17)){
												HX_STACK_LINE(645)
												break;
											}
											HX_STACK_LINE(645)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(645)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp11->listeners;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(645)
											bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(645)
											if ((tmp14)){
												HX_STACK_LINE(645)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(645)
												ret = tmp15;
											}
											else{
												HX_STACK_LINE(645)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(645)
												ret = tmp15;
												HX_STACK_LINE(645)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(645)
												ret->next = null();
											}
											HX_STACK_LINE(645)
											Dynamic();
										}
										HX_STACK_LINE(645)
										ret->elt = _g;
										HX_STACK_LINE(645)
										tmp12 = ret;
									}
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp12;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(645)
									bool tmp13 = (pre1 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(645)
									if ((tmp13)){
										HX_STACK_LINE(645)
										temp->next = _this->head;
										HX_STACK_LINE(645)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(645)
										temp->next = pre1->next;
										HX_STACK_LINE(645)
										pre1->next = temp;
									}
									HX_STACK_LINE(645)
									bool tmp14 = _this->modified = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(645)
									_this->pushmod = tmp14;
									HX_STACK_LINE(645)
									(_this->length)++;
									HX_STACK_LINE(645)
									temp;
								}
							}
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp12 = tmp11->cbsets->head;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(645)
								while((true)){
									HX_STACK_LINE(645)
									bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(645)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(645)
									if ((tmp14)){
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										cb->zip_listeners = true;
										HX_STACK_LINE(645)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(645)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(646)
						bool tmp12 = pre;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(646)
						if ((tmp12)){
							HX_STACK_LINE(648)
							::zpp_nape::util::ZNPNode_ZPP_Interactor tmp13 = tmp11->interactors->head;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(648)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(649)
							while((true)){
								HX_STACK_LINE(649)
								bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(649)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(649)
								if ((tmp15)){
									HX_STACK_LINE(649)
									break;
								}
								HX_STACK_LINE(650)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(651)
								i->wake();
								HX_STACK_LINE(652)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(644)
					ite1 = ite1->next;
					HX_STACK_LINE(644)
					ite2 = ite2->next;
				}
				else{
					HX_STACK_LINE(644)
					bool tmp11 = (cb1->id < cb2->id);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(644)
					if ((tmp11)){
						HX_STACK_LINE(644)
						::zpp_nape::callbacks::ZPP_CbType tmp12 = cb1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(644)
						{
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = tmp12->listeners->head;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(645)
										while((true)){
											HX_STACK_LINE(645)
											bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(645)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(645)
											if ((tmp15)){
												HX_STACK_LINE(645)
												break;
											}
											HX_STACK_LINE(645)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												bool tmp16 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(645)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(645)
												bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(645)
												if ((tmp17)){
													HX_STACK_LINE(645)
													bool tmp19 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(645)
													bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(645)
													bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(645)
													if ((tmp21)){
														HX_STACK_LINE(645)
														tmp18 = (_g->id > j->id);
													}
													else{
														HX_STACK_LINE(645)
														tmp18 = false;
													}
												}
												else{
													HX_STACK_LINE(645)
													tmp18 = true;
												}
												HX_STACK_LINE(645)
												if ((tmp18)){
													HX_STACK_LINE(645)
													break;
												}
												HX_STACK_LINE(645)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(645)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp12->listeners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp14 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(645)
												bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(645)
												if ((tmp15)){
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp16 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(645)
													ret = tmp16;
												}
												else{
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp16 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(645)
													ret = tmp16;
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(645)
													ret->next = null();
												}
												HX_STACK_LINE(645)
												Dynamic();
											}
											HX_STACK_LINE(645)
											ret->elt = _g;
											HX_STACK_LINE(645)
											tmp13 = ret;
										}
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp13;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(645)
										bool tmp14 = (pre1 == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(645)
										if ((tmp14)){
											HX_STACK_LINE(645)
											temp->next = _this->head;
											HX_STACK_LINE(645)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(645)
											temp->next = pre1->next;
											HX_STACK_LINE(645)
											pre1->next = temp;
										}
										HX_STACK_LINE(645)
										bool tmp15 = _this->modified = true;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(645)
										_this->pushmod = tmp15;
										HX_STACK_LINE(645)
										(_this->length)++;
										HX_STACK_LINE(645)
										temp;
									}
								}
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = tmp12->cbsets->head;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(645)
									while((true)){
										HX_STACK_LINE(645)
										bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(645)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(645)
										if ((tmp15)){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											cb->zip_listeners = true;
											HX_STACK_LINE(645)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(645)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(646)
							bool tmp13 = pre;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(646)
							if ((tmp13)){
								HX_STACK_LINE(648)
								::zpp_nape::util::ZNPNode_ZPP_Interactor tmp14 = tmp12->interactors->head;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(648)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(649)
								while((true)){
									HX_STACK_LINE(649)
									bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(649)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(649)
									if ((tmp16)){
										HX_STACK_LINE(649)
										break;
									}
									HX_STACK_LINE(650)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(651)
									i->wake();
									HX_STACK_LINE(652)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(644)
						ite1 = ite1->next;
					}
					else{
						HX_STACK_LINE(644)
						::zpp_nape::callbacks::ZPP_CbType tmp12 = cb2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(644)
						{
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = tmp12->listeners->head;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(645)
										while((true)){
											HX_STACK_LINE(645)
											bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(645)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(645)
											if ((tmp15)){
												HX_STACK_LINE(645)
												break;
											}
											HX_STACK_LINE(645)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												bool tmp16 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(645)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(645)
												bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(645)
												if ((tmp17)){
													HX_STACK_LINE(645)
													bool tmp19 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(645)
													bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(645)
													bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(645)
													if ((tmp21)){
														HX_STACK_LINE(645)
														tmp18 = (_g->id > j->id);
													}
													else{
														HX_STACK_LINE(645)
														tmp18 = false;
													}
												}
												else{
													HX_STACK_LINE(645)
													tmp18 = true;
												}
												HX_STACK_LINE(645)
												if ((tmp18)){
													HX_STACK_LINE(645)
													break;
												}
												HX_STACK_LINE(645)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(645)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp12->listeners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(645)
											{
												HX_STACK_LINE(645)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp14 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(645)
												bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(645)
												if ((tmp15)){
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp16 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(645)
													ret = tmp16;
												}
												else{
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp16 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(645)
													ret = tmp16;
													HX_STACK_LINE(645)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(645)
													ret->next = null();
												}
												HX_STACK_LINE(645)
												Dynamic();
											}
											HX_STACK_LINE(645)
											ret->elt = _g;
											HX_STACK_LINE(645)
											tmp13 = ret;
										}
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp13;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(645)
										bool tmp14 = (pre1 == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(645)
										if ((tmp14)){
											HX_STACK_LINE(645)
											temp->next = _this->head;
											HX_STACK_LINE(645)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(645)
											temp->next = pre1->next;
											HX_STACK_LINE(645)
											pre1->next = temp;
										}
										HX_STACK_LINE(645)
										bool tmp15 = _this->modified = true;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(645)
										_this->pushmod = tmp15;
										HX_STACK_LINE(645)
										(_this->length)++;
										HX_STACK_LINE(645)
										temp;
									}
								}
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = tmp12->cbsets->head;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(645)
									while((true)){
										HX_STACK_LINE(645)
										bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(645)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(645)
										if ((tmp15)){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(645)
										{
											HX_STACK_LINE(645)
											cb->zip_listeners = true;
											HX_STACK_LINE(645)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(645)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(646)
							bool tmp13 = pre;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(646)
							if ((tmp13)){
								HX_STACK_LINE(648)
								::zpp_nape::util::ZNPNode_ZPP_Interactor tmp14 = tmp12->interactors->head;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(648)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(649)
								while((true)){
									HX_STACK_LINE(649)
									bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(649)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(649)
									if ((tmp16)){
										HX_STACK_LINE(649)
										break;
									}
									HX_STACK_LINE(650)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(651)
									i->wake();
									HX_STACK_LINE(652)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(644)
						ite2 = ite2->next;
					}
				}
			}
			HX_STACK_LINE(644)
			while((true)){
				HX_STACK_LINE(644)
				bool tmp7 = (ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(644)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(644)
				if ((tmp8)){
					HX_STACK_LINE(644)
					break;
				}
				HX_STACK_LINE(644)
				::zpp_nape::callbacks::ZPP_CbType tmp9 = ite1->elt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(644)
				{
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp10 = tmp9->listeners->head;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(645)
								while((true)){
									HX_STACK_LINE(645)
									bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(645)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(645)
									if ((tmp12)){
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										bool tmp13 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(645)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(645)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(645)
										if ((tmp14)){
											HX_STACK_LINE(645)
											bool tmp16 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(645)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(645)
											bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(645)
											if ((tmp18)){
												HX_STACK_LINE(645)
												tmp15 = (_g->id > j->id);
											}
											else{
												HX_STACK_LINE(645)
												tmp15 = false;
											}
										}
										else{
											HX_STACK_LINE(645)
											tmp15 = true;
										}
										HX_STACK_LINE(645)
										if ((tmp15)){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										pre1 = cx_ite;
									}
									HX_STACK_LINE(645)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp9->listeners;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp11 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(645)
										bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(645)
										if ((tmp12)){
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(645)
											ret = tmp13;
										}
										else{
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(645)
											ret = tmp13;
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
											HX_STACK_LINE(645)
											ret->next = null();
										}
										HX_STACK_LINE(645)
										Dynamic();
									}
									HX_STACK_LINE(645)
									ret->elt = _g;
									HX_STACK_LINE(645)
									tmp10 = ret;
								}
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp10;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(645)
								bool tmp11 = (pre1 == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(645)
								if ((tmp11)){
									HX_STACK_LINE(645)
									temp->next = _this->head;
									HX_STACK_LINE(645)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(645)
									temp->next = pre1->next;
									HX_STACK_LINE(645)
									pre1->next = temp;
								}
								HX_STACK_LINE(645)
								bool tmp12 = _this->modified = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(645)
								_this->pushmod = tmp12;
								HX_STACK_LINE(645)
								(_this->length)++;
								HX_STACK_LINE(645)
								temp;
							}
						}
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp10 = tmp9->cbsets->head;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(645)
							while((true)){
								HX_STACK_LINE(645)
								bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(645)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(645)
								if ((tmp12)){
									HX_STACK_LINE(645)
									break;
								}
								HX_STACK_LINE(645)
								::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									cb->zip_listeners = true;
									HX_STACK_LINE(645)
									cb->invalidate_pairs();
								}
								HX_STACK_LINE(645)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(646)
					bool tmp10 = pre;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(646)
					if ((tmp10)){
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Interactor tmp11 = tmp9->interactors->head;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(649)
						while((true)){
							HX_STACK_LINE(649)
							bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(649)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(649)
							if ((tmp13)){
								HX_STACK_LINE(649)
								break;
							}
							HX_STACK_LINE(650)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(651)
							i->wake();
							HX_STACK_LINE(652)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(644)
				ite1 = ite1->next;
			}
			HX_STACK_LINE(644)
			while((true)){
				HX_STACK_LINE(644)
				bool tmp7 = (ite2 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(644)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(644)
				if ((tmp8)){
					HX_STACK_LINE(644)
					break;
				}
				HX_STACK_LINE(644)
				::zpp_nape::callbacks::ZPP_CbType tmp9 = ite2->elt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(644)
				{
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp10 = tmp9->listeners->head;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(645)
								while((true)){
									HX_STACK_LINE(645)
									bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(645)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(645)
									if ((tmp12)){
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										bool tmp13 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(645)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(645)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(645)
										if ((tmp14)){
											HX_STACK_LINE(645)
											bool tmp16 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(645)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(645)
											bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(645)
											if ((tmp18)){
												HX_STACK_LINE(645)
												tmp15 = (_g->id > j->id);
											}
											else{
												HX_STACK_LINE(645)
												tmp15 = false;
											}
										}
										else{
											HX_STACK_LINE(645)
											tmp15 = true;
										}
										HX_STACK_LINE(645)
										if ((tmp15)){
											HX_STACK_LINE(645)
											break;
										}
										HX_STACK_LINE(645)
										pre1 = cx_ite;
									}
									HX_STACK_LINE(645)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp9->listeners;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(645)
									{
										HX_STACK_LINE(645)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp11 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(645)
										bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(645)
										if ((tmp12)){
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(645)
											ret = tmp13;
										}
										else{
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(645)
											ret = tmp13;
											HX_STACK_LINE(645)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
											HX_STACK_LINE(645)
											ret->next = null();
										}
										HX_STACK_LINE(645)
										Dynamic();
									}
									HX_STACK_LINE(645)
									ret->elt = _g;
									HX_STACK_LINE(645)
									tmp10 = ret;
								}
								HX_STACK_LINE(645)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp10;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(645)
								bool tmp11 = (pre1 == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(645)
								if ((tmp11)){
									HX_STACK_LINE(645)
									temp->next = _this->head;
									HX_STACK_LINE(645)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(645)
									temp->next = pre1->next;
									HX_STACK_LINE(645)
									pre1->next = temp;
								}
								HX_STACK_LINE(645)
								bool tmp12 = _this->modified = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(645)
								_this->pushmod = tmp12;
								HX_STACK_LINE(645)
								(_this->length)++;
								HX_STACK_LINE(645)
								temp;
							}
						}
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp10 = tmp9->cbsets->head;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(645)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(645)
							while((true)){
								HX_STACK_LINE(645)
								bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(645)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(645)
								if ((tmp12)){
									HX_STACK_LINE(645)
									break;
								}
								HX_STACK_LINE(645)
								::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
								HX_STACK_LINE(645)
								{
									HX_STACK_LINE(645)
									cb->zip_listeners = true;
									HX_STACK_LINE(645)
									cb->invalidate_pairs();
								}
								HX_STACK_LINE(645)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(646)
					bool tmp10 = pre;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(646)
					if ((tmp10)){
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Interactor tmp11 = tmp9->interactors->head;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(649)
						while((true)){
							HX_STACK_LINE(649)
							bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(649)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(649)
							if ((tmp13)){
								HX_STACK_LINE(649)
								break;
							}
							HX_STACK_LINE(650)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(651)
							i->wake();
							HX_STACK_LINE(652)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(644)
				ite2 = ite2->next;
			}
		}
		HX_STACK_LINE(657)
		Dynamic tmp3 = this->cbtype_change1_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(657)
		::zpp_nape::callbacks::ZPP_OptionType tmp4 = this->options1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		tmp4->handler = tmp3;
		HX_STACK_LINE(658)
		Dynamic tmp5 = this->cbtype_change2_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(658)
		::zpp_nape::callbacks::ZPP_OptionType tmp6 = this->options2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(658)
		tmp6->handler = tmp5;
		HX_STACK_LINE(659)
		this->with_uniquesets(true);
	}
return null();
}


Void ZPP_InteractionListener_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","removedFromSpace",0xe92a46ca,"zpp_nape.callbacks.ZPP_InteractionListener.removedFromSpace","zpp_nape/callbacks/Listener.hx",661,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(661)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(662)
		this->with_uniquesets(false);
		HX_STACK_LINE(663)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(663)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(663)
		bool pre = tmp2;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->options1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(664)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = tmp3->includes->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(664)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = tmp4;		HX_STACK_VAR(ite1,"ite1");
			HX_STACK_LINE(664)
			::zpp_nape::callbacks::ZPP_OptionType tmp5 = this->options2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(664)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = tmp5->includes->head;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(664)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = tmp6;		HX_STACK_VAR(ite2,"ite2");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp7 = (ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(664)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(664)
				if ((tmp7)){
					HX_STACK_LINE(664)
					tmp8 = (ite2 != null());
				}
				else{
					HX_STACK_LINE(664)
					tmp8 = false;
				}
				HX_STACK_LINE(664)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(664)
				if ((tmp9)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(664)
				::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
				HX_STACK_LINE(664)
				bool tmp10 = (cb1 == cb2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(664)
				if ((tmp10)){
					HX_STACK_LINE(664)
					::zpp_nape::callbacks::ZPP_CbType tmp11 = cb1;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							::zpp_nape::callbacks::ZPP_InteractionListener tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(665)
							tmp11->listeners->remove(tmp12);
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = tmp11->cbsets->head;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(665)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(665)
								while((true)){
									HX_STACK_LINE(665)
									bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(665)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(665)
									if ((tmp15)){
										HX_STACK_LINE(665)
										break;
									}
									HX_STACK_LINE(665)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(665)
									{
										HX_STACK_LINE(665)
										cb->zip_listeners = true;
										HX_STACK_LINE(665)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(665)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(666)
						bool tmp12 = pre;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(666)
						if ((tmp12)){
							HX_STACK_LINE(668)
							::zpp_nape::util::ZNPNode_ZPP_Interactor tmp13 = tmp11->interactors->head;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(668)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(669)
							while((true)){
								HX_STACK_LINE(669)
								bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(669)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(669)
								if ((tmp15)){
									HX_STACK_LINE(669)
									break;
								}
								HX_STACK_LINE(670)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(671)
								i->wake();
								HX_STACK_LINE(672)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(664)
					ite1 = ite1->next;
					HX_STACK_LINE(664)
					ite2 = ite2->next;
				}
				else{
					HX_STACK_LINE(664)
					bool tmp11 = (cb1->id < cb2->id);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(664)
					if ((tmp11)){
						HX_STACK_LINE(664)
						::zpp_nape::callbacks::ZPP_CbType tmp12 = cb1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								::zpp_nape::callbacks::ZPP_InteractionListener tmp13 = _g;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(665)
								tmp12->listeners->remove(tmp13);
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp14 = tmp12->cbsets->head;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(665)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(665)
									while((true)){
										HX_STACK_LINE(665)
										bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(665)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(665)
										if ((tmp16)){
											HX_STACK_LINE(665)
											break;
										}
										HX_STACK_LINE(665)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(665)
										{
											HX_STACK_LINE(665)
											cb->zip_listeners = true;
											HX_STACK_LINE(665)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(665)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(666)
							bool tmp13 = pre;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(666)
							if ((tmp13)){
								HX_STACK_LINE(668)
								::zpp_nape::util::ZNPNode_ZPP_Interactor tmp14 = tmp12->interactors->head;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(668)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(669)
								while((true)){
									HX_STACK_LINE(669)
									bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(669)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(669)
									if ((tmp16)){
										HX_STACK_LINE(669)
										break;
									}
									HX_STACK_LINE(670)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(671)
									i->wake();
									HX_STACK_LINE(672)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(664)
						ite1 = ite1->next;
					}
					else{
						HX_STACK_LINE(664)
						::zpp_nape::callbacks::ZPP_CbType tmp12 = cb2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								::zpp_nape::callbacks::ZPP_InteractionListener tmp13 = _g;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(665)
								tmp12->listeners->remove(tmp13);
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp14 = tmp12->cbsets->head;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(665)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(665)
									while((true)){
										HX_STACK_LINE(665)
										bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(665)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(665)
										if ((tmp16)){
											HX_STACK_LINE(665)
											break;
										}
										HX_STACK_LINE(665)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(665)
										{
											HX_STACK_LINE(665)
											cb->zip_listeners = true;
											HX_STACK_LINE(665)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(665)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(666)
							bool tmp13 = pre;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(666)
							if ((tmp13)){
								HX_STACK_LINE(668)
								::zpp_nape::util::ZNPNode_ZPP_Interactor tmp14 = tmp12->interactors->head;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(668)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(669)
								while((true)){
									HX_STACK_LINE(669)
									bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(669)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(669)
									if ((tmp16)){
										HX_STACK_LINE(669)
										break;
									}
									HX_STACK_LINE(670)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(671)
									i->wake();
									HX_STACK_LINE(672)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(664)
						ite2 = ite2->next;
					}
				}
			}
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp7 = (ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(664)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(664)
				if ((tmp8)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::zpp_nape::callbacks::ZPP_CbType tmp9 = ite1->elt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(665)
					{
						HX_STACK_LINE(665)
						::zpp_nape::callbacks::ZPP_InteractionListener tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(665)
						tmp9->listeners->remove(tmp10);
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp11 = tmp9->cbsets->head;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(665)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(665)
							while((true)){
								HX_STACK_LINE(665)
								bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(665)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(665)
								if ((tmp13)){
									HX_STACK_LINE(665)
									break;
								}
								HX_STACK_LINE(665)
								::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									cb->zip_listeners = true;
									HX_STACK_LINE(665)
									cb->invalidate_pairs();
								}
								HX_STACK_LINE(665)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(666)
					bool tmp10 = pre;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(666)
					if ((tmp10)){
						HX_STACK_LINE(668)
						::zpp_nape::util::ZNPNode_ZPP_Interactor tmp11 = tmp9->interactors->head;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(668)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(669)
						while((true)){
							HX_STACK_LINE(669)
							bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(669)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(669)
							if ((tmp13)){
								HX_STACK_LINE(669)
								break;
							}
							HX_STACK_LINE(670)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(671)
							i->wake();
							HX_STACK_LINE(672)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(664)
				ite1 = ite1->next;
			}
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp7 = (ite2 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(664)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(664)
				if ((tmp8)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::zpp_nape::callbacks::ZPP_CbType tmp9 = ite2->elt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(665)
					{
						HX_STACK_LINE(665)
						::zpp_nape::callbacks::ZPP_InteractionListener tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(665)
						tmp9->listeners->remove(tmp10);
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							::zpp_nape::util::ZNPNode_ZPP_CbSet tmp11 = tmp9->cbsets->head;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(665)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(665)
							while((true)){
								HX_STACK_LINE(665)
								bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(665)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(665)
								if ((tmp13)){
									HX_STACK_LINE(665)
									break;
								}
								HX_STACK_LINE(665)
								::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									cb->zip_listeners = true;
									HX_STACK_LINE(665)
									cb->invalidate_pairs();
								}
								HX_STACK_LINE(665)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(666)
					bool tmp10 = pre;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(666)
					if ((tmp10)){
						HX_STACK_LINE(668)
						::zpp_nape::util::ZNPNode_ZPP_Interactor tmp11 = tmp9->interactors->head;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(668)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(669)
						while((true)){
							HX_STACK_LINE(669)
							bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(669)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(669)
							if ((tmp13)){
								HX_STACK_LINE(669)
								break;
							}
							HX_STACK_LINE(670)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(671)
							i->wake();
							HX_STACK_LINE(672)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(664)
				ite2 = ite2->next;
			}
		}
		HX_STACK_LINE(677)
		::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->options1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(677)
		tmp3->handler = null();
		HX_STACK_LINE(678)
		::zpp_nape::callbacks::ZPP_OptionType tmp4 = this->options2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(678)
		tmp4->handler = null();
	}
return null();
}


Void ZPP_InteractionListener_obj::invalidate_precedence( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","invalidate_precedence",0x04144f40,"zpp_nape.callbacks.ZPP_InteractionListener.invalidate_precedence","zpp_nape/callbacks/Listener.hx",680,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(680)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(681)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(681)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(681)
		if ((tmp1)){
			HX_STACK_LINE(682)
			int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(682)
			int tmp3 = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(682)
			bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(682)
			bool pre = tmp4;		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				::zpp_nape::callbacks::ZPP_OptionType tmp5 = this->options1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(683)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = tmp5->includes->head;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(683)
				::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = tmp6;		HX_STACK_VAR(ite1,"ite1");
				HX_STACK_LINE(683)
				::zpp_nape::callbacks::ZPP_OptionType tmp7 = this->options2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(683)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = tmp7->includes->head;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(683)
				::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = tmp8;		HX_STACK_VAR(ite2,"ite2");
				HX_STACK_LINE(683)
				while((true)){
					HX_STACK_LINE(683)
					bool tmp9 = (ite1 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(683)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(683)
					if ((tmp9)){
						HX_STACK_LINE(683)
						tmp10 = (ite2 != null());
					}
					else{
						HX_STACK_LINE(683)
						tmp10 = false;
					}
					HX_STACK_LINE(683)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(683)
					if ((tmp11)){
						HX_STACK_LINE(683)
						break;
					}
					HX_STACK_LINE(683)
					::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
					HX_STACK_LINE(683)
					::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
					HX_STACK_LINE(683)
					bool tmp12 = (cb1 == cb2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(683)
					if ((tmp12)){
						HX_STACK_LINE(683)
						::zpp_nape::callbacks::ZPP_CbType tmp13 = cb1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(683)
						{
							HX_STACK_LINE(684)
							{
								HX_STACK_LINE(684)
								::zpp_nape::callbacks::ZPP_InteractionListener tmp14 = _g;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(684)
								tmp13->listeners->remove(tmp14);
								HX_STACK_LINE(684)
								{
									HX_STACK_LINE(684)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp15 = tmp13->cbsets->head;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(684)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(684)
									while((true)){
										HX_STACK_LINE(684)
										bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(684)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(684)
										if ((tmp17)){
											HX_STACK_LINE(684)
											break;
										}
										HX_STACK_LINE(684)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(684)
										{
											HX_STACK_LINE(684)
											cb->zip_listeners = true;
											HX_STACK_LINE(684)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(684)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp14 = tmp13->listeners->head;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(685)
										while((true)){
											HX_STACK_LINE(685)
											bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(685)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(685)
											if ((tmp16)){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												bool tmp17 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(685)
												bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(685)
												bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(685)
												if ((tmp18)){
													HX_STACK_LINE(685)
													bool tmp20 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(685)
													bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(685)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(685)
													if ((tmp22)){
														HX_STACK_LINE(685)
														tmp19 = (_g->id > j->id);
													}
													else{
														HX_STACK_LINE(685)
														tmp19 = false;
													}
												}
												else{
													HX_STACK_LINE(685)
													tmp19 = true;
												}
												HX_STACK_LINE(685)
												if ((tmp19)){
													HX_STACK_LINE(685)
													break;
												}
												HX_STACK_LINE(685)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(685)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp13->listeners;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(685)
												bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(685)
												if ((tmp16)){
													HX_STACK_LINE(685)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp17 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(685)
													ret = tmp17;
												}
												else{
													HX_STACK_LINE(685)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp17 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(685)
													ret = tmp17;
													HX_STACK_LINE(685)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(685)
													ret->next = null();
												}
												HX_STACK_LINE(685)
												Dynamic();
											}
											HX_STACK_LINE(685)
											ret->elt = _g;
											HX_STACK_LINE(685)
											tmp14 = ret;
										}
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp14;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(685)
										bool tmp15 = (pre1 == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(685)
										if ((tmp15)){
											HX_STACK_LINE(685)
											temp->next = _this->head;
											HX_STACK_LINE(685)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(685)
											temp->next = pre1->next;
											HX_STACK_LINE(685)
											pre1->next = temp;
										}
										HX_STACK_LINE(685)
										bool tmp16 = _this->modified = true;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(685)
										_this->pushmod = tmp16;
										HX_STACK_LINE(685)
										(_this->length)++;
										HX_STACK_LINE(685)
										temp;
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_CbSet tmp14 = tmp13->cbsets->head;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(685)
									while((true)){
										HX_STACK_LINE(685)
										bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(685)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(685)
										if ((tmp16)){
											HX_STACK_LINE(685)
											break;
										}
										HX_STACK_LINE(685)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											cb->zip_listeners = true;
											HX_STACK_LINE(685)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(685)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(686)
							bool tmp14 = pre;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(686)
							if ((tmp14)){
								HX_STACK_LINE(688)
								::zpp_nape::util::ZNPNode_ZPP_Interactor tmp15 = tmp13->interactors->head;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(688)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(689)
								while((true)){
									HX_STACK_LINE(689)
									bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(689)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(689)
									if ((tmp17)){
										HX_STACK_LINE(689)
										break;
									}
									HX_STACK_LINE(690)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(691)
									i->wake();
									HX_STACK_LINE(692)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(683)
						ite1 = ite1->next;
						HX_STACK_LINE(683)
						ite2 = ite2->next;
					}
					else{
						HX_STACK_LINE(683)
						bool tmp13 = (cb1->id < cb2->id);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(683)
						if ((tmp13)){
							HX_STACK_LINE(683)
							::zpp_nape::callbacks::ZPP_CbType tmp14 = cb1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(684)
								{
									HX_STACK_LINE(684)
									::zpp_nape::callbacks::ZPP_InteractionListener tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(684)
									tmp14->listeners->remove(tmp15);
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp16 = tmp14->cbsets->head;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(684)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(684)
										while((true)){
											HX_STACK_LINE(684)
											bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(684)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(684)
											if ((tmp18)){
												HX_STACK_LINE(684)
												break;
											}
											HX_STACK_LINE(684)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(684)
											{
												HX_STACK_LINE(684)
												cb->zip_listeners = true;
												HX_STACK_LINE(684)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(684)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = tmp14->listeners->head;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(685)
											while((true)){
												HX_STACK_LINE(685)
												bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(685)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(685)
												if ((tmp17)){
													HX_STACK_LINE(685)
													break;
												}
												HX_STACK_LINE(685)
												::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													bool tmp18 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(685)
													bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(685)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(685)
													if ((tmp19)){
														HX_STACK_LINE(685)
														bool tmp21 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(685)
														bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(685)
														bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(685)
														if ((tmp23)){
															HX_STACK_LINE(685)
															tmp20 = (_g->id > j->id);
														}
														else{
															HX_STACK_LINE(685)
															tmp20 = false;
														}
													}
													else{
														HX_STACK_LINE(685)
														tmp20 = true;
													}
													HX_STACK_LINE(685)
													if ((tmp20)){
														HX_STACK_LINE(685)
														break;
													}
													HX_STACK_LINE(685)
													pre1 = cx_ite;
												}
												HX_STACK_LINE(685)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp14->listeners;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp16 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(685)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(685)
													if ((tmp17)){
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp18 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(685)
														ret = tmp18;
													}
													else{
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp18 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(685)
														ret = tmp18;
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
														HX_STACK_LINE(685)
														ret->next = null();
													}
													HX_STACK_LINE(685)
													Dynamic();
												}
												HX_STACK_LINE(685)
												ret->elt = _g;
												HX_STACK_LINE(685)
												tmp15 = ret;
											}
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp15;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(685)
											bool tmp16 = (pre1 == null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(685)
											if ((tmp16)){
												HX_STACK_LINE(685)
												temp->next = _this->head;
												HX_STACK_LINE(685)
												_this->head = temp;
											}
											else{
												HX_STACK_LINE(685)
												temp->next = pre1->next;
												HX_STACK_LINE(685)
												pre1->next = temp;
											}
											HX_STACK_LINE(685)
											bool tmp17 = _this->modified = true;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(685)
											_this->pushmod = tmp17;
											HX_STACK_LINE(685)
											(_this->length)++;
											HX_STACK_LINE(685)
											temp;
										}
									}
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp15 = tmp14->cbsets->head;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(685)
										while((true)){
											HX_STACK_LINE(685)
											bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(685)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(685)
											if ((tmp17)){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												cb->zip_listeners = true;
												HX_STACK_LINE(685)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(685)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(686)
								bool tmp15 = pre;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(686)
								if ((tmp15)){
									HX_STACK_LINE(688)
									::zpp_nape::util::ZNPNode_ZPP_Interactor tmp16 = tmp14->interactors->head;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(688)
									::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(689)
									while((true)){
										HX_STACK_LINE(689)
										bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(689)
										bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(689)
										if ((tmp18)){
											HX_STACK_LINE(689)
											break;
										}
										HX_STACK_LINE(690)
										::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(691)
										i->wake();
										HX_STACK_LINE(692)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(683)
							ite1 = ite1->next;
						}
						else{
							HX_STACK_LINE(683)
							::zpp_nape::callbacks::ZPP_CbType tmp14 = cb2;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(684)
								{
									HX_STACK_LINE(684)
									::zpp_nape::callbacks::ZPP_InteractionListener tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(684)
									tmp14->listeners->remove(tmp15);
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp16 = tmp14->cbsets->head;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(684)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(684)
										while((true)){
											HX_STACK_LINE(684)
											bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(684)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(684)
											if ((tmp18)){
												HX_STACK_LINE(684)
												break;
											}
											HX_STACK_LINE(684)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(684)
											{
												HX_STACK_LINE(684)
												cb->zip_listeners = true;
												HX_STACK_LINE(684)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(684)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = tmp14->listeners->head;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(685)
											while((true)){
												HX_STACK_LINE(685)
												bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(685)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(685)
												if ((tmp17)){
													HX_STACK_LINE(685)
													break;
												}
												HX_STACK_LINE(685)
												::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													bool tmp18 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(685)
													bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(685)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(685)
													if ((tmp19)){
														HX_STACK_LINE(685)
														bool tmp21 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(685)
														bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(685)
														bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(685)
														if ((tmp23)){
															HX_STACK_LINE(685)
															tmp20 = (_g->id > j->id);
														}
														else{
															HX_STACK_LINE(685)
															tmp20 = false;
														}
													}
													else{
														HX_STACK_LINE(685)
														tmp20 = true;
													}
													HX_STACK_LINE(685)
													if ((tmp20)){
														HX_STACK_LINE(685)
														break;
													}
													HX_STACK_LINE(685)
													pre1 = cx_ite;
												}
												HX_STACK_LINE(685)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp14->listeners;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(685)
												{
													HX_STACK_LINE(685)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp16 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(685)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(685)
													if ((tmp17)){
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp18 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(685)
														ret = tmp18;
													}
													else{
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp18 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(685)
														ret = tmp18;
														HX_STACK_LINE(685)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
														HX_STACK_LINE(685)
														ret->next = null();
													}
													HX_STACK_LINE(685)
													Dynamic();
												}
												HX_STACK_LINE(685)
												ret->elt = _g;
												HX_STACK_LINE(685)
												tmp15 = ret;
											}
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp15;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(685)
											bool tmp16 = (pre1 == null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(685)
											if ((tmp16)){
												HX_STACK_LINE(685)
												temp->next = _this->head;
												HX_STACK_LINE(685)
												_this->head = temp;
											}
											else{
												HX_STACK_LINE(685)
												temp->next = pre1->next;
												HX_STACK_LINE(685)
												pre1->next = temp;
											}
											HX_STACK_LINE(685)
											bool tmp17 = _this->modified = true;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(685)
											_this->pushmod = tmp17;
											HX_STACK_LINE(685)
											(_this->length)++;
											HX_STACK_LINE(685)
											temp;
										}
									}
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_CbSet tmp15 = tmp14->cbsets->head;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(685)
										while((true)){
											HX_STACK_LINE(685)
											bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(685)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(685)
											if ((tmp17)){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(685)
											{
												HX_STACK_LINE(685)
												cb->zip_listeners = true;
												HX_STACK_LINE(685)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(685)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(686)
								bool tmp15 = pre;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(686)
								if ((tmp15)){
									HX_STACK_LINE(688)
									::zpp_nape::util::ZNPNode_ZPP_Interactor tmp16 = tmp14->interactors->head;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(688)
									::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(689)
									while((true)){
										HX_STACK_LINE(689)
										bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(689)
										bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(689)
										if ((tmp18)){
											HX_STACK_LINE(689)
											break;
										}
										HX_STACK_LINE(690)
										::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(691)
										i->wake();
										HX_STACK_LINE(692)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(683)
							ite2 = ite2->next;
						}
					}
				}
				HX_STACK_LINE(683)
				while((true)){
					HX_STACK_LINE(683)
					bool tmp9 = (ite1 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(683)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(683)
					if ((tmp10)){
						HX_STACK_LINE(683)
						break;
					}
					HX_STACK_LINE(683)
					::zpp_nape::callbacks::ZPP_CbType tmp11 = ite1->elt;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(684)
						{
							HX_STACK_LINE(684)
							::zpp_nape::callbacks::ZPP_InteractionListener tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(684)
							tmp11->listeners->remove(tmp12);
							HX_STACK_LINE(684)
							{
								HX_STACK_LINE(684)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = tmp11->cbsets->head;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(684)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(684)
								while((true)){
									HX_STACK_LINE(684)
									bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(684)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(684)
									if ((tmp15)){
										HX_STACK_LINE(684)
										break;
									}
									HX_STACK_LINE(684)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										cb->zip_listeners = true;
										HX_STACK_LINE(684)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(684)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(685)
						{
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp12 = tmp11->listeners->head;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(685)
									while((true)){
										HX_STACK_LINE(685)
										bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(685)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(685)
										if ((tmp14)){
											HX_STACK_LINE(685)
											break;
										}
										HX_STACK_LINE(685)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											bool tmp15 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(685)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(685)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(685)
											if ((tmp16)){
												HX_STACK_LINE(685)
												bool tmp18 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(685)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(685)
												bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(685)
												if ((tmp20)){
													HX_STACK_LINE(685)
													tmp17 = (_g->id > j->id);
												}
												else{
													HX_STACK_LINE(685)
													tmp17 = false;
												}
											}
											else{
												HX_STACK_LINE(685)
												tmp17 = true;
											}
											HX_STACK_LINE(685)
											if ((tmp17)){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(685)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp11->listeners;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(685)
											bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(685)
											if ((tmp14)){
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(685)
												ret = tmp15;
											}
											else{
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(685)
												ret = tmp15;
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(685)
												ret->next = null();
											}
											HX_STACK_LINE(685)
											Dynamic();
										}
										HX_STACK_LINE(685)
										ret->elt = _g;
										HX_STACK_LINE(685)
										tmp12 = ret;
									}
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp12;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(685)
									bool tmp13 = (pre1 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(685)
									if ((tmp13)){
										HX_STACK_LINE(685)
										temp->next = _this->head;
										HX_STACK_LINE(685)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(685)
										temp->next = pre1->next;
										HX_STACK_LINE(685)
										pre1->next = temp;
									}
									HX_STACK_LINE(685)
									bool tmp14 = _this->modified = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(685)
									_this->pushmod = tmp14;
									HX_STACK_LINE(685)
									(_this->length)++;
									HX_STACK_LINE(685)
									temp;
								}
							}
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp12 = tmp11->cbsets->head;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(685)
								while((true)){
									HX_STACK_LINE(685)
									bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(685)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(685)
									if ((tmp14)){
										HX_STACK_LINE(685)
										break;
									}
									HX_STACK_LINE(685)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										cb->zip_listeners = true;
										HX_STACK_LINE(685)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(685)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(686)
						bool tmp12 = pre;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(686)
						if ((tmp12)){
							HX_STACK_LINE(688)
							::zpp_nape::util::ZNPNode_ZPP_Interactor tmp13 = tmp11->interactors->head;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(689)
							while((true)){
								HX_STACK_LINE(689)
								bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(689)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(689)
								if ((tmp15)){
									HX_STACK_LINE(689)
									break;
								}
								HX_STACK_LINE(690)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(691)
								i->wake();
								HX_STACK_LINE(692)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(683)
					ite1 = ite1->next;
				}
				HX_STACK_LINE(683)
				while((true)){
					HX_STACK_LINE(683)
					bool tmp9 = (ite2 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(683)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(683)
					if ((tmp10)){
						HX_STACK_LINE(683)
						break;
					}
					HX_STACK_LINE(683)
					::zpp_nape::callbacks::ZPP_CbType tmp11 = ite2->elt;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(684)
						{
							HX_STACK_LINE(684)
							::zpp_nape::callbacks::ZPP_InteractionListener tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(684)
							tmp11->listeners->remove(tmp12);
							HX_STACK_LINE(684)
							{
								HX_STACK_LINE(684)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp13 = tmp11->cbsets->head;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(684)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(684)
								while((true)){
									HX_STACK_LINE(684)
									bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(684)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(684)
									if ((tmp15)){
										HX_STACK_LINE(684)
										break;
									}
									HX_STACK_LINE(684)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										cb->zip_listeners = true;
										HX_STACK_LINE(684)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(684)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(685)
						{
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp12 = tmp11->listeners->head;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(685)
									while((true)){
										HX_STACK_LINE(685)
										bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(685)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(685)
										if ((tmp14)){
											HX_STACK_LINE(685)
											break;
										}
										HX_STACK_LINE(685)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											bool tmp15 = (_g->precedence > j->precedence);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(685)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(685)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(685)
											if ((tmp16)){
												HX_STACK_LINE(685)
												bool tmp18 = (_g->precedence == j->precedence);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(685)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(685)
												bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(685)
												if ((tmp20)){
													HX_STACK_LINE(685)
													tmp17 = (_g->id > j->id);
												}
												else{
													HX_STACK_LINE(685)
													tmp17 = false;
												}
											}
											else{
												HX_STACK_LINE(685)
												tmp17 = true;
											}
											HX_STACK_LINE(685)
											if ((tmp17)){
												HX_STACK_LINE(685)
												break;
											}
											HX_STACK_LINE(685)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(685)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(685)
								{
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp11->listeners;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(685)
										{
											HX_STACK_LINE(685)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp13 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(685)
											bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(685)
											if ((tmp14)){
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(685)
												ret = tmp15;
											}
											else{
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp15 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(685)
												ret = tmp15;
												HX_STACK_LINE(685)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(685)
												ret->next = null();
											}
											HX_STACK_LINE(685)
											Dynamic();
										}
										HX_STACK_LINE(685)
										ret->elt = _g;
										HX_STACK_LINE(685)
										tmp12 = ret;
									}
									HX_STACK_LINE(685)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp12;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(685)
									bool tmp13 = (pre1 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(685)
									if ((tmp13)){
										HX_STACK_LINE(685)
										temp->next = _this->head;
										HX_STACK_LINE(685)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(685)
										temp->next = pre1->next;
										HX_STACK_LINE(685)
										pre1->next = temp;
									}
									HX_STACK_LINE(685)
									bool tmp14 = _this->modified = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(685)
									_this->pushmod = tmp14;
									HX_STACK_LINE(685)
									(_this->length)++;
									HX_STACK_LINE(685)
									temp;
								}
							}
							HX_STACK_LINE(685)
							{
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_CbSet tmp12 = tmp11->cbsets->head;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(685)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(685)
								while((true)){
									HX_STACK_LINE(685)
									bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(685)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(685)
									if ((tmp14)){
										HX_STACK_LINE(685)
										break;
									}
									HX_STACK_LINE(685)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										cb->zip_listeners = true;
										HX_STACK_LINE(685)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(685)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(686)
						bool tmp12 = pre;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(686)
						if ((tmp12)){
							HX_STACK_LINE(688)
							::zpp_nape::util::ZNPNode_ZPP_Interactor tmp13 = tmp11->interactors->head;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(689)
							while((true)){
								HX_STACK_LINE(689)
								bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(689)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(689)
								if ((tmp15)){
									HX_STACK_LINE(689)
									break;
								}
								HX_STACK_LINE(690)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(691)
								i->wake();
								HX_STACK_LINE(692)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(683)
					ite2 = ite2->next;
				}
			}
		}
	}
return null();
}


Void ZPP_InteractionListener_obj::cbtype_change1( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","cbtype_change1",0xd11af429,"zpp_nape.callbacks.ZPP_InteractionListener.cbtype_change1","zpp_nape/callbacks/Listener.hx",699,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(700)
		::zpp_nape::callbacks::ZPP_OptionType tmp = this->options1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(700)
		::zpp_nape::callbacks::ZPP_CbType tmp1 = cb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		bool tmp2 = included;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		bool tmp3 = added;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		this->cbtype_change(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,cbtype_change1,(void))

Void ZPP_InteractionListener_obj::cbtype_change2( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","cbtype_change2",0xd11af42a,"zpp_nape.callbacks.ZPP_InteractionListener.cbtype_change2","zpp_nape/callbacks/Listener.hx",702,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(703)
		::zpp_nape::callbacks::ZPP_OptionType tmp = this->options2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(703)
		::zpp_nape::callbacks::ZPP_CbType tmp1 = cb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(703)
		bool tmp2 = included;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		bool tmp3 = added;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(703)
		this->cbtype_change(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,cbtype_change2,(void))

Void ZPP_InteractionListener_obj::cbtype_change( ::zpp_nape::callbacks::ZPP_OptionType options,::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","cbtype_change",0x0461b308,"zpp_nape.callbacks.ZPP_InteractionListener.cbtype_change","zpp_nape/callbacks/Listener.hx",705,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(707)
		this->removedFromSpace();
		HX_STACK_LINE(708)
		{
			HX_STACK_LINE(708)
			bool tmp = included;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(708)
			if ((tmp)){
				HX_STACK_LINE(708)
				bool tmp1 = added;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(708)
				if ((tmp1)){
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = options->includes->head;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp2;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(708)
						while((true)){
							HX_STACK_LINE(708)
							bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(708)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(708)
							if ((tmp4)){
								HX_STACK_LINE(708)
								break;
							}
							HX_STACK_LINE(708)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(708)
							{
								HX_STACK_LINE(708)
								bool tmp5 = (cb->id < j->id);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(708)
								if ((tmp5)){
									HX_STACK_LINE(708)
									break;
								}
								HX_STACK_LINE(708)
								pre = cx_ite;
							}
							HX_STACK_LINE(708)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPList_ZPP_CbType _this = options->includes;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(708)
							{
								HX_STACK_LINE(708)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(708)
								bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(708)
								if ((tmp4)){
									HX_STACK_LINE(708)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(708)
									ret = tmp5;
								}
								else{
									HX_STACK_LINE(708)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(708)
									ret = tmp5;
									HX_STACK_LINE(708)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(708)
									ret->next = null();
								}
								HX_STACK_LINE(708)
								Dynamic();
							}
							HX_STACK_LINE(708)
							ret->elt = cb;
							HX_STACK_LINE(708)
							tmp2 = ret;
						}
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp2;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(708)
						bool tmp3 = (pre == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(708)
						if ((tmp3)){
							HX_STACK_LINE(708)
							temp->next = _this->head;
							HX_STACK_LINE(708)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(708)
							temp->next = pre->next;
							HX_STACK_LINE(708)
							pre->next = temp;
						}
						HX_STACK_LINE(708)
						bool tmp4 = _this->modified = true;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(708)
						_this->pushmod = tmp4;
						HX_STACK_LINE(708)
						(_this->length)++;
						HX_STACK_LINE(708)
						temp;
					}
				}
				else{
					HX_STACK_LINE(708)
					::zpp_nape::callbacks::ZPP_CbType tmp2 = cb;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(708)
					options->includes->remove(tmp2);
				}
			}
			else{
				HX_STACK_LINE(708)
				bool tmp1 = added;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(708)
				if ((tmp1)){
					HX_STACK_LINE(708)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = options->excludes->head;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp2;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(708)
						while((true)){
							HX_STACK_LINE(708)
							bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(708)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(708)
							if ((tmp4)){
								HX_STACK_LINE(708)
								break;
							}
							HX_STACK_LINE(708)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(708)
							{
								HX_STACK_LINE(708)
								bool tmp5 = (cb->id < j->id);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(708)
								if ((tmp5)){
									HX_STACK_LINE(708)
									break;
								}
								HX_STACK_LINE(708)
								pre = cx_ite;
							}
							HX_STACK_LINE(708)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPList_ZPP_CbType _this = options->excludes;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(708)
							{
								HX_STACK_LINE(708)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(708)
								bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(708)
								if ((tmp4)){
									HX_STACK_LINE(708)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(708)
									ret = tmp5;
								}
								else{
									HX_STACK_LINE(708)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(708)
									ret = tmp5;
									HX_STACK_LINE(708)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(708)
									ret->next = null();
								}
								HX_STACK_LINE(708)
								Dynamic();
							}
							HX_STACK_LINE(708)
							ret->elt = cb;
							HX_STACK_LINE(708)
							tmp2 = ret;
						}
						HX_STACK_LINE(708)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp2;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(708)
						bool tmp3 = (pre == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(708)
						if ((tmp3)){
							HX_STACK_LINE(708)
							temp->next = _this->head;
							HX_STACK_LINE(708)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(708)
							temp->next = pre->next;
							HX_STACK_LINE(708)
							pre->next = temp;
						}
						HX_STACK_LINE(708)
						bool tmp4 = _this->modified = true;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(708)
						_this->pushmod = tmp4;
						HX_STACK_LINE(708)
						(_this->length)++;
						HX_STACK_LINE(708)
						temp;
					}
				}
				else{
					HX_STACK_LINE(708)
					::zpp_nape::callbacks::ZPP_CbType tmp2 = cb;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(708)
					options->excludes->remove(tmp2);
				}
			}
		}
		HX_STACK_LINE(709)
		this->addedToSpace();
		HX_STACK_LINE(710)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_InteractionListener_obj,cbtype_change,(void))

Void ZPP_InteractionListener_obj::swapEvent( int newev){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_InteractionListener","swapEvent",0x2c1aef39,"zpp_nape.callbacks.ZPP_InteractionListener.swapEvent","zpp_nape/callbacks/Listener.hx",712,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newev,"newev")
		HX_STACK_LINE(714)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(714)
		if ((tmp2)){
			HX_STACK_LINE(715)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PreListener event can only be PRE","\xed","\xc3","\x53","\x5f"));
		}
		else{
			HX_STACK_LINE(717)
			int tmp3 = newev;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(717)
			int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BEGIN;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(717)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(717)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(717)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(717)
			if ((tmp6)){
				HX_STACK_LINE(717)
				int tmp8 = newev;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(717)
				int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_END;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(717)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(717)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(717)
				tmp7 = (tmp8 != tmp11);
			}
			else{
				HX_STACK_LINE(717)
				tmp7 = false;
			}
			HX_STACK_LINE(717)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(717)
			if ((tmp7)){
				HX_STACK_LINE(717)
				int tmp9 = newev;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(717)
				int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_ONGOING;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(717)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(717)
				tmp8 = (tmp9 != tmp11);
			}
			else{
				HX_STACK_LINE(717)
				tmp8 = false;
			}
			HX_STACK_LINE(717)
			if ((tmp8)){
				HX_STACK_LINE(718)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: InteractionListener event must be either BEGIN, END, ONGOING","\x82","\x8a","\xd3","\xe1"));
			}
		}
		HX_STACK_LINE(721)
		this->removedFromSpace();
		HX_STACK_LINE(722)
		this->event = newev;
		HX_STACK_LINE(723)
		this->addedToSpace();
	}
return null();
}


::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::UCbSet;

::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::VCbSet;

::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::WCbSet;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::UCbType;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::VCbType;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::WCbType;


ZPP_InteractionListener_obj::ZPP_InteractionListener_obj()
{
}

void ZPP_InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_InteractionListener);
	HX_MARK_MEMBER_NAME(outer_zni,"outer_zni");
	HX_MARK_MEMBER_NAME(outer_znp,"outer_znp");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(options1,"options1");
	HX_MARK_MEMBER_NAME(options2,"options2");
	HX_MARK_MEMBER_NAME(handleri,"handleri");
	HX_MARK_MEMBER_NAME(allowSleepingCallbacks,"allowSleepingCallbacks");
	HX_MARK_MEMBER_NAME(pure,"pure");
	HX_MARK_MEMBER_NAME(handlerp,"handlerp");
	::zpp_nape::callbacks::ZPP_Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zni,"outer_zni");
	HX_VISIT_MEMBER_NAME(outer_znp,"outer_znp");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(options1,"options1");
	HX_VISIT_MEMBER_NAME(options2,"options2");
	HX_VISIT_MEMBER_NAME(handleri,"handleri");
	HX_VISIT_MEMBER_NAME(allowSleepingCallbacks,"allowSleepingCallbacks");
	HX_VISIT_MEMBER_NAME(pure,"pure");
	HX_VISIT_MEMBER_NAME(handlerp,"handlerp");
	::zpp_nape::callbacks::ZPP_Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_InteractionListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { return pure; }
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return itype; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { return options1; }
		if (HX_FIELD_EQ(inName,"options2") ) { return options2; }
		if (HX_FIELD_EQ(inName,"handleri") ) { return handleri; }
		if (HX_FIELD_EQ(inName,"handlerp") ) { return handlerp; }
		if (HX_FIELD_EQ(inName,"CbSetset") ) { return CbSetset_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_zni") ) { return outer_zni; }
		if (HX_FIELD_EQ(inName,"outer_znp") ) { return outer_znp; }
		if (HX_FIELD_EQ(inName,"CbTypeset") ) { return CbTypeset_dyn(); }
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"with_union") ) { return with_union_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cbtype_change") ) { return cbtype_change_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cbtype_change1") ) { return cbtype_change1_dyn(); }
		if (HX_FIELD_EQ(inName,"cbtype_change2") ) { return cbtype_change2_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"with_uniquesets") ) { return with_uniquesets_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setInteractionType") ) { return setInteractionType_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { return allowSleepingCallbacks; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_InteractionListener_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"UCbSet") ) { outValue = UCbSet; return true;  }
		if (HX_FIELD_EQ(inName,"VCbSet") ) { outValue = VCbSet; return true;  }
		if (HX_FIELD_EQ(inName,"WCbSet") ) { outValue = WCbSet; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UCbType") ) { outValue = UCbType; return true;  }
		if (HX_FIELD_EQ(inName,"VCbType") ) { outValue = VCbType; return true;  }
		if (HX_FIELD_EQ(inName,"WCbType") ) { outValue = WCbType; return true;  }
	}
	return false;
}

Dynamic ZPP_InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { pure=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { options1=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options2") ) { options2=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handleri") ) { handleri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handlerp") ) { handlerp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_zni") ) { outer_zni=inValue.Cast< ::nape::callbacks::InteractionListener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_znp") ) { outer_znp=inValue.Cast< ::nape::callbacks::PreListener >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { allowSleepingCallbacks=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_InteractionListener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"UCbSet") ) { UCbSet=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return true; }
		if (HX_FIELD_EQ(inName,"VCbSet") ) { VCbSet=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return true; }
		if (HX_FIELD_EQ(inName,"WCbSet") ) { WCbSet=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UCbType") ) { UCbType=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return true; }
		if (HX_FIELD_EQ(inName,"VCbType") ) { VCbType=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return true; }
		if (HX_FIELD_EQ(inName,"WCbType") ) { WCbType=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return true; }
	}
	return false;
}

void ZPP_InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zni","\x31","\x4a","\x56","\xb7"));
	outFields->push(HX_HCSTRING("outer_znp","\x38","\x4a","\x56","\xb7"));
	outFields->push(HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"));
	outFields->push(HX_HCSTRING("options1","\x13","\xbf","\x6e","\x1e"));
	outFields->push(HX_HCSTRING("options2","\x14","\xbf","\x6e","\x1e"));
	outFields->push(HX_HCSTRING("allowSleepingCallbacks","\x9a","\x0e","\x6b","\x5a"));
	outFields->push(HX_HCSTRING("pure","\xf8","\x10","\x61","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::InteractionListener*/ ,(int)offsetof(ZPP_InteractionListener_obj,outer_zni),HX_HCSTRING("outer_zni","\x31","\x4a","\x56","\xb7")},
	{hx::fsObject /*::nape::callbacks::PreListener*/ ,(int)offsetof(ZPP_InteractionListener_obj,outer_znp),HX_HCSTRING("outer_znp","\x38","\x4a","\x56","\xb7")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionListener_obj,itype),HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_OptionType*/ ,(int)offsetof(ZPP_InteractionListener_obj,options1),HX_HCSTRING("options1","\x13","\xbf","\x6e","\x1e")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_OptionType*/ ,(int)offsetof(ZPP_InteractionListener_obj,options2),HX_HCSTRING("options2","\x14","\xbf","\x6e","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_InteractionListener_obj,handleri),HX_HCSTRING("handleri","\x5f","\x21","\x24","\xd5")},
	{hx::fsBool,(int)offsetof(ZPP_InteractionListener_obj,allowSleepingCallbacks),HX_HCSTRING("allowSleepingCallbacks","\x9a","\x0e","\x6b","\x5a")},
	{hx::fsBool,(int)offsetof(ZPP_InteractionListener_obj,pure),HX_HCSTRING("pure","\xf8","\x10","\x61","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_InteractionListener_obj,handlerp),HX_HCSTRING("handlerp","\x66","\x21","\x24","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbSet*/ ,(void *) &ZPP_InteractionListener_obj::UCbSet,HX_HCSTRING("UCbSet","\xae","\xc5","\x34","\xd1")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbSet*/ ,(void *) &ZPP_InteractionListener_obj::VCbSet,HX_HCSTRING("VCbSet","\x0d","\x22","\x90","\x37")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbSet*/ ,(void *) &ZPP_InteractionListener_obj::WCbSet,HX_HCSTRING("WCbSet","\x6c","\x7e","\xeb","\x9d")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(void *) &ZPP_InteractionListener_obj::UCbType,HX_HCSTRING("UCbType","\x2e","\x93","\xb0","\x3d")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(void *) &ZPP_InteractionListener_obj::VCbType,HX_HCSTRING("VCbType","\xef","\x09","\x46","\x67")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(void *) &ZPP_InteractionListener_obj::WCbType,HX_HCSTRING("WCbType","\xb0","\x80","\xdb","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zni","\x31","\x4a","\x56","\xb7"),
	HX_HCSTRING("outer_znp","\x38","\x4a","\x56","\xb7"),
	HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"),
	HX_HCSTRING("options1","\x13","\xbf","\x6e","\x1e"),
	HX_HCSTRING("options2","\x14","\xbf","\x6e","\x1e"),
	HX_HCSTRING("handleri","\x5f","\x21","\x24","\xd5"),
	HX_HCSTRING("allowSleepingCallbacks","\x9a","\x0e","\x6b","\x5a"),
	HX_HCSTRING("pure","\xf8","\x10","\x61","\x4a"),
	HX_HCSTRING("handlerp","\x66","\x21","\x24","\xd5"),
	HX_HCSTRING("setInteractionType","\x2a","\x7a","\x3d","\x98"),
	HX_HCSTRING("wake","\x24","\x5c","\xf2","\x4e"),
	HX_HCSTRING("CbSetset","\x5f","\x39","\x87","\x87"),
	HX_HCSTRING("CbTypeset","\x29","\xec","\xb2","\xe0"),
	HX_HCSTRING("with_uniquesets","\xfb","\x2a","\x8e","\xcf"),
	HX_HCSTRING("with_union","\xd6","\x6a","\x04","\x5a"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	HX_HCSTRING("invalidate_precedence","\x8e","\xf5","\x4a","\xdf"),
	HX_HCSTRING("cbtype_change1","\x1b","\x90","\xed","\x10"),
	HX_HCSTRING("cbtype_change2","\x1c","\x90","\xed","\x10"),
	HX_HCSTRING("cbtype_change","\x56","\x5b","\x22","\x6d"),
	HX_HCSTRING("swapEvent","\x87","\xd8","\x71","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::UCbSet,"UCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::VCbSet,"VCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::WCbSet,"WCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::UCbType,"UCbType");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::VCbType,"VCbType");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::WCbType,"WCbType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::UCbSet,"UCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::VCbSet,"VCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::WCbSet,"WCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::UCbType,"UCbType");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::VCbType,"VCbType");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::WCbType,"WCbType");
};

#endif

hx::Class ZPP_InteractionListener_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UCbSet","\xae","\xc5","\x34","\xd1"),
	HX_HCSTRING("VCbSet","\x0d","\x22","\x90","\x37"),
	HX_HCSTRING("WCbSet","\x6c","\x7e","\xeb","\x9d"),
	HX_HCSTRING("UCbType","\x2e","\x93","\xb0","\x3d"),
	HX_HCSTRING("VCbType","\xef","\x09","\x46","\x67"),
	HX_HCSTRING("WCbType","\xb0","\x80","\xdb","\x90"),
	::String(null()) };

void ZPP_InteractionListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_InteractionListener","\xa0","\x84","\x37","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_InteractionListener_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_InteractionListener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_InteractionListener_obj >;
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

void ZPP_InteractionListener_obj::__boot()
{
	UCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	VCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	WCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	UCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	VCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	WCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
}

} // end namespace zpp_nape
} // end namespace callbacks
