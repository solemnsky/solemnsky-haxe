#ifndef INCLUDED_kha_audio2_Audio
#define INCLUDED_kha_audio2_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Music)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,audio1,MusicChannel)
HX_DECLARE_CLASS2(kha,audio2,Audio)
HX_DECLARE_CLASS2(kha,audio2,Buffer)
HX_DECLARE_CLASS2(kha,audio2,MusicChannel)
namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Audio","\xb6","\xe8","\xad","\xba"); }

		static ::kha::audio2::Buffer buffer;
		static Void _init( );
		static Dynamic _init_dyn();

		static Void _callCallback( int samples);
		static Dynamic _callCallback_dyn();

		static Float _readSample( );
		static Dynamic _readSample_dyn();

		static Dynamic audioCallback;
		static Dynamic &audioCallback_dyn() { return audioCallback;}
		static ::kha::audio2::MusicChannel playMusic( ::kha::Music music,hx::Null< bool >  loop);
		static Dynamic playMusic_dyn();

};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_Audio */ 
