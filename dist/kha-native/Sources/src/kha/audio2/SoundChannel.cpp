#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha_audio1_SoundChannel
#include <kha/audio1/SoundChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_SoundChannel
#include <kha/audio2/SoundChannel.h>
#endif
namespace kha{
namespace audio2{

Void SoundChannel_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.SoundChannel","new",0x0f1ab28e,"kha.audio2.SoundChannel.new","kha/audio2/SoundChannel.hx",5,0xe4ba4a82)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->paused = false;
	HX_STACK_LINE(12)
	this->myVolume = (int)1;
	HX_STACK_LINE(13)
	this->myPosition = (int)0;
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new()
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct();
	return _result_;}

hx::Object *SoundChannel_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::audio1::SoundChannel_obj)) return operator ::kha::audio1::SoundChannel_obj *();
	return super::__ToInterface(inType);
}

SoundChannel_obj::operator ::kha::audio1::SoundChannel_obj *()
	{ return new ::kha::audio1::SoundChannel_delegate_< SoundChannel_obj >(this); }
Void SoundChannel_obj::nextSamples( Array< ::cpp::Float32 > samples,int length,int sampleRate){
{
		HX_STACK_FRAME("kha.audio2.SoundChannel","nextSamples",0xa4ecfc84,"kha.audio2.SoundChannel.nextSamples","kha/audio2/SoundChannel.hx",16,0xe4ba4a82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(sampleRate,"sampleRate")
		HX_STACK_LINE(17)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(18)
			{
				HX_STACK_LINE(18)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(18)
				while((true)){
					HX_STACK_LINE(18)
					bool tmp1 = (_g < length);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(18)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(18)
					if ((tmp2)){
						HX_STACK_LINE(18)
						break;
					}
					HX_STACK_LINE(18)
					int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(18)
					int i = tmp3;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(19)
					int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(19)
					::cpp::Float32 tmp5 = samples->__unsafe_set(tmp4,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(19)
					tmp5;
				}
			}
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while((true)){
				HX_STACK_LINE(24)
				bool tmp1 = (_g < length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(24)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(24)
				if ((tmp2)){
					HX_STACK_LINE(24)
					break;
				}
				HX_STACK_LINE(24)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(24)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(25)
				{
					HX_STACK_LINE(25)
					int tmp4 = this->myPosition;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(25)
					Array< Float > tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(25)
					int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(25)
					bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(25)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(25)
					if ((tmp7)){
						HX_STACK_LINE(25)
						Array< Float > tmp9 = this->data;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(25)
						int tmp10 = this->myPosition;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(25)
						Float tmp11 = tmp9->__unsafe_get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(25)
						tmp8 = tmp11;
					}
					else{
						HX_STACK_LINE(25)
						tmp8 = (int)0;
					}
					HX_STACK_LINE(25)
					::cpp::Float32 val = tmp8;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(25)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(25)
					::cpp::Float32 tmp10 = val;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(25)
					::cpp::Float32 tmp11 = samples->__unsafe_set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(25)
					tmp11;
				}
				HX_STACK_LINE(26)
				++(this->myPosition);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SoundChannel_obj,nextSamples,(void))

Void SoundChannel_obj::play( ){
{
		HX_STACK_FRAME("kha.audio2.SoundChannel","play",0x29993406,"kha.audio2.SoundChannel.play","kha/audio2/SoundChannel.hx",31,0xe4ba4a82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,play,(void))

Void SoundChannel_obj::pause( ){
{
		HX_STACK_FRAME("kha.audio2.SoundChannel","pause",0x353e20a4,"kha.audio2.SoundChannel.pause","kha/audio2/SoundChannel.hx",35,0xe4ba4a82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,pause,(void))

Void SoundChannel_obj::stop( ){
{
		HX_STACK_FRAME("kha.audio2.SoundChannel","stop",0x2b9af614,"kha.audio2.SoundChannel.stop","kha/audio2/SoundChannel.hx",38,0xe4ba4a82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		Array< Float > tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		this->myPosition = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

int SoundChannel_obj::get_length( ){
	HX_STACK_FRAME("kha.audio2.SoundChannel","get_length",0x5558e441,"kha.audio2.SoundChannel.get_length","kha/audio2/SoundChannel.hx",44,0xe4ba4a82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	Array< Float > tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	Float tmp2 = (Float(tmp1) / Float(((Float)44.1)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_length,return )

int SoundChannel_obj::get_position( ){
	HX_STACK_FRAME("kha.audio2.SoundChannel","get_position",0xb3c2bcc4,"kha.audio2.SoundChannel.get_position","kha/audio2/SoundChannel.hx",50,0xe4ba4a82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	int tmp = this->myPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Float tmp1 = (Float(tmp) / Float(((Float)44.1)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::get_volume( ){
	HX_STACK_FRAME("kha.audio2.SoundChannel","get_volume",0x15a47935,"kha.audio2.SoundChannel.get_volume","kha/audio2/SoundChannel.hx",56,0xe4ba4a82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	Float tmp = this->myVolume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_volume,return )

Float SoundChannel_obj::set_volume( Float value){
	HX_STACK_FRAME("kha.audio2.SoundChannel","set_volume",0x192217a9,"kha.audio2.SoundChannel.set_volume","kha/audio2/SoundChannel.hx",60,0xe4ba4a82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(61)
	Float tmp = this->myVolume = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_volume,return )

bool SoundChannel_obj::get_finished( ){
	HX_STACK_FRAME("kha.audio2.SoundChannel","get_finished",0x7dd6af8d,"kha.audio2.SoundChannel.get_finished","kha/audio2/SoundChannel.hx",66,0xe4ba4a82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	int tmp = this->myPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Array< Float > tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_finished,return )


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(myVolume,"myVolume");
	HX_MARK_MEMBER_NAME(myPosition,"myPosition");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(myVolume,"myVolume");
	HX_VISIT_MEMBER_NAME(myPosition,"myPosition");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(finished,"finished");
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return get_volume(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"myVolume") ) { return myVolume; }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp == hx::paccAlways ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"finished") ) { return inCallProp == hx::paccAlways ? get_finished() : finished; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"myPosition") ) { return myPosition; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nextSamples") ) { return nextSamples_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return get_finished_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"myVolume") ) { myVolume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"myPosition") ) { myPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SoundChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96"));
	outFields->push(HX_HCSTRING("myPosition","\x35","\x08","\x7c","\x38"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(SoundChannel_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,myVolume),HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96")},
	{hx::fsInt,(int)offsetof(SoundChannel_obj,myPosition),HX_HCSTRING("myPosition","\x35","\x08","\x7c","\x38")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsInt,(int)offsetof(SoundChannel_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(SoundChannel_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96"),
	HX_HCSTRING("myPosition","\x35","\x08","\x7c","\x38"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("nextSamples","\x56","\x3c","\x13","\x5a"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("get_finished","\x7b","\x47","\x28","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.SoundChannel","\x9c","\x13","\x57","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SoundChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundChannel_obj >;
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
} // end namespace audio2
