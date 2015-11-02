#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Music
#include <kha/Music.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_audio1_MusicChannel
#include <kha/audio1/MusicChannel.h>
#endif
#ifndef INCLUDED_kha_audio1_SoundChannel
#include <kha/audio1/SoundChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <kha/audio2/Audio1.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif
#ifndef INCLUDED_kha_audio2_MusicChannel
#include <kha/audio2/MusicChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_SoundChannel
#include <kha/audio2/SoundChannel.h>
#endif
namespace kha{
namespace audio2{

Void Audio1_obj::__construct()
{
	return null();
}

//Audio1_obj::~Audio1_obj() { }

Dynamic Audio1_obj::__CreateEmpty() { return  new Audio1_obj; }
hx::ObjectPtr< Audio1_obj > Audio1_obj::__new()
{  hx::ObjectPtr< Audio1_obj > _result_ = new Audio1_obj();
	_result_->__construct();
	return _result_;}

Dynamic Audio1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio1_obj > _result_ = new Audio1_obj();
	_result_->__construct();
	return _result_;}

int Audio1_obj::channelCount;

Array< ::Dynamic > Audio1_obj::soundChannels;

Array< ::Dynamic > Audio1_obj::musicChannels;

Array< ::Dynamic > Audio1_obj::internalSoundChannels;

Array< ::Dynamic > Audio1_obj::internalMusicChannels;

Array< ::cpp::Float32 > Audio1_obj::sampleCache1;

Array< ::cpp::Float32 > Audio1_obj::sampleCache2;

::cpp::vm::Mutex Audio1_obj::mutex;

Void Audio1_obj::_init( ){
{
		HX_STACK_FRAME("kha.audio2.Audio1","_init",0x394948c4,"kha.audio2.Audio1._init","kha/audio2/Audio1.hx",22,0x063d6bfb)
		HX_STACK_LINE(24)
		::cpp::vm::Mutex tmp = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::kha::audio2::Audio1_obj::mutex = tmp;
		HX_STACK_LINE(26)
		Array< ::Dynamic > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(26)
			Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			this1 = tmp2;
			HX_STACK_LINE(26)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(26)
			tmp1 = this1;
		}
		HX_STACK_LINE(26)
		::kha::audio2::Audio1_obj::soundChannels = tmp1;
		HX_STACK_LINE(27)
		Array< ::Dynamic > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(27)
			Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			this1 = tmp3;
			HX_STACK_LINE(27)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(27)
			tmp2 = this1;
		}
		HX_STACK_LINE(27)
		::kha::audio2::Audio1_obj::musicChannels = tmp2;
		HX_STACK_LINE(28)
		Array< ::Dynamic > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(28)
			Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			this1 = tmp4;
			HX_STACK_LINE(28)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(28)
			tmp3 = this1;
		}
		HX_STACK_LINE(28)
		::kha::audio2::Audio1_obj::internalSoundChannels = tmp3;
		HX_STACK_LINE(29)
		Array< ::Dynamic > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(29)
			Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			this1 = tmp5;
			HX_STACK_LINE(29)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(29)
			tmp4 = this1;
		}
		HX_STACK_LINE(29)
		::kha::audio2::Audio1_obj::internalMusicChannels = tmp4;
		HX_STACK_LINE(30)
		Array< ::cpp::Float32 > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(30)
			Array< ::cpp::Float32 > tmp6 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			this1 = tmp6;
			HX_STACK_LINE(30)
			this1->__SetSizeExact((int)512);
			HX_STACK_LINE(30)
			tmp5 = this1;
		}
		HX_STACK_LINE(30)
		::kha::audio2::Audio1_obj::sampleCache1 = tmp5;
		HX_STACK_LINE(31)
		Array< ::cpp::Float32 > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(31)
			Array< ::cpp::Float32 > tmp7 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			this1 = tmp7;
			HX_STACK_LINE(31)
			this1->__SetSizeExact((int)512);
			HX_STACK_LINE(31)
			tmp6 = this1;
		}
		HX_STACK_LINE(31)
		::kha::audio2::Audio1_obj::sampleCache2 = tmp6;
		HX_STACK_LINE(32)
		Dynamic tmp7 = ::kha::audio2::Audio1_obj::_mix_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		::kha::audio2::Audio_obj::audioCallback = tmp7;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio1_obj,_init,(void))

