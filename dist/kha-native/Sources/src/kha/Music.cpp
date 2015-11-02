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
namespace kha{

Void Music_obj::__construct()
{
HX_STACK_FRAME("kha.Music","new",0x9e90332d,"kha.Music.new","kha/Music.hx",10,0x531479e4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->_nativemusic = null();
}
;
	return null();
}

//Music_obj::~Music_obj() { }

Dynamic Music_obj::__CreateEmpty() { return  new Music_obj; }
hx::ObjectPtr< Music_obj > Music_obj::__new()
{  hx::ObjectPtr< Music_obj > _result_ = new Music_obj();
	_result_->__construct();
	return _result_;}

Dynamic Music_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Music_obj > _result_ = new Music_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Music_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::Resource_obj)) return operator ::kha::Resource_obj *();
	return super::__ToInterface(inType);
}

Music_obj::operator ::kha::Resource_obj *()
	{ return new ::kha::Resource_delegate_< Music_obj >(this); }
Void Music_obj::unload( ){
{
		HX_STACK_FRAME("kha.Music","unload",0xa33a3c52,"kha.Music.unload","kha/Music.hx",20,0x531479e4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Music_obj,unload,(void))


Music_obj::Music_obj()
{
}

void Music_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Music);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(_nativemusic,"_nativemusic");
	HX_MARK_END_CLASS();
}

void Music_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(_nativemusic,"_nativemusic");
}

Dynamic Music_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_nativemusic") ) { return _nativemusic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Music_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_nativemusic") ) { _nativemusic=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Music_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Music_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("_nativemusic","\xaf","\x91","\x32","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Music_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Music_obj,_nativemusic),HX_HCSTRING("_nativemusic","\xaf","\x91","\x32","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("_nativemusic","\xaf","\x91","\x32","\x4a"),
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
	__mClass->mName = HX_HCSTRING("kha.Music","\xbb","\x18","\xfa","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Music_obj::__SetStatic;
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
