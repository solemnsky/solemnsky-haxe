#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#include <kha/kore/graphics4/Graphics2.h>
#endif
namespace kha{
namespace kore{
namespace graphics4{

Void Graphics2_obj::__construct(::kha::Canvas canvas)
{
HX_STACK_FRAME("kha.kore.graphics4.Graphics2","new",0xb7f77ea7,"kha.kore.graphics4.Graphics2.new","kha/kore/graphics4/Graphics2.hx",9,0x0241748a)
HX_STACK_THIS(this)
HX_STACK_ARG(canvas,"canvas")
{
	HX_STACK_LINE(10)
	::kha::Canvas tmp = canvas;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//Graphics2_obj::~Graphics2_obj() { }

Dynamic Graphics2_obj::__CreateEmpty() { return  new Graphics2_obj; }
hx::ObjectPtr< Graphics2_obj > Graphics2_obj::__new(::kha::Canvas canvas)
{  hx::ObjectPtr< Graphics2_obj > _result_ = new Graphics2_obj();
	_result_->__construct(canvas);
	return _result_;}

Dynamic Graphics2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics2_obj > _result_ = new Graphics2_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Graphics2_obj::drawVideoInternal( ::kha::Video video,Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics2","drawVideoInternal",0xe72118bb,"kha.kore.graphics4.Graphics2.drawVideoInternal","kha/kore/graphics4/Graphics2.hx",13,0x0241748a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(video,"video")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(14)
		int tmp = ::kha::_Color::Color_Impl__obj::Blue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		this->set_color(tmp);
		HX_STACK_LINE(15)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		this->fillRect(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(16)
		int tmp5 = ::kha::_Color::Color_Impl__obj::White;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		this->set_color(tmp5);
		HX_STACK_LINE(17)
		::kha::Video tmp6 = video;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		::kha::Image tmp7 = ::kha::Image_obj::createFromVideo(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(17)
		int tmp8 = video->width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(17)
		int tmp9 = video->height();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(17)
		Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(17)
		Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(17)
		Float tmp12 = width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(17)
		Float tmp13 = height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(17)
		this->drawScaledSubImage(tmp7,(int)0,(int)0,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
	}
return null();
}



Graphics2_obj::Graphics2_obj()
{
}

Dynamic Graphics2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"drawVideoInternal") ) { return drawVideoInternal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("drawVideoInternal","\x34","\x9c","\xdf","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics2_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics2_obj::__mClass;

void Graphics2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.graphics4.Graphics2","\x35","\x9f","\x43","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics2_obj >;
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
} // end namespace kore
} // end namespace graphics4
