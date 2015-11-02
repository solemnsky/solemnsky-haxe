#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleEvent","new",0xb70e1104,"zpp_nape.geom.ZPP_SimpleEvent.new","zpp_nape/geom/Simple.hx",383,0x62f156db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(403)
	this->next = null();
	HX_STACK_LINE(388)
	this->node = null();
	HX_STACK_LINE(387)
	this->segment2 = null();
	HX_STACK_LINE(386)
	this->segment = null();
	HX_STACK_LINE(385)
	this->vertex = null();
	HX_STACK_LINE(384)
	this->type = (int)0;
}
;
	return null();
}

//ZPP_SimpleEvent_obj::~ZPP_SimpleEvent_obj() { }

Dynamic ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZPP_SimpleEvent_obj > ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleEvent_obj > _result_ = new ZPP_SimpleEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleEvent_obj > _result_ = new ZPP_SimpleEvent_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SimpleEvent_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleEvent","free",0x7000eb88,"zpp_nape.geom.ZPP_SimpleEvent.free","zpp_nape/geom/Simple.hx",430,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(431)
		this->vertex = null();
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_SimpleSeg tmp = this->segment2 = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(432)
		this->segment = tmp;
		HX_STACK_LINE(433)
		this->node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleEvent_obj,free,(void))

Void ZPP_SimpleEvent_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleEvent","alloc",0xabda5619,"zpp_nape.geom.ZPP_SimpleEvent.alloc","zpp_nape/geom/Simple.hx",437,0x62f156db)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleEvent_obj,alloc,(void))

Void ZPP_SimpleEvent_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleEvent a,::zpp_nape::geom::ZPP_SimpleEvent b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleEvent","swap_nodes",0x1e31b621,"zpp_nape.geom.ZPP_SimpleEvent.swap_nodes","zpp_nape/geom/Simple.hx",389,0x62f156db)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(390)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t = a->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(391)
		a->node = b->node;
		HX_STACK_LINE(392)
		b->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleEvent_obj,swap_nodes,(void))

bool ZPP_SimpleEvent_obj::less_xy( ::zpp_nape::geom::ZPP_SimpleEvent a,::zpp_nape::geom::ZPP_SimpleEvent b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleEvent","less_xy",0x1f0bac0b,"zpp_nape.geom.ZPP_SimpleEvent.less_xy","zpp_nape/geom/Simple.hx",394,0x62f156db)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(395)
	Float tmp = a->vertex->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	Float tmp1 = b->vertex->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(395)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(395)
	if ((tmp2)){
		HX_STACK_LINE(395)
		return true;
	}
	else{
		HX_STACK_LINE(396)
		Float tmp3 = a->vertex->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		Float tmp4 = b->vertex->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		if ((tmp5)){
			HX_STACK_LINE(396)
			return false;
		}
		else{
			HX_STACK_LINE(398)
			Float tmp6 = a->vertex->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(398)
			Float tmp7 = b->vertex->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(398)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(398)
			if ((tmp8)){
				HX_STACK_LINE(398)
				return true;
			}
			else{
				HX_STACK_LINE(399)
				Float tmp9 = a->vertex->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(399)
				Float tmp10 = b->vertex->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(399)
				bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(399)
				if ((tmp11)){
					HX_STACK_LINE(399)
					return false;
				}
				else{
					HX_STACK_LINE(400)
					bool tmp12 = (a->type < b->type);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(400)
					return tmp12;
				}
			}
		}
	}
	HX_STACK_LINE(395)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleEvent_obj,less_xy,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleEvent_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleEvent_obj::get( ::zpp_nape::geom::ZPP_SimpleVert v){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleEvent","get",0xb708c13a,"zpp_nape.geom.ZPP_SimpleEvent.get","zpp_nape/geom/Simple.hx",440,0x62f156db)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(441)
	::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(442)
	{
		HX_STACK_LINE(443)
		::zpp_nape::geom::ZPP_SimpleEvent tmp = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		if ((tmp1)){
			HX_STACK_LINE(444)
			::zpp_nape::geom::ZPP_SimpleEvent tmp2 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(444)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(450)
			::zpp_nape::geom::ZPP_SimpleEvent tmp2 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(450)
			ret = tmp2;
			HX_STACK_LINE(451)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
			HX_STACK_LINE(452)
			ret->next = null();
		}
		HX_STACK_LINE(457)
		Dynamic();
	}
	HX_STACK_LINE(459)
	ret->vertex = v;
	HX_STACK_LINE(460)
	::zpp_nape::geom::ZPP_SimpleEvent tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleEvent_obj,get,return )


ZPP_SimpleEvent_obj::ZPP_SimpleEvent_obj()
{
}

void ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_MEMBER_NAME(segment2,"segment2");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(segment,"segment");
	HX_VISIT_MEMBER_NAME(segment2,"segment2");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_SimpleEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"segment") ) { return segment; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"segment2") ) { return segment2; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_SimpleEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"segment2") ) { segment2=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SimpleEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_SimpleEvent >(); return true; }
	}
	return false;
}

void ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	outFields->push(HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6"));
	outFields->push(HX_HCSTRING("segment2","\x1f","\xed","\x26","\x4e"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ZPP_SimpleEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleEvent_obj,vertex),HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleEvent_obj,segment),HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleEvent_obj,segment2),HX_HCSTRING("segment2","\x1f","\xed","\x26","\x4e")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent*/ ,(int)offsetof(ZPP_SimpleEvent_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleEvent*/ ,(int)offsetof(ZPP_SimpleEvent_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleEvent*/ ,(void *) &ZPP_SimpleEvent_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),
	HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6"),
	HX_HCSTRING("segment2","\x1f","\xed","\x26","\x4e"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_SimpleEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("swap_nodes","\x45","\xda","\xd2","\xe8"),
	HX_HCSTRING("less_xy","\x67","\x49","\x7a","\x70"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_SimpleEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SimpleEvent","\x12","\x7f","\x70","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SimpleEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_SimpleEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimpleEvent_obj >;
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

void ZPP_SimpleEvent_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
