#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Winding
#include <nape/geom/Winding.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace geom{

Void Winding_obj::__construct()
{
HX_STACK_FRAME("nape.geom.Winding","new",0x17093480,"nape.geom.Winding.new","nape/geom/Winding.hx",188,0x1c896f50)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(190)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	if ((tmp1)){
		HX_STACK_LINE(190)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate Winding","\xd5","\x5d","\xa0","\x6b");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//Winding_obj::~Winding_obj() { }

Dynamic Winding_obj::__CreateEmpty() { return  new Winding_obj; }
hx::ObjectPtr< Winding_obj > Winding_obj::__new()
{  hx::ObjectPtr< Winding_obj > _result_ = new Winding_obj();
	_result_->__construct();
	return _result_;}

Dynamic Winding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Winding_obj > _result_ = new Winding_obj();
	_result_->__construct();
	return _result_;}

::String Winding_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Winding","toString",0x2d1a788c,"nape.geom.Winding.toString","nape/geom/Winding.hx",199,0x1c896f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::nape::geom::Winding tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		::nape::geom::Winding tmp1 = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		if ((tmp2)){
			HX_STACK_LINE(199)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(199)
			::nape::geom::Winding tmp3 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = tmp3;
			HX_STACK_LINE(199)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(199)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;
	}
	HX_STACK_LINE(199)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	if ((tmp1)){
		HX_STACK_LINE(199)
		return HX_HCSTRING("UNDEFINED","\x70","\xae","\x62","\x98");
	}
	else{
		HX_STACK_LINE(200)
		::nape::geom::Winding tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::nape::geom::Winding tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			if ((tmp4)){
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(200)
				::nape::geom::Winding tmp5 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = tmp5;
				HX_STACK_LINE(200)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(200)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
		}
		HX_STACK_LINE(200)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		if ((tmp3)){
			HX_STACK_LINE(200)
			return HX_HCSTRING("CLOCKWISE","\xd2","\xed","\xf7","\x37");
		}
		else{
			HX_STACK_LINE(201)
			::nape::geom::Winding tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				::nape::geom::Winding tmp5 = ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				if ((tmp6)){
					HX_STACK_LINE(201)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(201)
					::nape::geom::Winding tmp7 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(201)
					::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE = tmp7;
					HX_STACK_LINE(201)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(201)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;
			}
			HX_STACK_LINE(201)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			if ((tmp5)){
				HX_STACK_LINE(201)
				return HX_HCSTRING("ANTICLOCKWISE","\xf0","\x91","\x62","\x14");
			}
			else{
				HX_STACK_LINE(202)
				return HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
	}
	HX_STACK_LINE(199)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,toString,return )

::nape::geom::Winding Winding_obj::get_UNDEFINED( ){
	HX_STACK_FRAME("nape.geom.Winding","get_UNDEFINED",0xc26e4e67,"nape.geom.Winding.get_UNDEFINED","nape/geom/Winding.hx",213,0x1c896f50)
	HX_STACK_LINE(214)
	::nape::geom::Winding tmp = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	if ((tmp1)){
		HX_STACK_LINE(215)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(216)
		::nape::geom::Winding tmp2 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = tmp2;
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(219)
	::nape::geom::Winding tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,get_UNDEFINED,return )

::nape::geom::Winding Winding_obj::get_CLOCKWISE( ){
	HX_STACK_FRAME("nape.geom.Winding","get_CLOCKWISE",0x62038dc9,"nape.geom.Winding.get_CLOCKWISE","nape/geom/Winding.hx",226,0x1c896f50)
	HX_STACK_LINE(227)
	::nape::geom::Winding tmp = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	if ((tmp1)){
		HX_STACK_LINE(228)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(229)
		::nape::geom::Winding tmp2 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = tmp2;
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(232)
	::nape::geom::Winding tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,get_CLOCKWISE,return )

::nape::geom::Winding Winding_obj::get_ANTICLOCKWISE( ){
	HX_STACK_FRAME("nape.geom.Winding","get_ANTICLOCKWISE",0x8e22f967,"nape.geom.Winding.get_ANTICLOCKWISE","nape/geom/Winding.hx",239,0x1c896f50)
	HX_STACK_LINE(240)
	::nape::geom::Winding tmp = ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	if ((tmp1)){
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(242)
		::nape::geom::Winding tmp2 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE = tmp2;
		HX_STACK_LINE(243)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(245)
	::nape::geom::Winding tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Winding_obj,get_ANTICLOCKWISE,return )


Winding_obj::Winding_obj()
{
}

Dynamic Winding_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Winding_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"UNDEFINED") ) { if (inCallProp == hx::paccAlways) { outValue = get_UNDEFINED(); return true; } }
		if (HX_FIELD_EQ(inName,"CLOCKWISE") ) { if (inCallProp == hx::paccAlways) { outValue = get_CLOCKWISE(); return true; } }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_UNDEFINED") ) { outValue = get_UNDEFINED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CLOCKWISE") ) { outValue = get_CLOCKWISE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ANTICLOCKWISE") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANTICLOCKWISE(); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_ANTICLOCKWISE") ) { outValue = get_ANTICLOCKWISE_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(Winding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Winding_obj::__mClass,"__mClass");
};

#endif

hx::Class Winding_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_UNDEFINED","\x47","\x82","\xc6","\x59"),
	HX_HCSTRING("get_CLOCKWISE","\xa9","\xc1","\x5b","\xf9"),
	HX_HCSTRING("get_ANTICLOCKWISE","\x47","\x9d","\xd2","\x1a"),
	::String(null()) };

void Winding_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Winding","\x8e","\x34","\xbd","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Winding_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Winding_obj >;
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
} // end namespace geom
