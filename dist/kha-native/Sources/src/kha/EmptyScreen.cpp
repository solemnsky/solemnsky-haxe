#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_EmptyScreen
#include <kha/EmptyScreen.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
namespace kha{

Void EmptyScreen_obj::__construct(int color)
{
HX_STACK_FRAME("kha.EmptyScreen","new",0xe49852e1,"kha.EmptyScreen.new","kha/EmptyScreen.hx",16,0xc75f0370)
HX_STACK_THIS(this)
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(17)
	super::__construct(HX_HCSTRING("Nothing","\xed","\xc3","\xb0","\x1c"),false);
	HX_STACK_LINE(18)
	this->color = color;
}
;
	return null();
}

//EmptyScreen_obj::~EmptyScreen_obj() { }

Dynamic EmptyScreen_obj::__CreateEmpty() { return  new EmptyScreen_obj; }
hx::ObjectPtr< EmptyScreen_obj > EmptyScreen_obj::__new(int color)
{  hx::ObjectPtr< EmptyScreen_obj > _result_ = new EmptyScreen_obj();
	_result_->__construct(color);
	return _result_;}

Dynamic EmptyScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EmptyScreen_obj > _result_ = new EmptyScreen_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void EmptyScreen_obj::render( ::kha::Framebuffer frame){
{
		HX_STACK_FRAME("kha.EmptyScreen","render",0x6666af75,"kha.EmptyScreen.render","kha/EmptyScreen.hx",24,0xc75f0370)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(26)
		::kha::Framebuffer tmp = frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		this->startRender(tmp);
		HX_STACK_LINE(27)
		::kha::graphics2::Graphics tmp1 = frame->get_g2();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		int tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp1->set_color(tmp2);
		HX_STACK_LINE(28)
		::kha::graphics2::Graphics tmp3 = frame->get_g2();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp3->fillRect((int)0,(int)0,(int)10000,(int)10000);
		HX_STACK_LINE(29)
		::kha::Framebuffer tmp4 = frame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		this->endRender(tmp4);
	}
return null();
}


Void EmptyScreen_obj::update( ){
{
		HX_STACK_FRAME("kha.EmptyScreen","update",0xe842ca28,"kha.EmptyScreen.update","kha/EmptyScreen.hx",37,0xc75f0370)
		HX_STACK_THIS(this)
	}
return null();
}



EmptyScreen_obj::EmptyScreen_obj()
{
}

Dynamic EmptyScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EmptyScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EmptyScreen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void EmptyScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EmptyScreen_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EmptyScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EmptyScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class EmptyScreen_obj::__mClass;

void EmptyScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.EmptyScreen","\x6f","\x4e","\xa3","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &EmptyScreen_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EmptyScreen_obj >;
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
