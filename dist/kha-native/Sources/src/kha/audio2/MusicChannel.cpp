#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_audio1_MusicChannel
#include <kha/audio1/MusicChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_MusicChannel
#include <kha/audio2/MusicChannel.h>
#endif
namespace kha{
namespace audio2{

Void MusicChannel_obj::__construct(::haxe::io::Bytes data,bool loop)
{
HX_STACK_FRAME("kha.audio2.MusicChannel","new",0xbe02f278,"kha.audio2.MusicChannel.new","kha/audio2/MusicChannel.hx",9,0xa1c7f5d8)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(loop,"loop")
{
	HX_STACK_LINE(13)
	this->paused = false;
	HX_STACK_LINE(10)
	this->atend = false;
	HX_STACK_LINE(16)
	this->myVolume = (int)1;
	HX_STACK_LINE(17)
	this->loop = loop;
	HX_STACK_LINE(18)
	::haxe::io::Bytes tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->initVorbis(tmp);
}
;
	return null();
}

//MusicChannel_obj::~MusicChannel_obj() { }

Dynamic MusicChannel_obj::__CreateEmpty() { return  new MusicChannel_obj; }
hx::ObjectPtr< MusicChannel_obj > MusicChannel_obj::__new(::haxe::io::Bytes data,bool loop)
{  hx::ObjectPtr< MusicChannel_obj > _result_ = new MusicChannel_obj();
	_result_->__construct(data,loop);
	return _result_;}

Dynamic MusicChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MusicChannel_obj > _result_ = new MusicChannel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *MusicChannel_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::audio1::MusicChannel_obj)) return operator ::kha::audio1::MusicChannel_obj *();
	return super::__ToInterface(inType);
}

MusicChannel_obj::operator ::kha::audio1::MusicChannel_obj *()
	{ return new ::kha::audio1::MusicChannel_delegate_< MusicChannel_obj >(this); }
