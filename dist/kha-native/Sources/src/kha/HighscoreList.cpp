#include <hxcpp.h>

#ifndef INCLUDED_kha_HighscoreList
#include <kha/HighscoreList.h>
#endif
#ifndef INCLUDED_kha_Score
#include <kha/Score.h>
#endif
#ifndef INCLUDED_kha_StorageFile
#include <kha/StorageFile.h>
#endif
namespace kha{

Void HighscoreList_obj::__construct()
{
HX_STACK_FRAME("kha.HighscoreList","new",0x8d4c7a36,"kha.HighscoreList.new","kha/HighscoreList.hx",6,0xbe220ffb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	this->scores = tmp;
}
;
	return null();
}

//HighscoreList_obj::~HighscoreList_obj() { }

Dynamic HighscoreList_obj::__CreateEmpty() { return  new HighscoreList_obj; }
hx::ObjectPtr< HighscoreList_obj > HighscoreList_obj::__new()
{  hx::ObjectPtr< HighscoreList_obj > _result_ = new HighscoreList_obj();
	_result_->__construct();
	return _result_;}

Dynamic HighscoreList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HighscoreList_obj > _result_ = new HighscoreList_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > HighscoreList_obj::getScores( ){
	HX_STACK_FRAME("kha.HighscoreList","getScores",0xc710ac6d,"kha.HighscoreList.getScores","kha/HighscoreList.hx",26,0xbe220ffb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	Array< ::Dynamic > tmp = this->scores;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(HighscoreList_obj,getScores,return )

Void HighscoreList_obj::addScore( ::String name,int score){
{
		HX_STACK_FRAME("kha.HighscoreList","addScore",0x429887db,"kha.HighscoreList.addScore","kha/HighscoreList.hx",30,0xbe220ffb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(score,"score")
		HX_STACK_LINE(31)
		Array< ::Dynamic > tmp = this->scores;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		::kha::Score tmp1 = ::kha::Score_obj::__new(name,score);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		tmp->push(tmp1);
		HX_STACK_LINE(32)
		Array< ::Dynamic > tmp2 = this->scores;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::kha::Score score1,::kha::Score score2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/HighscoreList.hx",32,0xbe220ffb)
			HX_STACK_ARG(score1,"score1")
			HX_STACK_ARG(score2,"score2")
			{
				HX_STACK_LINE(33)
				int tmp3 = score2->getScore();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(33)
				int tmp4 = score1->getScore();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				return tmp5;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(32)
		tmp2->sort( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HighscoreList_obj,addScore,(void))

Void HighscoreList_obj::load( ::kha::StorageFile file){
{
		HX_STACK_FRAME("kha.HighscoreList","load",0x14538b90,"kha.HighscoreList.load","kha/HighscoreList.hx",42,0xbe220ffb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(file,"file")
		HX_STACK_LINE(43)
		bool tmp = (file == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		if ((tmp)){
			HX_STACK_LINE(43)
			return null();
		}
		HX_STACK_LINE(44)
		Dynamic tmp1 = file->readObject();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		cpp::ArrayBase loaded = tmp1;		HX_STACK_VAR(loaded,"loaded");
		HX_STACK_LINE(45)
		Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		this->scores = tmp2;
		HX_STACK_LINE(46)
		bool tmp3 = (loaded != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		if ((tmp3)){
			HX_STACK_LINE(47)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(47)
			int _g = loaded->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				if ((tmp5)){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(47)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(48)
				Array< ::Dynamic > tmp7 = this->scores;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				Dynamic tmp9 = loaded->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				Dynamic tmp10 = loaded->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				::kha::Score tmp11 = ::kha::Score_obj::__new(tmp9->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ),tmp10->__Field(HX_HCSTRING("score","\x52","\x73","\xd9","\x78"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				tmp7[tmp8] = tmp11;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HighscoreList_obj,load,(void))

Void HighscoreList_obj::save( ::kha::StorageFile file){
{
		HX_STACK_FRAME("kha.HighscoreList","save",0x18e97ca7,"kha.HighscoreList.save","kha/HighscoreList.hx",53,0xbe220ffb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(file,"file")
		HX_STACK_LINE(54)
		Array< ::Dynamic > tmp = this->scores;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		file->writeObject(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HighscoreList_obj,save,(void))


HighscoreList_obj::HighscoreList_obj()
{
}

void HighscoreList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HighscoreList);
	HX_MARK_MEMBER_NAME(scores,"scores");
	HX_MARK_END_CLASS();
}

void HighscoreList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scores,"scores");
}

Dynamic HighscoreList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addScore") ) { return addScore_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getScores") ) { return getScores_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HighscoreList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HighscoreList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void HighscoreList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("scores","\xe1","\x74","\x6b","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HighscoreList_obj,scores),HX_HCSTRING("scores","\xe1","\x74","\x6b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("scores","\xe1","\x74","\x6b","\x45"),
	HX_HCSTRING("getScores","\x17","\xfe","\xc1","\xc1"),
	HX_HCSTRING("addScore","\x71","\x99","\x36","\xf2"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HighscoreList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HighscoreList_obj::__mClass,"__mClass");
};

#endif

hx::Class HighscoreList_obj::__mClass;

void HighscoreList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.HighscoreList","\x44","\xe7","\xd1","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &HighscoreList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HighscoreList_obj >;
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
