#include <hxcpp.h>

#ifndef INCLUDED_control_Combinator
#include <control/Combinator.h>
#endif
#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_demo_AllDemo
#include <control/demo/AllDemo.h>
#endif
#ifndef INCLUDED_control_demo_DemoSelect
#include <control/demo/DemoSelect.h>
#endif
#ifndef INCLUDED_control_demo_GraphicsDemo
#include <control/demo/GraphicsDemo.h>
#endif
#ifndef INCLUDED_control_demo_InputDemo
#include <control/demo/InputDemo.h>
#endif
#ifndef INCLUDED_control_demo_PhysDemo
#include <control/demo/PhysDemo.h>
#endif
#ifndef INCLUDED_control_demo_SelectionScreen
#include <control/demo/SelectionScreen.h>
#endif
namespace control{
namespace demo{

Void AllDemo_obj::__construct()
{
	return null();
}

//AllDemo_obj::~AllDemo_obj() { }

Dynamic AllDemo_obj::__CreateEmpty() { return  new AllDemo_obj; }
hx::ObjectPtr< AllDemo_obj > AllDemo_obj::__new()
{  hx::ObjectPtr< AllDemo_obj > _result_ = new AllDemo_obj();
	_result_->__construct();
	return _result_;}

Dynamic AllDemo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AllDemo_obj > _result_ = new AllDemo_obj();
	_result_->__construct();
	return _result_;}

::control::Control AllDemo_obj::run( ){
	HX_STACK_FRAME("control.demo.AllDemo","run",0xb54c2107,"control.demo.AllDemo.run","control/demo/AllDemo.hx",97,0x43214134)
	HX_STACK_LINE(99)
	Dynamic tmp = ::control::demo::AllDemo_obj::moveThrough_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::control::demo::SelectionScreen tmp1 = ::control::demo::SelectionScreen_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	::control::Control tmp2 = ::control::Combinator_obj::network(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AllDemo_obj,run,return )

::control::Control AllDemo_obj::moveThrough( ::control::demo::DemoSelect r){
	HX_STACK_FRAME("control.demo.AllDemo","moveThrough",0x0e58d6f0,"control.demo.AllDemo.moveThrough","control/demo/AllDemo.hx",103,0x43214134)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(104)
	::control::Control ctrl;		HX_STACK_VAR(ctrl,"ctrl");
	HX_STACK_LINE(106)
	switch( (int)(r->__Index())){
		case (int)0: {
			HX_STACK_LINE(107)
			::control::demo::SelectionScreen tmp = ::control::demo::SelectionScreen_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			ctrl = tmp;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(108)
			::control::demo::GraphicsDemo tmp = ::control::demo::GraphicsDemo_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			ctrl = tmp;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(109)
			::control::demo::InputDemo tmp = ::control::demo::InputDemo_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(109)
			ctrl = tmp;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(110)
			::control::demo::PhysDemo tmp = ::control::demo::PhysDemo_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(110)
			ctrl = tmp;
		}
		;break;
	}
	HX_STACK_LINE(113)
	::control::Control tmp = ctrl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AllDemo_obj,moveThrough,return )


AllDemo_obj::AllDemo_obj()
{
}

bool AllDemo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveThrough") ) { outValue = moveThrough_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AllDemo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AllDemo_obj::__mClass,"__mClass");
};

#endif

hx::Class AllDemo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("moveThrough","\x34","\x81","\xb9","\x32"),
	::String(null()) };

void AllDemo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.demo.AllDemo","\x2a","\x0c","\x43","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AllDemo_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AllDemo_obj >;
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

} // end namespace control
} // end namespace demo
