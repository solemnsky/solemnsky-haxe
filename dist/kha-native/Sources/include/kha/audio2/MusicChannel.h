#ifndef INCLUDED_kha_audio2_MusicChannel
#define INCLUDED_kha_audio2_MusicChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_audio1_MusicChannel
#include <kha/audio1/MusicChannel.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,audio1,MusicChannel)
HX_DECLARE_CLASS2(kha,audio2,MusicChannel)
#include <Kore/Audio/stb_vorbis.h>
namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES  MusicChannel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MusicChannel_obj OBJ_;
		MusicChannel_obj();
		Void __construct(::haxe::io::Bytes data,bool loop);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.MusicChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MusicChannel_obj > __new(::haxe::io::Bytes data,bool loop);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MusicChannel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::audio1::MusicChannel_obj *();
		::String __ToString() const { return HX_HCSTRING("MusicChannel","\xbe","\x32","\x58","\x4b"); }

		bool atend;
		bool loop;
		Float myVolume;
		bool paused;
		virtual Void initVorbis( ::haxe::io::Bytes data);
		Dynamic initVorbis_dyn();

		virtual Void nextVorbisSamples( Array< ::cpp::Float32 > samples,int length);
		Dynamic nextVorbisSamples_dyn();

		virtual Void nextSamples( Array< ::cpp::Float32 > samples,int length,int sampleRate);
		Dynamic nextSamples_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		int length;
		virtual int get_length( );
		Dynamic get_length_dyn();

		int position;
		virtual int get_position( );
		Dynamic get_position_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual Float set_volume( Float value);
		Dynamic set_volume_dyn();

		bool finished;
		virtual bool get_finished( );
		Dynamic get_finished_dyn();

stb_vorbis* vorbis;
};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_MusicChannel */ 
