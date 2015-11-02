#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
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
#ifndef INCLUDED_kha_loader_Room
#include <kha/loader/Room.h>
#endif
namespace kha{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("kha.Loader","new",0x61e196af,"kha.Loader.new","kha/Loader.hx",7,0x9bfe8b80)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->basePath = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
	HX_STACK_LINE(26)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		tmp = tmp1;
	}
	HX_STACK_LINE(26)
	this->blobs = tmp;
	HX_STACK_LINE(27)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp1 = tmp2;
	}
	HX_STACK_LINE(27)
	this->images = tmp1;
	HX_STACK_LINE(28)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp2 = tmp3;
	}
	HX_STACK_LINE(28)
	this->sounds = tmp2;
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		tmp3 = tmp4;
	}
	HX_STACK_LINE(29)
	this->musics = tmp3;
	HX_STACK_LINE(30)
	::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		tmp4 = tmp5;
	}
	HX_STACK_LINE(30)
	this->videos = tmp4;
	HX_STACK_LINE(31)
	::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		tmp5 = tmp6;
	}
	HX_STACK_LINE(31)
	this->assets = tmp5;
	HX_STACK_LINE(32)
	::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		tmp6 = tmp7;
	}
	HX_STACK_LINE(32)
	this->shaders = tmp6;
	HX_STACK_LINE(33)
	::haxe::ds::StringMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp8 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		tmp7 = tmp8;
	}
	HX_STACK_LINE(33)
	this->rooms = tmp7;
	HX_STACK_LINE(34)
	cpp::ArrayBase tmp8 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	this->enqueued = tmp8;
	HX_STACK_LINE(35)
	cpp::ArrayBase tmp9 = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	this->multiFileCallbacks = tmp9;
	HX_STACK_LINE(36)
	this->loadingFilesLeft = (int)0;
	HX_STACK_LINE(37)
	this->loadingFilesCount = (int)0;
	HX_STACK_LINE(38)
	this->width = (int)-1;
	HX_STACK_LINE(39)
	this->height = (int)-1;
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

