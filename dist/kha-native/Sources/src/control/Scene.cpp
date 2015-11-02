#include <hxcpp.h>

#ifndef INCLUDED_control_DrawPrim
#include <control/DrawPrim.h>
#endif
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
#ifndef INCLUDED_util_Transform
#include <util/Transform.h>
#endif
namespace control{

Void Scene_obj::__construct()
{
HX_STACK_FRAME("control.Scene","new",0xe5f89bcd,"control.Scene.new","control/Scene.hx",32,0x7f060544)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->alpha = ((Float)1);
	HX_STACK_LINE(39)
	this->trans = ::util::Transform_obj::__new((int)1,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)1);
	HX_STACK_LINE(38)
	this->children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(37)
	this->prims = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(prims,"prims");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(trans,"trans");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prims,"prims");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(trans,"trans");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
}

Dynamic Scene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"prims") ) { return prims; }
		if (HX_FIELD_EQ(inName,"trans") ) { return trans; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"prims") ) { prims=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trans") ) { trans=inValue.Cast< ::util::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Scene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("prims","\x4d","\x57","\x8b","\xc8"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("trans","\x28","\x98","\x1f","\x16"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,prims),HX_HCSTRING("prims","\x4d","\x57","\x8b","\xc8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsObject /*::util::Transform*/ ,(int)offsetof(Scene_obj,trans),HX_HCSTRING("trans","\x28","\x98","\x1f","\x16")},
	{hx::fsFloat,(int)offsetof(Scene_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("prims","\x4d","\x57","\x8b","\xc8"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("trans","\x28","\x98","\x1f","\x16"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.Scene","\x5b","\xb1","\x99","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Scene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
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
