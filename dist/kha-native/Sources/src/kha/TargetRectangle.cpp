#include <hxcpp.h>

#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_TargetRectangle
#include <kha/TargetRectangle.h>
#endif
namespace kha{

Void TargetRectangle_obj::__construct(Float x,Float y,Float w,Float h,Float s,::kha::ScreenRotation r)
{
HX_STACK_FRAME("kha.TargetRectangle","new",0x90f39926,"kha.TargetRectangle.new","kha/Scaler.hx",21,0xe515f40b)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(s,"s")
HX_STACK_ARG(r,"r")
{
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->width = w;
	HX_STACK_LINE(25)
	this->height = h;
	HX_STACK_LINE(26)
	this->scaleFactor = s;
	HX_STACK_LINE(27)
	this->rotation = r;
}
;
	return null();
}

//TargetRectangle_obj::~TargetRectangle_obj() { }

Dynamic TargetRectangle_obj::__CreateEmpty() { return  new TargetRectangle_obj; }
hx::ObjectPtr< TargetRectangle_obj > TargetRectangle_obj::__new(Float x,Float y,Float w,Float h,Float s,::kha::ScreenRotation r)
{  hx::ObjectPtr< TargetRectangle_obj > _result_ = new TargetRectangle_obj();
	_result_->__construct(x,y,w,h,s,r);
	return _result_;}

Dynamic TargetRectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TargetRectangle_obj > _result_ = new TargetRectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}


TargetRectangle_obj::TargetRectangle_obj()
{
}

void TargetRectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TargetRectangle);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(scaleFactor,"scaleFactor");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_END_CLASS();
}

void TargetRectangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(scaleFactor,"scaleFactor");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
}

Dynamic TargetRectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleFactor") ) { return scaleFactor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TargetRectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::kha::ScreenRotation >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleFactor") ) { scaleFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TargetRectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TargetRectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("scaleFactor","\xf9","\x5e","\x11","\xd0"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TargetRectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TargetRectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TargetRectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(TargetRectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TargetRectangle_obj,scaleFactor),HX_HCSTRING("scaleFactor","\xf9","\x5e","\x11","\xd0")},
	{hx::fsObject /*::kha::ScreenRotation*/ ,(int)offsetof(TargetRectangle_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("scaleFactor","\xf9","\x5e","\x11","\xd0"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TargetRectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TargetRectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class TargetRectangle_obj::__mClass;

void TargetRectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.TargetRectangle","\x34","\xce","\xe2","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TargetRectangle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TargetRectangle_obj >;
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
