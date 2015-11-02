#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_ScreenCanvas
#include <kha/ScreenCanvas.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
namespace kha{

Void ScreenCanvas_obj::__construct()
{
HX_STACK_FRAME("kha.ScreenCanvas","new",0x2f29a400,"kha.ScreenCanvas.new","kha/ScreenCanvas.hx",10,0xe78b048f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ScreenCanvas_obj::~ScreenCanvas_obj() { }

Dynamic ScreenCanvas_obj::__CreateEmpty() { return  new ScreenCanvas_obj; }
hx::ObjectPtr< ScreenCanvas_obj > ScreenCanvas_obj::__new()
{  hx::ObjectPtr< ScreenCanvas_obj > _result_ = new ScreenCanvas_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScreenCanvas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenCanvas_obj > _result_ = new ScreenCanvas_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ScreenCanvas_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::Canvas_obj)) return operator ::kha::Canvas_obj *();
	return super::__ToInterface(inType);
}

ScreenCanvas_obj::operator ::kha::Canvas_obj *()
	{ return new ::kha::Canvas_delegate_< ScreenCanvas_obj >(this); }
int ScreenCanvas_obj::get_width( ){
	HX_STACK_FRAME("kha.ScreenCanvas","get_width",0xb8ec5dfd,"kha.ScreenCanvas.get_width","kha/ScreenCanvas.hx",29,0xe78b048f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	int tmp = ::kha::Sys_obj::get_pixelWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenCanvas_obj,get_width,return )

int ScreenCanvas_obj::get_height( ){
	HX_STACK_FRAME("kha.ScreenCanvas","get_height",0xcc355810,"kha.ScreenCanvas.get_height","kha/ScreenCanvas.hx",39,0xe78b048f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	int tmp = ::kha::Sys_obj::get_pixelHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenCanvas_obj,get_height,return )

::kha::graphics1::Graphics ScreenCanvas_obj::get_g1( ){
	HX_STACK_FRAME("kha.ScreenCanvas","get_g1",0x89422193,"kha.ScreenCanvas.get_g1","kha/ScreenCanvas.hx",50,0xe78b048f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenCanvas_obj,get_g1,return )

::kha::graphics2::Graphics ScreenCanvas_obj::get_g2( ){
	HX_STACK_FRAME("kha.ScreenCanvas","get_g2",0x89422194,"kha.ScreenCanvas.get_g2","kha/ScreenCanvas.hx",60,0xe78b048f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenCanvas_obj,get_g2,return )

::kha::graphics4::Graphics ScreenCanvas_obj::get_g4( ){
	HX_STACK_FRAME("kha.ScreenCanvas","get_g4",0x89422196,"kha.ScreenCanvas.get_g4","kha/ScreenCanvas.hx",71,0xe78b048f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenCanvas_obj,get_g4,return )

::kha::ScreenCanvas ScreenCanvas_obj::instance;

::kha::ScreenCanvas ScreenCanvas_obj::the;

::kha::ScreenCanvas ScreenCanvas_obj::get_the( ){
	HX_STACK_FRAME("kha.ScreenCanvas","get_the",0x90a54ca8,"kha.ScreenCanvas.get_the","kha/ScreenCanvas.hx",19,0xe78b048f)
	HX_STACK_LINE(20)
	::kha::ScreenCanvas tmp = ::kha::ScreenCanvas_obj::instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(20)
		::kha::ScreenCanvas tmp2 = ::kha::ScreenCanvas_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::kha::ScreenCanvas_obj::instance = tmp2;
	}
	HX_STACK_LINE(21)
	::kha::ScreenCanvas tmp2 = ::kha::ScreenCanvas_obj::instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ScreenCanvas_obj,get_the,return )


ScreenCanvas_obj::ScreenCanvas_obj()
{
}

void ScreenCanvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenCanvas);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(g1,"g1");
	HX_MARK_MEMBER_NAME(g2,"g2");
	HX_MARK_MEMBER_NAME(g4,"g4");
	HX_MARK_END_CLASS();
}

void ScreenCanvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(g1,"g1");
	HX_VISIT_MEMBER_NAME(g2,"g2");
	HX_VISIT_MEMBER_NAME(g4,"g4");
}

Dynamic ScreenCanvas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { return inCallProp == hx::paccAlways ? get_g1() : g1; }
		if (HX_FIELD_EQ(inName,"g2") ) { return inCallProp == hx::paccAlways ? get_g2() : g2; }
		if (HX_FIELD_EQ(inName,"g4") ) { return inCallProp == hx::paccAlways ? get_g4() : g4; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"get_g1") ) { return get_g1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_g2") ) { return get_g2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_g4") ) { return get_g4_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ScreenCanvas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"the") ) { outValue = inCallProp == hx::paccAlways ? get_the() : the; return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_the") ) { outValue = get_the_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic ScreenCanvas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { g1=inValue.Cast< ::kha::graphics1::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g2") ) { g2=inValue.Cast< ::kha::graphics2::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g4") ) { g4=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ScreenCanvas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"the") ) { the=ioValue.Cast< ::kha::ScreenCanvas >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::kha::ScreenCanvas >(); return true; }
	}
	return false;
}

void ScreenCanvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("g1","\xea","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g4","\xed","\x59","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ScreenCanvas_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(ScreenCanvas_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::kha::graphics1::Graphics*/ ,(int)offsetof(ScreenCanvas_obj,g1),HX_HCSTRING("g1","\xea","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(ScreenCanvas_obj,g2),HX_HCSTRING("g2","\xeb","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(ScreenCanvas_obj,g4),HX_HCSTRING("g4","\xed","\x59","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::ScreenCanvas*/ ,(void *) &ScreenCanvas_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*::kha::ScreenCanvas*/ ,(void *) &ScreenCanvas_obj::the,HX_HCSTRING("the","\x71","\x60","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("g1","\xea","\x59","\x00","\x00"),
	HX_HCSTRING("get_g1","\x33","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"),
	HX_HCSTRING("get_g2","\x34","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g4","\xed","\x59","\x00","\x00"),
	HX_HCSTRING("get_g4","\x36","\xf1","\x2f","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenCanvas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScreenCanvas_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(ScreenCanvas_obj::the,"the");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenCanvas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScreenCanvas_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(ScreenCanvas_obj::the,"the");
};

#endif

hx::Class ScreenCanvas_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("the","\x71","\x60","\x58","\x00"),
	HX_HCSTRING("get_the","\x08","\x29","\xcd","\x26"),
	::String(null()) };

void ScreenCanvas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.ScreenCanvas","\x0e","\xe4","\x0f","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScreenCanvas_obj::__GetStatic;
	__mClass->mSetStaticField = &ScreenCanvas_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScreenCanvas_obj >;
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

void ScreenCanvas_obj::__boot()
{
	instance= null();
}

} // end namespace kha
