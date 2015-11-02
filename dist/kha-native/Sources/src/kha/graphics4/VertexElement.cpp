#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <kha/graphics4/VertexElement.h>
#endif
namespace kha{
namespace graphics4{

Void VertexElement_obj::__construct(::String name,::kha::graphics4::VertexData data)
{
HX_STACK_FRAME("kha.graphics4.VertexElement","new",0x72dc589b,"kha.graphics4.VertexElement.new","kha/graphics4/VertexElement.hx",7,0x02fd8277)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(8)
	this->name = name;
	HX_STACK_LINE(9)
	this->data = data;
}
;
	return null();
}

//VertexElement_obj::~VertexElement_obj() { }

Dynamic VertexElement_obj::__CreateEmpty() { return  new VertexElement_obj; }
hx::ObjectPtr< VertexElement_obj > VertexElement_obj::__new(::String name,::kha::graphics4::VertexData data)
{  hx::ObjectPtr< VertexElement_obj > _result_ = new VertexElement_obj();
	_result_->__construct(name,data);
	return _result_;}

Dynamic VertexElement_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexElement_obj > _result_ = new VertexElement_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


VertexElement_obj::VertexElement_obj()
{
}

void VertexElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexElement);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void VertexElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic VertexElement_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexElement_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::kha::graphics4::VertexData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VertexElement_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VertexElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(VertexElement_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::kha::graphics4::VertexData*/ ,(int)offsetof(VertexElement_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexElement_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexElement_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexElement_obj::__mClass;

void VertexElement_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.VertexElement","\x29","\x6f","\xcf","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VertexElement_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexElement_obj >;
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
