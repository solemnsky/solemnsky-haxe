#ifndef INCLUDED_kha_kore_Video
#define INCLUDED_kha_kore_Video

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,kore,Video)

#include <Kore/pch.h>
#include <Kore/Video.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES  Video_obj : public ::kha::Video_obj{
	public:
		typedef ::kha::Video_obj super;
		typedef Video_obj OBJ_;
		Video_obj();
		Void __construct(::String filename);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.kore.Video")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Video_obj > __new(::String filename);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Video_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Video","\x5b","\x84","\x29","\xca"); }

		static void __boot();
		static Dynamic __meta__;
		virtual Void init( ::String filename);
		Dynamic init_dyn();

		virtual Void play( hx::Null< bool >  loop);

		virtual Void pause( );

		virtual Void stop( );

		virtual int getLength( );

		virtual int getCurrentPos( );

		virtual bool isFinished( );

		virtual int width( );

		virtual int height( );

		virtual Void unload( );


	Kore::Video* video;

};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Video */ 
