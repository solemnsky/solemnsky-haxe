#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
namespace kha{
namespace graphics4{

Void FragmentShader_obj::__construct(::kha::Blob source)
{
HX_STACK_FRAME("kha.graphics4.FragmentShader","new",0x0ee18576,"kha.graphics4.FragmentShader.new","kha/graphics4/FragmentShader.hx",13,0xa52f2538)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(14)
	::kha::Blob tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->initFragmentShader(tmp);
}
;
	return null();
}

//FragmentShader_obj::~FragmentShader_obj() { }

Dynamic FragmentShader_obj::__CreateEmpty() { return  new FragmentShader_obj; }
hx::ObjectPtr< FragmentShader_obj > FragmentShader_obj::__new(::kha::Blob source)
{  hx::ObjectPtr< FragmentShader_obj > _result_ = new FragmentShader_obj();
	_result_->__construct(source);
	return _result_;}

Dynamic FragmentShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FragmentShader_obj > _result_ = new FragmentShader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FragmentShader_obj::initFragmentShader( ::kha::Blob source){

		shader = new Kore::Shader(source->toBytes()->b->Pointer(), source->length(), Kore::FragmentShader);
	
{
		HX_STACK_FRAME("kha.graphics4.FragmentShader","initFragmentShader",0x6c01cdef,"kha.graphics4.FragmentShader.initFragmentShader","kha/graphics4/FragmentShader.hx",20,0xa52f2538)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FragmentShader_obj,initFragmentShader,(void))

Void FragmentShader_obj::unused( ){
{
		HX_STACK_FRAME("kha.graphics4.FragmentShader","unused",0xe53eb5c0,"kha.graphics4.FragmentShader.unused","kha/graphics4/FragmentShader.hx",24,0xa52f2538)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::ofString(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::haxe::io::Bytes include = tmp;		HX_STACK_VAR(include,"include");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FragmentShader_obj,unused,(void))


FragmentShader_obj::FragmentShader_obj()
{
}

Dynamic FragmentShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unused") ) { return unused_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initFragmentShader") ) { return initFragmentShader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initFragmentShader","\x45","\x5a","\xb8","\xe8"),
	HX_HCSTRING("unused","\x16","\x99","\x82","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FragmentShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FragmentShader_obj::__mClass,"__mClass");
};

#endif

hx::Class FragmentShader_obj::__mClass;

void FragmentShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.FragmentShader","\x84","\x52","\xb0","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FragmentShader_obj >;
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
} // end namespace graphics4
