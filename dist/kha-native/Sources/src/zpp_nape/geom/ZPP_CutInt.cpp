#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_CutInt_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","new",0x023ba6b5,"zpp_nape.geom.ZPP_CutInt.new","zpp_nape/geom/Cutter.hx",247,0x9f85878e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(279)
	this->path1 = null();
	HX_STACK_LINE(278)
	this->start = null();
	HX_STACK_LINE(277)
	this->end = null();
	HX_STACK_LINE(276)
	this->path0 = null();
	HX_STACK_LINE(275)
	this->vertex = false;
	HX_STACK_LINE(274)
	this->virtualint = false;
	HX_STACK_LINE(273)
	this->time = ((Float)0.0);
	HX_STACK_LINE(248)
	this->next = null();
}
;
	return null();
}

//ZPP_CutInt_obj::~ZPP_CutInt_obj() { }

Dynamic ZPP_CutInt_obj::__CreateEmpty() { return  new ZPP_CutInt_obj; }
hx::ObjectPtr< ZPP_CutInt_obj > ZPP_CutInt_obj::__new()
{  hx::ObjectPtr< ZPP_CutInt_obj > _result_ = new ZPP_CutInt_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_CutInt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CutInt_obj > _result_ = new ZPP_CutInt_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_CutInt_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","alloc",0x4ddd7a0a,"zpp_nape.geom.ZPP_CutInt.alloc","zpp_nape/geom/Cutter.hx",283,0x9f85878e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutInt_obj,alloc,(void))

Void ZPP_CutInt_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","free",0xecb650b7,"zpp_nape.geom.ZPP_CutInt.free","zpp_nape/geom/Cutter.hx",286,0x9f85878e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(287)
		::zpp_nape::geom::ZPP_GeomVert tmp = this->start = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		this->end = tmp;
		HX_STACK_LINE(288)
		::zpp_nape::geom::ZPP_CutVert tmp1 = this->path1 = null();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		this->path0 = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutInt_obj,free,(void))

::zpp_nape::geom::ZPP_CutInt ZPP_CutInt_obj::zpp_pool;

::zpp_nape::geom::ZPP_CutInt ZPP_CutInt_obj::get( Float time,::zpp_nape::geom::ZPP_GeomVert end,::zpp_nape::geom::ZPP_GeomVert start,::zpp_nape::geom::ZPP_CutVert path0,::zpp_nape::geom::ZPP_CutVert path1,hx::Null< bool >  __o_virtualint,hx::Null< bool >  __o_vertex){
bool virtualint = __o_virtualint.Default(false);
bool vertex = __o_vertex.Default(false);
	HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","get",0x023656eb,"zpp_nape.geom.ZPP_CutInt.get","zpp_nape/geom/Cutter.hx",291,0x9f85878e)
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(path0,"path0")
	HX_STACK_ARG(path1,"path1")
	HX_STACK_ARG(virtualint,"virtualint")
	HX_STACK_ARG(vertex,"vertex")
{
		HX_STACK_LINE(292)
		::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(294)
			::zpp_nape::geom::ZPP_CutInt tmp = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(294)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			if ((tmp1)){
				HX_STACK_LINE(295)
				::zpp_nape::geom::ZPP_CutInt tmp2 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(295)
				ret = tmp2;
			}
			else{
				HX_STACK_LINE(301)
				::zpp_nape::geom::ZPP_CutInt tmp2 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(301)
				ret = tmp2;
				HX_STACK_LINE(302)
				::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(303)
				ret->next = null();
			}
			HX_STACK_LINE(308)
			Dynamic();
		}
		HX_STACK_LINE(310)
		ret->virtualint = virtualint;
		HX_STACK_LINE(311)
		ret->end = end;
		HX_STACK_LINE(312)
		ret->start = start;
		HX_STACK_LINE(313)
		ret->path0 = path0;
		HX_STACK_LINE(314)
		ret->path1 = path1;
		HX_STACK_LINE(315)
		ret->time = time;
		HX_STACK_LINE(316)
		ret->vertex = vertex;
		HX_STACK_LINE(317)
		::zpp_nape::geom::ZPP_CutInt tmp = ret;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ZPP_CutInt_obj,get,return )


ZPP_CutInt_obj::ZPP_CutInt_obj()
{
}

void ZPP_CutInt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CutInt);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(virtualint,"virtualint");
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(path0,"path0");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(path1,"path1");
	HX_MARK_END_CLASS();
}

void ZPP_CutInt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(virtualint,"virtualint");
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(path0,"path0");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(path1,"path1");
}

Dynamic ZPP_CutInt_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"path0") ) { return path0; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"path1") ) { return path1; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"virtualint") ) { return virtualint; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_CutInt_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic ZPP_CutInt_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_CutInt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"path0") ) { path0=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path1") ) { path1=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"virtualint") ) { virtualint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CutInt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_CutInt >(); return true; }
	}
	return false;
}

void ZPP_CutInt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("virtualint","\xc4","\x87","\xda","\x60"));
	outFields->push(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	outFields->push(HX_HCSTRING("path0","\xeb","\x0a","\x57","\xbd"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("path1","\xec","\x0a","\x57","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutInt*/ ,(int)offsetof(ZPP_CutInt_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(ZPP_CutInt_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsBool,(int)offsetof(ZPP_CutInt_obj,virtualint),HX_HCSTRING("virtualint","\xc4","\x87","\xda","\x60")},
	{hx::fsBool,(int)offsetof(ZPP_CutInt_obj,vertex),HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(int)offsetof(ZPP_CutInt_obj,path0),HX_HCSTRING("path0","\xeb","\x0a","\x57","\xbd")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_CutInt_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_CutInt_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(int)offsetof(ZPP_CutInt_obj,path1),HX_HCSTRING("path1","\xec","\x0a","\x57","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutInt*/ ,(void *) &ZPP_CutInt_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("virtualint","\xc4","\x87","\xda","\x60"),
	HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),
	HX_HCSTRING("path0","\xeb","\x0a","\x57","\xbd"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("path1","\xec","\x0a","\x57","\xbd"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CutInt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CutInt_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CutInt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CutInt_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_CutInt_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_CutInt_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_CutInt","\x43","\x28","\xf3","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_CutInt_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_CutInt_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CutInt_obj >;
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

void ZPP_CutInt_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