int Loader_obj::getLoadPercentage( ){
	HX_STACK_FRAME("kha.Loader","getLoadPercentage",0xaad3dea5,"kha.Loader.getLoadPercentage","kha/Loader.hx",52,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	int tmp = this->loadingFilesCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	if ((tmp1)){
		HX_STACK_LINE(53)
		return (int)0;
	}
	HX_STACK_LINE(54)
	int tmp2 = this->loadingFilesCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	int tmp3 = this->loadingFilesLeft;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	int tmp5 = this->loadingFilesCount;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	Float tmp7 = (tmp6 * (int)100);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,getLoadPercentage,return )

::kha::Blob Loader_obj::getBlob( ::String name){
	HX_STACK_FRAME("kha.Loader","getBlob",0x932c86e2,"kha.Loader.getBlob","kha/Loader.hx",57,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(58)
	::haxe::ds::StringMap tmp = this->blobs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::kha::Blob tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	::kha::Blob tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getBlob,return )

::kha::Image Loader_obj::getImage( ::String name){
	HX_STACK_FRAME("kha.Loader","getImage",0x3c362a36,"kha.Loader.getImage","kha/Loader.hx",61,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(62)
	::haxe::ds::StringMap tmp = this->images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	if ((tmp4)){
		HX_STACK_LINE(62)
		tmp5 = (name != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(62)
		tmp5 = false;
	}
	HX_STACK_LINE(62)
	if ((tmp5)){
		HX_STACK_LINE(63)
		::String tmp6 = (HX_HCSTRING("Could not find image ","\xa0","\x87","\x2c","\x28") + name);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		::String tmp7 = (tmp6 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Loader.hx","\x6b","\xe8","\xd2","\x9c"),63,HX_HCSTRING("kha.Loader","\x3d","\x13","\x2f","\xc3"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		::haxe::Log_obj::trace(tmp7,tmp8);
	}
	HX_STACK_LINE(65)
	::haxe::ds::StringMap tmp6 = this->images;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	::kha::Image tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	::kha::Image tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getImage,return )

::kha::Music Loader_obj::getMusic( ::String name){
	HX_STACK_FRAME("kha.Loader","getMusic",0x8f27db80,"kha.Loader.getMusic","kha/Loader.hx",68,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(69)
	::haxe::ds::StringMap tmp = this->musics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	::kha::Music tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	::kha::Music tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getMusic,return )

::kha::Sound Loader_obj::getSound( ::String name){
	HX_STACK_FRAME("kha.Loader","getSound",0xff9997aa,"kha.Loader.getSound","kha/Loader.hx",72,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(73)
	bool tmp = (name != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	if ((tmp)){
		HX_STACK_LINE(73)
		::haxe::ds::StringMap tmp2 = this->sounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		bool tmp6 = tmp3->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		tmp1 = !(tmp8);
	}
	else{
		HX_STACK_LINE(73)
		tmp1 = false;
	}
	HX_STACK_LINE(73)
	if ((tmp1)){
		HX_STACK_LINE(74)
		::String tmp2 = (HX_HCSTRING("Sound '","\x76","\xe2","\xf5","\x83") + name);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		::String tmp3 = (tmp2 + HX_HCSTRING("' not found","\x3c","\x4a","\x88","\xc3"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Loader.hx","\x6b","\xe8","\xd2","\x9c"),74,HX_HCSTRING("kha.Loader","\x3d","\x13","\x2f","\xc3"),HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
	HX_STACK_LINE(76)
	::haxe::ds::StringMap tmp2 = this->sounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	::kha::Sound tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	::kha::Sound tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getSound,return )

::kha::Video Loader_obj::getVideo( ::String name){
	HX_STACK_FRAME("kha.Loader","getVideo",0xb5c91f56,"kha.Loader.getVideo","kha/Loader.hx",79,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(80)
	::haxe::ds::StringMap tmp = this->videos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::kha::Video tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	::kha::Video tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getVideo,return )

::kha::Blob Loader_obj::getShader( ::String name){
	HX_STACK_FRAME("kha.Loader","getShader",0x91bd33ea,"kha.Loader.getShader","kha/Loader.hx",83,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(84)
	::haxe::ds::StringMap tmp = this->shaders;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	::kha::Blob tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	::kha::Blob tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getShader,return )

Dynamic Loader_obj::getAvailableBlobs( ){
	HX_STACK_FRAME("kha.Loader","getAvailableBlobs",0xfe95b3b2,"kha.Loader.getAvailableBlobs","kha/Loader.hx",87,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::haxe::ds::StringMap tmp = this->blobs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,getAvailableBlobs,return )

bool Loader_obj::isBlobAvailable( ::String name){
	HX_STACK_FRAME("kha.Loader","isBlobAvailable",0x4641b331,"kha.Loader.isBlobAvailable","kha/Loader.hx",91,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(91)
	::haxe::ds::StringMap tmp = this->blobs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,isBlobAvailable,return )

Dynamic Loader_obj::getAvailableImages( ){
	HX_STACK_FRAME("kha.Loader","getAvailableImages",0x1b1065fc,"kha.Loader.getAvailableImages","kha/Loader.hx",93,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::haxe::ds::StringMap tmp = this->images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,getAvailableImages,return )

bool Loader_obj::isImageAvailable( ::String name){
	HX_STACK_FRAME("kha.Loader","isImageAvailable",0x9c3440c9,"kha.Loader.isImageAvailable","kha/Loader.hx",97,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(97)
	::haxe::ds::StringMap tmp = this->images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,isImageAvailable,return )

Dynamic Loader_obj::getAvailableMusic( ){
	HX_STACK_FRAME("kha.Loader","getAvailableMusic",0x59f40fe1,"kha.Loader.getAvailableMusic","kha/Loader.hx",99,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	::haxe::ds::StringMap tmp = this->musics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,getAvailableMusic,return )

bool Loader_obj::isMusicAvailable( ::String name){
	HX_STACK_FRAME("kha.Loader","isMusicAvailable",0xf58b163f,"kha.Loader.isMusicAvailable","kha/Loader.hx",103,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(103)
	::haxe::ds::StringMap tmp = this->musics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,isMusicAvailable,return )

Dynamic Loader_obj::getAvailableSounds( ){
	HX_STACK_FRAME("kha.Loader","getAvailableSounds",0x4eacbe08,"kha.Loader.getAvailableSounds","kha/Loader.hx",105,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::haxe::ds::StringMap tmp = this->sounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,getAvailableSounds,return )

bool Loader_obj::isSoundAvailable( ::String name){
	HX_STACK_FRAME("kha.Loader","isSoundAvailable",0xab3984d5,"kha.Loader.isSoundAvailable","kha/Loader.hx",109,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(109)
	::haxe::ds::StringMap tmp = this->sounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,isSoundAvailable,return )

Dynamic Loader_obj::getAvailableVideos( ){
	HX_STACK_FRAME("kha.Loader","getAvailableVideos",0x0213ecdc,"kha.Loader.getAvailableVideos","kha/Loader.hx",111,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	::haxe::ds::StringMap tmp = this->videos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,getAvailableVideos,return )

bool Loader_obj::isVideoAvailable( ::String name){
	HX_STACK_FRAME("kha.Loader","isVideoAvailable",0xae69a7a9,"kha.Loader.isVideoAvailable","kha/Loader.hx",115,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(115)
	::haxe::ds::StringMap tmp = this->videos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,isVideoAvailable,return )

Void Loader_obj::enqueue( Dynamic asset){
{
		HX_STACK_FRAME("kha.Loader","enqueue",0x40b4b257,"kha.Loader.enqueue","kha/Loader.hx",117,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(118)
		cpp::ArrayBase tmp = this->enqueued;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		Dynamic tmp1 = asset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		bool tmp2 = ::Lambda_obj::has(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		if ((tmp3)){
			HX_STACK_LINE(119)
			++(this->loadingFilesLeft);
			HX_STACK_LINE(120)
			++(this->loadingFilesCount);
			HX_STACK_LINE(121)
			cpp::ArrayBase tmp4 = this->enqueued;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			Dynamic tmp5 = asset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			tmp4->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,enqueue,(void))

Void Loader_obj::removeImage( ::haxe::ds::StringMap resources,::String resourceName){
{
		HX_STACK_FRAME("kha.Loader","removeImage",0xc1e029c6,"kha.Loader.removeImage","kha/Loader.hx",132,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resources,"resources")
		HX_STACK_ARG(resourceName,"resourceName")
		HX_STACK_LINE(133)
		::String tmp = resourceName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::kha::Image tmp1 = resources->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::kha::Image resource = tmp1;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(134)
		resource->unload();
		HX_STACK_LINE(135)
		::String tmp2 = resourceName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		resources->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,removeImage,(void))

Void Loader_obj::removeBlob( ::haxe::ds::StringMap resources,::String resourceName){
{
		HX_STACK_FRAME("kha.Loader","removeBlob",0x0320a952,"kha.Loader.removeBlob","kha/Loader.hx",138,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resources,"resources")
		HX_STACK_ARG(resourceName,"resourceName")
		HX_STACK_LINE(139)
		::String tmp = resourceName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::kha::Blob tmp1 = resources->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		::kha::Blob resource = tmp1;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(140)
		resource->unload();
		HX_STACK_LINE(141)
		::String tmp2 = resourceName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		resources->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,removeBlob,(void))

Void Loader_obj::removeMusic( ::haxe::ds::StringMap resources,::String resourceName){
{
		HX_STACK_FRAME("kha.Loader","removeMusic",0x14d1db10,"kha.Loader.removeMusic","kha/Loader.hx",144,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resources,"resources")
		HX_STACK_ARG(resourceName,"resourceName")
		HX_STACK_LINE(145)
		::String tmp = resourceName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		::kha::Music tmp1 = resources->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		::kha::Music resource = tmp1;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(146)
		resource->unload();
		HX_STACK_LINE(147)
		::String tmp2 = resourceName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		resources->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,removeMusic,(void))

Void Loader_obj::removeSound( ::haxe::ds::StringMap resources,::String resourceName){
{
		HX_STACK_FRAME("kha.Loader","removeSound",0x8543973a,"kha.Loader.removeSound","kha/Loader.hx",150,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resources,"resources")
		HX_STACK_ARG(resourceName,"resourceName")
		HX_STACK_LINE(151)
		::String tmp = resourceName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		::kha::Sound tmp1 = resources->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		::kha::Sound resource = tmp1;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(152)
		resource->unload();
		HX_STACK_LINE(153)
		::String tmp2 = resourceName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		resources->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,removeSound,(void))

Void Loader_obj::removeVideo( ::haxe::ds::StringMap resources,::String resourceName){
{
		HX_STACK_FRAME("kha.Loader","removeVideo",0x3b731ee6,"kha.Loader.removeVideo","kha/Loader.hx",156,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resources,"resources")
		HX_STACK_ARG(resourceName,"resourceName")
		HX_STACK_LINE(157)
		::String tmp = resourceName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		::kha::Video tmp1 = resources->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::kha::Video resource = tmp1;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(158)
		resource->unload();
		HX_STACK_LINE(159)
		::String tmp2 = resourceName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		resources->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,removeVideo,(void))

Void Loader_obj::cleanup( ){
{
		HX_STACK_FRAME("kha.Loader","cleanup",0x2ad2a5f3,"kha.Loader.cleanup","kha/Loader.hx",162,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		::haxe::ds::StringMap tmp = this->images;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String imagename = __it->next();
			{
				HX_STACK_LINE(163)
				::String tmp2 = imagename;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				cpp::ArrayBase tmp3 = this->enqueued;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				bool tmp4 = ::kha::Loader_obj::containsAsset(tmp2,HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(163)
				if ((tmp5)){
					HX_STACK_LINE(163)
					::haxe::ds::StringMap tmp6 = this->images;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(163)
					::String tmp7 = imagename;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(163)
					this->removeImage(tmp6,tmp7);
				}
			}
;
		}
		HX_STACK_LINE(164)
		::haxe::ds::StringMap tmp2 = this->musics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String musicname = __it->next();
			{
				HX_STACK_LINE(164)
				::String tmp4 = musicname;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(164)
				cpp::ArrayBase tmp5 = this->enqueued;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				bool tmp6 = ::kha::Loader_obj::containsAsset(tmp4,HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				if ((tmp7)){
					HX_STACK_LINE(164)
					::haxe::ds::StringMap tmp8 = this->musics;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(164)
					::String tmp9 = musicname;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(164)
					this->removeMusic(tmp8,tmp9);
				}
			}
;
		}
		HX_STACK_LINE(165)
		::haxe::ds::StringMap tmp4 = this->sounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp5);  __it->hasNext(); ){
			::String soundname = __it->next();
			{
				HX_STACK_LINE(165)
				::String tmp6 = soundname;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				cpp::ArrayBase tmp7 = this->enqueued;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(165)
				bool tmp8 = ::kha::Loader_obj::containsAsset(tmp6,HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(165)
				if ((tmp9)){
					HX_STACK_LINE(165)
					::haxe::ds::StringMap tmp10 = this->sounds;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(165)
					::String tmp11 = soundname;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(165)
					this->removeSound(tmp10,tmp11);
				}
			}
;
		}
		HX_STACK_LINE(166)
		::haxe::ds::StringMap tmp6 = this->videos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
			::String videoname = __it->next();
			{
				HX_STACK_LINE(166)
				::String tmp8 = videoname;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				cpp::ArrayBase tmp9 = this->enqueued;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				bool tmp10 = ::kha::Loader_obj::containsAsset(tmp8,HX_HCSTRING("video","\x7b","\x14","\xfc","\x36"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(166)
				if ((tmp11)){
					HX_STACK_LINE(166)
					::haxe::ds::StringMap tmp12 = this->videos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(166)
					::String tmp13 = videoname;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(166)
					this->removeVideo(tmp12,tmp13);
				}
			}
;
		}
		HX_STACK_LINE(167)
		::haxe::ds::StringMap tmp8 = this->blobs;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(167)
		Dynamic tmp9 = tmp8->keys();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(167)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
			::String blobname = __it->next();
			{
				HX_STACK_LINE(167)
				::String tmp10 = blobname;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(167)
				cpp::ArrayBase tmp11 = this->enqueued;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(167)
				bool tmp12 = ::kha::Loader_obj::containsAsset(tmp10,HX_HCSTRING("blob","\x5d","\x3d","\x19","\x41"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(167)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(167)
				if ((tmp13)){
					HX_STACK_LINE(167)
					::haxe::ds::StringMap tmp14 = this->blobs;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(167)
					::String tmp15 = blobname;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(167)
					this->removeBlob(tmp14,tmp15);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,cleanup,(void))

Void Loader_obj::loadFiles( Dynamic call){
{
		HX_STACK_FRAME("kha.Loader","loadFiles",0x14161600,"kha.Loader.loadFiles","kha/Loader.hx",170,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(call,"call")
		HX_STACK_LINE(170)
		::kha::Loader _g3 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(171)
		cpp::ArrayBase tmp = this->multiFileCallbacks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		Dynamic tmp1 = call;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		tmp->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(173)
		this->cleanup();
		HX_STACK_LINE(175)
		cpp::ArrayBase tmp2 = this->enqueued;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		int tmp3 = tmp2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		if ((tmp4)){
			HX_STACK_LINE(176)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			cpp::ArrayBase tmp5 = this->enqueued;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			int _g = tmp5->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			while((true)){
				HX_STACK_LINE(176)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(176)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				if ((tmp7)){
					HX_STACK_LINE(176)
					break;
				}
				HX_STACK_LINE(176)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(177)
				{
					HX_STACK_LINE(177)
					cpp::ArrayBase tmp9 = this->enqueued;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(177)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(177)
					Dynamic tmp11 = tmp9->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(177)
					Dynamic _g2 = tmp11->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(177)
					Dynamic tmp12 = _g2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(177)
					Dynamic _switch_1 = (tmp12);
					if (  ( _switch_1==HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"))){
						HX_STACK_LINE(179)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							cpp::ArrayBase tmp14 = this->enqueued;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							Dynamic tmp16 = tmp14->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(179)
							::String key = tmp16->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(179)
							::haxe::ds::StringMap tmp17 = this->images;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(179)
							::String tmp18 = key;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(179)
							tmp13 = tmp17->exists(tmp18);
						}
						HX_STACK_LINE(179)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(179)
						if ((tmp14)){
							HX_STACK_LINE(180)
							cpp::ArrayBase tmp15 = this->enqueued;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							Dynamic tmp17 = tmp15->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							::String imageName = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(imageName,"imageName");
							HX_STACK_LINE(184)
							cpp::ArrayBase tmp18 = this->enqueued;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(184)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(184)
							Dynamic tmp20 = tmp18->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");

							HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_6_1,::String,imageName,::kha::Loader,_g3)
							int __ArgCount() const { return 1; }
							Void run(::kha::Image image){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","kha/Loader.hx",184,0x9bfe8b80)
								HX_STACK_ARG(image,"image")
								{
									HX_STACK_LINE(185)
									::String tmp21 = imageName;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									bool tmp22 = _g3->images->exists(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									if ((tmp23)){
										HX_STACK_LINE(189)
										::String tmp24 = imageName;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(189)
										::kha::Image tmp25 = image;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(189)
										_g3->images->set(tmp24,tmp25);
										HX_STACK_LINE(190)
										--(_g3->loadingFilesLeft);
										HX_STACK_LINE(191)
										_g3->checkComplete();
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC1((void))

							HX_STACK_LINE(184)
							this->loadImage(tmp20, Dynamic(new _Function_6_1(imageName,_g3)));
						}
						else{
							HX_STACK_LINE(195)
							this->loadDummyFile();
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"))){
						HX_STACK_LINE(197)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(197)
						{
							HX_STACK_LINE(197)
							cpp::ArrayBase tmp14 = this->enqueued;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(197)
							int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(197)
							Dynamic tmp16 = tmp14->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(197)
							::String key = tmp16->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(197)
							::haxe::ds::StringMap tmp17 = this->musics;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(197)
							::String tmp18 = key;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(197)
							tmp13 = tmp17->exists(tmp18);
						}
						HX_STACK_LINE(197)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(197)
						if ((tmp14)){
							HX_STACK_LINE(198)
							cpp::ArrayBase tmp15 = this->enqueued;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(198)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(198)
							Dynamic tmp17 = tmp15->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(198)
							::String musicName = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(musicName,"musicName");
							HX_STACK_LINE(202)
							cpp::ArrayBase tmp18 = this->enqueued;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(202)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(202)
							Dynamic tmp20 = tmp18->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");

							HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_6_1,::String,musicName,::kha::Loader,_g3)
							int __ArgCount() const { return 1; }
							Void run(::kha::Music music){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","kha/Loader.hx",202,0x9bfe8b80)
								HX_STACK_ARG(music,"music")
								{
									HX_STACK_LINE(203)
									::String tmp21 = musicName;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(203)
									bool tmp22 = _g3->musics->exists(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(203)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(203)
									if ((tmp23)){
										HX_STACK_LINE(207)
										::String tmp24 = musicName;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(207)
										::kha::Music tmp25 = music;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(207)
										_g3->musics->set(tmp24,tmp25);
										HX_STACK_LINE(208)
										--(_g3->loadingFilesLeft);
										HX_STACK_LINE(209)
										_g3->checkComplete();
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC1((void))

							HX_STACK_LINE(202)
							this->loadMusic(tmp20, Dynamic(new _Function_6_1(musicName,_g3)));
						}
						else{
							HX_STACK_LINE(213)
							this->loadDummyFile();
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"))){
						HX_STACK_LINE(215)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							cpp::ArrayBase tmp14 = this->enqueued;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(215)
							int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(215)
							Dynamic tmp16 = tmp14->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(215)
							::String key = tmp16->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(215)
							::haxe::ds::StringMap tmp17 = this->sounds;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(215)
							::String tmp18 = key;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(215)
							tmp13 = tmp17->exists(tmp18);
						}
						HX_STACK_LINE(215)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(215)
						if ((tmp14)){
							HX_STACK_LINE(216)
							cpp::ArrayBase tmp15 = this->enqueued;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(216)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(216)
							Dynamic tmp17 = tmp15->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(216)
							::String soundName = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(soundName,"soundName");
							HX_STACK_LINE(220)
							cpp::ArrayBase tmp18 = this->enqueued;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(220)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(220)
							Dynamic tmp20 = tmp18->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");

							HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_6_1,::String,soundName,::kha::Loader,_g3)
							int __ArgCount() const { return 1; }
							Void run(::kha::Sound sound){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","kha/Loader.hx",220,0x9bfe8b80)
								HX_STACK_ARG(sound,"sound")
								{
									HX_STACK_LINE(221)
									::String tmp21 = soundName;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(221)
									bool tmp22 = _g3->sounds->exists(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(221)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(221)
									if ((tmp23)){
										HX_STACK_LINE(225)
										::String tmp24 = soundName;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(225)
										::kha::Sound tmp25 = sound;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(225)
										_g3->sounds->set(tmp24,tmp25);
										HX_STACK_LINE(226)
										--(_g3->loadingFilesLeft);
										HX_STACK_LINE(227)
										_g3->checkComplete();
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC1((void))

							HX_STACK_LINE(220)
							this->loadSound(tmp20, Dynamic(new _Function_6_1(soundName,_g3)));
						}
						else{
							HX_STACK_LINE(231)
							this->loadDummyFile();
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("video","\x7b","\x14","\xfc","\x36"))){
						HX_STACK_LINE(233)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							cpp::ArrayBase tmp14 = this->enqueued;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(233)
							int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(233)
							Dynamic tmp16 = tmp14->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(233)
							::String key = tmp16->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(233)
							::haxe::ds::StringMap tmp17 = this->videos;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(233)
							::String tmp18 = key;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(233)
							tmp13 = tmp17->exists(tmp18);
						}
						HX_STACK_LINE(233)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(233)
						if ((tmp14)){
							HX_STACK_LINE(234)
							cpp::ArrayBase tmp15 = this->enqueued;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(234)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(234)
							Dynamic tmp17 = tmp15->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(234)
							::String videoName = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(videoName,"videoName");
							HX_STACK_LINE(238)
							cpp::ArrayBase tmp18 = this->enqueued;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(238)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(238)
							Dynamic tmp20 = tmp18->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");

							HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_6_1,::String,videoName,::kha::Loader,_g3)
							int __ArgCount() const { return 1; }
							Void run(::kha::Video video){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","kha/Loader.hx",238,0x9bfe8b80)
								HX_STACK_ARG(video,"video")
								{
									HX_STACK_LINE(239)
									::String tmp21 = videoName;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(239)
									bool tmp22 = _g3->videos->exists(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(239)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(239)
									if ((tmp23)){
										HX_STACK_LINE(243)
										::String tmp24 = videoName;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(243)
										::kha::Video tmp25 = video;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(243)
										_g3->videos->set(tmp24,tmp25);
										HX_STACK_LINE(244)
										--(_g3->loadingFilesLeft);
										HX_STACK_LINE(245)
										_g3->checkComplete();
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC1((void))

							HX_STACK_LINE(238)
							this->loadVideo(tmp20, Dynamic(new _Function_6_1(videoName,_g3)));
						}
						else{
							HX_STACK_LINE(249)
							this->loadDummyFile();
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("blob","\x5d","\x3d","\x19","\x41"))){
						HX_STACK_LINE(251)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							cpp::ArrayBase tmp14 = this->enqueued;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(251)
							int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(251)
							Dynamic tmp16 = tmp14->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(251)
							::String key = tmp16->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(251)
							::haxe::ds::StringMap tmp17 = this->blobs;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(251)
							::String tmp18 = key;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(251)
							tmp13 = tmp17->exists(tmp18);
						}
						HX_STACK_LINE(251)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(251)
						if ((tmp14)){
							HX_STACK_LINE(252)
							cpp::ArrayBase tmp15 = this->enqueued;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(252)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(252)
							Dynamic tmp17 = tmp15->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(252)
							::String blobName = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(blobName,"blobName");
							HX_STACK_LINE(256)
							cpp::ArrayBase tmp18 = this->enqueued;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(256)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(256)
							Dynamic tmp20 = tmp18->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");

							HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_6_1,::String,blobName,::kha::Loader,_g3)
							int __ArgCount() const { return 1; }
							Void run(::kha::Blob blob){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","kha/Loader.hx",256,0x9bfe8b80)
								HX_STACK_ARG(blob,"blob")
								{
									HX_STACK_LINE(257)
									::String tmp21 = blobName;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(257)
									bool tmp22 = _g3->blobs->exists(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(257)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(257)
									if ((tmp23)){
										HX_STACK_LINE(261)
										::String tmp24 = blobName;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(261)
										::kha::Blob tmp25 = blob;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(261)
										_g3->blobs->set(tmp24,tmp25);
										HX_STACK_LINE(262)
										--(_g3->loadingFilesLeft);
										HX_STACK_LINE(263)
										_g3->checkComplete();
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC1((void))

							HX_STACK_LINE(256)
							this->loadBlob(tmp20, Dynamic(new _Function_6_1(blobName,_g3)));
						}
						else{
							HX_STACK_LINE(267)
							this->loadDummyFile();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(272)
			this->checkComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadFiles,(void))

Void Loader_obj::loadProject( Dynamic call){
{
		HX_STACK_FRAME("kha.Loader","loadProject",0xcccbfea2,"kha.Loader.loadProject","kha/Loader.hx",276,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(call,"call")
		HX_STACK_LINE(276)
		::kha::Loader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		::String tmp = this->basePath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		bool tmp1 = (tmp == HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		if ((tmp1)){
			HX_STACK_LINE(277)
			tmp2 = HX_HCSTRING("project.kha","\x0f","\x50","\x89","\x0e");
		}
		else{
			HX_STACK_LINE(277)
			::String tmp3 = this->basePath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			tmp2 = (tmp3 + HX_HCSTRING("/project.kha","\x40","\x70","\xae","\x20"));
		}
		HX_STACK_LINE(277)
		Array< ::String > tmp3 = Array_obj< ::String >::__new().Add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Loader.hx",277,0x9bfe8b80)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("project.kha","\x0f","\x50","\x89","\x0e"),false);
					__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp3,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("blob","\x5d","\x3d","\x19","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(277)
		Dynamic tmp4 = _Function_1_1::Block(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		this->enqueue(tmp4);

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,Dynamic,call,::kha::Loader,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","kha/Loader.hx",278,0x9bfe8b80)
			{
				HX_STACK_LINE(278)
				Dynamic tmp5 = call;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(278)
				_g->loadShaders(tmp5);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(278)
		this->loadFiles( Dynamic(new _Function_1_2(call,_g)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadProject,(void))

Void Loader_obj::loadShaders( Dynamic call){
{
		HX_STACK_FRAME("kha.Loader","loadShaders",0x36676d77,"kha.Loader.loadShaders","kha/Loader.hx",281,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(call,"call")
		HX_STACK_LINE(281)
		::kha::Loader _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(282)
		::haxe::ds::StringMap tmp = this->shaders;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		for(::cpp::FastIterator_obj< ::kha::Blob > *__it = ::cpp::CreateFastIterator< ::kha::Blob >(tmp1);  __it->hasNext(); ){
			::kha::Blob shader = __it->next();
			shader->unload();
		}
		HX_STACK_LINE(285)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(285)
			tmp2 = tmp3;
		}
		HX_STACK_LINE(285)
		this->shaders = tmp2;
		HX_STACK_LINE(286)
		Dynamic tmp3 = this->parseProject();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		Dynamic project = tmp3;		HX_STACK_VAR(project,"project");
		HX_STACK_LINE(287)
		bool tmp4 = (project->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		if ((tmp4)){
			HX_STACK_LINE(287)
			int tmp6 = project->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(287)
			tmp5 = (tmp7 > (int)0);
		}
		else{
			HX_STACK_LINE(287)
			tmp5 = false;
		}
		HX_STACK_LINE(287)
		if ((tmp5)){
			HX_STACK_LINE(288)
			Dynamic shaders = project->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );		HX_STACK_VAR(shaders,"shaders");
			HX_STACK_LINE(289)
			Array< int > shaderCount = Array_obj< int >::__new().Add(shaders->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(shaderCount,"shaderCount");
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(290)
				int _g = ((int)(shaders->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(290)
				while((true)){
					HX_STACK_LINE(290)
					bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(290)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(290)
					if ((tmp7)){
						HX_STACK_LINE(290)
						break;
					}
					HX_STACK_LINE(290)
					int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(290)
					int i = tmp8;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(291)
					Dynamic tmp9 = shaders->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(291)
					Dynamic shader = tmp9;		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(295)
					Dynamic tmp10 = shader;		HX_STACK_VAR(tmp10,"tmp10");

					HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_4_1,Dynamic,shader,Dynamic,call,::kha::Loader,_g2,Array< int >,shaderCount)
					int __ArgCount() const { return 1; }
					Void run(::kha::Blob blob){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","kha/Loader.hx",295,0x9bfe8b80)
						HX_STACK_ARG(blob,"blob")
						{
							HX_STACK_LINE(296)
							::String tmp11 = shader->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(296)
							bool tmp12 = _g2->shaders->exists(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(296)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(296)
							if ((tmp13)){
								HX_STACK_LINE(300)
								::String tmp14 = shader->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(300)
								::kha::Blob tmp15 = blob;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(300)
								_g2->shaders->set(tmp14,tmp15);
								HX_STACK_LINE(301)
								--(shaderCount[(int)0]);
								HX_STACK_LINE(302)
								bool tmp16 = (shaderCount->__get((int)0) == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(302)
								if ((tmp16)){
									HX_STACK_LINE(302)
									call().Cast< Void >();
								}
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(295)
					this->loadBlob(tmp10, Dynamic(new _Function_4_1(shader,call,_g2,shaderCount)));
				}
			}
		}
		else{
			HX_STACK_LINE(307)
			call().Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadShaders,(void))

Void Loader_obj::loadRoomAssets( ::kha::loader::Room room){
{
		HX_STACK_FRAME("kha.Loader","loadRoomAssets",0xa91088d5,"kha.Loader.loadRoomAssets","kha/Loader.hx",310,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(room,"room")
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(311)
			int tmp = room->assets->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(311)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(311)
			while((true)){
				HX_STACK_LINE(311)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(311)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				if ((tmp2)){
					HX_STACK_LINE(311)
					break;
				}
				HX_STACK_LINE(311)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(311)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(312)
				Dynamic tmp4 = room->assets->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(312)
				this->enqueue(tmp4);
			}
		}
		HX_STACK_LINE(314)
		bool tmp = (room->parent != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		if ((tmp)){
			HX_STACK_LINE(314)
			::kha::loader::Room tmp1 = room->parent;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(314)
			this->loadRoomAssets(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadRoomAssets,(void))

Void Loader_obj::loadRoom( ::String name,Dynamic call){
{
		HX_STACK_FRAME("kha.Loader","loadRoom",0xdb44bab2,"kha.Loader.loadRoom","kha/Loader.hx",317,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(call,"call")
		HX_STACK_LINE(318)
		::haxe::ds::StringMap tmp = this->rooms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(318)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		::kha::loader::Room tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		::kha::loader::Room tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(318)
		this->loadRoomAssets(tmp3);
		HX_STACK_LINE(319)
		Dynamic tmp4 = call;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		this->loadFiles(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadRoom,(void))

Void Loader_obj::unloadedImage( ::String name){
{
		HX_STACK_FRAME("kha.Loader","unloadedImage",0x5829ea6c,"kha.Loader.unloadedImage","kha/Loader.hx",322,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(323)
		::haxe::ds::StringMap tmp = this->images;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(323)
		this->removeImage(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadedImage,(void))

Void Loader_obj::initProject( ){
{
		HX_STACK_FRAME("kha.Loader","initProject",0xb498aef8,"kha.Loader.initProject","kha/Loader.hx",326,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(327)
		Dynamic tmp = this->parseProject();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		Dynamic project = tmp;		HX_STACK_VAR(project,"project");
		HX_STACK_LINE(328)
		::String tmp1 = project->__Field(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"), hx::paccDynamic )->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		this->name = tmp1;
		HX_STACK_LINE(329)
		int tmp2 = project->__Field(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		this->width = tmp2;
		HX_STACK_LINE(330)
		int tmp3 = project->__Field(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		this->height = tmp3;
		HX_STACK_LINE(331)
		Dynamic tmp4 = project->__Field(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("antiAliasingSamples","\x55","\x64","\x37","\x0f"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		if ((tmp5)){
			HX_STACK_LINE(331)
			tmp6 = project->__Field(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"), hx::paccDynamic )->__Field(HX_HCSTRING("antiAliasingSamples","\x55","\x64","\x37","\x0f"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(331)
			tmp6 = (int)1;
		}
		HX_STACK_LINE(331)
		this->antiAliasingSamples = tmp6;
		HX_STACK_LINE(332)
		Dynamic assets = project->__Field(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"), hx::paccDynamic );		HX_STACK_VAR(assets,"assets");
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(333)
			int _g = ((int)(assets->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(333)
			while((true)){
				HX_STACK_LINE(333)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(333)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(333)
				if ((tmp8)){
					HX_STACK_LINE(333)
					break;
				}
				HX_STACK_LINE(333)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(333)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(334)
				::String tmp10 = this->basePath;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(334)
				bool tmp11 = (tmp10 != HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(334)
				if ((tmp11)){
					HX_STACK_LINE(334)
					::String tmp12 = this->basePath;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(334)
					::String tmp13 = (tmp12 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(334)
					Dynamic tmp14 = assets->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(334)
					::String tmp15 = tmp14->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(334)
					::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(334)
					Dynamic tmp17 = assets->__GetItem(i);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(334)
					tmp17->__FieldRef(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")) = tmp16;
				}
				HX_STACK_LINE(335)
				::haxe::ds::StringMap tmp12 = this->assets;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(335)
				Dynamic tmp13 = assets->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(335)
				::String tmp14 = tmp13->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(335)
				bool tmp15 = tmp12->exists(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(335)
				if ((tmp15)){
					HX_STACK_LINE(336)
					::haxe::ds::StringMap tmp16 = this->assets;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(336)
					Dynamic tmp17 = assets->__GetItem(i);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(336)
					::String tmp18 = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(336)
					cpp::ArrayBase tmp19 = tmp16->get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(336)
					Dynamic tmp20 = assets->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(336)
					((cpp::ArrayBase)(tmp19))->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
				}
				else{
					HX_STACK_LINE(339)
					::haxe::ds::StringMap tmp16 = this->assets;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(339)
					Dynamic tmp17 = assets->__GetItem(i);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(339)
					::String tmp18 = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(339)
					Dynamic tmp19 = assets->__GetItem(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(339)
					cpp::ArrayBase tmp20 = cpp::ArrayBase_obj::__new().Add(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(339)
					tmp16->set(tmp18,tmp20);
				}
			}
		}
		HX_STACK_LINE(343)
		Dynamic rooms = project->__Field(HX_HCSTRING("rooms","\xf8","\x69","\x61","\xed"), hx::paccDynamic );		HX_STACK_VAR(rooms,"rooms");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(344)
			int _g = ((int)(rooms->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			while((true)){
				HX_STACK_LINE(344)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(344)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(344)
				if ((tmp8)){
					HX_STACK_LINE(344)
					break;
				}
				HX_STACK_LINE(344)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(344)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(345)
				Dynamic tmp10 = rooms->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(345)
				::String tmp11 = tmp10->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(345)
				::kha::loader::Room room = ::kha::loader::Room_obj::__new(tmp11);		HX_STACK_VAR(room,"room");
				HX_STACK_LINE(346)
				Dynamic tmp12 = rooms->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(346)
				Dynamic roomAssets = tmp12->__Field(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"), hx::paccDynamic );		HX_STACK_VAR(roomAssets,"roomAssets");
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(347)
					int _g2 = ((int)(roomAssets->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(347)
					while((true)){
						HX_STACK_LINE(347)
						bool tmp13 = (_g3 < _g2);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(347)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(347)
						if ((tmp14)){
							HX_STACK_LINE(347)
							break;
						}
						HX_STACK_LINE(347)
						int tmp15 = (_g3)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(347)
						int i2 = tmp15;		HX_STACK_VAR(i2,"i2");
						HX_STACK_LINE(348)
						::haxe::ds::StringMap tmp16 = this->assets;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(348)
						::String tmp17 = roomAssets->__GetItem(i2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(348)
						cpp::ArrayBase tmp18 = tmp16->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(348)
						cpp::ArrayBase assets1 = ((cpp::ArrayBase)(tmp18));		HX_STACK_VAR(assets1,"assets1");
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(349)
							while((true)){
								HX_STACK_LINE(349)
								bool tmp19 = (_g4 < assets1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(349)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(349)
								if ((tmp20)){
									HX_STACK_LINE(349)
									break;
								}
								HX_STACK_LINE(349)
								Dynamic tmp21 = assets1->__GetItem(_g4);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(349)
								Dynamic asset = tmp21;		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(349)
								++(_g4);
								HX_STACK_LINE(350)
								Dynamic tmp22 = asset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(350)
								room->assets->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
							}
						}
					}
				}
				HX_STACK_LINE(353)
				Dynamic tmp13 = rooms->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(353)
				Dynamic tmp14 = tmp13->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(353)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(353)
				if ((tmp15)){
					HX_STACK_LINE(354)
					Dynamic tmp16 = rooms->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(354)
					::String tmp17 = tmp16->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(354)
					::kha::loader::Room tmp18 = ::kha::loader::Room_obj::__new(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(354)
					room->parent = tmp18;
				}
				HX_STACK_LINE(356)
				::haxe::ds::StringMap tmp16 = this->rooms;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(356)
				Dynamic tmp17 = rooms->__GetItem(i);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(356)
				::String tmp18 = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(356)
				::kha::loader::Room tmp19 = room;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(356)
				tmp16->set(tmp18,tmp19);
			}
		}
		HX_STACK_LINE(359)
		::haxe::ds::StringMap tmp7 = this->rooms;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		Dynamic tmp8 = tmp7->iterator();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		for(::cpp::FastIterator_obj< ::kha::loader::Room > *__it = ::cpp::CreateFastIterator< ::kha::loader::Room >(tmp8);  __it->hasNext(); ){
			::kha::loader::Room room = __it->next();
			{
				HX_STACK_LINE(360)
				bool tmp9 = (room->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(360)
				if ((tmp9)){
					HX_STACK_LINE(361)
					::haxe::ds::StringMap tmp10 = this->rooms;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(361)
					Dynamic tmp11 = tmp10->iterator();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(361)
					for(::cpp::FastIterator_obj< ::kha::loader::Room > *__it = ::cpp::CreateFastIterator< ::kha::loader::Room >(tmp11);  __it->hasNext(); ){
						::kha::loader::Room room2 = __it->next();
						{
							HX_STACK_LINE(362)
							::String tmp12 = room2->name;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(362)
							::String tmp13 = room->parent->name;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(362)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(362)
							if ((tmp14)){
								HX_STACK_LINE(363)
								room->parent = room2;
								HX_STACK_LINE(364)
								break;
							}
						}
;
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,initProject,(void))

Dynamic Loader_obj::parseProject( ){
	HX_STACK_FRAME("kha.Loader","parseProject",0xc449deb7,"kha.Loader.parseProject","kha/Loader.hx",371,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(372)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	{
		HX_STACK_LINE(372)
		::kha::Blob tmp1 = this->getBlob(HX_HCSTRING("project.kha","\x0f","\x50","\x89","\x0e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		::String tmp2 = tmp1->toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(372)
		::String text = tmp2;		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(372)
		::haxe::format::JsonParser tmp3 = ::haxe::format::JsonParser_obj::__new(text);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(372)
		tmp = tmp3->parseRec();
	}
	HX_STACK_LINE(372)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,parseProject,return )

Void Loader_obj::checkComplete( ){
{
		HX_STACK_FRAME("kha.Loader","checkComplete",0xe786bcb0,"kha.Loader.checkComplete","kha/Loader.hx",375,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		int tmp = this->loadingFilesLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		if ((tmp1)){
			HX_STACK_LINE(380)
			this->loadingFilesCount = (int)0;
			HX_STACK_LINE(381)
			cpp::ArrayBase tmp2 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			this->enqueued = tmp2;
			HX_STACK_LINE(382)
			cpp::ArrayBase tmp3 = this->multiFileCallbacks;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			cpp::ArrayBase lastMultiFileCallbacks = tmp3;		HX_STACK_VAR(lastMultiFileCallbacks,"lastMultiFileCallbacks");
			HX_STACK_LINE(383)
			cpp::ArrayBase tmp4 = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			this->multiFileCallbacks = tmp4;
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(384)
				while((true)){
					HX_STACK_LINE(384)
					bool tmp5 = (_g < lastMultiFileCallbacks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(384)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(384)
					if ((tmp6)){
						HX_STACK_LINE(384)
						break;
					}
					HX_STACK_LINE(384)
					Dynamic tmp7 = lastMultiFileCallbacks->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(384)
					Dynamic callback = tmp7;		HX_STACK_VAR(callback,"callback");
					HX_STACK_LINE(384)
					++(_g);
					HX_STACK_LINE(385)
					callback().Cast< Void >();
				}
			}
		}
		else{
			HX_STACK_LINE(388)
			int tmp2 = this->loadingFilesLeft;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(388)
			bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			if ((tmp3)){
				HX_STACK_LINE(389)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Loader.hx","\x6b","\xe8","\xd2","\x9c"),389,HX_HCSTRING("kha.Loader","\x3d","\x13","\x2f","\xc3"),HX_HCSTRING("checkComplete","\xa1","\x5d","\x22","\x68"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(389)
				::haxe::Log_obj::trace(HX_HCSTRING("Weird loading error, please restart the internet.","\xfc","\xdb","\x12","\x7a"),tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,checkComplete,(void))

Void Loader_obj::loadDummyFile( ){
{
		HX_STACK_FRAME("kha.Loader","loadDummyFile",0xafc06ccd,"kha.Loader.loadDummyFile","kha/Loader.hx",398,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(399)
		--(this->loadingFilesLeft);
		HX_STACK_LINE(400)
		this->checkComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,loadDummyFile,(void))

Void Loader_obj::loadImage( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.Loader","loadImage",0xd0e656e4,"kha.Loader.loadImage","kha/Loader.hx",403,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadImage,(void))

Void Loader_obj::loadBlob( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.Loader","loadBlob",0xd0af09f4,"kha.Loader.loadBlob","kha/Loader.hx",404,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBlob,(void))

Void Loader_obj::loadSound( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.Loader","loadSound",0x9449c458,"kha.Loader.loadSound","kha/Loader.hx",405,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadSound,(void))

Void Loader_obj::loadMusic( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.Loader","loadMusic",0x23d8082e,"kha.Loader.loadMusic","kha/Loader.hx",406,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadMusic,(void))

Void Loader_obj::loadVideo( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.Loader","loadVideo",0x4a794c04,"kha.Loader.loadVideo","kha/Loader.hx",407,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadVideo,(void))

::kha::Font Loader_obj::loadFont( ::String name,::kha::FontStyle style,Float size){
	HX_STACK_FRAME("kha.Loader","loadFont",0xd3562a66,"kha.Loader.loadFont","kha/Loader.hx",409,0x9bfe8b80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(style,"style")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(409)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,loadFont,return )

Void Loader_obj::loadURL( ::String url){
{
		HX_STACK_FRAME("kha.Loader","loadURL",0x887422b8,"kha.Loader.loadURL","kha/Loader.hx",411,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadURL,(void))

Void Loader_obj::setNormalCursor( ){
{
		HX_STACK_FRAME("kha.Loader","setNormalCursor",0xc4885fee,"kha.Loader.setNormalCursor","kha/Loader.hx",413,0x9bfe8b80)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,setNormalCursor,(void))

Void Loader_obj::setHandCursor( ){
{
		HX_STACK_FRAME("kha.Loader","setHandCursor",0x722288f6,"kha.Loader.setHandCursor","kha/Loader.hx",414,0x9bfe8b80)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,setHandCursor,(void))

Void Loader_obj::setCursorBusy( bool busy){
{
		HX_STACK_FRAME("kha.Loader","setCursorBusy",0x3ddd9080,"kha.Loader.setCursorBusy","kha/Loader.hx",415,0x9bfe8b80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(busy,"busy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,setCursorBusy,(void))

Void Loader_obj::showKeyboard( ){
{
		HX_STACK_FRAME("kha.Loader","showKeyboard",0x083b8a95,"kha.Loader.showKeyboard","kha/Loader.hx",417,0x9bfe8b80)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,showKeyboard,(void))

Void Loader_obj::hideKeyboard( ){
{
		HX_STACK_FRAME("kha.Loader","hideKeyboard",0x9db3b75a,"kha.Loader.hideKeyboard","kha/Loader.hx",418,0x9bfe8b80)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,hideKeyboard,(void))

::kha::Loader Loader_obj::the;

Void Loader_obj::init( ::kha::Loader loader){
{
		HX_STACK_FRAME("kha.Loader","init",0x403af9e1,"kha.Loader.init","kha/Loader.hx",49,0x9bfe8b80)
		HX_STACK_ARG(loader,"loader")
		HX_STACK_LINE(49)
		::kha::Loader_obj::the = loader;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,init,(void))

bool Loader_obj::containsAsset( ::String assetName,::String assetType,cpp::ArrayBase map){
	HX_STACK_FRAME("kha.Loader","containsAsset",0x71f9ce60,"kha.Loader.containsAsset","kha/Loader.hx",125,0x9bfe8b80)
	HX_STACK_ARG(assetName,"assetName")
	HX_STACK_ARG(assetType,"assetType")
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			bool tmp = (_g < map->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			if ((tmp1)){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			Dynamic tmp2 = map->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			Dynamic asset = tmp2;		HX_STACK_VAR(asset,"asset");
			HX_STACK_LINE(126)
			++(_g);
			HX_STACK_LINE(127)
			bool tmp3 = (asset->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == assetType);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			if ((tmp3)){
				HX_STACK_LINE(127)
				tmp4 = (asset->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == assetName);
			}
			else{
				HX_STACK_LINE(127)
				tmp4 = false;
			}
			HX_STACK_LINE(127)
			if ((tmp4)){
				HX_STACK_LINE(127)
				return true;
			}
		}
	}
	HX_STACK_LINE(129)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,containsAsset,return )


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(blobs,"blobs");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_MEMBER_NAME(sounds,"sounds");
	HX_MARK_MEMBER_NAME(musics,"musics");
	HX_MARK_MEMBER_NAME(videos,"videos");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(loadingFilesLeft,"loadingFilesLeft");
	HX_MARK_MEMBER_NAME(loadingFilesCount,"loadingFilesCount");
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(rooms,"rooms");
	HX_MARK_MEMBER_NAME(enqueued,"enqueued");
	HX_MARK_MEMBER_NAME(multiFileCallbacks,"multiFileCallbacks");
	HX_MARK_MEMBER_NAME(basePath,"basePath");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(antiAliasingSamples,"antiAliasingSamples");
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blobs,"blobs");
	HX_VISIT_MEMBER_NAME(images,"images");
	HX_VISIT_MEMBER_NAME(sounds,"sounds");
	HX_VISIT_MEMBER_NAME(musics,"musics");
	HX_VISIT_MEMBER_NAME(videos,"videos");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(loadingFilesLeft,"loadingFilesLeft");
	HX_VISIT_MEMBER_NAME(loadingFilesCount,"loadingFilesCount");
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(rooms,"rooms");
	HX_VISIT_MEMBER_NAME(enqueued,"enqueued");
	HX_VISIT_MEMBER_NAME(multiFileCallbacks,"multiFileCallbacks");
	HX_VISIT_MEMBER_NAME(basePath,"basePath");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(antiAliasingSamples,"antiAliasingSamples");
}

Dynamic Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blobs") ) { return blobs; }
		if (HX_FIELD_EQ(inName,"rooms") ) { return rooms; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { return images; }
		if (HX_FIELD_EQ(inName,"sounds") ) { return sounds; }
		if (HX_FIELD_EQ(inName,"musics") ) { return musics; }
		if (HX_FIELD_EQ(inName,"videos") ) { return videos; }
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"getBlob") ) { return getBlob_dyn(); }
		if (HX_FIELD_EQ(inName,"enqueue") ) { return enqueue_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"loadURL") ) { return loadURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enqueued") ) { return enqueued; }
		if (HX_FIELD_EQ(inName,"basePath") ) { return basePath; }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"getVideo") ) { return getVideo_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRoom") ) { return loadRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBlob") ) { return loadBlob_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShader") ) { return getShader_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFiles") ) { return loadFiles_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadVideo") ) { return loadVideo_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeBlob") ) { return removeBlob_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeImage") ) { return removeImage_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMusic") ) { return removeMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"removeSound") ) { return removeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"removeVideo") ) { return removeVideo_dyn(); }
		if (HX_FIELD_EQ(inName,"loadProject") ) { return loadProject_dyn(); }
		if (HX_FIELD_EQ(inName,"loadShaders") ) { return loadShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"initProject") ) { return initProject_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parseProject") ) { return parseProject_dyn(); }
		if (HX_FIELD_EQ(inName,"showKeyboard") ) { return showKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"hideKeyboard") ) { return hideKeyboard_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadedImage") ) { return unloadedImage_dyn(); }
		if (HX_FIELD_EQ(inName,"checkComplete") ) { return checkComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"loadDummyFile") ) { return loadDummyFile_dyn(); }
		if (HX_FIELD_EQ(inName,"setHandCursor") ) { return setHandCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"setCursorBusy") ) { return setCursorBusy_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadRoomAssets") ) { return loadRoomAssets_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isBlobAvailable") ) { return isBlobAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"setNormalCursor") ) { return setNormalCursor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadingFilesLeft") ) { return loadingFilesLeft; }
		if (HX_FIELD_EQ(inName,"isImageAvailable") ) { return isImageAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"isMusicAvailable") ) { return isMusicAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"isSoundAvailable") ) { return isSoundAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"isVideoAvailable") ) { return isVideoAvailable_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadingFilesCount") ) { return loadingFilesCount; }
		if (HX_FIELD_EQ(inName,"getLoadPercentage") ) { return getLoadPercentage_dyn(); }
		if (HX_FIELD_EQ(inName,"getAvailableBlobs") ) { return getAvailableBlobs_dyn(); }
		if (HX_FIELD_EQ(inName,"getAvailableMusic") ) { return getAvailableMusic_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"multiFileCallbacks") ) { return multiFileCallbacks; }
		if (HX_FIELD_EQ(inName,"getAvailableImages") ) { return getAvailableImages_dyn(); }
		if (HX_FIELD_EQ(inName,"getAvailableSounds") ) { return getAvailableSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"getAvailableVideos") ) { return getAvailableVideos_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"antiAliasingSamples") ) { return antiAliasingSamples; }
	}
	return super::__Field(inName,inCallProp);
}

bool Loader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"the") ) { outValue = the; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsAsset") ) { outValue = containsAsset_dyn(); return true;  }
	}
	return false;
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blobs") ) { blobs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rooms") ) { rooms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musics") ) { musics=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"videos") ) { videos=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enqueued") ) { enqueued=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"basePath") ) { basePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadingFilesLeft") ) { loadingFilesLeft=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadingFilesCount") ) { loadingFilesCount=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"multiFileCallbacks") ) { multiFileCallbacks=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"antiAliasingSamples") ) { antiAliasingSamples=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Loader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"the") ) { the=ioValue.Cast< ::kha::Loader >(); return true; }
	}
	return false;
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blobs","\x76","\x74","\xfc","\xb4"));
	outFields->push(HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"));
	outFields->push(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"));
	outFields->push(HX_HCSTRING("musics","\x2e","\xc0","\x1b","\x3f"));
	outFields->push(HX_HCSTRING("videos","\x98","\xd7","\x95","\xe5"));
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	outFields->push(HX_HCSTRING("loadingFilesLeft","\x02","\x7c","\xc0","\xd3"));
	outFields->push(HX_HCSTRING("loadingFilesCount","\x74","\x4c","\xb8","\x4c"));
	outFields->push(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"));
	outFields->push(HX_HCSTRING("rooms","\xf8","\x69","\x61","\xed"));
	outFields->push(HX_HCSTRING("enqueued","\xdc","\x5e","\x71","\x3e"));
	outFields->push(HX_HCSTRING("multiFileCallbacks","\xb9","\x42","\x58","\x9f"));
	outFields->push(HX_HCSTRING("basePath","\x56","\xd6","\x9f","\xfe"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("antiAliasingSamples","\x55","\x64","\x37","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,blobs),HX_HCSTRING("blobs","\x76","\x74","\xfc","\xb4")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,images),HX_HCSTRING("images","\xb8","\x50","\x92","\xfe")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,sounds),HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,musics),HX_HCSTRING("musics","\x2e","\xc0","\x1b","\x3f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,videos),HX_HCSTRING("videos","\x98","\xd7","\x95","\xe5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{hx::fsInt,(int)offsetof(Loader_obj,loadingFilesLeft),HX_HCSTRING("loadingFilesLeft","\x02","\x7c","\xc0","\xd3")},
	{hx::fsInt,(int)offsetof(Loader_obj,loadingFilesCount),HX_HCSTRING("loadingFilesCount","\x74","\x4c","\xb8","\x4c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,assets),HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Loader_obj,rooms),HX_HCSTRING("rooms","\xf8","\x69","\x61","\xed")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Loader_obj,enqueued),HX_HCSTRING("enqueued","\xdc","\x5e","\x71","\x3e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Loader_obj,multiFileCallbacks),HX_HCSTRING("multiFileCallbacks","\xb9","\x42","\x58","\x9f")},
	{hx::fsString,(int)offsetof(Loader_obj,basePath),HX_HCSTRING("basePath","\x56","\xd6","\x9f","\xfe")},
	{hx::fsInt,(int)offsetof(Loader_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Loader_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(Loader_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Loader_obj,antiAliasingSamples),HX_HCSTRING("antiAliasingSamples","\x55","\x64","\x37","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::Loader*/ ,(void *) &Loader_obj::the,HX_HCSTRING("the","\x71","\x60","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blobs","\x76","\x74","\xfc","\xb4"),
	HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"),
	HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"),
	HX_HCSTRING("musics","\x2e","\xc0","\x1b","\x3f"),
	HX_HCSTRING("videos","\x98","\xd7","\x95","\xe5"),
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("loadingFilesLeft","\x02","\x7c","\xc0","\xd3"),
	HX_HCSTRING("loadingFilesCount","\x74","\x4c","\xb8","\x4c"),
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("rooms","\xf8","\x69","\x61","\xed"),
	HX_HCSTRING("enqueued","\xdc","\x5e","\x71","\x3e"),
	HX_HCSTRING("multiFileCallbacks","\xb9","\x42","\x58","\x9f"),
	HX_HCSTRING("basePath","\x56","\xd6","\x9f","\xfe"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("antiAliasingSamples","\x55","\x64","\x37","\x0f"),
	HX_HCSTRING("getLoadPercentage","\x16","\x4c","\x51","\xf5"),
	HX_HCSTRING("getBlob","\x13","\xed","\x9b","\x13"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getVideo","\x05","\x24","\xd3","\x96"),
	HX_HCSTRING("getShader","\x5b","\x48","\x77","\x99"),
	HX_HCSTRING("getAvailableBlobs","\x23","\x21","\x13","\x49"),
	HX_HCSTRING("isBlobAvailable","\x62","\x32","\xbc","\xdd"),
	HX_HCSTRING("getAvailableImages","\x6b","\xbb","\x52","\xfe"),
	HX_HCSTRING("isImageAvailable","\x78","\x0c","\xe9","\x8f"),
	HX_HCSTRING("getAvailableMusic","\x52","\x7d","\x71","\xa4"),
	HX_HCSTRING("isMusicAvailable","\xee","\xe1","\x3f","\xe9"),
	HX_HCSTRING("getAvailableSounds","\x77","\x13","\xef","\x31"),
	HX_HCSTRING("isSoundAvailable","\x84","\x50","\xee","\x9e"),
	HX_HCSTRING("getAvailableVideos","\x4b","\x42","\x56","\xe5"),
	HX_HCSTRING("isVideoAvailable","\x58","\x73","\x1e","\xa2"),
	HX_HCSTRING("enqueue","\x88","\x18","\x24","\xc1"),
	HX_HCSTRING("removeImage","\x77","\xfc","\x9c","\xbb"),
	HX_HCSTRING("removeBlob","\xc1","\x77","\x38","\xbe"),
	HX_HCSTRING("removeMusic","\xc1","\xad","\x8e","\x0e"),
	HX_HCSTRING("removeSound","\xeb","\x69","\x00","\x7f"),
	HX_HCSTRING("removeVideo","\x97","\xf1","\x2f","\x35"),
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("loadFiles","\x71","\x2a","\xd0","\x1b"),
	HX_HCSTRING("loadProject","\x53","\xd1","\x88","\xc6"),
	HX_HCSTRING("loadShaders","\x28","\x40","\x24","\x30"),
	HX_HCSTRING("loadRoomAssets","\xc4","\xba","\xa1","\xb0"),
	HX_HCSTRING("loadRoom","\x61","\xbf","\x4e","\xbc"),
	HX_HCSTRING("unloadedImage","\x5d","\x8b","\xc5","\xd8"),
	HX_HCSTRING("initProject","\xa9","\x81","\x55","\xae"),
	HX_HCSTRING("parseProject","\xe6","\x66","\xc5","\x4f"),
	HX_HCSTRING("checkComplete","\xa1","\x5d","\x22","\x68"),
	HX_HCSTRING("loadDummyFile","\xbe","\x0d","\x5c","\x30"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadBlob","\xa3","\x0e","\xb9","\xb1"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadVideo","\x75","\x60","\x33","\x52"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadURL","\xe9","\x88","\xe3","\x08"),
	HX_HCSTRING("setNormalCursor","\x1f","\xdf","\x02","\x5c"),
	HX_HCSTRING("setHandCursor","\xe7","\x29","\xbe","\xf2"),
	HX_HCSTRING("setCursorBusy","\x71","\x31","\x79","\xbe"),
	HX_HCSTRING("showKeyboard","\xc4","\x12","\xb7","\x93"),
	HX_HCSTRING("hideKeyboard","\x89","\x3f","\x2f","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Loader_obj::the,"the");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Loader_obj::the,"the");
};

#endif

hx::Class Loader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("the","\x71","\x60","\x58","\x00"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("containsAsset","\x51","\x6f","\x95","\xf2"),
	::String(null()) };

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Loader","\x3d","\x13","\x2f","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Loader_obj::__GetStatic;
	__mClass->mSetStaticField = &Loader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
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
