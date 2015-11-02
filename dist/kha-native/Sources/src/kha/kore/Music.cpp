#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Music
#include <kha/Music.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_kore_Music
#include <kha/kore/Music.h>
#endif
namespace kha{
namespace kore{

Void Music_obj::__construct(::haxe::io::Bytes bytes)
{
HX_STACK_FRAME("kha.kore.Music","new",0xca40682a,"kha.kore.Music.new","kha/kore/Music.hx",12,0x640406e6)
HX_STACK_THIS(this)
HX_STACK_ARG(bytes,"bytes")
{
	HX_STACK_LINE(13)
	super::__construct();
	HX_STACK_LINE(14)
	this->data = bytes;
}
;
	return null();
}

//Music_obj::~Music_obj() { }

Dynamic Music_obj::__CreateEmpty() { return  new Music_obj; }
hx::ObjectPtr< Music_obj > Music_obj::__new(::haxe::io::Bytes bytes)
{  hx::ObjectPtr< Music_obj > _result_ = new Music_obj();
	_result_->__construct(bytes);
	return _result_;}

Dynamic Music_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Music_obj > _result_ = new Music_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Music_obj::loadMusic( ::String filename){
{
		HX_STACK_FRAME("kha.kore.Music","loadMusic",0x2779a7e9,"kha.kore.Music.loadMusic","kha/kore/Music.hx",19,0x640406e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filename,"filename")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Music_obj,loadMusic,(void))

Void Music_obj::unload( ){
{
		HX_STACK_FRAME("kha.kore.Music","unload",0xebdd8375,"kha.kore.Music.unload","kha/kore/Music.hx",24,0x640406e6)
		HX_STACK_THIS(this)
	}
return null();
}



Music_obj::Music_obj()
{
}

Dynamic Music_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Music_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Music_obj::__mClass,"__mClass");
};

#endif

hx::Class Music_obj::__mClass;

void Music_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.Music","\x38","\xcb","\x52","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Music_obj >;
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
