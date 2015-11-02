#include <hxcpp.h>

#ifndef INCLUDED_kha_TimeTask
#include <kha/TimeTask.h>
#endif
namespace kha{

Void TimeTask_obj::__construct()
{
HX_STACK_FRAME("kha.TimeTask","new",0xd6704a8e,"kha.TimeTask.new","kha/Scheduler.hx",16,0xd275db8e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TimeTask_obj::~TimeTask_obj() { }

Dynamic TimeTask_obj::__CreateEmpty() { return  new TimeTask_obj; }
hx::ObjectPtr< TimeTask_obj > TimeTask_obj::__new()
{  hx::ObjectPtr< TimeTask_obj > _result_ = new TimeTask_obj();
	_result_->__construct();
	return _result_;}

Dynamic TimeTask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimeTask_obj > _result_ = new TimeTask_obj();
	_result_->__construct();
	return _result_;}


TimeTask_obj::TimeTask_obj()
{
}

void TimeTask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimeTask);
	HX_MARK_MEMBER_NAME(task,"task");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(period,"period");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(groupId,"groupId");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void TimeTask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(task,"task");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(period,"period");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(groupId,"groupId");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

Dynamic TimeTask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { return task; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"period") ) { return period; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupId") ) { return groupId; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimeTask_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { task=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"period") ) { period=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupId") ) { groupId=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimeTask_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TimeTask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("groupId","\xfa","\x80","\xf7","\x86"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TimeTask_obj,task),HX_HCSTRING("task","\x45","\xbf","\xf6","\x4c")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,period),HX_HCSTRING("period","\x01","\x61","\x1b","\x3b")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsInt,(int)offsetof(TimeTask_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TimeTask_obj,groupId),HX_HCSTRING("groupId","\xfa","\x80","\xf7","\x86")},
	{hx::fsBool,(int)offsetof(TimeTask_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(TimeTask_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("task","\x45","\xbf","\xf6","\x4c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("groupId","\xfa","\x80","\xf7","\x86"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimeTask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimeTask_obj::__mClass,"__mClass");
};

#endif

hx::Class TimeTask_obj::__mClass;

void TimeTask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.TimeTask","\x9c","\xab","\x00","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TimeTask_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimeTask_obj >;
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
