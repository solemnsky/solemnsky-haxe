#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_UserBody_obj::__construct(int cnt,::zpp_nape::phys::ZPP_Body body)
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserBody","new",0xf94b08b4,"zpp_nape.constraint.ZPP_UserBody.new","zpp_nape/constraint/UserConstraint.hx",569,0x968ba4a6)
HX_STACK_THIS(this)
HX_STACK_ARG(cnt,"cnt")
HX_STACK_ARG(body,"body")
{
	HX_STACK_LINE(571)
	this->body = null();
	HX_STACK_LINE(570)
	this->cnt = (int)0;
	HX_STACK_LINE(573)
	this->cnt = cnt;
	HX_STACK_LINE(574)
	this->body = body;
}
;
	return null();
}

//ZPP_UserBody_obj::~ZPP_UserBody_obj() { }

Dynamic ZPP_UserBody_obj::__CreateEmpty() { return  new ZPP_UserBody_obj; }
hx::ObjectPtr< ZPP_UserBody_obj > ZPP_UserBody_obj::__new(int cnt,::zpp_nape::phys::ZPP_Body body)
{  hx::ObjectPtr< ZPP_UserBody_obj > _result_ = new ZPP_UserBody_obj();
	_result_->__construct(cnt,body);
	return _result_;}

Dynamic ZPP_UserBody_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_UserBody_obj > _result_ = new ZPP_UserBody_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


ZPP_UserBody_obj::ZPP_UserBody_obj()
{
}

void ZPP_UserBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_UserBody);
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_END_CLASS();
}

void ZPP_UserBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
	HX_VISIT_MEMBER_NAME(body,"body");
}

Dynamic ZPP_UserBody_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { return cnt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_UserBody_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_UserBody_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_UserBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ZPP_UserBody_obj,cnt),HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_UserBody_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_UserBody_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_UserBody_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_UserBody_obj::__mClass;

void ZPP_UserBody_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_UserBody","\xc2","\xde","\x8b","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_UserBody_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_UserBody_obj >;
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
} // end namespace constraint
