#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Vec3_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec3","new",0x58734907,"zpp_nape.geom.ZPP_Vec3.new","zpp_nape/geom/Vec3.hx",174,0x8339fc0e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(180)
	this->_validate = null();
	HX_STACK_LINE(179)
	this->immutable = false;
	HX_STACK_LINE(178)
	this->z = ((Float)0.0);
	HX_STACK_LINE(177)
	this->y = ((Float)0.0);
	HX_STACK_LINE(176)
	this->x = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(189)
	this->immutable = false;
	HX_STACK_LINE(190)
	this->_validate = null();
}
;
	return null();
}

//ZPP_Vec3_obj::~ZPP_Vec3_obj() { }

Dynamic ZPP_Vec3_obj::__CreateEmpty() { return  new ZPP_Vec3_obj; }
hx::ObjectPtr< ZPP_Vec3_obj > ZPP_Vec3_obj::__new()
{  hx::ObjectPtr< ZPP_Vec3_obj > _result_ = new ZPP_Vec3_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Vec3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Vec3_obj > _result_ = new ZPP_Vec3_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Vec3_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec3","validate",0x754a9a8f,"zpp_nape.geom.ZPP_Vec3.validate","zpp_nape/geom/Vec3.hx",183,0x8339fc0e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		Dynamic tmp = this->_validate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		if ((tmp1)){
			HX_STACK_LINE(185)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec3_obj,validate,(void))


ZPP_Vec3_obj::ZPP_Vec3_obj()
{
}

void ZPP_Vec3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Vec3);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(immutable,"immutable");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_END_CLASS();
}

void ZPP_Vec3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(immutable,"immutable");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
}

Dynamic ZPP_Vec3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable; }
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Vec3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { immutable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Vec3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_Vec3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("immutable","\x42","\x28","\xc7","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(ZPP_Vec3_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsFloat,(int)offsetof(ZPP_Vec3_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Vec3_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Vec3_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_Vec3_obj,immutable),HX_HCSTRING("immutable","\x42","\x28","\xc7","\x66")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Vec3_obj,_validate),HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("immutable","\x42","\x28","\xc7","\x66"),
	HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Vec3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Vec3_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Vec3_obj::__mClass;

void ZPP_Vec3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Vec3","\x95","\xb9","\xb2","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_Vec3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Vec3_obj >;
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

} // end namespace zpp_nape
} // end namespace geom
