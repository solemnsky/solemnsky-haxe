#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimplifyV_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyV","new",0xa2a783a9,"zpp_nape.geom.ZPP_SimplifyV.new","zpp_nape/geom/Simplify.hx",174,0xe5fbc624)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(204)
	this->forced = false;
	HX_STACK_LINE(203)
	this->flag = false;
	HX_STACK_LINE(202)
	this->prev = null();
	HX_STACK_LINE(177)
	this->next = null();
	HX_STACK_LINE(176)
	this->y = ((Float)0.0);
	HX_STACK_LINE(175)
	this->x = ((Float)0.0);
}
;
	return null();
}

//ZPP_SimplifyV_obj::~ZPP_SimplifyV_obj() { }

Dynamic ZPP_SimplifyV_obj::__CreateEmpty() { return  new ZPP_SimplifyV_obj; }
hx::ObjectPtr< ZPP_SimplifyV_obj > ZPP_SimplifyV_obj::__new()
{  hx::ObjectPtr< ZPP_SimplifyV_obj > _result_ = new ZPP_SimplifyV_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SimplifyV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimplifyV_obj > _result_ = new ZPP_SimplifyV_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SimplifyV_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyV","free",0xaaabc943,"zpp_nape.geom.ZPP_SimplifyV.free","zpp_nape/geom/Simplify.hx",207,0xe5fbc624)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyV_obj,free,(void))

Void ZPP_SimplifyV_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyV","alloc",0xc6b17bfe,"zpp_nape.geom.ZPP_SimplifyV.alloc","zpp_nape/geom/Simplify.hx",210,0xe5fbc624)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyV_obj,alloc,(void))

::zpp_nape::geom::ZPP_SimplifyV ZPP_SimplifyV_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimplifyV ZPP_SimplifyV_obj::get( ::zpp_nape::geom::ZPP_GeomVert v){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimplifyV","get",0xa2a233df,"zpp_nape.geom.ZPP_SimplifyV.get","zpp_nape/geom/Simplify.hx",213,0xe5fbc624)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(214)
	::zpp_nape::geom::ZPP_SimplifyV ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(216)
		::zpp_nape::geom::ZPP_SimplifyV tmp = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		if ((tmp1)){
			HX_STACK_LINE(217)
			::zpp_nape::geom::ZPP_SimplifyV tmp2 = ::zpp_nape::geom::ZPP_SimplifyV_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(223)
			::zpp_nape::geom::ZPP_SimplifyV tmp2 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			ret = tmp2;
			HX_STACK_LINE(224)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = ret->next;
			HX_STACK_LINE(225)
			ret->next = null();
		}
		HX_STACK_LINE(230)
		Dynamic();
	}
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(233)
		ret->x = v->x;
		HX_STACK_LINE(234)
		ret->y = v->y;
		HX_STACK_LINE(243)
		{
		}
	}
	HX_STACK_LINE(252)
	ret->flag = false;
	HX_STACK_LINE(253)
	::zpp_nape::geom::ZPP_SimplifyV tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimplifyV_obj,get,return )


ZPP_SimplifyV_obj::ZPP_SimplifyV_obj()
{
}

void ZPP_SimplifyV_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimplifyV);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(flag,"flag");
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_END_CLASS();
}

void ZPP_SimplifyV_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(flag,"flag");
	HX_VISIT_MEMBER_NAME(forced,"forced");
}

Dynamic ZPP_SimplifyV_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"flag") ) { return flag; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_SimplifyV_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic ZPP_SimplifyV_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flag") ) { flag=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SimplifyV_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return true; }
	}
	return false;
}

void ZPP_SimplifyV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"));
	outFields->push(HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ZPP_SimplifyV_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_SimplifyV_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyV*/ ,(int)offsetof(ZPP_SimplifyV_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyV*/ ,(int)offsetof(ZPP_SimplifyV_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsBool,(int)offsetof(ZPP_SimplifyV_obj,flag),HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43")},
	{hx::fsBool,(int)offsetof(ZPP_SimplifyV_obj,forced),HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyV*/ ,(void *) &ZPP_SimplifyV_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"),
	HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimplifyV_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimplifyV_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyV_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyV_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_SimplifyV_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_SimplifyV_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SimplifyV","\x37","\x7b","\x88","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SimplifyV_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_SimplifyV_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimplifyV_obj >;
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

void ZPP_SimplifyV_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
