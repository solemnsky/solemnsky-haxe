#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
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

Void Framebuffer_obj::__construct(::kha::graphics1::Graphics g1,::kha::graphics2::Graphics g2,::kha::graphics4::Graphics g4)
{
HX_STACK_FRAME("kha.Framebuffer","new",0x353baff5,"kha.Framebuffer.new","kha/Framebuffer.hx",33,0x5860e4dc)
HX_STACK_THIS(this)
HX_STACK_ARG(g1,"g1")
HX_STACK_ARG(g2,"g2")
HX_STACK_ARG(g4,"g4")
{
	HX_STACK_LINE(34)
	this->graphics1 = g1;
	HX_STACK_LINE(35)
	this->graphics2 = g2;
	HX_STACK_LINE(36)
	this->graphics4 = g4;
}
;
	return null();
}

//Framebuffer_obj::~Framebuffer_obj() { }

Dynamic Framebuffer_obj::__CreateEmpty() { return  new Framebuffer_obj; }
hx::ObjectPtr< Framebuffer_obj > Framebuffer_obj::__new(::kha::graphics1::Graphics g1,::kha::graphics2::Graphics g2,::kha::graphics4::Graphics g4)
{  hx::ObjectPtr< Framebuffer_obj > _result_ = new Framebuffer_obj();
	_result_->__construct(g1,g2,g4);
	return _result_;}

Dynamic Framebuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Framebuffer_obj > _result_ = new Framebuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *Framebuffer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::Canvas_obj)) return operator ::kha::Canvas_obj *();
	return super::__ToInterface(inType);
}

Framebuffer_obj::operator ::kha::Canvas_obj *()
	{ return new ::kha::Canvas_delegate_< Framebuffer_obj >(this); }
Void Framebuffer_obj::init( ::kha::graphics1::Graphics g1,::kha::graphics2::Graphics g2,::kha::graphics4::Graphics g4){
{
		HX_STACK_FRAME("kha.Framebuffer","init",0x5bb6fddb,"kha.Framebuffer.init","kha/Framebuffer.hx",46,0x5860e4dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g1,"g1")
		HX_STACK_ARG(g2,"g2")
		HX_STACK_ARG(g4,"g4")
		HX_STACK_LINE(47)
		this->graphics1 = g1;
		HX_STACK_LINE(48)
		this->graphics2 = g2;
		HX_STACK_LINE(49)
		this->graphics4 = g4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Framebuffer_obj,init,(void))

::kha::graphics1::Graphics Framebuffer_obj::get_g1( ){
	HX_STACK_FRAME("kha.Framebuffer","get_g1",0x01ba3cbe,"kha.Framebuffer.get_g1","kha/Framebuffer.hx",62,0x5860e4dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	::kha::graphics1::Graphics tmp = this->graphics1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g1,return )

::kha::graphics2::Graphics Framebuffer_obj::get_g2( ){
	HX_STACK_FRAME("kha.Framebuffer","get_g2",0x01ba3cbf,"kha.Framebuffer.get_g2","kha/Framebuffer.hx",76,0x5860e4dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	::kha::graphics2::Graphics tmp = this->graphics2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g2,return )

::kha::graphics4::Graphics Framebuffer_obj::get_g4( ){
	HX_STACK_FRAME("kha.Framebuffer","get_g4",0x01ba3cc1,"kha.Framebuffer.get_g4","kha/Framebuffer.hx",90,0x5860e4dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	::kha::graphics4::Graphics tmp = this->graphics4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g4,return )

int Framebuffer_obj::get_width( ){
	HX_STACK_FRAME("kha.Framebuffer","get_width",0xd0a34fb2,"kha.Framebuffer.get_width","kha/Framebuffer.hx",102,0x5860e4dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	int tmp = ::kha::Sys_obj::get_pixelWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_width,return )

int Framebuffer_obj::get_height( ){
	HX_STACK_FRAME("kha.Framebuffer","get_height",0x7491e4bb,"kha.Framebuffer.get_height","kha/Framebuffer.hx",114,0x5860e4dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	int tmp = ::kha::Sys_obj::get_pixelHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_height,return )


Framebuffer_obj::Framebuffer_obj()
{
}

void Framebuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Framebuffer);
	HX_MARK_MEMBER_NAME(graphics1,"graphics1");
	HX_MARK_MEMBER_NAME(graphics2,"graphics2");
	HX_MARK_MEMBER_NAME(graphics4,"graphics4");
	HX_MARK_MEMBER_NAME(g1,"g1");
	HX_MARK_MEMBER_NAME(g2,"g2");
	HX_MARK_MEMBER_NAME(g4,"g4");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Framebuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics1,"graphics1");
	HX_VISIT_MEMBER_NAME(graphics2,"graphics2");
	HX_VISIT_MEMBER_NAME(graphics4,"graphics4");
	HX_VISIT_MEMBER_NAME(g1,"g1");
	HX_VISIT_MEMBER_NAME(g2,"g2");
	HX_VISIT_MEMBER_NAME(g4,"g4");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic Framebuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { return inCallProp == hx::paccAlways ? get_g1() : g1; }
		if (HX_FIELD_EQ(inName,"g2") ) { return inCallProp == hx::paccAlways ? get_g2() : g2; }
		if (HX_FIELD_EQ(inName,"g4") ) { return inCallProp == hx::paccAlways ? get_g4() : g4; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_g1") ) { return get_g1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_g2") ) { return get_g2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_g4") ) { return get_g4_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { return graphics1; }
		if (HX_FIELD_EQ(inName,"graphics2") ) { return graphics2; }
		if (HX_FIELD_EQ(inName,"graphics4") ) { return graphics4; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Framebuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { graphics1=inValue.Cast< ::kha::graphics1::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics2") ) { graphics2=inValue.Cast< ::kha::graphics2::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics4") ) { graphics4=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Framebuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Framebuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("g1","\xea","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g4","\xed","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::graphics1::Graphics*/ ,(int)offsetof(Framebuffer_obj,graphics1),HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(Framebuffer_obj,graphics2),HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(Framebuffer_obj,graphics4),HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics1::Graphics*/ ,(int)offsetof(Framebuffer_obj,g1),HX_HCSTRING("g1","\xea","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(Framebuffer_obj,g2),HX_HCSTRING("g2","\xeb","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(Framebuffer_obj,g4),HX_HCSTRING("g4","\xed","\x59","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Framebuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Framebuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08"),
	HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08"),
	HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("g1","\xea","\x59","\x00","\x00"),
	HX_HCSTRING("get_g1","\x33","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"),
	HX_HCSTRING("get_g2","\x34","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g4","\xed","\x59","\x00","\x00"),
	HX_HCSTRING("get_g4","\x36","\xf1","\x2f","\xa3"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Framebuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Framebuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class Framebuffer_obj::__mClass;

void Framebuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Framebuffer","\x83","\x91","\x65","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Framebuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Framebuffer_obj >;
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
