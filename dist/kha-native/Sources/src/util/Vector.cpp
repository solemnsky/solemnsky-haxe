#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
namespace util{

Void Vector_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("util.Vector","new",0xbabc3c41,"util.Vector.new","util/Vector.hx",12,0x50a03e2e)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(13)
	this->x = x;
	HX_STACK_LINE(13)
	this->y = y;
}
;
	return null();
}

//Vector_obj::~Vector_obj() { }

Dynamic Vector_obj::__CreateEmpty() { return  new Vector_obj; }
hx::ObjectPtr< Vector_obj > Vector_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Vector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::util::Vector Vector_obj::clone( ){
	HX_STACK_FRAME("util.Vector","clone",0xbea6f97e,"util.Vector.clone","util/Vector.hx",16,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	::util::Vector tmp2 = ::util::Vector_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,clone,return )

Void Vector_obj::set( Float x,Float y){
{
		HX_STACK_FRAME("util.Vector","set",0xbac00783,"util.Vector.set","util/Vector.hx",20,0x50a03e2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(21)
		this->x = x;
		HX_STACK_LINE(21)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,set,(void))

Float Vector_obj::dot( ::util::Vector v){
	HX_STACK_FRAME("util.Vector","dot",0xbab4ae6a,"util.Vector.dot","util/Vector.hx",24,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(25)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,dot,return )

Float Vector_obj::cross( ::util::Vector v){
	HX_STACK_FRAME("util.Vector","cross",0xc29e45a1,"util.Vector.cross","util/Vector.hx",28,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(29)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	Float tmp4 = v->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,cross,return )

::util::Vector Vector_obj::add( ::util::Vector v){
	HX_STACK_FRAME("util.Vector","add",0xbab25e02,"util.Vector.add","util/Vector.hx",32,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(33)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	::util::Vector tmp6 = ::util::Vector_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,add,return )

::util::Vector Vector_obj::sub( ::util::Vector v){
	HX_STACK_FRAME("util.Vector","sub",0xbac01561,"util.Vector.sub","util/Vector.hx",36,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(37)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	::util::Vector tmp6 = ::util::Vector_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,sub,return )

::util::Vector Vector_obj::mult( Float s){
	HX_STACK_FRAME("util.Vector","mult",0xa95b60ef,"util.Vector.mult","util/Vector.hx",40,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(41)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	Float tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	::util::Vector tmp6 = ::util::Vector_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,mult,return )

Float Vector_obj::angle( ){
	HX_STACK_FRAME("util.Vector","angle",0x992629f4,"util.Vector.angle","util/Vector.hx",44,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	Float tmp2 = ::Math_obj::atan2(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,angle,return )

Float Vector_obj::length( ){
	HX_STACK_FRAME("util.Vector","length",0xa42d0ba5,"util.Vector.length","util/Vector.hx",48,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,length,return )

::String Vector_obj::toString( ){
	HX_STACK_FRAME("util.Vector","toString",0xeaeeb52b,"util.Vector.toString","util/Vector.hx",52,0x50a03e2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = (tmp * (int)100);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	Float tmp3 = (Float(tmp2) / Float((int)100));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	::String tmp4 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	::String tmp5 = (tmp4 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	Float tmp7 = (tmp6 * (int)100);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	Float tmp9 = (Float(tmp8) / Float((int)100));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(53)
	::String tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(53)
	::String tmp11 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(53)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toString,return )

::util::Vector Vector_obj::fromAngle( Float angle){
	HX_STACK_FRAME("util.Vector","fromAngle",0x54d338aa,"util.Vector.fromAngle","util/Vector.hx",56,0x50a03e2e)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(57)
	Float tmp = angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	::util::Vector tmp4 = ::util::Vector_obj::__new(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,fromAngle,return )

::util::Vector Vector_obj::zero;


Vector_obj::Vector_obj()
{
}

Dynamic Vector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { outValue = zero; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromAngle") ) { outValue = fromAngle_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { zero=ioValue.Cast< ::util::Vector >(); return true; }
	}
	return false;
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::util::Vector*/ ,(void *) &Vector_obj::zero,HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("cross","\x80","\x5f","\x5a","\x4c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector_obj::zero,"zero");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector_obj::zero,"zero");
};

#endif

hx::Class Vector_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromAngle","\x09","\x2e","\x6b","\xd7"),
	HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50"),
	::String(null()) };

void Vector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.Vector","\xcf","\x07","\x7f","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector_obj >;
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

void Vector_obj::__boot()
{
	zero= ::util::Vector_obj::__new((int)0,(int)0);
}

} // end namespace util
