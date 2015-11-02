#include <hxcpp.h>

#ifndef INCLUDED_kha_Music
#include <kha/Music.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_audio1_MusicChannel
#include <kha/audio1/MusicChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif
#ifndef INCLUDED_kha_audio2_MusicChannel
#include <kha/audio2/MusicChannel.h>
#endif
namespace kha{
namespace audio2{

Void Audio_obj::__construct()
{
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new()
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct();
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct();
	return _result_;}

::kha::audio2::Buffer Audio_obj::buffer;

Void Audio_obj::_init( ){
{
		HX_STACK_FRAME("kha.audio2.Audio","_init",0xded2726f,"kha.audio2.Audio._init","kha/audio2/Audio.hx",7,0xd33fa1b0)
		HX_STACK_LINE(8)
		int tmp = (int)2048;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8)
		int bufferSize = tmp;		HX_STACK_VAR(bufferSize,"bufferSize");
		HX_STACK_LINE(9)
		int tmp1 = (bufferSize * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9)
		::kha::audio2::Buffer tmp2 = ::kha::audio2::Buffer_obj::__new(tmp1,(int)2,(int)44100);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9)
		::kha::audio2::Audio_obj::buffer = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,_init,(void))

Void Audio_obj::_callCallback( int samples){
{
		HX_STACK_FRAME("kha.audio2.Audio","_callCallback",0xe4856ae2,"kha.audio2.Audio._callCallback","kha/audio2/Audio.hx",13,0xd33fa1b0)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_LINE(14)
		Dynamic tmp = ::kha::audio2::Audio_obj::audioCallback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		if ((tmp1)){
			HX_STACK_LINE(15)
			int tmp2 = samples;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(15)
			::kha::audio2::Buffer tmp3 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(15)
			::kha::audio2::Audio_obj::audioCallback(tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(18)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(18)
			while((true)){
				HX_STACK_LINE(18)
				bool tmp2 = (_g < samples);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(18)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(18)
				if ((tmp3)){
					HX_STACK_LINE(18)
					break;
				}
				HX_STACK_LINE(18)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(18)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(19)
				::kha::audio2::Buffer tmp5 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(19)
				::kha::audio2::Buffer tmp6 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(19)
				int tmp7 = tmp6->writeLocation;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(19)
				Float tmp8 = tmp5->data->__unsafe_set(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(19)
				tmp8;
				HX_STACK_LINE(20)
				::kha::audio2::Buffer tmp9 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(20)
				hx::AddEq(tmp9->writeLocation,(int)1);
				HX_STACK_LINE(21)
				::kha::audio2::Buffer tmp10 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(21)
				int tmp11 = tmp10->writeLocation;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(21)
				::kha::audio2::Buffer tmp12 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(21)
				int tmp13 = tmp12->size;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(21)
				bool tmp14 = (tmp11 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(21)
				if ((tmp14)){
					HX_STACK_LINE(22)
					::kha::audio2::Buffer tmp15 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(22)
					tmp15->writeLocation = (int)0;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,_callCallback,(void))

Float Audio_obj::_readSample( ){
	HX_STACK_FRAME("kha.audio2.Audio","_readSample",0xa617ccbf,"kha.audio2.Audio._readSample","kha/audio2/Audio.hx",29,0xd33fa1b0)
	HX_STACK_LINE(30)
	::kha::audio2::Buffer tmp = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::kha::audio2::Buffer tmp1 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	int tmp2 = tmp1->readLocation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	Float tmp3 = tmp->data->__unsafe_get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	Float value = tmp3;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(31)
	::kha::audio2::Buffer tmp4 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	++(tmp4->readLocation);
	HX_STACK_LINE(32)
	::kha::audio2::Buffer tmp5 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	int tmp6 = tmp5->readLocation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	::kha::audio2::Buffer tmp7 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	int tmp8 = tmp7->size;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	bool tmp9 = (tmp6 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	if ((tmp9)){
		HX_STACK_LINE(33)
		::kha::audio2::Buffer tmp10 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		tmp10->readLocation = (int)0;
	}
	HX_STACK_LINE(35)
	Float tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,_readSample,return )

Dynamic Audio_obj::audioCallback;

::kha::audio2::MusicChannel Audio_obj::playMusic( ::kha::Music music,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("kha.audio2.Audio","playMusic",0x1738d991,"kha.audio2.Audio.playMusic","kha/audio2/Audio.hx",41,0xd33fa1b0)
	HX_STACK_ARG(music,"music")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(41)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,playMusic,return )


Audio_obj::Audio_obj()
{
}

bool Audio_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_init") ) { outValue = _init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { outValue = buffer; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { outValue = playMusic_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_readSample") ) { outValue = _readSample_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_callCallback") ) { outValue = _callCallback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"audioCallback") ) { outValue = audioCallback; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::audio2::Buffer*/ ,(void *) &Audio_obj::buffer,HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Audio_obj::audioCallback,HX_HCSTRING("audioCallback","\xbb","\x94","\x3e","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Audio_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(Audio_obj::audioCallback,"audioCallback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Audio_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(Audio_obj::audioCallback,"audioCallback");
};

#endif

hx::Class Audio_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("_callCallback","\x62","\xcf","\xb7","\x99"),
	HX_HCSTRING("_readSample","\x3f","\x11","\x50","\xe9"),
	HX_HCSTRING("audioCallback","\xbb","\x94","\x3e","\x7f"),
	HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"),
	::String(null()) };

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.Audio","\xee","\xdb","\x10","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
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
