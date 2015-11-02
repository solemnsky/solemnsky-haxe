#ifndef INCLUDED_kha_Video
#define INCLUDED_kha_Video

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Video_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Video_obj OBJ_;
		Video_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Video")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Video_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Video_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::Resource_obj *();
		::String __ToString() const { return HX_HCSTRING("Video","\x5b","\x84","\x29","\xca"); }

		virtual int width( );
		Dynamic width_dyn();

		virtual int height( );
		Dynamic height_dyn();

		virtual Void play( hx::Null< bool >  loop);
		Dynamic play_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual int getCurrentPos( );
		Dynamic getCurrentPos_dyn();

		virtual Float getVolume( );
		Dynamic getVolume_dyn();

		virtual Void setVolume( Float volume);
		Dynamic setVolume_dyn();

		virtual bool isFinished( );
		Dynamic isFinished_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Video */ 
