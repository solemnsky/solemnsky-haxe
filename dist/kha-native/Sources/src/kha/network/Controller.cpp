#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_network_ControllerBuilder
#include <kha/network/ControllerBuilder.h>
#endif
namespace kha{
namespace network{

Void Controller_obj::__construct()
{
HX_STACK_FRAME("kha.network.Controller","new",0x36c03a78,"kha.network.Controller.new","kha/network/Controller.hx",9,0x1be459b6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	int tmp = (::kha::network::ControllerBuilder_obj::nextId)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	this->__id = tmp;
}
;
	return null();
}

//Controller_obj::~Controller_obj() { }

Dynamic Controller_obj::__CreateEmpty() { return  new Controller_obj; }
hx::ObjectPtr< Controller_obj > Controller_obj::__new()
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct();
	return _result_;}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct();
	return _result_;}

int Controller_obj::_id( ){
	HX_STACK_FRAME("kha.network.Controller","_id",0x36b4dc12,"kha.network.Controller._id","kha/network/Controller.hx",13,0x1be459b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	int tmp = this->__id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,_id,return )

Void Controller_obj::_receive( int offset,::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("kha.network.Controller","_receive",0xd2f4ba4c,"kha.network.Controller._receive","kha/network/Controller.hx",18,0x1be459b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(bytes,"bytes")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,_receive,(void))


Controller_obj::Controller_obj()
{
}

Dynamic Controller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return __id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_receive") ) { return _receive_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { __id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Controller_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Controller_obj,__id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"),
	HX_HCSTRING("_receive","\x64","\xbb","\x10","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#endif

hx::Class Controller_obj::__mClass;

void Controller_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.network.Controller","\x86","\xde","\x0b","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Controller_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Controller_obj >;
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
} // end namespace network
