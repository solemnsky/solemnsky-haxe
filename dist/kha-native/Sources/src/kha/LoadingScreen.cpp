#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_LoadingScreen
#include <kha/LoadingScreen.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
namespace kha{

Void LoadingScreen_obj::__construct()
{
HX_STACK_FRAME("kha.LoadingScreen","new",0xa93c5910,"kha.LoadingScreen.new","kha/LoadingScreen.hx",5,0x29054a61)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct(HX_HCSTRING("Loading","\x5c","\xf6","\x43","\xd6"),false);
}
;
	return null();
}

//LoadingScreen_obj::~LoadingScreen_obj() { }

Dynamic LoadingScreen_obj::__CreateEmpty() { return  new LoadingScreen_obj; }
hx::ObjectPtr< LoadingScreen_obj > LoadingScreen_obj::__new()
{  hx::ObjectPtr< LoadingScreen_obj > _result_ = new LoadingScreen_obj();
	_result_->__construct();
	return _result_;}

Dynamic LoadingScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoadingScreen_obj > _result_ = new LoadingScreen_obj();
	_result_->__construct();
	return _result_;}

Void LoadingScreen_obj::render( ::kha::Framebuffer frame){
{
		HX_STACK_FRAME("kha.LoadingScreen","render",0x369b70a6,"kha.LoadingScreen.render","kha/LoadingScreen.hx",8,0x29054a61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(9)
		::kha::Framebuffer tmp = frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9)
		this->startRender(tmp);
		HX_STACK_LINE(10)
		::kha::Loader tmp1 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10)
		if ((tmp2)){
			HX_STACK_LINE(11)
			::kha::graphics2::Graphics tmp3 = frame->get_g2();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11)
			int tmp4 = ::kha::_Color::Color_Impl__obj::fromBytes((int)0,(int)0,(int)255,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11)
			tmp3->set_color(tmp4);
			HX_STACK_LINE(12)
			::kha::graphics2::Graphics tmp5 = frame->get_g2();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12)
			int tmp6 = frame->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12)
			Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(12)
			int tmp8 = frame->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(12)
			Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(12)
			Float tmp10 = (tmp9 - (int)10);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(12)
			::kha::Loader tmp11 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(12)
			int tmp12 = tmp11->getLoadPercentage();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(12)
			int tmp13 = frame->get_width();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(12)
			int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(12)
			Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(12)
			Float tmp16 = (Float(tmp15) / Float((int)100));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(12)
			tmp5->fillRect(tmp7,tmp10,tmp16,(int)20);
			HX_STACK_LINE(13)
			::kha::graphics2::Graphics tmp17 = frame->get_g2();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(13)
			int tmp18 = ::kha::_Color::Color_Impl__obj::fromBytes((int)28,(int)28,(int)28,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(13)
			tmp17->set_color(tmp18);
			HX_STACK_LINE(14)
			::kha::graphics2::Graphics tmp19 = frame->get_g2();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(14)
			int tmp20 = frame->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(14)
			Float tmp21 = (Float(tmp20) / Float((int)4));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(14)
			int tmp22 = frame->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(14)
			Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(14)
			Float tmp24 = (tmp23 - (int)10);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(14)
			int tmp25 = frame->get_width();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(14)
			Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(14)
			tmp19->drawRect(tmp21,tmp24,tmp26,(int)20,null());
		}
		HX_STACK_LINE(16)
		::kha::Framebuffer tmp3 = frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		this->endRender(tmp3);
	}
return null();
}


Void LoadingScreen_obj::update( ){
{
		HX_STACK_FRAME("kha.LoadingScreen","update",0xb8778b59,"kha.LoadingScreen.update","kha/LoadingScreen.hx",19,0x29054a61)
		HX_STACK_THIS(this)
	}
return null();
}



LoadingScreen_obj::LoadingScreen_obj()
{
}

Dynamic LoadingScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadingScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadingScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class LoadingScreen_obj::__mClass;

void LoadingScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.LoadingScreen","\x1e","\xd1","\x3e","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoadingScreen_obj >;
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
