#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#include <kha/kore/graphics4/ConstantLocation.h>
#endif
namespace kha{
namespace kore{
namespace graphics4{

Void ConstantLocation_obj::__construct()
{
HX_STACK_FRAME("kha.kore.graphics4.ConstantLocation","new",0x99ddedbd,"kha.kore.graphics4.ConstantLocation.new","kha/kore/graphics4/ConstantLocation.hx",10,0x6d842492)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ConstantLocation_obj::~ConstantLocation_obj() { }

Dynamic ConstantLocation_obj::__CreateEmpty() { return  new ConstantLocation_obj; }
hx::ObjectPtr< ConstantLocation_obj > ConstantLocation_obj::__new()
{  hx::ObjectPtr< ConstantLocation_obj > _result_ = new ConstantLocation_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConstantLocation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConstantLocation_obj > _result_ = new ConstantLocation_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ConstantLocation_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::graphics4::ConstantLocation_obj)) return operator ::kha::graphics4::ConstantLocation_obj *();
	return super::__ToInterface(inType);
}

ConstantLocation_obj::operator ::kha::graphics4::ConstantLocation_obj *()
	{ return new ::kha::graphics4::ConstantLocation_delegate_< ConstantLocation_obj >(this); }

ConstantLocation_obj::ConstantLocation_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConstantLocation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConstantLocation_obj::__mClass,"__mClass");
};

#endif

hx::Class ConstantLocation_obj::__mClass;

void ConstantLocation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.graphics4.ConstantLocation","\x4b","\x4b","\x13","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ConstantLocation_obj >;
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

} // end namespace kha
} // end namespace kore
} // end namespace graphics4
