#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void CbEvent_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.CbEvent","new",0x341515e7,"nape.callbacks.CbEvent.new","nape/callbacks/CbEvent.hx",181,0xd410352b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate CbEvent","\xb6","\x95","\xe8","\xcf");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//CbEvent_obj::~CbEvent_obj() { }

Dynamic CbEvent_obj::__CreateEmpty() { return  new CbEvent_obj; }
hx::ObjectPtr< CbEvent_obj > CbEvent_obj::__new()
{  hx::ObjectPtr< CbEvent_obj > _result_ = new CbEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic CbEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CbEvent_obj > _result_ = new CbEvent_obj();
	_result_->__construct();
	return _result_;}

::String CbEvent_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","toString",0x632121c5,"nape.callbacks.CbEvent.toString","nape/callbacks/CbEvent.hx",192,0xd410352b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::callbacks::CbEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::callbacks::CbEvent tmp1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::callbacks::CbEvent tmp3 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00");
	}
	else{
		HX_STACK_LINE(193)
		::nape::callbacks::CbEvent tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::callbacks::CbEvent tmp3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::callbacks::CbEvent tmp5 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("BEGIN","\x09","\x22","\x44","\x2e");
		}
		else{
			HX_STACK_LINE(194)
			::nape::callbacks::CbEvent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::nape::callbacks::CbEvent tmp5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				if ((tmp6)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::callbacks::CbEvent tmp7 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = tmp7;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(194)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			if ((tmp5)){
				HX_STACK_LINE(194)
				return HX_HCSTRING("ONGOING","\x1b","\x7e","\xd8","\x1a");
			}
			else{
				HX_STACK_LINE(195)
				::nape::callbacks::CbEvent tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					::nape::callbacks::CbEvent tmp7 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(195)
					if ((tmp8)){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::callbacks::CbEvent tmp9 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = tmp9;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					tmp6 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
				}
				HX_STACK_LINE(195)
				bool tmp7 = (hx::ObjectPtr<OBJ_>(this) == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(195)
				if ((tmp7)){
					HX_STACK_LINE(195)
					return HX_HCSTRING("END","\xbb","\x9f","\x34","\x00");
				}
				else{
					HX_STACK_LINE(196)
					::nape::callbacks::CbEvent tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(196)
					{
						HX_STACK_LINE(196)
						::nape::callbacks::CbEvent tmp9 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(196)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(196)
						if ((tmp10)){
							HX_STACK_LINE(196)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(196)
							::nape::callbacks::CbEvent tmp11 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(196)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = tmp11;
							HX_STACK_LINE(196)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(196)
						tmp8 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
					}
					HX_STACK_LINE(196)
					bool tmp9 = (hx::ObjectPtr<OBJ_>(this) == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(196)
					if ((tmp9)){
						HX_STACK_LINE(196)
						return HX_HCSTRING("WAKE","\x24","\x24","\xb3","\x39");
					}
					else{
						HX_STACK_LINE(197)
						::nape::callbacks::CbEvent tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(197)
						{
							HX_STACK_LINE(197)
							::nape::callbacks::CbEvent tmp11 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(197)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(197)
							if ((tmp12)){
								HX_STACK_LINE(197)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(197)
								::nape::callbacks::CbEvent tmp13 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(197)
								::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = tmp13;
								HX_STACK_LINE(197)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(197)
							tmp10 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
						}
						HX_STACK_LINE(197)
						bool tmp11 = (hx::ObjectPtr<OBJ_>(this) == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(197)
						if ((tmp11)){
							HX_STACK_LINE(197)
							return HX_HCSTRING("SLEEP","\xf7","\xf4","\xb2","\xfc");
						}
						else{
							HX_STACK_LINE(198)
							::nape::callbacks::CbEvent tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(198)
							{
								HX_STACK_LINE(198)
								::nape::callbacks::CbEvent tmp13 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(198)
								bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(198)
								if ((tmp14)){
									HX_STACK_LINE(198)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(198)
									::nape::callbacks::CbEvent tmp15 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(198)
									::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = tmp15;
									HX_STACK_LINE(198)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(198)
								tmp12 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
							}
							HX_STACK_LINE(198)
							bool tmp13 = (hx::ObjectPtr<OBJ_>(this) == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(198)
							if ((tmp13)){
								HX_STACK_LINE(198)
								return HX_HCSTRING("BREAK","\x9f","\x5c","\xda","\x36");
							}
							else{
								HX_STACK_LINE(199)
								return HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,toString,return )

::nape::callbacks::CbEvent CbEvent_obj::get_BEGIN( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_BEGIN",0xa3422327,"nape.callbacks.CbEvent.get_BEGIN","nape/callbacks/CbEvent.hx",206,0xd410352b)
	HX_STACK_LINE(207)
	::nape::callbacks::CbEvent tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	if ((tmp1)){
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(209)
		::nape::callbacks::CbEvent tmp2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = tmp2;
		HX_STACK_LINE(210)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(212)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BEGIN,return )

::nape::callbacks::CbEvent CbEvent_obj::get_ONGOING( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_ONGOING",0x4c2f82b9,"nape.callbacks.CbEvent.get_ONGOING","nape/callbacks/CbEvent.hx",220,0xd410352b)
	HX_STACK_LINE(221)
	::nape::callbacks::CbEvent tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	if ((tmp1)){
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(223)
		::nape::callbacks::CbEvent tmp2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = tmp2;
		HX_STACK_LINE(224)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(226)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_ONGOING,return )

::nape::callbacks::CbEvent CbEvent_obj::get_END( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_END",0x30097d59,"nape.callbacks.CbEvent.get_END","nape/callbacks/CbEvent.hx",233,0xd410352b)
	HX_STACK_LINE(234)
	::nape::callbacks::CbEvent tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	if ((tmp1)){
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(236)
		::nape::callbacks::CbEvent tmp2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = tmp2;
		HX_STACK_LINE(237)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(239)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_END,return )

::nape::callbacks::CbEvent CbEvent_obj::get_WAKE( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_WAKE",0xe42030c6,"nape.callbacks.CbEvent.get_WAKE","nape/callbacks/CbEvent.hx",246,0xd410352b)
	HX_STACK_LINE(247)
	::nape::callbacks::CbEvent tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	if ((tmp1)){
		HX_STACK_LINE(248)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(249)
		::nape::callbacks::CbEvent tmp2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = tmp2;
		HX_STACK_LINE(250)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(252)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(252)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_WAKE,return )

::nape::callbacks::CbEvent CbEvent_obj::get_SLEEP( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_SLEEP",0x71b0f615,"nape.callbacks.CbEvent.get_SLEEP","nape/callbacks/CbEvent.hx",259,0xd410352b)
	HX_STACK_LINE(260)
	::nape::callbacks::CbEvent tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	if ((tmp1)){
		HX_STACK_LINE(261)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(262)
		::nape::callbacks::CbEvent tmp2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = tmp2;
		HX_STACK_LINE(263)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(265)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_SLEEP,return )

::nape::callbacks::CbEvent CbEvent_obj::get_BREAK( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_BREAK",0xabd85dbd,"nape.callbacks.CbEvent.get_BREAK","nape/callbacks/CbEvent.hx",272,0xd410352b)
	HX_STACK_LINE(273)
	::nape::callbacks::CbEvent tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	if ((tmp1)){
		HX_STACK_LINE(274)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(275)
		::nape::callbacks::CbEvent tmp2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = tmp2;
		HX_STACK_LINE(276)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(278)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BREAK,return )

::nape::callbacks::CbEvent CbEvent_obj::get_PRE( ){
	HX_STACK_FRAME("nape.callbacks.CbEvent","get_PRE",0x3011d9a1,"nape.callbacks.CbEvent.get_PRE","nape/callbacks/CbEvent.hx",286,0xd410352b)
	HX_STACK_LINE(287)
	::nape::callbacks::CbEvent tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	if ((tmp1)){
		HX_STACK_LINE(288)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(289)
		::nape::callbacks::CbEvent tmp2 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = tmp2;
		HX_STACK_LINE(290)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(292)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(292)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_PRE,return )


CbEvent_obj::CbEvent_obj()
{
}

Dynamic CbEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool CbEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { if (inCallProp == hx::paccAlways) { outValue = get_END(); return true; } }
		if (HX_FIELD_EQ(inName,"PRE") ) { if (inCallProp == hx::paccAlways) { outValue = get_PRE(); return true; } }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { if (inCallProp == hx::paccAlways) { outValue = get_WAKE(); return true; } }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BEGIN") ) { if (inCallProp == hx::paccAlways) { outValue = get_BEGIN(); return true; } }
		if (HX_FIELD_EQ(inName,"SLEEP") ) { if (inCallProp == hx::paccAlways) { outValue = get_SLEEP(); return true; } }
		if (HX_FIELD_EQ(inName,"BREAK") ) { if (inCallProp == hx::paccAlways) { outValue = get_BREAK(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ONGOING") ) { if (inCallProp == hx::paccAlways) { outValue = get_ONGOING(); return true; } }
		if (HX_FIELD_EQ(inName,"get_END") ) { outValue = get_END_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PRE") ) { outValue = get_PRE_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_WAKE") ) { outValue = get_WAKE_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_BEGIN") ) { outValue = get_BEGIN_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SLEEP") ) { outValue = get_SLEEP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BREAK") ) { outValue = get_BREAK_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_ONGOING") ) { outValue = get_ONGOING_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class CbEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_BEGIN","\x60","\x7e","\xed","\x71"),
	HX_HCSTRING("get_ONGOING","\x32","\xde","\xd2","\xa0"),
	HX_HCSTRING("get_END","\x52","\x68","\xa9","\x26"),
	HX_HCSTRING("get_WAKE","\xad","\xdf","\x6d","\xb9"),
	HX_HCSTRING("get_SLEEP","\x4e","\x51","\x5c","\x40"),
	HX_HCSTRING("get_BREAK","\xf6","\xb8","\x83","\x7a"),
	HX_HCSTRING("get_PRE","\x9a","\xc4","\xb1","\x26"),
	::String(null()) };

void CbEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.CbEvent","\x75","\x96","\x74","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CbEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CbEvent_obj >;
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