Void Audio1_obj::_mix( int samples,::kha::audio2::Buffer buffer){
{
		HX_STACK_FRAME("kha.audio2.Audio1","_mix",0xd4a53668,"kha.audio2.Audio1._mix","kha/audio2/Audio1.hx",35,0x063d6bfb)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(36)
		Array< ::cpp::Float32 > tmp = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		int tmp2 = samples;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(37)
			Array< ::cpp::Float32 > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(37)
				Array< ::cpp::Float32 > tmp5 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				this1 = tmp5;
				HX_STACK_LINE(37)
				int tmp6 = samples;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				this1->__SetSizeExact(tmp6);
				HX_STACK_LINE(37)
				tmp4 = this1;
			}
			HX_STACK_LINE(37)
			::kha::audio2::Audio1_obj::sampleCache1 = tmp4;
			HX_STACK_LINE(38)
			Array< ::cpp::Float32 > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(38)
				Array< ::cpp::Float32 > tmp6 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				this1 = tmp6;
				HX_STACK_LINE(38)
				int tmp7 = samples;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				this1->__SetSizeExact(tmp7);
				HX_STACK_LINE(38)
				tmp5 = this1;
			}
			HX_STACK_LINE(38)
			::kha::audio2::Audio1_obj::sampleCache2 = tmp5;
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			while((true)){
				HX_STACK_LINE(40)
				bool tmp4 = (_g < samples);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				if ((tmp5)){
					HX_STACK_LINE(40)
					break;
				}
				HX_STACK_LINE(40)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(41)
				Array< ::cpp::Float32 > tmp7 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(41)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				::cpp::Float32 tmp9 = tmp7->__unsafe_set(tmp8,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(41)
				tmp9;
			}
		}
		HX_STACK_LINE(45)
		::cpp::vm::Mutex tmp4 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		tmp4->acquire();
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				bool tmp5 = (_g < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				if ((tmp6)){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(47)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					Array< ::Dynamic > tmp8 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					::kha::audio2::SoundChannel tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< ::kha::audio2::SoundChannel >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					::kha::audio2::SoundChannel val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(48)
					Array< ::Dynamic > tmp11 = ::kha::audio2::Audio1_obj::internalSoundChannels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(48)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(48)
					::kha::audio2::SoundChannel tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(48)
					::kha::audio2::SoundChannel tmp14 = tmp11->__unsafe_set(tmp12,tmp13).StaticCast< ::kha::audio2::SoundChannel >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(48)
					tmp14;
				}
			}
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				bool tmp5 = (_g < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				if ((tmp6)){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					Array< ::Dynamic > tmp8 = ::kha::audio2::Audio1_obj::musicChannels;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(51)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(51)
					::kha::audio2::MusicChannel tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< ::kha::audio2::MusicChannel >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(51)
					::kha::audio2::MusicChannel val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(51)
					Array< ::Dynamic > tmp11 = ::kha::audio2::Audio1_obj::internalMusicChannels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(51)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(51)
					::kha::audio2::MusicChannel tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(51)
					::kha::audio2::MusicChannel tmp14 = tmp11->__unsafe_set(tmp12,tmp13).StaticCast< ::kha::audio2::MusicChannel >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(51)
					tmp14;
				}
			}
		}
		HX_STACK_LINE(54)
		::cpp::vm::Mutex tmp5 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		tmp5->release();
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Array< ::Dynamic > tmp6 = ::kha::audio2::Audio1_obj::internalSoundChannels;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			Array< ::Dynamic > _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				int tmp8 = _g1->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(57)
				if ((tmp10)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(57)
				::kha::audio2::SoundChannel tmp12 = _g1->__unsafe_get(tmp11).StaticCast< ::kha::audio2::SoundChannel >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				::kha::audio2::SoundChannel channel = tmp12;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				bool tmp13 = (channel == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(58)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(58)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(58)
				if ((tmp14)){
					HX_STACK_LINE(58)
					tmp15 = channel->get_finished();
				}
				else{
					HX_STACK_LINE(58)
					tmp15 = true;
				}
				HX_STACK_LINE(58)
				if ((tmp15)){
					HX_STACK_LINE(58)
					continue;
				}
				HX_STACK_LINE(59)
				Array< ::cpp::Float32 > tmp16 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(59)
				int tmp17 = samples;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(59)
				int tmp18 = buffer->samplesPerSecond;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(59)
				channel->nextSamples(tmp16,tmp17,tmp18);
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(60)
					while((true)){
						HX_STACK_LINE(60)
						bool tmp19 = (_g2 < samples);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(60)
						if ((tmp20)){
							HX_STACK_LINE(60)
							break;
						}
						HX_STACK_LINE(60)
						int tmp21 = (_g2)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(60)
						int i = tmp21;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(61)
						{
							HX_STACK_LINE(61)
							int _g3 = i;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(61)
							{
								HX_STACK_LINE(61)
								Array< ::cpp::Float32 > tmp22 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(61)
								int tmp23 = _g3;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(61)
								::cpp::Float32 tmp24 = tmp22->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(61)
								::cpp::Float32 tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(61)
								Array< ::cpp::Float32 > tmp26 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(61)
								int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(61)
								::cpp::Float32 tmp28 = tmp26->__unsafe_get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(61)
								::cpp::Float32 tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(61)
								Float tmp30 = channel->get_volume();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(61)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(61)
								Float tmp32 = (tmp25 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(61)
								::cpp::Float32 val = tmp32;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(61)
								Array< ::cpp::Float32 > tmp33 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(61)
								int tmp34 = _g3;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(61)
								::cpp::Float32 tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(61)
								::cpp::Float32 tmp36 = tmp33->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(61)
								tmp36;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			Array< ::Dynamic > tmp6 = ::kha::audio2::Audio1_obj::internalMusicChannels;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			Array< ::Dynamic > _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(64)
				int tmp8 = _g1->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(64)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(64)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(64)
				if ((tmp10)){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(64)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(64)
				::kha::audio2::MusicChannel tmp12 = _g1->__unsafe_get(tmp11).StaticCast< ::kha::audio2::MusicChannel >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(64)
				::kha::audio2::MusicChannel channel = tmp12;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(64)
				++(_g);
				HX_STACK_LINE(65)
				bool tmp13 = (channel == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(65)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(65)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(65)
				if ((tmp14)){
					HX_STACK_LINE(65)
					tmp15 = channel->get_finished();
				}
				else{
					HX_STACK_LINE(65)
					tmp15 = true;
				}
				HX_STACK_LINE(65)
				if ((tmp15)){
					HX_STACK_LINE(65)
					continue;
				}
				HX_STACK_LINE(66)
				Array< ::cpp::Float32 > tmp16 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(66)
				int tmp17 = samples;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(66)
				int tmp18 = buffer->samplesPerSecond;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(66)
				channel->nextSamples(tmp16,tmp17,tmp18);
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(67)
					while((true)){
						HX_STACK_LINE(67)
						bool tmp19 = (_g2 < samples);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(67)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(67)
						if ((tmp20)){
							HX_STACK_LINE(67)
							break;
						}
						HX_STACK_LINE(67)
						int tmp21 = (_g2)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(67)
						int i = tmp21;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							int _g3 = i;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								Array< ::cpp::Float32 > tmp22 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(68)
								int tmp23 = _g3;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(68)
								::cpp::Float32 tmp24 = tmp22->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(68)
								::cpp::Float32 tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(68)
								Array< ::cpp::Float32 > tmp26 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(68)
								int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(68)
								::cpp::Float32 tmp28 = tmp26->__unsafe_get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(68)
								::cpp::Float32 tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(68)
								Float tmp30 = channel->get_volume();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(68)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(68)
								Float tmp32 = (tmp25 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(68)
								::cpp::Float32 val = tmp32;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(68)
								Array< ::cpp::Float32 > tmp33 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(68)
								int tmp34 = _g3;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(68)
								::cpp::Float32 tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(68)
								::cpp::Float32 tmp36 = tmp33->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(68)
								tmp36;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			while((true)){
				HX_STACK_LINE(72)
				bool tmp6 = (_g < samples);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				if ((tmp7)){
					HX_STACK_LINE(72)
					break;
				}
				HX_STACK_LINE(72)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					Array< ::cpp::Float32 > tmp9 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					::cpp::Float32 tmp11 = tmp9->__unsafe_get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					::cpp::Float32 tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					Float tmp13 = ::Math_obj::min(tmp12,((Float)1.0));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					Float tmp14 = ::Math_obj::max(tmp13,((Float)-1.0));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(73)
					Float val = tmp14;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(73)
					int tmp15 = buffer->writeLocation;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					Float tmp16 = val;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					Float tmp17 = buffer->data->__unsafe_set(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(73)
					tmp17;
				}
				HX_STACK_LINE(74)
				hx::AddEq(buffer->writeLocation,(int)1);
				HX_STACK_LINE(75)
				bool tmp9 = (buffer->writeLocation >= buffer->size);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(75)
				if ((tmp9)){
					HX_STACK_LINE(76)
					buffer->writeLocation = (int)0;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,_mix,(void))

::kha::audio1::SoundChannel Audio1_obj::playSound( ::kha::Sound sound){
	HX_STACK_FRAME("kha.audio2.Audio1","playSound",0x0653ba90,"kha.audio2.Audio1.playSound","kha/audio2/Audio1.hx",81,0x063d6bfb)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(83)
	::cpp::vm::Mutex tmp = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	tmp->acquire();
	HX_STACK_LINE(85)
	::kha::audio2::SoundChannel channel = null();		HX_STACK_VAR(channel,"channel");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			if ((tmp2)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			Array< ::Dynamic > tmp4 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			::kha::audio2::SoundChannel tmp6 = tmp4->__unsafe_get(tmp5).StaticCast< ::kha::audio2::SoundChannel >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			::kha::audio2::SoundChannel tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			if ((tmp9)){
				HX_STACK_LINE(87)
				Array< ::Dynamic > tmp11 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				Array< ::Dynamic > tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(87)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(87)
				::kha::audio2::SoundChannel tmp15 = tmp12->__unsafe_get(tmp14).StaticCast< ::kha::audio2::SoundChannel >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				::kha::audio2::SoundChannel tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				tmp10 = tmp16->get_finished();
			}
			else{
				HX_STACK_LINE(87)
				tmp10 = true;
			}
			HX_STACK_LINE(87)
			if ((tmp10)){
				HX_STACK_LINE(88)
				::kha::audio2::SoundChannel tmp11 = ::kha::audio2::SoundChannel_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(88)
				channel = tmp11;
				HX_STACK_LINE(89)
				channel->data = sound->data;
				HX_STACK_LINE(90)
				Array< ::Dynamic > tmp12 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(90)
				int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(90)
				::kha::audio2::SoundChannel tmp14 = channel;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(90)
				::kha::audio2::SoundChannel tmp15 = tmp12->__unsafe_set(tmp13,tmp14).StaticCast< ::kha::audio2::SoundChannel >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(90)
				tmp15;
				HX_STACK_LINE(91)
				break;
			}
		}
	}
	HX_STACK_LINE(95)
	::cpp::vm::Mutex tmp1 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	tmp1->release();
	HX_STACK_LINE(97)
	::kha::audio2::SoundChannel tmp2 = channel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Audio1_obj,playSound,return )

::kha::audio1::MusicChannel Audio1_obj::playMusic( ::kha::Music music,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("kha.audio2.Audio1","playMusic",0x95e1fe66,"kha.audio2.Audio1.playMusic","kha/audio2/Audio1.hx",100,0x063d6bfb)
	HX_STACK_ARG(music,"music")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(103)
			::kha::Music tmp = music;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			bool tmp1 = loop;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			::kha::audio2::MusicChannel tmp2 = ::kha::audio2::Audio_obj::playMusic(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			::kha::audio2::MusicChannel hardwareChannel = tmp2;		HX_STACK_VAR(hardwareChannel,"hardwareChannel");
			HX_STACK_LINE(104)
			bool tmp3 = (hardwareChannel != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			if ((tmp3)){
				HX_STACK_LINE(104)
				::kha::audio2::MusicChannel tmp4 = hardwareChannel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				return tmp4;
			}
		}
		HX_STACK_LINE(107)
		bool tmp = (music->data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(107)
			return null();
		}
		HX_STACK_LINE(110)
		::cpp::vm::Mutex tmp1 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		tmp1->acquire();
		HX_STACK_LINE(112)
		::kha::audio2::MusicChannel channel = null();		HX_STACK_VAR(channel,"channel");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			while((true)){
				HX_STACK_LINE(113)
				bool tmp2 = (_g < (int)16);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(113)
				if ((tmp3)){
					HX_STACK_LINE(113)
					break;
				}
				HX_STACK_LINE(113)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(113)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(114)
				Array< ::Dynamic > tmp5 = ::kha::audio2::Audio1_obj::musicChannels;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(114)
				::kha::audio2::MusicChannel tmp7 = tmp5->__unsafe_get(tmp6).StaticCast< ::kha::audio2::MusicChannel >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(114)
				::kha::audio2::MusicChannel tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(114)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(114)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(114)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(114)
				if ((tmp10)){
					HX_STACK_LINE(114)
					Array< ::Dynamic > tmp12 = ::kha::audio2::Audio1_obj::musicChannels;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(114)
					Array< ::Dynamic > tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(114)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(114)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(114)
					::kha::audio2::MusicChannel tmp16 = tmp13->__unsafe_get(tmp15).StaticCast< ::kha::audio2::MusicChannel >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(114)
					::kha::audio2::MusicChannel tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(114)
					tmp11 = tmp17->get_finished();
				}
				else{
					HX_STACK_LINE(114)
					tmp11 = true;
				}
				HX_STACK_LINE(114)
				if ((tmp11)){
					HX_STACK_LINE(115)
					::kha::audio2::MusicChannel tmp12 = ::kha::audio2::MusicChannel_obj::__new(music->data,loop);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(115)
					channel = tmp12;
					HX_STACK_LINE(116)
					Array< ::Dynamic > tmp13 = ::kha::audio2::Audio1_obj::musicChannels;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(116)
					::kha::audio2::MusicChannel tmp15 = channel;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(116)
					::kha::audio2::MusicChannel tmp16 = tmp13->__unsafe_set(tmp14,tmp15).StaticCast< ::kha::audio2::MusicChannel >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(116)
					tmp16;
					HX_STACK_LINE(117)
					break;
				}
			}
		}
		HX_STACK_LINE(121)
		::cpp::vm::Mutex tmp2 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		tmp2->release();
		HX_STACK_LINE(123)
		::kha::audio2::MusicChannel tmp3 = channel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,playMusic,return )


Audio1_obj::Audio1_obj()
{
}

bool Audio1_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_mix") ) { outValue = _mix_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { outValue = mutex; return true;  }
		if (HX_FIELD_EQ(inName,"_init") ) { outValue = _init_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playSound") ) { outValue = playSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playMusic") ) { outValue = playMusic_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleCache1") ) { outValue = sampleCache1; return true;  }
		if (HX_FIELD_EQ(inName,"sampleCache2") ) { outValue = sampleCache2; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"soundChannels") ) { outValue = soundChannels; return true;  }
		if (HX_FIELD_EQ(inName,"musicChannels") ) { outValue = musicChannels; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internalSoundChannels") ) { outValue = internalSoundChannels; return true;  }
		if (HX_FIELD_EQ(inName,"internalMusicChannels") ) { outValue = internalMusicChannels; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Audio1_obj::channelCount,HX_HCSTRING("channelCount","\x0c","\x11","\x16","\x4f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::soundChannels,HX_HCSTRING("soundChannels","\x3f","\xda","\x0c","\x08")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::musicChannels,HX_HCSTRING("musicChannels","\x15","\xe4","\xe3","\x59")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::internalSoundChannels,HX_HCSTRING("internalSoundChannels","\xc2","\x40","\x9f","\xb5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::internalMusicChannels,HX_HCSTRING("internalMusicChannels","\x98","\x4a","\x76","\x07")},
	{hx::fsObject /*Array< ::cpp::Float32 >*/ ,(void *) &Audio1_obj::sampleCache1,HX_HCSTRING("sampleCache1","\x79","\xaf","\x5e","\xf5")},
	{hx::fsObject /*Array< ::cpp::Float32 >*/ ,(void *) &Audio1_obj::sampleCache2,HX_HCSTRING("sampleCache2","\x7a","\xaf","\x5e","\xf5")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(void *) &Audio1_obj::mutex,HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio1_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_MARK_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::musicChannels,"musicChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalMusicChannels,"internalMusicChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_MARK_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio1_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_VISIT_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::musicChannels,"musicChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalMusicChannels,"internalMusicChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_VISIT_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#endif

hx::Class Audio1_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("channelCount","\x0c","\x11","\x16","\x4f"),
	HX_HCSTRING("soundChannels","\x3f","\xda","\x0c","\x08"),
	HX_HCSTRING("musicChannels","\x15","\xe4","\xe3","\x59"),
	HX_HCSTRING("internalSoundChannels","\xc2","\x40","\x9f","\xb5"),
	HX_HCSTRING("internalMusicChannels","\x98","\x4a","\x76","\x07"),
	HX_HCSTRING("sampleCache1","\x79","\xaf","\x5e","\xf5"),
	HX_HCSTRING("sampleCache2","\x7a","\xaf","\x5e","\xf5"),
	HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("_mix","\x9d","\x56","\x1e","\x3f"),
	HX_HCSTRING("playSound","\x3b","\xba","\xb0","\xa1"),
	HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"),
	::String(null()) };

void Audio1_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.Audio1","\x83","\x94","\xaf","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio1_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Audio1_obj >;
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

void Audio1_obj::__boot()
{
	channelCount= (int)16;
}

} // end namespace kha
} // end namespace audio2
