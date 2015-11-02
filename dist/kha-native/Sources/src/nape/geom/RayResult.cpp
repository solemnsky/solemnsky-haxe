#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
namespace nape{
namespace geom{

Void RayResult_obj::__construct()
{
HX_STACK_FRAME("nape.geom.RayResult","new",0x9f3d594d,"nape.geom.RayResult.new","nape/geom/RayResult.hx",180,0xc2787b23)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
	HX_STACK_LINE(236)
	bool tmp = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	if ((tmp1)){
		HX_STACK_LINE(236)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: RayResult cannot be instantiated derp!","\x43","\xd7","\xfd","\x23"));
	}
}
;
	return null();
}

//RayResult_obj::~RayResult_obj() { }

Dynamic RayResult_obj::__CreateEmpty() { return  new RayResult_obj; }
hx::ObjectPtr< RayResult_obj > RayResult_obj::__new()
{  hx::ObjectPtr< RayResult_obj > _result_ = new RayResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic RayResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RayResult_obj > _result_ = new RayResult_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec2 RayResult_obj::get_normal( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_normal",0xe17c00a3,"nape.geom.RayResult.get_normal","nape/geom/RayResult.hx",190,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
		}
	}
	HX_STACK_LINE(194)
	::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::nape::geom::Vec2 tmp1 = tmp->normal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_normal,return )

Float RayResult_obj::get_distance( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_distance",0x71a9b8b1,"nape.geom.RayResult.get_distance","nape/geom/RayResult.hx",201,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(203)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		if ((tmp2)){
			HX_STACK_LINE(203)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
		}
	}
	HX_STACK_LINE(205)
	::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	Float tmp1 = tmp->toiDistance;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_distance,return )

bool RayResult_obj::get_inner( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_inner",0x1be4069a,"nape.geom.RayResult.get_inner","nape/geom/RayResult.hx",212,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		if ((tmp2)){
			HX_STACK_LINE(214)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
		}
	}
	HX_STACK_LINE(216)
	::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	bool tmp1 = tmp->inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_inner,return )

::nape::shape::Shape RayResult_obj::get_shape( ){
	HX_STACK_FRAME("nape.geom.RayResult","get_shape",0xd9e4b825,"nape.geom.RayResult.get_shape","nape/geom/RayResult.hx",223,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		if ((tmp2)){
			HX_STACK_LINE(225)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
		}
	}
	HX_STACK_LINE(227)
	::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	::nape::shape::Shape tmp1 = tmp->shape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_shape,return )

Void RayResult_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.RayResult","dispose",0x7791840c,"nape.geom.RayResult.dispose","nape/geom/RayResult.hx",243,0xc2787b23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(245)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			if ((tmp2)){
				HX_STACK_LINE(245)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
			}
		}
		HX_STACK_LINE(247)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		tmp->free();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,dispose,(void))

::String RayResult_obj::toString( ){
	HX_STACK_FRAME("nape.geom.RayResult","toString",0x388ccc9f,"nape.geom.RayResult.toString","nape/geom/RayResult.hx",252,0xc2787b23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		if ((tmp2)){
			HX_STACK_LINE(254)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
		}
	}
	HX_STACK_LINE(256)
	::nape::shape::Shape tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp2 = tmp1->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			if ((tmp3)){
				HX_STACK_LINE(256)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
			}
		}
		HX_STACK_LINE(256)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		tmp = tmp1->shape;
	}
	HX_STACK_LINE(256)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	::String tmp2 = (HX_HCSTRING("{ shape: ","\x62","\x97","\xc0","\xe7") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	::String tmp3 = (tmp2 + HX_HCSTRING(" distance: ","\x3b","\x25","\xba","\xa7"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp6 = tmp5->next;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			if ((tmp7)){
				HX_STACK_LINE(256)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
			}
		}
		HX_STACK_LINE(256)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(256)
		tmp4 = tmp5->toiDistance;
	}
	HX_STACK_LINE(256)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(256)
	::String tmp6 = (tmp5 + HX_HCSTRING(" ?inner: ","\x7d","\xab","\x53","\x14"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(256)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp9 = tmp8->next;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(256)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			if ((tmp10)){
				HX_STACK_LINE(256)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
			}
		}
		HX_STACK_LINE(256)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(256)
		tmp7 = tmp8->inner;
	}
	HX_STACK_LINE(256)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(256)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(256)
	::String tmp10 = (tmp9 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(256)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,toString,return )


RayResult_obj::RayResult_obj()
{
}

void RayResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayResult);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void RayResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic RayResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == hx::paccAlways) return get_inner(); }
		if (HX_FIELD_EQ(inName,"shape") ) { if (inCallProp == hx::paccAlways) return get_shape(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == hx::paccAlways) return get_normal(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return get_distance(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_inner") ) { return get_inner_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RayResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RayResult_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RayResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_ConvexRayResult*/ ,(int)offsetof(RayResult_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_normal","\xf0","\xe1","\xf0","\x20"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	HX_HCSTRING("get_inner","\xed","\x8d","\xc5","\x01"),
	HX_HCSTRING("get_shape","\x78","\x3f","\xc6","\xbf"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayResult_obj::__mClass,"__mClass");
};

#endif

hx::Class RayResult_obj::__mClass;

void RayResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.RayResult","\xdb","\xae","\x51","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RayResult_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RayResult_obj >;
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
