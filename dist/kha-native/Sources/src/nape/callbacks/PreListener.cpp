#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void PreListener_obj::__construct(::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence,hx::Null< bool >  __o_pure)
{
HX_STACK_FRAME("nape.callbacks.PreListener","new",0xc516dfa3,"nape.callbacks.PreListener.new","nape/callbacks/PreListener.hx",180,0x3d50ffef)
HX_STACK_THIS(this)
HX_STACK_ARG(interactionType,"interactionType")
HX_STACK_ARG(options1,"options1")
HX_STACK_ARG(options2,"options2")
HX_STACK_ARG(handler,"handler")
HX_STACK_ARG(__o_precedence,"precedence")
HX_STACK_ARG(__o_pure,"pure")
int precedence = __o_precedence.Default(0);
bool pure = __o_pure.Default(false);
{
	HX_STACK_LINE(184)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(338)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = true;
	HX_STACK_LINE(340)
	super::__construct();
	HX_STACK_LINE(342)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = false;
	HX_STACK_LINE(345)
	bool tmp = (handler == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	if ((tmp)){
		HX_STACK_LINE(346)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: PreListener must take a handler!","\x4f","\x97","\x8b","\x1b"));
	}
	HX_STACK_LINE(349)
	Dynamic tmp1 = options1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	::nape::callbacks::OptionType tmp2 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(349)
	Dynamic tmp3 = options2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(349)
	::nape::callbacks::OptionType tmp4 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(349)
	int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_PRE;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(349)
	int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(349)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp7 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::__new(tmp2,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(349)
	this->zpp_inner_zn = tmp7;
	HX_STACK_LINE(350)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(350)
	this->zpp_inner = tmp8;
	HX_STACK_LINE(351)
	::zpp_nape::callbacks::ZPP_Listener tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(351)
	tmp9->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(352)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(352)
	tmp10->outer_znp = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(353)
	::zpp_nape::callbacks::ZPP_Listener tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(353)
	tmp11->precedence = precedence;
	HX_STACK_LINE(354)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(354)
	tmp12->pure = pure;
	HX_STACK_LINE(355)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(355)
	tmp13->handlerp = handler;
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			bool tmp14 = (interactionType == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(356)
			if ((tmp14)){
				HX_STACK_LINE(356)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set listener interaction type to null","\xb3","\xd2","\x85","\x0d"));
			}
			HX_STACK_LINE(356)
			::nape::callbacks::InteractionType tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(356)
				int ret = tmp16->itype;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(356)
				int tmp17 = ret;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(356)
				int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(356)
				bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(356)
				if ((tmp19)){
					HX_STACK_LINE(356)
					::nape::callbacks::InteractionType tmp20 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(356)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(356)
					if ((tmp21)){
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp22 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp22;
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(356)
					tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				else{
					HX_STACK_LINE(356)
					int tmp20 = ret;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(356)
					int tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(356)
					bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(356)
					if ((tmp22)){
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp23 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(356)
						bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(356)
						if ((tmp24)){
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(356)
							::nape::callbacks::InteractionType tmp25 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp25;
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(356)
						tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					else{
						HX_STACK_LINE(356)
						int tmp23 = ret;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(356)
						int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(356)
						bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(356)
						if ((tmp25)){
							HX_STACK_LINE(356)
							::nape::callbacks::InteractionType tmp26 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(356)
							bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(356)
							if ((tmp27)){
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(356)
								::nape::callbacks::InteractionType tmp28 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp28;
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(356)
							tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						else{
							HX_STACK_LINE(356)
							int tmp26 = ret;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(356)
							int tmp27 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(356)
							bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(356)
							if ((tmp28)){
								HX_STACK_LINE(356)
								::nape::callbacks::InteractionType tmp29 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(356)
								bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(356)
								if ((tmp30)){
									HX_STACK_LINE(356)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(356)
									::nape::callbacks::InteractionType tmp31 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(356)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp31;
									HX_STACK_LINE(356)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(356)
								tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
							}
							else{
								HX_STACK_LINE(356)
								tmp15 = null();
							}
						}
					}
				}
			}
			HX_STACK_LINE(356)
			::nape::callbacks::InteractionType tmp16 = interactionType;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(356)
			bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(356)
			if ((tmp17)){
				HX_STACK_LINE(356)
				::nape::callbacks::InteractionType tmp18 = interactionType;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(356)
				::nape::callbacks::InteractionType tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::nape::callbacks::InteractionType tmp20 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(356)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(356)
					if ((tmp21)){
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp22 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp22;
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(356)
					tmp19 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				HX_STACK_LINE(356)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(356)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(356)
				if ((tmp20)){
					HX_STACK_LINE(356)
					tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
				}
				else{
					HX_STACK_LINE(356)
					::nape::callbacks::InteractionType tmp22 = interactionType;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(356)
					::nape::callbacks::InteractionType tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(356)
					{
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp24 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(356)
						bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(356)
						if ((tmp25)){
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(356)
							::nape::callbacks::InteractionType tmp26 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp26;
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(356)
						tmp23 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					HX_STACK_LINE(356)
					bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(356)
					if ((tmp24)){
						HX_STACK_LINE(356)
						tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
					}
					else{
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp25 = interactionType;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(356)
						{
							HX_STACK_LINE(356)
							::nape::callbacks::InteractionType tmp27 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(356)
							bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(356)
							if ((tmp28)){
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(356)
								::nape::callbacks::InteractionType tmp29 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp29;
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(356)
							tmp26 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						HX_STACK_LINE(356)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(356)
						if ((tmp27)){
							HX_STACK_LINE(356)
							tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
						}
						else{
							HX_STACK_LINE(356)
							tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
						}
					}
				}
				HX_STACK_LINE(356)
				int xtype = tmp21;		HX_STACK_VAR(xtype,"xtype");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::zpp_nape::callbacks::ZPP_InteractionListener tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(356)
					tmp22->itype = xtype;
				}
			}
		}
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			::zpp_nape::callbacks::ZPP_InteractionListener tmp14 = this->zpp_inner_zn;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(356)
			int ret = tmp14->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(356)
			int tmp15 = ret;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(356)
			int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(356)
			bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(356)
			if ((tmp17)){
				HX_STACK_LINE(356)
				::nape::callbacks::InteractionType tmp18 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(356)
				bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(356)
				if ((tmp19)){
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(356)
					::nape::callbacks::InteractionType tmp20 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp20;
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(356)
				int tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(356)
				int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(356)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(356)
				if ((tmp20)){
					HX_STACK_LINE(356)
					::nape::callbacks::InteractionType tmp21 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(356)
					bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(356)
					if ((tmp22)){
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp23 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp23;
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(356)
					int tmp21 = ret;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(356)
					int tmp22 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(356)
					bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(356)
					if ((tmp23)){
						HX_STACK_LINE(356)
						::nape::callbacks::InteractionType tmp24 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(356)
						bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(356)
						if ((tmp25)){
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(356)
							::nape::callbacks::InteractionType tmp26 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp26;
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(356)
						int tmp24 = ret;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(356)
						int tmp25 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(356)
						bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(356)
						if ((tmp26)){
							HX_STACK_LINE(356)
							::nape::callbacks::InteractionType tmp27 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(356)
							bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(356)
							if ((tmp28)){
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(356)
								::nape::callbacks::InteractionType tmp29 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp29;
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(356)
							Dynamic();
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

//PreListener_obj::~PreListener_obj() { }

Dynamic PreListener_obj::__CreateEmpty() { return  new PreListener_obj; }
hx::ObjectPtr< PreListener_obj > PreListener_obj::__new(::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence,hx::Null< bool >  __o_pure)
{  hx::ObjectPtr< PreListener_obj > _result_ = new PreListener_obj();
	_result_->__construct(interactionType,options1,options2,handler,__o_precedence,__o_pure);
	return _result_;}

Dynamic PreListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreListener_obj > _result_ = new PreListener_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::nape::callbacks::OptionType PreListener_obj::get_options1( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_options1",0x8ee8e379,"nape.callbacks.PreListener.get_options1","nape/callbacks/PreListener.hx",190,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	::nape::callbacks::OptionType tmp1 = tmp->options1->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_options1,return )

::nape::callbacks::OptionType PreListener_obj::set_options1( ::nape::callbacks::OptionType options1){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_options1",0xa3e206ed,"nape.callbacks.PreListener.set_options1","nape/callbacks/PreListener.hx",193,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options1,"options1")
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(195)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		::zpp_nape::callbacks::ZPP_OptionType tmp1 = options1->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		tmp->options1->set(tmp1);
	}
	HX_STACK_LINE(197)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::nape::callbacks::OptionType tmp1 = tmp->options1->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_options1,return )

::nape::callbacks::OptionType PreListener_obj::get_options2( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_options2",0x8ee8e37a,"nape.callbacks.PreListener.get_options2","nape/callbacks/PreListener.hx",204,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	::nape::callbacks::OptionType tmp1 = tmp->options2->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_options2,return )

::nape::callbacks::OptionType PreListener_obj::set_options2( ::nape::callbacks::OptionType options2){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_options2",0xa3e206ee,"nape.callbacks.PreListener.set_options2","nape/callbacks/PreListener.hx",207,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options2,"options2")
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(209)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		::zpp_nape::callbacks::ZPP_OptionType tmp1 = options2->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		tmp->options2->set(tmp1);
	}
	HX_STACK_LINE(211)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	::nape::callbacks::OptionType tmp1 = tmp->options2->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_options2,return )

Dynamic PreListener_obj::get_handler( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_handler",0xe5e89a24,"nape.callbacks.PreListener.get_handler","nape/callbacks/PreListener.hx",239,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	Dynamic tmp1 = tmp->handlerp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_handler,return )

Dynamic PreListener_obj::set_handler( Dynamic handler){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_handler",0xf055a130,"nape.callbacks.PreListener.set_handler","nape/callbacks/PreListener.hx",242,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(245)
		bool tmp = (handler == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		if ((tmp)){
			HX_STACK_LINE(246)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PreListener must take a non-null handler!","\x18","\x7a","\x44","\x2d"));
		}
		HX_STACK_LINE(249)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		tmp1->handlerp = handler;
		HX_STACK_LINE(250)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		tmp2->wake();
	}
	HX_STACK_LINE(252)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	Dynamic tmp1 = tmp->handlerp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_handler,return )

bool PreListener_obj::get_pure( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_pure",0x06cb8a5e,"nape.callbacks.PreListener.get_pure","nape/callbacks/PreListener.hx",266,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	bool tmp1 = tmp->pure;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_pure,return )

bool PreListener_obj::set_pure( bool pure){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_pure",0xb528e3d2,"nape.callbacks.PreListener.set_pure","nape/callbacks/PreListener.hx",269,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pure,"pure")
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(271)
		bool tmp = pure;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		if ((tmp1)){
			HX_STACK_LINE(272)
			::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			tmp2->wake();
		}
		HX_STACK_LINE(274)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		tmp2->pure = pure;
	}
	HX_STACK_LINE(276)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	bool tmp1 = tmp->pure;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_pure,return )

::nape::callbacks::InteractionType PreListener_obj::get_interactionType( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_interactionType",0xddb47c06,"nape.callbacks.PreListener.get_interactionType","nape/callbacks/PreListener.hx",287,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	int ret = tmp->itype;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(289)
	int tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	::nape::callbacks::InteractionType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(289)
	if ((tmp3)){
		HX_STACK_LINE(289)
		::nape::callbacks::InteractionType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(289)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		if ((tmp6)){
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(289)
			::nape::callbacks::InteractionType tmp7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp7;
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(289)
		tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
	}
	else{
		HX_STACK_LINE(290)
		int tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(290)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(290)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(290)
		if ((tmp7)){
			HX_STACK_LINE(290)
			::nape::callbacks::InteractionType tmp8 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(290)
			if ((tmp9)){
				HX_STACK_LINE(290)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(290)
				::nape::callbacks::InteractionType tmp10 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(290)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp10;
				HX_STACK_LINE(290)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(290)
			tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		else{
			HX_STACK_LINE(291)
			int tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			if ((tmp10)){
				HX_STACK_LINE(291)
				::nape::callbacks::InteractionType tmp11 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(291)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(291)
				if ((tmp12)){
					HX_STACK_LINE(291)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(291)
					::nape::callbacks::InteractionType tmp13 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(291)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp13;
					HX_STACK_LINE(291)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(291)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			else{
				HX_STACK_LINE(292)
				int tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(292)
				int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(292)
				bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(292)
				if ((tmp13)){
					HX_STACK_LINE(292)
					::nape::callbacks::InteractionType tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(292)
					bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(292)
					if ((tmp15)){
						HX_STACK_LINE(292)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(292)
						::nape::callbacks::InteractionType tmp16 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(292)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp16;
						HX_STACK_LINE(292)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(292)
					tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				else{
					HX_STACK_LINE(293)
					tmp4 = null();
				}
			}
		}
	}
	HX_STACK_LINE(289)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_interactionType,return )

::nape::callbacks::InteractionType PreListener_obj::set_interactionType( ::nape::callbacks::InteractionType interactionType){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_interactionType",0x1a516f12,"nape.callbacks.PreListener.set_interactionType","nape/callbacks/PreListener.hx",295,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(interactionType,"interactionType")
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(298)
		bool tmp = (interactionType == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		if ((tmp)){
			HX_STACK_LINE(299)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set listener interaction type to null","\xb3","\xd2","\x85","\x0d"));
		}
		HX_STACK_LINE(302)
		::nape::callbacks::InteractionType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			int ret = tmp2->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(302)
			int tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			if ((tmp5)){
				HX_STACK_LINE(302)
				::nape::callbacks::InteractionType tmp6 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(302)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(302)
				if ((tmp7)){
					HX_STACK_LINE(302)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(302)
					::nape::callbacks::InteractionType tmp8 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp8;
					HX_STACK_LINE(302)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(302)
				tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(302)
				int tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(302)
				int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(302)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(302)
				if ((tmp8)){
					HX_STACK_LINE(302)
					::nape::callbacks::InteractionType tmp9 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(302)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(302)
					if ((tmp10)){
						HX_STACK_LINE(302)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(302)
						::nape::callbacks::InteractionType tmp11 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp11;
						HX_STACK_LINE(302)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(302)
					tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(302)
					int tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(302)
					int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(302)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(302)
					if ((tmp11)){
						HX_STACK_LINE(302)
						::nape::callbacks::InteractionType tmp12 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(302)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(302)
						if ((tmp13)){
							HX_STACK_LINE(302)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(302)
							::nape::callbacks::InteractionType tmp14 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp14;
							HX_STACK_LINE(302)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(302)
						tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(302)
						int tmp12 = ret;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(302)
						int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(302)
						bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(302)
						if ((tmp14)){
							HX_STACK_LINE(302)
							::nape::callbacks::InteractionType tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(302)
							bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(302)
							if ((tmp16)){
								HX_STACK_LINE(302)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(302)
								::nape::callbacks::InteractionType tmp17 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(302)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp17;
								HX_STACK_LINE(302)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(302)
							tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(302)
							tmp1 = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(302)
		::nape::callbacks::InteractionType tmp2 = interactionType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		if ((tmp3)){
			HX_STACK_LINE(303)
			::nape::callbacks::InteractionType tmp4 = interactionType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			::nape::callbacks::InteractionType tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::nape::callbacks::InteractionType tmp6 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(303)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				if ((tmp7)){
					HX_STACK_LINE(303)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(303)
					::nape::callbacks::InteractionType tmp8 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(303)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp8;
					HX_STACK_LINE(303)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(303)
				tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(303)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			if ((tmp6)){
				HX_STACK_LINE(303)
				tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(303)
				::nape::callbacks::InteractionType tmp8 = interactionType;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(303)
				::nape::callbacks::InteractionType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::nape::callbacks::InteractionType tmp10 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(303)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(303)
					if ((tmp11)){
						HX_STACK_LINE(303)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(303)
						::nape::callbacks::InteractionType tmp12 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(303)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp12;
						HX_STACK_LINE(303)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(303)
					tmp9 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				HX_STACK_LINE(303)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(303)
				if ((tmp10)){
					HX_STACK_LINE(303)
					tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(303)
					::nape::callbacks::InteractionType tmp11 = interactionType;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(303)
					::nape::callbacks::InteractionType tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::nape::callbacks::InteractionType tmp13 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(303)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(303)
						if ((tmp14)){
							HX_STACK_LINE(303)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(303)
							::nape::callbacks::InteractionType tmp15 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(303)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp15;
							HX_STACK_LINE(303)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(303)
						tmp12 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					HX_STACK_LINE(303)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(303)
					if ((tmp13)){
						HX_STACK_LINE(303)
						tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(303)
						tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
					}
				}
			}
			HX_STACK_LINE(303)
			int xtype = tmp7;		HX_STACK_VAR(xtype,"xtype");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(304)
				tmp8->itype = xtype;
			}
		}
	}
	HX_STACK_LINE(307)
	::nape::callbacks::InteractionType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		int ret = tmp1->itype;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(307)
		int tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		int tmp3 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		if ((tmp4)){
			HX_STACK_LINE(307)
			::nape::callbacks::InteractionType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			if ((tmp6)){
				HX_STACK_LINE(307)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(307)
				::nape::callbacks::InteractionType tmp7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp7;
				HX_STACK_LINE(307)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(307)
			tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
		}
		else{
			HX_STACK_LINE(307)
			int tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(307)
			if ((tmp7)){
				HX_STACK_LINE(307)
				::nape::callbacks::InteractionType tmp8 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				if ((tmp9)){
					HX_STACK_LINE(307)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(307)
					::nape::callbacks::InteractionType tmp10 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(307)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp10;
					HX_STACK_LINE(307)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(307)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
			}
			else{
				HX_STACK_LINE(307)
				int tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(307)
				if ((tmp10)){
					HX_STACK_LINE(307)
					::nape::callbacks::InteractionType tmp11 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(307)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(307)
					if ((tmp12)){
						HX_STACK_LINE(307)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(307)
						::nape::callbacks::InteractionType tmp13 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(307)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp13;
						HX_STACK_LINE(307)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(307)
					tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
				}
				else{
					HX_STACK_LINE(307)
					int tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(307)
					int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(307)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(307)
					if ((tmp13)){
						HX_STACK_LINE(307)
						::nape::callbacks::InteractionType tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(307)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(307)
						if ((tmp15)){
							HX_STACK_LINE(307)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(307)
							::nape::callbacks::InteractionType tmp16 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(307)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp16;
							HX_STACK_LINE(307)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(307)
						tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
					}
					else{
						HX_STACK_LINE(307)
						tmp = null();
					}
				}
			}
		}
	}
	HX_STACK_LINE(307)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_interactionType,return )


PreListener_obj::PreListener_obj()
{
}

void PreListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PreListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PreListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PreListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { if (inCallProp == hx::paccAlways) return get_pure(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return get_handler(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { if (inCallProp == hx::paccAlways) return get_options1(); }
		if (HX_FIELD_EQ(inName,"options2") ) { if (inCallProp == hx::paccAlways) return get_options2(); }
		if (HX_FIELD_EQ(inName,"get_pure") ) { return get_pure_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pure") ) { return set_pure_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_handler") ) { return get_handler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_handler") ) { return set_handler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		if (HX_FIELD_EQ(inName,"get_options1") ) { return get_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options1") ) { return set_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_options2") ) { return get_options2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options2") ) { return set_options2_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { if (inCallProp == hx::paccAlways) return get_interactionType(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_interactionType") ) { return get_interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactionType") ) { return set_interactionType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PreListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { if (inCallProp == hx::paccAlways) return set_pure(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return set_handler(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { if (inCallProp == hx::paccAlways) return set_options1(inValue); }
		if (HX_FIELD_EQ(inName,"options2") ) { if (inCallProp == hx::paccAlways) return set_options2(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { if (inCallProp == hx::paccAlways) return set_interactionType(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PreListener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PreListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("options1","\x13","\xbf","\x6e","\x1e"));
	outFields->push(HX_HCSTRING("options2","\x14","\xbf","\x6e","\x1e"));
	outFields->push(HX_HCSTRING("pure","\xf8","\x10","\x61","\x4a"));
	outFields->push(HX_HCSTRING("interactionType","\xac","\xa7","\xc8","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_InteractionListener*/ ,(int)offsetof(PreListener_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_options1","\x1c","\x73","\x88","\xd3"),
	HX_HCSTRING("set_options1","\x90","\x96","\x81","\xe8"),
	HX_HCSTRING("get_options2","\x1d","\x73","\x88","\xd3"),
	HX_HCSTRING("set_options2","\x91","\x96","\x81","\xe8"),
	HX_HCSTRING("get_handler","\xe1","\x0f","\xd0","\xcb"),
	HX_HCSTRING("set_handler","\xed","\x16","\x3d","\xd6"),
	HX_HCSTRING("get_pure","\x81","\xcc","\x1b","\xca"),
	HX_HCSTRING("set_pure","\xf5","\x25","\x79","\x78"),
	HX_HCSTRING("get_interactionType","\xc3","\x76","\xd3","\x93"),
	HX_HCSTRING("set_interactionType","\xcf","\x69","\x70","\xd0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreListener_obj::__mClass,"__mClass");
};

#endif

hx::Class PreListener_obj::__mClass;

void PreListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.PreListener","\x31","\xd2","\x67","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PreListener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PreListener_obj >;
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

} // end namespace nape
} // end namespace callbacks
