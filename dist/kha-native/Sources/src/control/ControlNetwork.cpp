#include <hxcpp.h>

#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_ControlNetwork
#include <control/ControlNetwork.h>
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
namespace control{

Void ControlNetwork_obj::__construct(Dynamic moveThrough,::control::Control initialCtrl)
{
HX_STACK_FRAME("control.ControlNetwork","new",0xa7ea3ed4,"control.ControlNetwork.new","control/Combinator.hx",35,0x1189dfb0)
HX_STACK_THIS(this)
HX_STACK_ARG(moveThrough,"moveThrough")
HX_STACK_ARG(initialCtrl,"initialCtrl")
{
	HX_STACK_LINE(36)
	this->moveThrough = moveThrough;
	HX_STACK_LINE(37)
	this->ctrl = initialCtrl;
}
;
	return null();
}

//ControlNetwork_obj::~ControlNetwork_obj() { }

Dynamic ControlNetwork_obj::__CreateEmpty() { return  new ControlNetwork_obj; }
hx::ObjectPtr< ControlNetwork_obj > ControlNetwork_obj::__new(Dynamic moveThrough,::control::Control initialCtrl)
{  hx::ObjectPtr< ControlNetwork_obj > _result_ = new ControlNetwork_obj();
	_result_->__construct(moveThrough,initialCtrl);
	return _result_;}

Dynamic ControlNetwork_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControlNetwork_obj > _result_ = new ControlNetwork_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *ControlNetwork_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::control::Control_obj)) return operator ::control::Control_obj *();
	return super::__ToInterface(inType);
}

ControlNetwork_obj::operator ::control::Control_obj *()
	{ return new ::control::Control_delegate_< ControlNetwork_obj >(this); }
Void ControlNetwork_obj::init( ::control::Network n){
{
		HX_STACK_FRAME("control.ControlNetwork","init",0x41c5721c,"control.ControlNetwork.init","control/Combinator.hx",44,0x1189dfb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(45)
		::control::Control tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::control::Network tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		tmp->init(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlNetwork_obj,init,(void))

Void ControlNetwork_obj::tick( Float delta){
{
		HX_STACK_FRAME("control.ControlNetwork","tick",0x4906fa69,"control.ControlNetwork.tick","control/Combinator.hx",48,0x1189dfb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(49)
		::control::Control tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		Float tmp1 = delta;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		tmp->tick(tmp1);
		HX_STACK_LINE(51)
		::control::Control tmp2 = this->ctrl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		Dynamic tmp3 = tmp2->conclude();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Dynamic conclusion = tmp3;		HX_STACK_VAR(conclusion,"conclusion");
		HX_STACK_LINE(52)
		bool tmp4 = (conclusion != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		if ((tmp4)){
			HX_STACK_LINE(53)
			Dynamic tmp5 = conclusion;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			::control::Control tmp6 = this->moveThrough(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			this->ctrl = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlNetwork_obj,tick,(void))

::control::Scene ControlNetwork_obj::render( Float delta){
	HX_STACK_FRAME("control.ControlNetwork","render",0xc1787d62,"control.ControlNetwork.render","control/Combinator.hx",56,0x1189dfb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(57)
	::control::Control tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	Float tmp1 = delta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::control::Scene tmp2 = tmp->render(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ControlNetwork_obj,render,return )

Void ControlNetwork_obj::profiling( ::control::Profile data){
{
		HX_STACK_FRAME("control.ControlNetwork","profiling",0xdbe6cc1a,"control.ControlNetwork.profiling","control/Combinator.hx",60,0x1189dfb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(61)
		::control::Control tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		::control::Profile tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		tmp->profiling(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlNetwork_obj,profiling,(void))

Void ControlNetwork_obj::handle( ::control::Event e){
{
		HX_STACK_FRAME("control.ControlNetwork","handle",0x744c95b4,"control.ControlNetwork.handle","control/Combinator.hx",64,0x1189dfb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(65)
		::control::Control tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::control::Event tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		tmp->handle(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlNetwork_obj,handle,(void))

::control::Noise ControlNetwork_obj::conclude( ){
	HX_STACK_FRAME("control.ControlNetwork","conclude",0x25ba95b7,"control.ControlNetwork.conclude","control/Combinator.hx",69,0x1189dfb0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ControlNetwork_obj,conclude,return )


ControlNetwork_obj::ControlNetwork_obj()
{
}

void ControlNetwork_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlNetwork);
	HX_MARK_MEMBER_NAME(moveThrough,"moveThrough");
	HX_MARK_MEMBER_NAME(ctrl,"ctrl");
	HX_MARK_END_CLASS();
}

void ControlNetwork_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(moveThrough,"moveThrough");
	HX_VISIT_MEMBER_NAME(ctrl,"ctrl");
}

Dynamic ControlNetwork_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ctrl") ) { return ctrl; }
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
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveThrough") ) { return moveThrough; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ControlNetwork_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ctrl") ) { ctrl=inValue.Cast< ::control::Control >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveThrough") ) { moveThrough=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlNetwork_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ControlNetwork_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ControlNetwork_obj,moveThrough),HX_HCSTRING("moveThrough","\x34","\x81","\xb9","\x32")},
	{hx::fsObject /*::control::Control*/ ,(int)offsetof(ControlNetwork_obj,ctrl),HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("moveThrough","\x34","\x81","\xb9","\x32"),
	HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlNetwork_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlNetwork_obj::__mClass,"__mClass");
};

#endif

hx::Class ControlNetwork_obj::__mClass;

void ControlNetwork_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.ControlNetwork","\xe2","\x84","\x8d","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ControlNetwork_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ControlNetwork_obj >;
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
