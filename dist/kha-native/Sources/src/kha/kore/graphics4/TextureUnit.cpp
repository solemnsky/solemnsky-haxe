#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#include <kha/kore/graphics4/TextureUnit.h>
#endif
namespace kha{
namespace kore{
namespace graphics4{

Void TextureUnit_obj::__construct()
{
HX_STACK_FRAME("kha.kore.graphics4.TextureUnit","new",0x2314121f,"kha.kore.graphics4.TextureUnit.new","kha/kore/graphics4/TextureUnit.hx",10,0x2f8cf252)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TextureUnit_obj::~TextureUnit_obj() { }

Dynamic TextureUnit_obj::__CreateEmpty() { return  new TextureUnit_obj; }
hx::ObjectPtr< TextureUnit_obj > TextureUnit_obj::__new()
{  hx::ObjectPtr< TextureUnit_obj > _result_ = new TextureUnit_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureUnit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureUnit_obj > _result_ = new TextureUnit_obj();
	_result_->__construct();
	return _result_;}

hx::Object *TextureUnit_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::graphics4::TextureUnit_obj)) return operator ::kha::graphics4::TextureUnit_obj *();
	return super::__ToInterface(inType);
}

TextureUnit_obj::operator ::kha::graphics4::TextureUnit_obj *()
	{ return new ::kha::graphics4::TextureUnit_delegate_< TextureUnit_obj >(this); }

TextureUnit_obj::TextureUnit_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureUnit_obj::__mClass;

void TextureUnit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.graphics4.TextureUnit","\xad","\x16","\xc3","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextureUnit_obj >;
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
