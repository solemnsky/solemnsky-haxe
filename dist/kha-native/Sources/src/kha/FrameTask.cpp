#include <hxcpp.h>

#ifndef INCLUDED_kha_FrameTask
#include <kha/FrameTask.h>
#endif
namespace kha{

Void FrameTask_obj::__construct(Dynamic task,int priority,int id)
{
HX_STACK_FRAME("kha.FrameTask","new",0x98e6de1a,"kha.FrameTask.new","kha/Scheduler.hx",28,0xd275db8e)
HX_STACK_THIS(this)
HX_STACK_ARG(task,"task")
HX_STACK_ARG(priority,"priority")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(29)
	this->task = task;
	HX_STACK_LINE(30)
	this->priority = priority;
	HX_STACK_LINE(31)
	this->id = id;
	HX_STACK_LINE(32)
	this->active = true;
	HX_STACK_LINE(33)
	this->paused = false;
}
;
	return null();
}

//FrameTask_obj::~FrameTask_obj() { }

Dynamic FrameTask_obj::__CreateEmpty() { return  new FrameTask_obj; }
hx::ObjectPtr< FrameTask_obj > FrameTask_obj::__new(Dynamic task,int priority,int id)
{  hx::ObjectPtr< FrameTask_obj > _result_ = new FrameTask_obj();
	_result_->__construct(task,priority,id);
	return _result_;}

Dynamic FrameTask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameTask_obj > _result_ = new FrameTask_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


FrameTask_obj::FrameTask_obj()
{
}

void FrameTask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameTask);
	HX_MARK_MEMBER_NAME(task,"task");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void FrameTask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(task,"task");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

Dynamic FrameTask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { return task; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return priority; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameTask_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { task=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FrameTask_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FrameTask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FrameTask_obj,task),HX_HCSTRING("task","\x45","\xbf","\xf6","\x4c")},
	{hx::fsInt,(int)offsetof(FrameTask_obj,priority),HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb")},
	{hx::fsInt,(int)offsetof(FrameTask_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FrameTask_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(FrameTask_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("task","\x45","\xbf","\xf6","\x4c"),
	HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameTask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameTask_obj::__mClass,"__mClass");
};

#endif

hx::Class FrameTask_obj::__mClass;

void FrameTask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.FrameTask","\x28","\x89","\x2b","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FrameTask_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrameTask_obj >;
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
