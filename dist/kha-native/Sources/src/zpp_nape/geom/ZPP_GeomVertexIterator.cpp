#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_GeomVertexIterator_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVertexIterator","new",0x9d8000f6,"zpp_nape.geom.ZPP_GeomVertexIterator.new","zpp_nape/geom/GeomPoly.hx",327,0x22e30365)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(333)
	this->next = null();
	HX_STACK_LINE(332)
	this->outer = null();
	HX_STACK_LINE(331)
	this->forward = false;
	HX_STACK_LINE(330)
	this->first = false;
	HX_STACK_LINE(329)
	this->start = null();
	HX_STACK_LINE(328)
	this->ptr = null();
	HX_STACK_LINE(372)
	::zpp_nape::geom::ZPP_GeomVertexIterator_obj::internal = true;
	HX_STACK_LINE(374)
	::nape::geom::GeomVertexIterator tmp = ::nape::geom::GeomVertexIterator_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	this->outer = tmp;
	HX_STACK_LINE(376)
	::zpp_nape::geom::ZPP_GeomVertexIterator_obj::internal = false;
}
;
	return null();
}

//ZPP_GeomVertexIterator_obj::~ZPP_GeomVertexIterator_obj() { }

Dynamic ZPP_GeomVertexIterator_obj::__CreateEmpty() { return  new ZPP_GeomVertexIterator_obj; }
hx::ObjectPtr< ZPP_GeomVertexIterator_obj > ZPP_GeomVertexIterator_obj::__new()
{  hx::ObjectPtr< ZPP_GeomVertexIterator_obj > _result_ = new ZPP_GeomVertexIterator_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_GeomVertexIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_GeomVertexIterator_obj > _result_ = new ZPP_GeomVertexIterator_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_GeomVertexIterator_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVertexIterator","free",0x2d40ef56,"zpp_nape.geom.ZPP_GeomVertexIterator.free","zpp_nape/geom/GeomPoly.hx",360,0x22e30365)
		HX_STACK_THIS(this)
		HX_STACK_LINE(361)
		::nape::geom::GeomVertexIterator tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		tmp->zpp_inner = null();
		HX_STACK_LINE(362)
		::zpp_nape::geom::ZPP_GeomVert tmp1 = this->start = null();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		this->ptr = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVertexIterator_obj,free,(void))

Void ZPP_GeomVertexIterator_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVertexIterator","alloc",0x869da68b,"zpp_nape.geom.ZPP_GeomVertexIterator.alloc","zpp_nape/geom/GeomPoly.hx",366,0x22e30365)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVertexIterator_obj,alloc,(void))

::zpp_nape::geom::ZPP_GeomVertexIterator ZPP_GeomVertexIterator_obj::zpp_pool;

bool ZPP_GeomVertexIterator_obj::internal;

::nape::geom::GeomVertexIterator ZPP_GeomVertexIterator_obj::get( ::zpp_nape::geom::ZPP_GeomVert poly,bool forward){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVertexIterator","get",0x9d7ab12c,"zpp_nape.geom.ZPP_GeomVertexIterator.get","zpp_nape/geom/GeomPoly.hx",379,0x22e30365)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(forward,"forward")
	HX_STACK_LINE(380)
	::zpp_nape::geom::ZPP_GeomVertexIterator ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(382)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		if ((tmp1)){
			HX_STACK_LINE(383)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp2 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(383)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(389)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp2 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			ret = tmp2;
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = ret->next;
			HX_STACK_LINE(391)
			ret->next = null();
		}
		HX_STACK_LINE(396)
		Dynamic();
	}
	HX_STACK_LINE(398)
	ret->outer->zpp_inner = ret;
	HX_STACK_LINE(399)
	ret->ptr = poly;
	HX_STACK_LINE(400)
	ret->forward = forward;
	HX_STACK_LINE(401)
	ret->start = poly;
	HX_STACK_LINE(402)
	bool tmp = (poly != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	ret->first = tmp;
	HX_STACK_LINE(403)
	::nape::geom::GeomVertexIterator tmp1 = ret->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_GeomVertexIterator_obj,get,return )


ZPP_GeomVertexIterator_obj::ZPP_GeomVertexIterator_obj()
{
}

void ZPP_GeomVertexIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_GeomVertexIterator);
	HX_MARK_MEMBER_NAME(ptr,"ptr");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(forward,"forward");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_GeomVertexIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ptr,"ptr");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(forward,"forward");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_GeomVertexIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ptr") ) { return ptr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"first") ) { return first; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forward") ) { return forward; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_GeomVertexIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
	}
	return false;
}

Dynamic ZPP_GeomVertexIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ptr") ) { ptr=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::GeomVertexIterator >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forward") ) { forward=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_GeomVertexIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return true; }
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_GeomVertexIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ptr","\xee","\x61","\x55","\x00"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("first","\x30","\x78","\x9d","\x00"));
	outFields->push(HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,ptr),HX_HCSTRING("ptr","\xee","\x61","\x55","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(ZPP_GeomVertexIterator_obj,first),HX_HCSTRING("first","\x30","\x78","\x9d","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_GeomVertexIterator_obj,forward),HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5")},
	{hx::fsObject /*::nape::geom::GeomVertexIterator*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVertexIterator*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVertexIterator*/ ,(void *) &ZPP_GeomVertexIterator_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{hx::fsBool,(void *) &ZPP_GeomVertexIterator_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ptr","\xee","\x61","\x55","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5"),
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::internal,"internal");
};

#endif

hx::Class ZPP_GeomVertexIterator_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_GeomVertexIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_GeomVertexIterator","\x04","\x0e","\x8b","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_GeomVertexIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_GeomVertexIterator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_GeomVertexIterator_obj >;
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

void ZPP_GeomVertexIterator_obj::__boot()
{
	zpp_pool= null();
	internal= false;
}

} // end namespace zpp_nape
} // end namespace geom