Void MusicChannel_obj::initVorbis( ::haxe::io::Bytes data){
vorbis = stb_vorbis_open_memory(data->b->Pointer(), data->length, NULL, NULL);
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","initVorbis",0x5d952f6b,"kha.audio2.MusicChannel.initVorbis","kha/audio2/MusicChannel.hx",22,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MusicChannel_obj,initVorbis,(void))

Void MusicChannel_obj::nextVorbisSamples( Array< ::cpp::Float32 > samples,int length){

		int read = stb_vorbis_get_samples_float_interleaved(vorbis, 2, samples->Pointer(), length);
		if (read < length / 2) {
			if (loop) {
				stb_vorbis_seek_start(vorbis);
			}
			else {
				atend = true;
			}
			for (int i = read; i < length; ++i) {
				samples->Pointer()[i] = 0;
			}
		}
	
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","nextVorbisSamples",0x73ff551b,"kha.audio2.MusicChannel.nextVorbisSamples","kha/audio2/MusicChannel.hx",40,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(length,"length")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MusicChannel_obj,nextVorbisSamples,(void))

Void MusicChannel_obj::nextSamples( Array< ::cpp::Float32 > samples,int length,int sampleRate){
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","nextSamples",0xb556366e,"kha.audio2.MusicChannel.nextSamples","kha/audio2/MusicChannel.hx",44,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(sampleRate,"sampleRate")
		HX_STACK_LINE(45)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		if ((tmp)){
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(46)
				while((true)){
					HX_STACK_LINE(46)
					bool tmp1 = (_g < length);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(46)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(46)
					if ((tmp2)){
						HX_STACK_LINE(46)
						break;
					}
					HX_STACK_LINE(46)
					int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(46)
					int i = tmp3;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(47)
					int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(47)
					::cpp::Float32 tmp5 = samples->__unsafe_set(tmp4,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(47)
					tmp5;
				}
			}
			HX_STACK_LINE(49)
			return null();
		}
		HX_STACK_LINE(52)
		Array< ::cpp::Float32 > tmp1 = samples;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		this->nextVorbisSamples(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MusicChannel_obj,nextSamples,(void))

Void MusicChannel_obj::play( ){
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","play",0x85e8e0dc,"kha.audio2.MusicChannel.play","kha/audio2/MusicChannel.hx",56,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MusicChannel_obj,play,(void))

Void MusicChannel_obj::pause( ){
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","pause",0x9ea5af0e,"kha.audio2.MusicChannel.pause","kha/audio2/MusicChannel.hx",60,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MusicChannel_obj,pause,(void))

Void MusicChannel_obj::stop( ){
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","stop",0x87eaa2ea,"kha.audio2.MusicChannel.stop","kha/audio2/MusicChannel.hx",64,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->atend = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MusicChannel_obj,stop,(void))

int MusicChannel_obj::get_length( ){

		if (vorbis == NULL) return 0;
		return stb_vorbis_stream_length_in_seconds(vorbis) * 1000;
	
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","get_length",0x85a2d597,"kha.audio2.MusicChannel.get_length","kha/audio2/MusicChannel.hx",74,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(MusicChannel_obj,get_length,return )

int MusicChannel_obj::get_position( ){

		 if (vorbis == NULL) return 0;
		return stb_vorbis_get_sample_offset(vorbis) / stb_vorbis_stream_length_in_samples(vorbis) * 1000;
	
{
		HX_STACK_FRAME("kha.audio2.MusicChannel","get_position",0xff6c2f9a,"kha.audio2.MusicChannel.get_position","kha/audio2/MusicChannel.hx",84,0xa1c7f5d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(MusicChannel_obj,get_position,return )

Float MusicChannel_obj::get_volume( ){
	HX_STACK_FRAME("kha.audio2.MusicChannel","get_volume",0x45ee6a8b,"kha.audio2.MusicChannel.get_volume","kha/audio2/MusicChannel.hx",89,0xa1c7f5d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	Float tmp = this->myVolume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MusicChannel_obj,get_volume,return )

Float MusicChannel_obj::set_volume( Float value){
	HX_STACK_FRAME("kha.audio2.MusicChannel","set_volume",0x496c08ff,"kha.audio2.MusicChannel.set_volume","kha/audio2/MusicChannel.hx",93,0xa1c7f5d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	Float tmp = this->myVolume = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MusicChannel_obj,set_volume,return )

bool MusicChannel_obj::get_finished( ){
	HX_STACK_FRAME("kha.audio2.MusicChannel","get_finished",0xc9802263,"kha.audio2.MusicChannel.get_finished","kha/audio2/MusicChannel.hx",99,0xa1c7f5d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	bool tmp = this->atend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MusicChannel_obj,get_finished,return )


MusicChannel_obj::MusicChannel_obj()
{
}

Dynamic MusicChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"atend") ) { return atend; }
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
		if (HX_FIELD_EQ(inName,"initVorbis") ) { return initVorbis_dyn(); }
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
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextVorbisSamples") ) { return nextVorbisSamples_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MusicChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"atend") ) { atend=inValue.Cast< bool >(); return inValue; }
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
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MusicChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MusicChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("atend","\xc8","\x08","\xd8","\x26"));
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
	outFields->push(HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MusicChannel_obj,atend),HX_HCSTRING("atend","\xc8","\x08","\xd8","\x26")},
	{hx::fsBool,(int)offsetof(MusicChannel_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
	{hx::fsFloat,(int)offsetof(MusicChannel_obj,myVolume),HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96")},
	{hx::fsBool,(int)offsetof(MusicChannel_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsInt,(int)offsetof(MusicChannel_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(MusicChannel_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsBool,(int)offsetof(MusicChannel_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("atend","\xc8","\x08","\xd8","\x26"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("initVorbis","\x83","\x5e","\x81","\x67"),
	HX_HCSTRING("nextVorbisSamples","\x03","\xb9","\x41","\x5f"),
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
	HX_MARK_MEMBER_NAME(MusicChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MusicChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class MusicChannel_obj::__mClass;

void MusicChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.MusicChannel","\x86","\x96","\x92","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MusicChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MusicChannel_obj >;
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
