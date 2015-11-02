#include <hxcpp.h>

#ifndef INCLUDED_kha_math_Matrix3
#include <kha/math/Matrix3.h>
#endif
namespace kha{
namespace math{

Void Matrix3_obj::__construct(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22)
{
HX_STACK_FRAME("kha.math.Matrix3","new",0x2b4e1488,"kha.math.Matrix3.new","kha/math/Matrix3.hx",13,0x5a9e6848)
HX_STACK_THIS(this)
HX_STACK_ARG(_00,"_00")
HX_STACK_ARG(_10,"_10")
HX_STACK_ARG(_20,"_20")
HX_STACK_ARG(_01,"_01")
HX_STACK_ARG(_11,"_11")
HX_STACK_ARG(_21,"_21")
HX_STACK_ARG(_02,"_02")
HX_STACK_ARG(_12,"_12")
HX_STACK_ARG(_22,"_22")
{
	HX_STACK_LINE(14)
	this->_00 = _00;
	HX_STACK_LINE(14)
	this->_10 = _10;
	HX_STACK_LINE(14)
	this->_20 = _20;
	HX_STACK_LINE(15)
	this->_01 = _01;
	HX_STACK_LINE(15)
	this->_11 = _11;
	HX_STACK_LINE(15)
	this->_21 = _21;
	HX_STACK_LINE(16)
	this->_02 = _02;
	HX_STACK_LINE(16)
	this->_12 = _12;
	HX_STACK_LINE(16)
	this->_22 = _22;
}
;
	return null();
}

//Matrix3_obj::~Matrix3_obj() { }

Dynamic Matrix3_obj::__CreateEmpty() { return  new Matrix3_obj; }
hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__new(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22)
{  hx::ObjectPtr< Matrix3_obj > _result_ = new Matrix3_obj();
	_result_->__construct(_00,_10,_20,_01,_11,_21,_02,_12,_22);
	return _result_;}

Dynamic Matrix3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3_obj > _result_ = new Matrix3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

int Matrix3_obj::width;

int Matrix3_obj::height;


Matrix3_obj::Matrix3_obj()
{
}

Dynamic Matrix3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { return _00; }
		if (HX_FIELD_EQ(inName,"_10") ) { return _10; }
		if (HX_FIELD_EQ(inName,"_20") ) { return _20; }
		if (HX_FIELD_EQ(inName,"_01") ) { return _01; }
		if (HX_FIELD_EQ(inName,"_11") ) { return _11; }
		if (HX_FIELD_EQ(inName,"_21") ) { return _21; }
		if (HX_FIELD_EQ(inName,"_02") ) { return _02; }
		if (HX_FIELD_EQ(inName,"_12") ) { return _12; }
		if (HX_FIELD_EQ(inName,"_22") ) { return _22; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { _00=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_10") ) { _10=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_20") ) { _20=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_01") ) { _01=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_11") ) { _11=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_21") ) { _21=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_02") ) { _02=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_12") ) { _12=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_22") ) { _22=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Matrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_00","\x1f","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_10","\xfe","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_20","\xdd","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_01","\x20","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_11","\xff","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_21","\xde","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_02","\x21","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_12","\x00","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_22","\xdf","\x41","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_00),HX_HCSTRING("_00","\x1f","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_10),HX_HCSTRING("_10","\xfe","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_20),HX_HCSTRING("_20","\xdd","\x41","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_01),HX_HCSTRING("_01","\x20","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_11),HX_HCSTRING("_11","\xff","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_21),HX_HCSTRING("_21","\xde","\x41","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_02),HX_HCSTRING("_02","\x21","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_12),HX_HCSTRING("_12","\x00","\x41","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,_22),HX_HCSTRING("_22","\xdf","\x41","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Matrix3_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(void *) &Matrix3_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_00","\x1f","\x40","\x48","\x00"),
	HX_HCSTRING("_10","\xfe","\x40","\x48","\x00"),
	HX_HCSTRING("_20","\xdd","\x41","\x48","\x00"),
	HX_HCSTRING("_01","\x20","\x40","\x48","\x00"),
	HX_HCSTRING("_11","\xff","\x40","\x48","\x00"),
	HX_HCSTRING("_21","\xde","\x41","\x48","\x00"),
	HX_HCSTRING("_02","\x21","\x40","\x48","\x00"),
	HX_HCSTRING("_12","\x00","\x41","\x48","\x00"),
	HX_HCSTRING("_22","\xdf","\x41","\x48","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix3_obj::width,"width");
	HX_MARK_MEMBER_NAME(Matrix3_obj::height,"height");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix3_obj::width,"width");
	HX_VISIT_MEMBER_NAME(Matrix3_obj::height,"height");
};

#endif

hx::Class Matrix3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	::String(null()) };

void Matrix3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.Matrix3","\x96","\x70","\xff","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Matrix3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3_obj >;
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

void Matrix3_obj::__boot()
{
	width= (int)3;
	height= (int)3;
}

} // end namespace kha
} // end namespace math
