#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","new",0xe715762b,"zpp_nape.geom.ZPP_SimpleVert.new","zpp_nape/geom/Simple.hx",174,0x62f156db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(205)
	this->node = null();
	HX_STACK_LINE(180)
	this->next = null();
	HX_STACK_LINE(179)
	this->id = (int)0;
	HX_STACK_LINE(178)
	this->links = null();
	HX_STACK_LINE(177)
	this->y = ((Float)0.0);
	HX_STACK_LINE(176)
	this->x = ((Float)0.0);
	HX_STACK_LINE(175)
	this->forced = false;
	HX_STACK_LINE(217)
	int tmp = ::zpp_nape::ZPP_ID_obj::ZPP_SimpleVert();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	this->id = tmp;
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		if ((tmp2)){
			HX_STACK_LINE(220)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(220)
			this->links = tmp3;
		}
		else{
			HX_STACK_LINE(226)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			this->links = tmp3;
			HX_STACK_LINE(227)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = this->links;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = tmp4->next;
			HX_STACK_LINE(228)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp5 = this->links;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(228)
			tmp5->next = null();
		}
		HX_STACK_LINE(233)
		Dynamic();
	}
	HX_STACK_LINE(235)
	Dynamic tmp1 = ::zpp_nape::geom::ZPP_SimpleVert_obj::less_xy_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->links;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	tmp2->lt = tmp1;
}
;
	return null();
}

//ZPP_SimpleVert_obj::~ZPP_SimpleVert_obj() { }

Dynamic ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZPP_SimpleVert_obj > ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleVert_obj > _result_ = new ZPP_SimpleVert_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleVert_obj > _result_ = new ZPP_SimpleVert_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SimpleVert_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","free",0x46720881,"zpp_nape.geom.ZPP_SimpleVert.free","zpp_nape/geom/Simple.hx",208,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->links;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		tmp->clear();
		HX_STACK_LINE(210)
		this->node = null();
		HX_STACK_LINE(211)
		this->forced = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleVert_obj,free,(void))

Void ZPP_SimpleVert_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","alloc",0x78629300,"zpp_nape.geom.ZPP_SimpleVert.alloc","zpp_nape/geom/Simple.hx",215,0x62f156db)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleVert_obj,alloc,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_SimpleVert_obj::zpp_pool;

bool ZPP_SimpleVert_obj::less_xy( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","less_xy",0x4bca30b2,"zpp_nape.geom.ZPP_SimpleVert.less_xy","zpp_nape/geom/Simple.hx",237,0x62f156db)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(238)
	bool tmp = (p->y < q->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	if ((tmp1)){
		HX_STACK_LINE(238)
		bool tmp3 = (p->y == q->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		if ((tmp5)){
			HX_STACK_LINE(238)
			tmp2 = (p->x < q->x);
		}
		else{
			HX_STACK_LINE(238)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(238)
		tmp2 = true;
	}
	HX_STACK_LINE(238)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,less_xy,return )

Void ZPP_SimpleVert_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","swap_nodes",0xaac053da,"zpp_nape.geom.ZPP_SimpleVert.swap_nodes","zpp_nape/geom/Simple.hx",240,0x62f156db)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(242)
		p->node = q->node;
		HX_STACK_LINE(243)
		q->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,swap_nodes,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_SimpleVert_obj::get( Float x,Float y){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleVert","get",0xe7102661,"zpp_nape.geom.ZPP_SimpleVert.get","zpp_nape/geom/Simple.hx",246,0x62f156db)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(247)
	::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(249)
		::zpp_nape::geom::ZPP_SimpleVert tmp = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		if ((tmp1)){
			HX_STACK_LINE(250)
			::zpp_nape::geom::ZPP_SimpleVert tmp2 = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(256)
			::zpp_nape::geom::ZPP_SimpleVert tmp2 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			ret = tmp2;
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
			HX_STACK_LINE(258)
			ret->next = null();
		}
		HX_STACK_LINE(263)
		Dynamic();
	}
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(266)
		ret->x = x;
		HX_STACK_LINE(267)
		ret->y = y;
		HX_STACK_LINE(276)
		{
		}
	}
	HX_STACK_LINE(285)
	::zpp_nape::geom::ZPP_SimpleVert tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,get,return )


ZPP_SimpleVert_obj::ZPP_SimpleVert_obj()
{
}

void ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(links,"links");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forced,"forced");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(links,"links");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(node,"node");
}

Dynamic ZPP_SimpleVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"links") ) { return links; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_SimpleVert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"less_xy") ) { outValue = less_xy_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { outValue = swap_nodes_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"links") ) { links=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SimpleVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return true; }
	}
	return false;
}

void ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("links","\x39","\xe3","\x01","\x75"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ZPP_SimpleVert_obj,forced),HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd")},
	{hx::fsFloat,(int)offsetof(ZPP_SimpleVert_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_SimpleVert_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleVert_obj,links),HX_HCSTRING("links","\x39","\xe3","\x01","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_SimpleVert_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleVert_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleVert_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(void *) &ZPP_SimpleVert_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("links","\x39","\xe3","\x01","\x75"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_SimpleVert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("less_xy","\x67","\x49","\x7a","\x70"),
	HX_HCSTRING("swap_nodes","\x45","\xda","\xd2","\xe8"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_SimpleVert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SimpleVert","\xb9","\x84","\xa6","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SimpleVert_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_SimpleVert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimpleVert_obj >;
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

void ZPP_SimpleVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
