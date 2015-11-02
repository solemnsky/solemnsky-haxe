#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
namespace nape{
namespace callbacks{

Void OptionType_obj::__construct(Dynamic includes,Dynamic excludes)
{
HX_STACK_FRAME("nape.callbacks.OptionType","new",0xe0e4f307,"nape.callbacks.OptionType.new","nape/callbacks/OptionType.hx",199,0x9382bdc7)
HX_STACK_THIS(this)
HX_STACK_ARG(includes,"includes")
HX_STACK_ARG(excludes,"excludes")
{
	HX_STACK_LINE(203)
	this->zpp_inner = null();
	HX_STACK_LINE(248)
	::zpp_nape::callbacks::ZPP_OptionType tmp = ::zpp_nape::callbacks::ZPP_OptionType_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	this->zpp_inner = tmp;
	HX_STACK_LINE(249)
	::zpp_nape::callbacks::ZPP_OptionType tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(250)
	bool tmp2 = (includes != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	if ((tmp2)){
		HX_STACK_LINE(250)
		Dynamic tmp3 = includes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		this->including(tmp3);
	}
	HX_STACK_LINE(251)
	bool tmp3 = (excludes != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	if ((tmp3)){
		HX_STACK_LINE(251)
		Dynamic tmp4 = excludes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		this->excluding(tmp4);
	}
}
;
	return null();
}

//OptionType_obj::~OptionType_obj() { }

Dynamic OptionType_obj::__CreateEmpty() { return  new OptionType_obj; }
hx::ObjectPtr< OptionType_obj > OptionType_obj::__new(Dynamic includes,Dynamic excludes)
{  hx::ObjectPtr< OptionType_obj > _result_ = new OptionType_obj();
	_result_->__construct(includes,excludes);
	return _result_;}

Dynamic OptionType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionType_obj > _result_ = new OptionType_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::nape::callbacks::CbTypeList OptionType_obj::get_includes( ){
	HX_STACK_FRAME("nape.callbacks.OptionType","get_includes",0x750fe9cd,"nape.callbacks.OptionType.get_includes","nape/callbacks/OptionType.hx",214,0x9382bdc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	::zpp_nape::callbacks::ZPP_OptionType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	::nape::callbacks::CbTypeList tmp1 = tmp->wrap_includes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	if ((tmp2)){
		HX_STACK_LINE(215)
		::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		tmp3->setup_includes();
	}
	HX_STACK_LINE(216)
	::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(216)
	::nape::callbacks::CbTypeList tmp4 = tmp3->wrap_includes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(216)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionType_obj,get_includes,return )

::nape::callbacks::CbTypeList OptionType_obj::get_excludes( ){
	HX_STACK_FRAME("nape.callbacks.OptionType","get_excludes",0x301cc4db,"nape.callbacks.OptionType.get_excludes","nape/callbacks/OptionType.hx",228,0x9382bdc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	::zpp_nape::callbacks::ZPP_OptionType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	::nape::callbacks::CbTypeList tmp1 = tmp->wrap_excludes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	if ((tmp2)){
		HX_STACK_LINE(229)
		::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		tmp3->setup_excludes();
	}
	HX_STACK_LINE(230)
	::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	::nape::callbacks::CbTypeList tmp4 = tmp3->wrap_excludes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(230)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionType_obj,get_excludes,return )

::nape::callbacks::OptionType OptionType_obj::including( Dynamic includes){
	HX_STACK_FRAME("nape.callbacks.OptionType","including",0x19eb5b4c,"nape.callbacks.OptionType.including","nape/callbacks/OptionType.hx",267,0x9382bdc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(includes,"includes")
	HX_STACK_LINE(268)
	::zpp_nape::callbacks::ZPP_OptionType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	::zpp_nape::callbacks::ZPP_OptionType tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = tmp1->includes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	Dynamic tmp3 = includes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	tmp->append(tmp2,tmp3);
	HX_STACK_LINE(269)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(OptionType_obj,including,return )

::nape::callbacks::OptionType OptionType_obj::excluding( Dynamic excludes){
	HX_STACK_FRAME("nape.callbacks.OptionType","excluding",0x0a1e2c7e,"nape.callbacks.OptionType.excluding","nape/callbacks/OptionType.hx",285,0x9382bdc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(excludes,"excludes")
	HX_STACK_LINE(286)
	::zpp_nape::callbacks::ZPP_OptionType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	::zpp_nape::callbacks::ZPP_OptionType tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = tmp1->excludes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	Dynamic tmp3 = excludes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	tmp->append(tmp2,tmp3);
	HX_STACK_LINE(287)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(OptionType_obj,excluding,return )

::String OptionType_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.OptionType","toString",0x921bb0a5,"nape.callbacks.OptionType.toString","nape/callbacks/OptionType.hx",292,0x9382bdc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	::nape::callbacks::CbTypeList tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		::zpp_nape::callbacks::ZPP_OptionType tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		::nape::callbacks::CbTypeList tmp2 = tmp1->wrap_includes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		if ((tmp3)){
			HX_STACK_LINE(293)
			::zpp_nape::callbacks::ZPP_OptionType tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(293)
			tmp4->setup_includes();
		}
		HX_STACK_LINE(293)
		::zpp_nape::callbacks::ZPP_OptionType tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		tmp = tmp4->wrap_includes;
	}
	HX_STACK_LINE(293)
	::String tmp1 = tmp->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	::String inc = tmp1;		HX_STACK_VAR(inc,"inc");
	HX_STACK_LINE(294)
	::nape::callbacks::CbTypeList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		::zpp_nape::callbacks::ZPP_OptionType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		::nape::callbacks::CbTypeList tmp4 = tmp3->wrap_excludes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(294)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(294)
		if ((tmp5)){
			HX_STACK_LINE(294)
			::zpp_nape::callbacks::ZPP_OptionType tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			tmp6->setup_excludes();
		}
		HX_STACK_LINE(294)
		::zpp_nape::callbacks::ZPP_OptionType tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(294)
		tmp2 = tmp6->wrap_excludes;
	}
	HX_STACK_LINE(294)
	::String tmp3 = tmp2->toString();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(294)
	::String exc = tmp3;		HX_STACK_VAR(exc,"exc");
	HX_STACK_LINE(295)
	::String tmp4 = (HX_HCSTRING("@{","\x3b","\x38","\x00","\x00") + inc);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(295)
	::String tmp5 = (tmp4 + HX_HCSTRING(" excluding ","\xc9","\x99","\x76","\x25"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(295)
	::String tmp6 = exc;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(295)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(295)
	::String tmp8 = (tmp7 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(295)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionType_obj,toString,return )


OptionType_obj::OptionType_obj()
{
}

void OptionType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionType);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void OptionType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic OptionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"includes") ) { if (inCallProp == hx::paccAlways) return get_includes(); }
		if (HX_FIELD_EQ(inName,"excludes") ) { if (inCallProp == hx::paccAlways) return get_excludes(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"including") ) { return including_dyn(); }
		if (HX_FIELD_EQ(inName,"excluding") ) { return excluding_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_includes") ) { return get_includes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_excludes") ) { return get_excludes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptionType_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void OptionType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("includes","\x4b","\x65","\x27","\x66"));
	outFields->push(HX_HCSTRING("excludes","\x59","\x40","\x34","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_OptionType*/ ,(int)offsetof(OptionType_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_includes","\x54","\x19","\x41","\x1b"),
	HX_HCSTRING("get_excludes","\x62","\xf4","\x4d","\xd6"),
	HX_HCSTRING("including","\x65","\x41","\x54","\xfc"),
	HX_HCSTRING("excluding","\x97","\x12","\x87","\xec"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionType_obj::__mClass,"__mClass");
};

#endif

hx::Class OptionType_obj::__mClass;

void OptionType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.OptionType","\x95","\x63","\x87","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &OptionType_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionType_obj >;
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
