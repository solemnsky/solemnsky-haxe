#include <hxcpp.h>

#ifndef INCLUDED_kha_BakedChar
#include <kha/BakedChar.h>
#endif
namespace kha{

Void BakedChar_obj::__construct()
{
HX_STACK_FRAME("kha.BakedChar","new",0x83b7e529,"kha.BakedChar.new","kha/Kravur.hx",7,0xdd7a3f9a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BakedChar_obj::~BakedChar_obj() { }

Dynamic BakedChar_obj::__CreateEmpty() { return  new BakedChar_obj; }
hx::ObjectPtr< BakedChar_obj > BakedChar_obj::__new()
{  hx::ObjectPtr< BakedChar_obj > _result_ = new BakedChar_obj();
	_result_->__construct();
	return _result_;}

Dynamic BakedChar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BakedChar_obj > _result_ = new BakedChar_obj();
	_result_->__construct();
	return _result_;}


BakedChar_obj::BakedChar_obj()
{
}

Dynamic BakedChar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return x0; }
		if (HX_FIELD_EQ(inName,"y0") ) { return y0; }
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { return xoff; }
		if (HX_FIELD_EQ(inName,"yoff") ) { return yoff; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BakedChar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { xoff=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoff") ) { yoff=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BakedChar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BakedChar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f"));
	outFields->push(HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50"));
	outFields->push(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BakedChar_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsInt,(int)offsetof(BakedChar_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsInt,(int)offsetof(BakedChar_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsInt,(int)offsetof(BakedChar_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(BakedChar_obj,xoff),HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f")},
	{hx::fsFloat,(int)offsetof(BakedChar_obj,yoff),HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50")},
	{hx::fsFloat,(int)offsetof(BakedChar_obj,xadvance),HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f"),
	HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50"),
	HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BakedChar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BakedChar_obj::__mClass,"__mClass");
};

#endif

hx::Class BakedChar_obj::__mClass;

void BakedChar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.BakedChar","\xb7","\x1c","\x6a","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BakedChar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BakedChar_obj >;
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
