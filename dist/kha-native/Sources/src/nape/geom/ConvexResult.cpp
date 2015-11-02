#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
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

Void ConvexResult_obj::__construct()
{
HX_STACK_FRAME("nape.geom.ConvexResult","new",0x2285a4a2,"nape.geom.ConvexResult.new","nape/geom/ConvexResult.hx",180,0x8636d4ae)
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
		HX_STACK_DO_THROW(HX_HCSTRING("Error: ConvexResult cannot be instantiated derp!","\xca","\x70","\x32","\x70"));
	}
}
;
	return null();
}

//ConvexResult_obj::~ConvexResult_obj() { }

Dynamic ConvexResult_obj::__CreateEmpty() { return  new ConvexResult_obj; }
hx::ObjectPtr< ConvexResult_obj > ConvexResult_obj::__new()
{  hx::ObjectPtr< ConvexResult_obj > _result_ = new ConvexResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConvexResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConvexResult_obj > _result_ = new ConvexResult_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec2 ConvexResult_obj::get_normal( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_normal",0x9c62f9ee,"nape.geom.ConvexResult.get_normal","nape/geom/ConvexResult.hx",190,0x8636d4ae)
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


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_normal,return )

::nape::geom::Vec2 ConvexResult_obj::get_position( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_position",0x4e3ae830,"nape.geom.ConvexResult.get_position","nape/geom/ConvexResult.hx",201,0x8636d4ae)
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
	::nape::geom::Vec2 tmp1 = tmp->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_position,return )

Float ConvexResult_obj::get_toi( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_toi",0xa8eb4c67,"nape.geom.ConvexResult.get_toi","nape/geom/ConvexResult.hx",212,0x8636d4ae)
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
	Float tmp1 = tmp->toiDistance;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_toi,return )

::nape::shape::Shape ConvexResult_obj::get_shape( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","get_shape",0x9b97b13a,"nape.geom.ConvexResult.get_shape","nape/geom/ConvexResult.hx",223,0x8636d4ae)
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


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_shape,return )

Void ConvexResult_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.ConvexResult","dispose",0x3d6a9de1,"nape.geom.ConvexResult.dispose","nape/geom/ConvexResult.hx",243,0x8636d4ae)
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


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,dispose,(void))

::String ConvexResult_obj::toString( ){
	HX_STACK_FRAME("nape.geom.ConvexResult","toString",0x90aa4d2a,"nape.geom.ConvexResult.toString","nape/geom/ConvexResult.hx",252,0x8636d4ae)
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
	::String tmp3 = (tmp2 + HX_HCSTRING(" toi: ","\x94","\x64","\x95","\xdf"));		HX_STACK_VAR(tmp3,"tmp3");
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
	::String tmp6 = (tmp5 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(256)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,toString,return )


ConvexResult_obj::ConvexResult_obj()
{
}

void ConvexResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvexResult);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ConvexResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ConvexResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { if (inCallProp == hx::paccAlways) return get_toi(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { if (inCallProp == hx::paccAlways) return get_shape(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == hx::paccAlways) return get_normal(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_toi") ) { return get_toi_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConvexResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ConvexResult_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ConvexResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("toi","\x8e","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_ConvexRayResult*/ ,(int)offsetof(ConvexResult_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_normal","\xf0","\xe1","\xf0","\x20"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_toi","\x25","\x2f","\xcd","\x26"),
	HX_HCSTRING("get_shape","\x78","\x3f","\xc6","\xbf"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvexResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvexResult_obj::__mClass,"__mClass");
};

#endif

hx::Class ConvexResult_obj::__mClass;

void ConvexResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.ConvexResult","\xb0","\x6b","\x32","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ConvexResult_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConvexResult_obj >;
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
