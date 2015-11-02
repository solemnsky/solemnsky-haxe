#ifndef INCLUDED_kha_kore_Music
#define INCLUDED_kha_kore_Music

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Music
#include <kha/Music.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Music)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,kore,Music)

#include <Kore/pch.h>
#include <Kore/Audio/SoundStream.h>
#include <Kore/Audio/Mixer.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES  Music_obj : public ::kha::Music_obj{
	public:
		typedef ::kha::Music_obj super;
		typedef Music_obj OBJ_;
		Music_obj();
		Void __construct(::haxe::io::Bytes bytes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.Music")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Music_obj > __new(::haxe::io::Bytes bytes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Music_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Music","\x85","\x40","\x88","\xa3"); }

		virtual Void loadMusic( ::String filename);
		Dynamic loadMusic_dyn();

		virtual Void unload( );

Kore::SoundStream* stream;
};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Music */ 
