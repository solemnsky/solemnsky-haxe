#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_FontStyle
#include <kha/FontStyle.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_Music
#include <kha/Music.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha_kore_Loader
#include <kha/kore/Loader.h>
#endif
#ifndef INCLUDED_kha_kore_Music
#include <kha/kore/Music.h>
#endif
#ifndef INCLUDED_kha_kore_Sound
#include <kha/kore/Sound.h>
#endif
#ifndef INCLUDED_kha_kore_Video
#include <kha/kore/Video.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace kha{
namespace kore{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("kha.kore.Loader","new",0x705fbf12,"kha.kore.Loader.new","kha/kore/Loader.hx",15,0x5caa603e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Void Loader_obj::loadMusic( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.kore.Loader","loadMusic",0x94311cd1,"kha.kore.Loader.loadMusic","kha/kore/Loader.hx",18,0x5caa603e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(19)
		::String tmp = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		::haxe::io::Bytes tmp1 = ::sys::io::File_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::kha::kore::Music tmp2 = ::kha::kore::Music_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		done(tmp2).Cast< Void >();
	}
return null();
}


Void Loader_obj::loadSound( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.kore.Loader","loadSound",0x04a2d8fb,"kha.kore.Loader.loadSound","kha/kore/Loader.hx",22,0x5caa603e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(23)
		::String tmp = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		::kha::kore::Sound tmp1 = ::kha::kore::Sound_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		done(tmp1).Cast< Void >();
	}
return null();
}


Void Loader_obj::loadImage( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.kore.Loader","loadImage",0x413f6b87,"kha.kore.Loader.loadImage","kha/kore/Loader.hx",26,0x5caa603e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(27)
		Dynamic tmp = desc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		bool tmp1 = ::Reflect_obj::hasField(tmp,HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(27)
			tmp2 = desc->__Field(HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(27)
			tmp2 = false;
		}
		HX_STACK_LINE(27)
		bool readable = tmp2;		HX_STACK_VAR(readable,"readable");
		HX_STACK_LINE(28)
		::String tmp3 = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		bool tmp4 = readable;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::kha::Image tmp5 = ::kha::Image_obj::fromFile(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		done(tmp5).Cast< Void >();
	}
return null();
}


Void Loader_obj::loadBlob( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.kore.Loader","loadBlob",0x55349ab1,"kha.kore.Loader.loadBlob","kha/kore/Loader.hx",31,0x5caa603e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(32)
		::String tmp = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::haxe::io::Bytes tmp1 = ::sys::io::File_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::kha::Blob tmp2 = ::kha::Blob_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		done(tmp2).Cast< Void >();
	}
return null();
}


::kha::Font Loader_obj::loadFont( ::String name,::kha::FontStyle style,Float size){
	HX_STACK_FRAME("kha.kore.Loader","loadFont",0x57dbbb23,"kha.kore.Loader.loadFont","kha/kore/Loader.hx",35,0x5caa603e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(style,"style")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(36)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::kha::FontStyle tmp1 = style;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	Float tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	::kha::Kravur tmp3 = ::kha::Kravur_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return tmp3;
}


Void Loader_obj::loadVideo( Dynamic desc,Dynamic _tmp_done){
{
		HX_STACK_FRAME("kha.kore.Loader","loadVideo",0xbad260a7,"kha.kore.Loader.loadVideo","kha/kore/Loader.hx",39,0x5caa603e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(_tmp_done,"_tmp_done")
		HX_STACK_LINE(40)
		Dynamic done = _tmp_done;		HX_STACK_VAR(done,"done");
		HX_STACK_LINE(40)
		::String tmp = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::kha::kore::Video tmp1 = ::kha::kore::Video_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		done(tmp1).Cast< Void >();
	}
return null();
}


Void Loader_obj::showKeyboard( ){
Kore::System::showKeyboard();
{
		HX_STACK_FRAME("kha.kore.Loader","showKeyboard",0x3984bdd2,"kha.kore.Loader.showKeyboard","kha/kore/Loader.hx",44,0x5caa603e)
		HX_STACK_THIS(this)
	}
return null();
}


Void Loader_obj::hideKeyboard( ){
Kore::System::hideKeyboard();
{
		HX_STACK_FRAME("kha.kore.Loader","hideKeyboard",0xcefcea97,"kha.kore.Loader.hideKeyboard","kha/kore/Loader.hx",49,0x5caa603e)
		HX_STACK_THIS(this)
	}
return null();
}


Void Loader_obj::loadURL( ::String url){
Kore::System::loadURL(url);
{
		HX_STACK_FRAME("kha.kore.Loader","loadURL",0xb5d1b89b,"kha.kore.Loader.loadURL","kha/kore/Loader.hx",54,0x5caa603e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
	}
return null();
}



Loader_obj::Loader_obj()
{
}

Dynamic Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"loadURL") ) { return loadURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadBlob") ) { return loadBlob_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadVideo") ) { return loadVideo_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"showKeyboard") ) { return showKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"hideKeyboard") ) { return hideKeyboard_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadBlob","\xa3","\x0e","\xb9","\xb1"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadVideo","\x75","\x60","\x33","\x52"),
	HX_HCSTRING("showKeyboard","\xc4","\x12","\xb7","\x93"),
	HX_HCSTRING("hideKeyboard","\x89","\x3f","\x2f","\x29"),
	HX_HCSTRING("loadURL","\xe9","\x88","\xe3","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.Loader","\x20","\x8e","\x72","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
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
