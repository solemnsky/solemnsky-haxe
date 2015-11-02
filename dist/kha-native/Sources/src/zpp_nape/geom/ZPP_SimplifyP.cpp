#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimplifyP_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","new",0x2e4008a3,"zpp_nape.geom.ZPP_SimplifyP.new","zpp_nape/geom/Simplify.hx",257,0xe5fbc624)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(284)
	this->max = null();
	HX_STACK_LINE(283)
	this->min = null();
	HX_STACK_LINE(258)
	this->next = null();
}
;
	return null();
}

//ZPP_SimplifyP_obj::~ZPP_SimplifyP_obj() { }

Dynamic ZPP_SimplifyP_obj::__CreateEmpty() { return  new ZPP_SimplifyP_obj; }
hx::ObjectPtr< ZPP_SimplifyP_obj > ZPP_SimplifyP_obj::__new()
{  hx::ObjectPtr< ZPP_SimplifyP_obj > _result_ = new ZPP_SimplifyP_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SimplifyP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimplifyP_obj > _result_ = new ZPP_SimplifyP_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SimplifyP_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","free",0x44879f09,"zpp_nape.geom.ZPP_SimplifyP.free","zpp_nape/geom/Simplify.hx",288,0xe5fbc624)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::zpp_nape::geom::ZPP_SimplifyV tmp = this->max = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		this->min = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyP_obj,free,(void))

Void ZPP_SimplifyP_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","alloc",0xcd30b378,"zpp_nape.geom.ZPP_SimplifyP.alloc","zpp_nape/geom/Simplify.hx",293,0xe5fbc624)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyP_obj,alloc,(void))

::zpp_nape::geom::ZPP_SimplifyP ZPP_SimplifyP_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimplifyP ZPP_SimplifyP_obj::get( ::zpp_nape::geom::ZPP_SimplifyV min,::zpp_nape::geom::ZPP_SimplifyV max){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyP","get",0x2e3ab8d9,"zpp_nape.geom.ZPP_SimplifyP.get","zpp_nape/geom/Simplify.hx",295,0xe5fbc624)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(296)
	::zpp_nape::geom::ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		::zpp_nape::geom::ZPP_SimplifyP tmp = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		if ((tmp1)){
			HX_STACK_LINE(299)
			::zpp_nape::geom::ZPP_SimplifyP tmp2 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(305)
			::zpp_nape::geom::ZPP_SimplifyP tmp2 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			ret = tmp2;
			HX_STACK_LINE(306)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret->next;
			HX_STACK_LINE(307)
			ret->next = null();
		}
		HX_STACK_LINE(312)
		Dynamic();
	}
	HX_STACK_LINE(314)
	ret->min = min;
	HX_STACK_LINE(315)
	ret->max = max;
	HX_STACK_LINE(316)
	::zpp_nape::geom::ZPP_SimplifyP tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimplifyP_obj,get,return )


ZPP_SimplifyP_obj::ZPP_SimplifyP_obj()
{
}

void ZPP_SimplifyP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimplifyP);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_END_CLASS();
}

void ZPP_SimplifyP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
}

Dynamic ZPP_SimplifyP_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_SimplifyP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_SimplifyP_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyP >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SimplifyP_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_SimplifyP >(); return true; }
	}
	return false;
}

void ZPP_SimplifyP_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyP*/ ,(int)offsetof(ZPP_SimplifyP_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyV*/ ,(int)offsetof(ZPP_SimplifyP_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyV*/ ,(int)offsetof(ZPP_SimplifyP_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyP*/ ,(void *) &ZPP_SimplifyP_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_SimplifyP_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_SimplifyP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SimplifyP","\x31","\x7b","\x88","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SimplifyP_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_SimplifyP_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimplifyP_obj >;
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

void ZPP_SimplifyP_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
