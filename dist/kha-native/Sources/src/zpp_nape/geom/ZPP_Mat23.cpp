#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Mat23_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","new",0xd071addd,"zpp_nape.geom.ZPP_Mat23.new","zpp_nape/geom/Mat23.hx",174,0xe23340ce)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(247)
	this->next = null();
	HX_STACK_LINE(206)
	this->_invalidate = null();
	HX_STACK_LINE(205)
	this->ty = ((Float)0.0);
	HX_STACK_LINE(204)
	this->tx = ((Float)0.0);
	HX_STACK_LINE(203)
	this->d = ((Float)0.0);
	HX_STACK_LINE(202)
	this->c = ((Float)0.0);
	HX_STACK_LINE(201)
	this->b = ((Float)0.0);
	HX_STACK_LINE(200)
	this->a = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer = null();
}
;
	return null();
}

//ZPP_Mat23_obj::~ZPP_Mat23_obj() { }

Dynamic ZPP_Mat23_obj::__CreateEmpty() { return  new ZPP_Mat23_obj; }
hx::ObjectPtr< ZPP_Mat23_obj > ZPP_Mat23_obj::__new()
{  hx::ObjectPtr< ZPP_Mat23_obj > _result_ = new ZPP_Mat23_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Mat23_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Mat23_obj > _result_ = new ZPP_Mat23_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Mat23 ZPP_Mat23_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","wrapper",0x374bb550,"zpp_nape.geom.ZPP_Mat23.wrapper","zpp_nape/geom/Mat23.hx",176,0xe23340ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(177)
	::nape::geom::Mat23 tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	if ((tmp1)){
		HX_STACK_LINE(178)
		::nape::geom::Mat23 tmp2 = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		this->outer = tmp2;
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(180)
			::nape::geom::Mat23 tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			::zpp_nape::geom::ZPP_Mat23 o = tmp3->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(190)
			::zpp_nape::geom::ZPP_Mat23 tmp4 = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			o->next = tmp4;
			HX_STACK_LINE(191)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = o;
		}
		HX_STACK_LINE(196)
		::nape::geom::Mat23 tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(198)
	::nape::geom::Mat23 tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,wrapper,return )

Void ZPP_Mat23_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","invalidate",0x1ed3959e,"zpp_nape.geom.ZPP_Mat23.invalidate","zpp_nape/geom/Mat23.hx",209,0xe23340ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		Dynamic tmp = this->_invalidate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		if ((tmp1)){
			HX_STACK_LINE(211)
			this->_invalidate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,invalidate,(void))

Void ZPP_Mat23_obj::set( ::zpp_nape::geom::ZPP_Mat23 m){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","set",0xd075791f,"zpp_nape.geom.ZPP_Mat23.set","zpp_nape/geom/Mat23.hx",216,0xe23340ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(217)
		Float tmp = m->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		Float tmp1 = m->b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		Float tmp2 = m->c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		Float tmp3 = m->d;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		Float tmp4 = m->tx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		Float tmp5 = m->ty;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		this->setas(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Mat23_obj,set,(void))

Void ZPP_Mat23_obj::setas( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","setas",0xf39d93d1,"zpp_nape.geom.ZPP_Mat23.setas","zpp_nape/geom/Mat23.hx",219,0xe23340ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(221)
			this->tx = tx;
			HX_STACK_LINE(222)
			this->ty = ty;
			HX_STACK_LINE(231)
			{
			}
		}
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(241)
			this->a = a;
			HX_STACK_LINE(242)
			this->b = b;
			HX_STACK_LINE(243)
			this->c = c;
			HX_STACK_LINE(244)
			this->d = d;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ZPP_Mat23_obj,setas,(void))

Void ZPP_Mat23_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","free",0x8dc68c8f,"zpp_nape.geom.ZPP_Mat23.free","zpp_nape/geom/Mat23.hx",274,0xe23340ce)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,free,(void))

Void ZPP_Mat23_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","alloc",0x9b019b32,"zpp_nape.geom.ZPP_Mat23.alloc","zpp_nape/geom/Mat23.hx",277,0xe23340ce)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,alloc,(void))

::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::zpp_pool;

::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::get( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","get",0xd06c5e13,"zpp_nape.geom.ZPP_Mat23.get","zpp_nape/geom/Mat23.hx",279,0xe23340ce)
	HX_STACK_LINE(280)
	::zpp_nape::geom::ZPP_Mat23 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(281)
	{
		HX_STACK_LINE(282)
		::zpp_nape::geom::ZPP_Mat23 tmp = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		if ((tmp1)){
			HX_STACK_LINE(283)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = ::zpp_nape::geom::ZPP_Mat23_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(289)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			ret = tmp2;
			HX_STACK_LINE(290)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = ret->next;
			HX_STACK_LINE(291)
			ret->next = null();
		}
		HX_STACK_LINE(296)
		Dynamic();
	}
	HX_STACK_LINE(298)
	::zpp_nape::geom::ZPP_Mat23 tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,get,return )

::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::identity( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Mat23","identity",0x394c62a1,"zpp_nape.geom.ZPP_Mat23.identity","zpp_nape/geom/Mat23.hx",300,0xe23340ce)
	HX_STACK_LINE(301)
	::zpp_nape::geom::ZPP_Mat23 tmp = ::zpp_nape::geom::ZPP_Mat23_obj::get();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	::zpp_nape::geom::ZPP_Mat23 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(302)
	ret->setas((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
	HX_STACK_LINE(303)
	::zpp_nape::geom::ZPP_Mat23 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,identity,return )


ZPP_Mat23_obj::ZPP_Mat23_obj()
{
}

void ZPP_Mat23_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Mat23);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_Mat23_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_Mat23_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"setas") ) { return setas_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Mat23_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_Mat23_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::Mat23 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Mat23_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return true; }
	}
	return false;
}

void ZPP_Mat23_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::Mat23*/ ,(int)offsetof(ZPP_Mat23_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Mat23_obj,_invalidate),HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Mat23*/ ,(int)offsetof(ZPP_Mat23_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Mat23*/ ,(void *) &ZPP_Mat23_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("setas","\x14","\x9d","\x2f","\x7a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Mat23_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Mat23_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Mat23_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Mat23_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Mat23_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	::String(null()) };

void ZPP_Mat23_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Mat23","\x6b","\x7b","\x7c","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Mat23_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Mat23_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Mat23_obj >;
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

void ZPP_Mat23_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
