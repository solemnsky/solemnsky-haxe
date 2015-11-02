#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_control_Profile
#include <control/Profile.h>
#endif
namespace control{

Void Profile_obj::__construct(Array< int > bufferOn,Array< int > renderOn,Array< int > renderOff,Array< int > primCount,Array< int > tickOn,Array< int > tickOff)
{
HX_STACK_FRAME("control.Profile","new",0x1d46ffea,"control.Profile.new","control/Profile.hx",50,0x25295607)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOn,"bufferOn")
HX_STACK_ARG(renderOn,"renderOn")
HX_STACK_ARG(renderOff,"renderOff")
HX_STACK_ARG(primCount,"primCount")
HX_STACK_ARG(tickOn,"tickOn")
HX_STACK_ARG(tickOff,"tickOff")
{
	HX_STACK_LINE(51)
	Array< int > tmp = bufferOn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Dynamic tmp1 = ::control::Profile_obj::dataFromArray(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	this->bufferOn = tmp1;
	HX_STACK_LINE(52)
	Array< int > tmp2 = renderOn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	Dynamic tmp3 = ::control::Profile_obj::dataFromArray(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	this->renderOn = tmp3;
	HX_STACK_LINE(53)
	Array< int > tmp4 = renderOff;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	Dynamic tmp5 = ::control::Profile_obj::dataFromArray(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	this->renderOff = tmp5;
	HX_STACK_LINE(54)
	Array< int > tmp6 = primCount;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	Dynamic tmp7 = ::control::Profile_obj::dataFromArray(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	this->primCount = tmp7;
	HX_STACK_LINE(55)
	Array< int > tmp8 = tickOn;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	Dynamic tmp9 = ::control::Profile_obj::dataFromArray(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(55)
	this->tickOn = tmp9;
	HX_STACK_LINE(56)
	Array< int > tmp10 = tickOff;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(56)
	Dynamic tmp11 = ::control::Profile_obj::dataFromArray(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	this->tickOff = tmp11;
}
;
	return null();
}

//Profile_obj::~Profile_obj() { }

Dynamic Profile_obj::__CreateEmpty() { return  new Profile_obj; }
hx::ObjectPtr< Profile_obj > Profile_obj::__new(Array< int > bufferOn,Array< int > renderOn,Array< int > renderOff,Array< int > primCount,Array< int > tickOn,Array< int > tickOff)
{  hx::ObjectPtr< Profile_obj > _result_ = new Profile_obj();
	_result_->__construct(bufferOn,renderOn,renderOff,primCount,tickOn,tickOff);
	return _result_;}

Dynamic Profile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Profile_obj > _result_ = new Profile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::String Profile_obj::print( ){
	HX_STACK_FRAME("control.Profile","print",0x6c50fe37,"control.Profile.print","control/Profile.hx",67,0x25295607)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::String tmp = HX_HCSTRING("buff:","\x07","\x8f","\xe8","\xba");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Dynamic tmp1 = this->bufferOn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	::String tmp2 = ::control::Profile_obj::printInterval(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	::String tmp4 = (tmp3 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	::String tmp5 = (tmp4 + HX_HCSTRING("rndr:","\xb0","\xde","\xaf","\xec"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	Dynamic tmp6 = this->renderOn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	::String tmp7 = ::control::Profile_obj::printInterval(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	::String tmp9 = (tmp8 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(68)
	::String tmp10 = (tmp9 + HX_HCSTRING("rslp:","\x15","\x00","\x04","\xf0"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(74)
	Dynamic tmp11 = this->renderOff;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	::String tmp12 = ::control::Profile_obj::printInterval(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(68)
	::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(68)
	::String tmp14 = (tmp13 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(68)
	::String tmp15 = (tmp14 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(68)
	::String tmp16 = (tmp15 + HX_HCSTRING("prim:","\x14","\x57","\x8b","\xc8"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(77)
	Dynamic tmp17 = this->primCount;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(77)
	::String tmp18 = ::control::Profile_obj::printValue(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(68)
	::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(68)
	::String tmp20 = (tmp19 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(68)
	::String tmp21 = (tmp20 + HX_HCSTRING("tick:","\x3d","\x2e","\x2e","\x10"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(79)
	Dynamic tmp22 = this->tickOn;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(79)
	::String tmp23 = ::control::Profile_obj::printInterval(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(68)
	::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(68)
	::String tmp25 = (tmp24 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(68)
	::String tmp26 = (tmp25 + HX_HCSTRING("tslp:","\x17","\x29","\xd1","\x16"));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(81)
	Dynamic tmp27 = this->tickOff;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(81)
	::String tmp28 = ::control::Profile_obj::printInterval(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(68)
	::String tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(68)
	::String tmp30 = (tmp29 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(68)
	return tmp30;
}


HX_DEFINE_DYNAMIC_FUNC0(Profile_obj,print,return )

Dynamic Profile_obj::dataFromArray( Array< int > a){
	HX_STACK_FRAME("control.Profile","dataFromArray",0x1dee8c4f,"control.Profile.dataFromArray","control/Profile.hx",28,0x25295607)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(29)
	int sum = (int)0;		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(30)
	int tmp = a->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	int min = tmp;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(31)
	int tmp1 = a->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	int max = tmp1;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		while((true)){
			HX_STACK_LINE(33)
			bool tmp2 = (_g < a->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(33)
				break;
			}
			HX_STACK_LINE(33)
			int tmp4 = a->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(33)
			++(_g);
			HX_STACK_LINE(34)
			hx::AddEq(sum,i);
			HX_STACK_LINE(35)
			int tmp5 = min;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			Float tmp7 = ::Math_obj::min(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(35)
			min = tmp8;
			HX_STACK_LINE(36)
			int tmp9 = max;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(36)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(36)
			Float tmp11 = ::Math_obj::max(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(36)
			int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(36)
			max = tmp12;
		}
	}
	HX_STACK_LINE(40)
	Float tmp2 = (Float(sum) / Float(a->length));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	int tmp4 = min;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	int tmp5 = max;		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp5,int &tmp4,int &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","control/Profile.hx",39,0x25295607)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("average","\x5d","\x71","\xdb","\x62") , tmp3,false);
				__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp4,false);
				__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(39)
	Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp4,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Profile_obj,dataFromArray,return )

::String Profile_obj::printInterval( Dynamic i){
	HX_STACK_FRAME("control.Profile","printInterval",0x168ac29c,"control.Profile.printInterval","control/Profile.hx",59,0x25295607)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(60)
	::String tmp = (i->__Field(HX_HCSTRING("min","\x92","\x11","\x53","\x00"), hx::paccDynamic ) + HX_HCSTRING("ms-","\x07","\x1a","\x53","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	int tmp1 = i->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::String tmp3 = (tmp2 + HX_HCSTRING("ms~","\x58","\x1a","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	int tmp4 = i->__Field(HX_HCSTRING("average","\x5d","\x71","\xdb","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	::String tmp6 = (tmp5 + HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Profile_obj,printInterval,return )

::String Profile_obj::printValue( Dynamic i){
	HX_STACK_FRAME("control.Profile","printValue",0x59dd09ba,"control.Profile.printValue","control/Profile.hx",63,0x25295607)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(64)
	::String tmp = (i->__Field(HX_HCSTRING("min","\x92","\x11","\x53","\x00"), hx::paccDynamic ) + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	int tmp1 = i->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	::String tmp3 = (tmp2 + HX_HCSTRING("~","\x7e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	int tmp4 = i->__Field(HX_HCSTRING("average","\x5d","\x71","\xdb","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Profile_obj,printValue,return )


Profile_obj::Profile_obj()
{
}

void Profile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Profile);
	HX_MARK_MEMBER_NAME(bufferOn,"bufferOn");
	HX_MARK_MEMBER_NAME(renderOn,"renderOn");
	HX_MARK_MEMBER_NAME(renderOff,"renderOff");
	HX_MARK_MEMBER_NAME(primCount,"primCount");
	HX_MARK_MEMBER_NAME(tickOn,"tickOn");
	HX_MARK_MEMBER_NAME(tickOff,"tickOff");
	HX_MARK_END_CLASS();
}

void Profile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bufferOn,"bufferOn");
	HX_VISIT_MEMBER_NAME(renderOn,"renderOn");
	HX_VISIT_MEMBER_NAME(renderOff,"renderOff");
	HX_VISIT_MEMBER_NAME(primCount,"primCount");
	HX_VISIT_MEMBER_NAME(tickOn,"tickOn");
	HX_VISIT_MEMBER_NAME(tickOff,"tickOff");
}

Dynamic Profile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tickOn") ) { return tickOn; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tickOff") ) { return tickOff; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bufferOn") ) { return bufferOn; }
		if (HX_FIELD_EQ(inName,"renderOn") ) { return renderOn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderOff") ) { return renderOff; }
		if (HX_FIELD_EQ(inName,"primCount") ) { return primCount; }
	}
	return super::__Field(inName,inCallProp);
}

bool Profile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"printValue") ) { outValue = printValue_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dataFromArray") ) { outValue = dataFromArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"printInterval") ) { outValue = printInterval_dyn(); return true;  }
	}
	return false;
}

Dynamic Profile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tickOn") ) { tickOn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tickOff") ) { tickOff=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bufferOn") ) { bufferOn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderOn") ) { renderOn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderOff") ) { renderOff=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"primCount") ) { primCount=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Profile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Profile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bufferOn","\x3f","\x42","\xfe","\xac"));
	outFields->push(HX_HCSTRING("renderOn","\x15","\xb2","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("renderOff","\xb9","\x19","\x60","\xcd"));
	outFields->push(HX_HCSTRING("primCount","\x89","\x80","\xd9","\x42"));
	outFields->push(HX_HCSTRING("tickOn","\xdc","\x59","\x3a","\x18"));
	outFields->push(HX_HCSTRING("tickOff","\x12","\x40","\xd4","\x1a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Profile_obj,bufferOn),HX_HCSTRING("bufferOn","\x3f","\x42","\xfe","\xac")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Profile_obj,renderOn),HX_HCSTRING("renderOn","\x15","\xb2","\xdb","\xb2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Profile_obj,renderOff),HX_HCSTRING("renderOff","\xb9","\x19","\x60","\xcd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Profile_obj,primCount),HX_HCSTRING("primCount","\x89","\x80","\xd9","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Profile_obj,tickOn),HX_HCSTRING("tickOn","\xdc","\x59","\x3a","\x18")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Profile_obj,tickOff),HX_HCSTRING("tickOff","\x12","\x40","\xd4","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bufferOn","\x3f","\x42","\xfe","\xac"),
	HX_HCSTRING("renderOn","\x15","\xb2","\xdb","\xb2"),
	HX_HCSTRING("renderOff","\xb9","\x19","\x60","\xcd"),
	HX_HCSTRING("primCount","\x89","\x80","\xd9","\x42"),
	HX_HCSTRING("tickOn","\xdc","\x59","\x3a","\x18"),
	HX_HCSTRING("tickOff","\x12","\x40","\xd4","\x1a"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Profile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Profile_obj::__mClass,"__mClass");
};

#endif

hx::Class Profile_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("dataFromArray","\x45","\xcc","\xa4","\xe5"),
	HX_HCSTRING("printInterval","\x92","\x02","\x41","\xde"),
	HX_HCSTRING("printValue","\x04","\xd4","\x4a","\x8a"),
	::String(null()) };

void Profile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.Profile","\xf8","\x82","\xc2","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Profile_obj::__GetStatic;
	__mClass->mSetStaticField = &Profile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Profile_obj >;
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
