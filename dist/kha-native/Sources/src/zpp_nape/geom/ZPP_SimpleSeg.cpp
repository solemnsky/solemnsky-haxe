#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleSeg_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","new",0x72728fff,"zpp_nape.geom.ZPP_SimpleSeg.new","zpp_nape/geom/Simple.hx",289,0x62f156db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(331)
	this->node = null();
	HX_STACK_LINE(330)
	this->prev = null();
	HX_STACK_LINE(294)
	this->next = null();
	HX_STACK_LINE(293)
	this->id = (int)0;
	HX_STACK_LINE(292)
	this->vertices = null();
	HX_STACK_LINE(291)
	this->right = null();
	HX_STACK_LINE(290)
	this->left = null();
	HX_STACK_LINE(336)
	int tmp = ::zpp_nape::ZPP_ID_obj::ZPP_SimpleSeg();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	this->id = tmp;
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(338)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(338)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(338)
		if ((tmp2)){
			HX_STACK_LINE(339)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			this->vertices = tmp3;
		}
		else{
			HX_STACK_LINE(345)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			this->vertices = tmp3;
			HX_STACK_LINE(346)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = this->vertices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(346)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = tmp4->next;
			HX_STACK_LINE(347)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp5 = this->vertices;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			tmp5->next = null();
		}
		HX_STACK_LINE(352)
		Dynamic();
	}
	HX_STACK_LINE(354)
	Dynamic tmp1 = this->less_xy_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->vertices;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(354)
	tmp2->lt = tmp1;
}
;
	return null();
}

//ZPP_SimpleSeg_obj::~ZPP_SimpleSeg_obj() { }

Dynamic ZPP_SimpleSeg_obj::__CreateEmpty() { return  new ZPP_SimpleSeg_obj; }
hx::ObjectPtr< ZPP_SimpleSeg_obj > ZPP_SimpleSeg_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleSeg_obj > _result_ = new ZPP_SimpleSeg_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SimpleSeg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleSeg_obj > _result_ = new ZPP_SimpleSeg_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SimpleSeg_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","free",0xac8b882d,"zpp_nape.geom.ZPP_SimpleSeg.free","zpp_nape/geom/Simple.hx",321,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		::zpp_nape::geom::ZPP_SimpleVert tmp = this->right = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		this->left = tmp;
		HX_STACK_LINE(323)
		this->prev = null();
		HX_STACK_LINE(324)
		this->node = null();
		HX_STACK_LINE(325)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = this->vertices;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		tmp1->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSeg_obj,free,(void))

Void ZPP_SimpleSeg_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","alloc",0x6898c9d4,"zpp_nape.geom.ZPP_SimpleSeg.alloc","zpp_nape/geom/Simple.hx",329,0x62f156db)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSeg_obj,alloc,(void))

bool ZPP_SimpleSeg_obj::less_xy( ::zpp_nape::geom::ZPP_SimpleVert a,::zpp_nape::geom::ZPP_SimpleVert b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","less_xy",0x5f1ac486,"zpp_nape.geom.ZPP_SimpleSeg.less_xy","zpp_nape/geom/Simple.hx",332,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(333)
	bool tmp = (a->x < b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(333)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(333)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(333)
	if ((tmp1)){
		HX_STACK_LINE(333)
		bool tmp3 = (a->x == b->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(333)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(333)
		if ((tmp5)){
			HX_STACK_LINE(333)
			tmp2 = (a->y < b->y);
		}
		else{
			HX_STACK_LINE(333)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(333)
		tmp2 = true;
	}
	HX_STACK_LINE(333)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSeg_obj,less_xy,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSeg_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSeg_obj::get( ::zpp_nape::geom::ZPP_SimpleVert left,::zpp_nape::geom::ZPP_SimpleVert right){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","get",0x726d4035,"zpp_nape.geom.ZPP_SimpleSeg.get","zpp_nape/geom/Simple.hx",356,0x62f156db)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(357)
	::zpp_nape::geom::ZPP_SimpleSeg ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(358)
	{
		HX_STACK_LINE(359)
		::zpp_nape::geom::ZPP_SimpleSeg tmp = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		if ((tmp1)){
			HX_STACK_LINE(360)
			::zpp_nape::geom::ZPP_SimpleSeg tmp2 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(366)
			::zpp_nape::geom::ZPP_SimpleSeg tmp2 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			ret = tmp2;
			HX_STACK_LINE(367)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = ret->next;
			HX_STACK_LINE(368)
			ret->next = null();
		}
		HX_STACK_LINE(373)
		Dynamic();
	}
	HX_STACK_LINE(375)
	ret->left = left;
	HX_STACK_LINE(376)
	ret->right = right;
	HX_STACK_LINE(377)
	::zpp_nape::geom::ZPP_SimpleVert tmp = left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	ret->vertices->insert(tmp);
	HX_STACK_LINE(378)
	::zpp_nape::geom::ZPP_SimpleVert tmp1 = right;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(378)
	ret->vertices->insert(tmp1);
	HX_STACK_LINE(379)
	::zpp_nape::geom::ZPP_SimpleSeg tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(379)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSeg_obj,get,return )


ZPP_SimpleSeg_obj::ZPP_SimpleSeg_obj()
{
}

void ZPP_SimpleSeg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleSeg);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleSeg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(node,"node");
}

Dynamic ZPP_SimpleSeg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"less_xy") ) { return less_xy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_SimpleSeg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic ZPP_SimpleSeg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SimpleSeg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return true; }
	}
	return false;
}

void ZPP_SimpleSeg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleSeg_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleSeg_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleSeg_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsInt,(int)offsetof(ZPP_SimpleSeg_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSeg_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSeg_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSeg_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(void *) &ZPP_SimpleSeg_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("less_xy","\x67","\x49","\x7a","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_SimpleSeg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_SimpleSeg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SimpleSeg","\x8d","\x24","\xd5","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SimpleSeg_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_SimpleSeg_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimpleSeg_obj >;
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

void ZPP_SimpleSeg_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
