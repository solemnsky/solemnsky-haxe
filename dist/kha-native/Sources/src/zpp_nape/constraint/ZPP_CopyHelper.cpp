#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_CopyHelper_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_CopyHelper","new",0x793f7b6a,"zpp_nape.constraint.ZPP_CopyHelper.new","zpp_nape/constraint/Constraint.hx",555,0xf29441f1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(558)
	this->cb = null();
	HX_STACK_LINE(557)
	this->bc = null();
	HX_STACK_LINE(556)
	this->id = (int)0;
}
;
	return null();
}

//ZPP_CopyHelper_obj::~ZPP_CopyHelper_obj() { }

Dynamic ZPP_CopyHelper_obj::__CreateEmpty() { return  new ZPP_CopyHelper_obj; }
hx::ObjectPtr< ZPP_CopyHelper_obj > ZPP_CopyHelper_obj::__new()
{  hx::ObjectPtr< ZPP_CopyHelper_obj > _result_ = new ZPP_CopyHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_CopyHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CopyHelper_obj > _result_ = new ZPP_CopyHelper_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::constraint::ZPP_CopyHelper ZPP_CopyHelper_obj::dict( int id,::nape::phys::Body bc){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_CopyHelper","dict",0x97b3572c,"zpp_nape.constraint.ZPP_CopyHelper.dict","zpp_nape/constraint/Constraint.hx",560,0xf29441f1)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(bc,"bc")
	HX_STACK_LINE(561)
	::zpp_nape::constraint::ZPP_CopyHelper ret = ::zpp_nape::constraint::ZPP_CopyHelper_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(562)
	ret->id = id;
	HX_STACK_LINE(563)
	ret->bc = bc;
	HX_STACK_LINE(564)
	::zpp_nape::constraint::ZPP_CopyHelper tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CopyHelper_obj,dict,return )

::zpp_nape::constraint::ZPP_CopyHelper ZPP_CopyHelper_obj::todo( int id,Dynamic cb){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_CopyHelper","todo",0xa24b4f7c,"zpp_nape.constraint.ZPP_CopyHelper.todo","zpp_nape/constraint/Constraint.hx",566,0xf29441f1)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(cb,"cb")
	HX_STACK_LINE(567)
	::zpp_nape::constraint::ZPP_CopyHelper ret = ::zpp_nape::constraint::ZPP_CopyHelper_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(568)
	ret->id = id;
	HX_STACK_LINE(569)
	ret->cb = cb;
	HX_STACK_LINE(570)
	::zpp_nape::constraint::ZPP_CopyHelper tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CopyHelper_obj,todo,return )


ZPP_CopyHelper_obj::ZPP_CopyHelper_obj()
{
}

void ZPP_CopyHelper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CopyHelper);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(bc,"bc");
	HX_MARK_MEMBER_NAME(cb,"cb");
	HX_MARK_END_CLASS();
}

void ZPP_CopyHelper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(bc,"bc");
	HX_VISIT_MEMBER_NAME(cb,"cb");
}

Dynamic ZPP_CopyHelper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"bc") ) { return bc; }
		if (HX_FIELD_EQ(inName,"cb") ) { return cb; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_CopyHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dict") ) { outValue = dict_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"todo") ) { outValue = todo_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_CopyHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bc") ) { bc=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cb") ) { cb=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CopyHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_CopyHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("bc","\xc1","\x55","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ZPP_CopyHelper_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(ZPP_CopyHelper_obj,bc),HX_HCSTRING("bc","\xc1","\x55","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_CopyHelper_obj,cb),HX_HCSTRING("cb","\x9f","\x56","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("bc","\xc1","\x55","\x00","\x00"),
	HX_HCSTRING("cb","\x9f","\x56","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CopyHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CopyHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_CopyHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("dict","\x76","\x59","\x69","\x42"),
	HX_HCSTRING("todo","\xc6","\x51","\x01","\x4d"),
	::String(null()) };

void ZPP_CopyHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_CopyHelper","\x78","\x3e","\xf7","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_CopyHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_CopyHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CopyHelper_obj >;
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

} // end namespace zpp_nape
} // end namespace constraint
