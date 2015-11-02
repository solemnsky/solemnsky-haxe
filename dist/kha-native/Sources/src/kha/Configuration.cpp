#include <hxcpp.h>

#ifndef INCLUDED_kha_Configuration
#include <kha/Configuration.h>
#endif
#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
namespace kha{

Void Configuration_obj::__construct()
{
	return null();
}

//Configuration_obj::~Configuration_obj() { }

Dynamic Configuration_obj::__CreateEmpty() { return  new Configuration_obj; }
hx::ObjectPtr< Configuration_obj > Configuration_obj::__new()
{  hx::ObjectPtr< Configuration_obj > _result_ = new Configuration_obj();
	_result_->__construct();
	return _result_;}

Dynamic Configuration_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Configuration_obj > _result_ = new Configuration_obj();
	_result_->__construct();
	return _result_;}

::kha::Game Configuration_obj::theScreen;

int Configuration_obj::id;

::kha::Game Configuration_obj::screen( ){
	HX_STACK_FRAME("kha.Configuration","screen",0x95fe94ce,"kha.Configuration.screen","kha/Configuration.hx",19,0x5c10ad73)
	HX_STACK_LINE(20)
	::kha::Game tmp = ::kha::Configuration_obj::theScreen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Configuration_obj,screen,return )

Void Configuration_obj::schedulerInitialized( ){
{
		HX_STACK_FRAME("kha.Configuration","schedulerInitialized",0xcdb00f7b,"kha.Configuration.schedulerInitialized","kha/Configuration.hx",28,0x5c10ad73)
		HX_STACK_LINE(28)
		::kha::Configuration_obj::id = (int)-1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Configuration_obj,schedulerInitialized,(void))

Void Configuration_obj::setScreen( ::kha::Game screen){
{
		HX_STACK_FRAME("kha.Configuration","setScreen",0x87c7e08c,"kha.Configuration.setScreen","kha/Configuration.hx",34,0x5c10ad73)
		HX_STACK_ARG(screen,"screen")
		HX_STACK_LINE(35)
		::kha::Configuration_obj::theScreen = screen;
		HX_STACK_LINE(36)
		::kha::Game tmp = ::kha::Configuration_obj::theScreen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		tmp->setInstance();
		HX_STACK_LINE(37)
		int tmp1 = ::kha::Configuration_obj::id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		if ((tmp2)){
			HX_STACK_LINE(38)
			Dynamic tmp3 = ::kha::Configuration_obj::update_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			Float tmp4 = ((Float)0.0166666666666666664);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			int tmp5 = ::kha::Scheduler_obj::addTimeTask(tmp3,(int)0,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			::kha::Configuration_obj::id = tmp5;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Configuration_obj,setScreen,(void))

Void Configuration_obj::update( ){
{
		HX_STACK_FRAME("kha.Configuration","update",0xd5a6df6b,"kha.Configuration.update","kha/Configuration.hx",45,0x5c10ad73)
		HX_STACK_LINE(46)
		::kha::Game tmp = ::kha::Configuration_obj::theScreen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		tmp->update();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Configuration_obj,update,(void))


Configuration_obj::Configuration_obj()
{
}

bool Configuration_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { outValue = id; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { outValue = screen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"theScreen") ) { outValue = theScreen; return true;  }
		if (HX_FIELD_EQ(inName,"setScreen") ) { outValue = setScreen_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"schedulerInitialized") ) { outValue = schedulerInitialized_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::Game*/ ,(void *) &Configuration_obj::theScreen,HX_HCSTRING("theScreen","\xbd","\x7a","\xcb","\xb5")},
	{hx::fsInt,(void *) &Configuration_obj::id,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Configuration_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Configuration_obj::theScreen,"theScreen");
	HX_MARK_MEMBER_NAME(Configuration_obj::id,"id");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Configuration_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Configuration_obj::theScreen,"theScreen");
	HX_VISIT_MEMBER_NAME(Configuration_obj::id,"id");
};

#endif

hx::Class Configuration_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("theScreen","\xbd","\x7a","\xcb","\xb5"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("schedulerInitialized","\x99","\xce","\x71","\x04"),
	HX_HCSTRING("setScreen","\xae","\xb0","\x04","\xa7"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

void Configuration_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Configuration","\xcc","\xae","\xbe","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Configuration_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Configuration_obj >;
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

void Configuration_obj::__boot()
{
	id= (int)-1;
}

} // end namespace kha
