#include <hxcpp.h>

#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_EmptyControl
#include <control/EmptyControl.h>
#endif
#ifndef INCLUDED_control_Event
#include <control/Event.h>
#endif
#ifndef INCLUDED_control_Network
#include <control/Network.h>
#endif
#ifndef INCLUDED_control_Noise
#include <control/Noise.h>
#endif
#ifndef INCLUDED_control_Profile
#include <control/Profile.h>
#endif
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace control{

Void EmptyControl_obj::__construct()
{
HX_STACK_FRAME("control.EmptyControl","new",0xf73f1193,"control.EmptyControl.new","control/Control.hx",68,0x4d918c53)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//EmptyControl_obj::~EmptyControl_obj() { }

Dynamic EmptyControl_obj::__CreateEmpty() { return  new EmptyControl_obj; }
hx::ObjectPtr< EmptyControl_obj > EmptyControl_obj::__new()
{  hx::ObjectPtr< EmptyControl_obj > _result_ = new EmptyControl_obj();
	_result_->__construct();
	return _result_;}

Dynamic EmptyControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EmptyControl_obj > _result_ = new EmptyControl_obj();
	_result_->__construct();
	return _result_;}

hx::Object *EmptyControl_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::control::Control_obj)) return operator ::control::Control_obj *();
	return super::__ToInterface(inType);
}

EmptyControl_obj::operator ::control::Control_obj *()
	{ return new ::control::Control_delegate_< EmptyControl_obj >(this); }
Void EmptyControl_obj::init( ::control::Network _){
{
		HX_STACK_FRAME("control.EmptyControl","init",0x5ca9067d,"control.EmptyControl.init","control/Control.hx",70,0x4d918c53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EmptyControl_obj,init,(void))

Void EmptyControl_obj::tick( Float delta){
{
		HX_STACK_FRAME("control.EmptyControl","tick",0x63ea8eca,"control.EmptyControl.tick","control/Control.hx",72,0x4d918c53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EmptyControl_obj,tick,(void))

::control::Scene EmptyControl_obj::render( Float delta){
	HX_STACK_FRAME("control.EmptyControl","render",0x0bb2ac03,"control.EmptyControl.render","control/Control.hx",74,0x4d918c53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(75)
	::control::Scene tmp = ::control::Scene_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(EmptyControl_obj,render,return )

Void EmptyControl_obj::profiling( ::control::Profile data){
{
		HX_STACK_FRAME("control.EmptyControl","profiling",0x0428b819,"control.EmptyControl.profiling","control/Control.hx",78,0x4d918c53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(79)
		::String tmp = data->print();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Control.hx","\xa1","\x93","\x40","\xfb"),79,HX_HCSTRING("control.EmptyControl","\x21","\x4c","\x34","\x3a"),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EmptyControl_obj,profiling,(void))

Void EmptyControl_obj::handle( ::control::Event e){
{
		HX_STACK_FRAME("control.EmptyControl","handle",0xbe86c455,"control.EmptyControl.handle","control/Control.hx",82,0x4d918c53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EmptyControl_obj,handle,(void))

::control::Noise EmptyControl_obj::conclude( ){
	HX_STACK_FRAME("control.EmptyControl","conclude",0x15d66e98,"control.EmptyControl.conclude","control/Control.hx",85,0x4d918c53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EmptyControl_obj,conclude,return )


EmptyControl_obj::EmptyControl_obj()
{
}

Dynamic EmptyControl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"conclude") ) { return conclude_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EmptyControl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EmptyControl_obj::__mClass,"__mClass");
};

#endif

hx::Class EmptyControl_obj::__mClass;

void EmptyControl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.EmptyControl","\x21","\x4c","\x34","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EmptyControl_obj >;
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
