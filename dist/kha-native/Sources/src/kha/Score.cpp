#include <hxcpp.h>

#ifndef INCLUDED_kha_Score
#include <kha/Score.h>
#endif
namespace kha{

Void Score_obj::__construct(::String name,int score)
{
HX_STACK_FRAME("kha.Score","new",0xa45a305a,"kha.Score.new","kha/Score.hx",7,0x54410157)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(score,"score")
{
	HX_STACK_LINE(8)
	this->name = name;
	HX_STACK_LINE(9)
	this->score = score;
}
;
	return null();
}

//Score_obj::~Score_obj() { }

Dynamic Score_obj::__CreateEmpty() { return  new Score_obj; }
hx::ObjectPtr< Score_obj > Score_obj::__new(::String name,int score)
{  hx::ObjectPtr< Score_obj > _result_ = new Score_obj();
	_result_->__construct(name,score);
	return _result_;}

Dynamic Score_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Score_obj > _result_ = new Score_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String Score_obj::getName( ){
	HX_STACK_FRAME("kha.Score","getName",0x3dd106fb,"kha.Score.getName","kha/Score.hx",12,0x54410157)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Score_obj,getName,return )

int Score_obj::getScore( ){
	HX_STACK_FRAME("kha.Score","getScore",0xbb69f8a2,"kha.Score.getScore","kha/Score.hx",16,0x54410157)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	int tmp = this->score;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Score_obj,getScore,return )

Void Score_obj::increase( int amount){
{
		HX_STACK_FRAME("kha.Score","increase",0xb2b2b188,"kha.Score.increase","kha/Score.hx",21,0x54410157)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(21)
		hx::AddEq(this->score,amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Score_obj,increase,(void))


Score_obj::Score_obj()
{
}

void Score_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Score);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_END_CLASS();
}

void Score_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(score,"score");
}

Dynamic Score_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScore") ) { return getScore_dyn(); }
		if (HX_FIELD_EQ(inName,"increase") ) { return increase_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Score_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Score_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Score_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("score","\x52","\x73","\xd9","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Score_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Score_obj,score),HX_HCSTRING("score","\x52","\x73","\xd9","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getScore","\xdc","\x82","\xb0","\xd8"),
	HX_HCSTRING("increase","\xc2","\x3b","\xf9","\xcf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Score_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Score_obj::__mClass,"__mClass");
};

#endif

hx::Class Score_obj::__mClass;

void Score_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Score","\x68","\xbb","\x78","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Score_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Score_obj >;
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
