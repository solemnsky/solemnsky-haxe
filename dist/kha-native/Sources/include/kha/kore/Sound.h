#ifndef INCLUDED_kha_kore_Sound
#define INCLUDED_kha_kore_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS2(kha,kore,Sound)

#include <Kore/pch.h>
#include <Kore/Audio/Sound.h>
#include <Kore/Audio/Mixer.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::kha::Sound_obj{
	public:
		typedef ::kha::Sound_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::String filename);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::String filename);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		virtual Void loadSound( ::String filename);
		Dynamic loadSound_dyn();

		virtual Void unload( );

		virtual Void _createData( int size);
		Dynamic _createData_dyn();

Kore::Sound* sound;
};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Sound */ 
