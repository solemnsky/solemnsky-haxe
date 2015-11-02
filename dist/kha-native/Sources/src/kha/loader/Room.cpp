#include <hxcpp.h>

#ifndef INCLUDED_kha_loader_Room
#include <kha/loader/Room.h>
#endif
namespace kha{
namespace loader{

Void Room_obj::__construct(::String name)
{
HX_STACK_FRAME("kha.loader.Room","new",0x5b66e81e,"kha.loader.Room.new","kha/loader/Room.hx",25,0x889016f2)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(26)
	this->name = name;
	HX_STACK_LINE(27)
	cpp::ArrayBase tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->assets = tmp;
	HX_STACK_LINE(28)
	this->parent = null();
}
;
	return null();
}

//Room_obj::~Room_obj() { }

Dynamic Room_obj::__CreateEmpty() { return  new Room_obj; }
hx::ObjectPtr< Room_obj > Room_obj::__new(::String name)
{  hx::ObjectPtr< Room_obj > _result_ = new Room_obj();
	_result_->__construct(name);
	return _result_;}

Dynamic Room_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Room_obj > _result_ = new Room_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Room_obj::Room_obj()
{
}

void Room_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Room);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void Room_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic Room_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Room_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::kha::loader::Room >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Room_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Room_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Room_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Room_obj,assets),HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{hx::fsObject /*::kha::loader::Room*/ ,(int)offsetof(Room_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#endif

hx::Class Room_obj::__mClass;

void Room_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.loader.Room","\x2c","\x41","\xd5","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Room_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Room_obj >;
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
} // end namespace loader
