#ifndef INCLUDED_kha_Image
#define INCLUDED_kha_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
HX_DECLARE_CLASS2(kha,graphics4,Usage)
HX_DECLARE_CLASS2(kha,kore,Video)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Image_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(bool readable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Image")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Image_obj > __new(bool readable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::Canvas_obj *();
		operator ::kha::Resource_obj *();
		::String __ToString() const { return HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"); }

		static ::kha::Image createFromVideo( ::kha::Video video);
		static Dynamic createFromVideo_dyn();

		static ::kha::Image create( int width,int height,::kha::graphics4::TextureFormat format,::kha::graphics4::Usage usage,hx::Null< int >  levels);
		static Dynamic create_dyn();

		static ::kha::Image createRenderTarget( int width,int height,::kha::graphics4::TextureFormat format,hx::Null< bool >  depthStencil,hx::Null< int >  antiAliasingSamples);
		static Dynamic createRenderTarget_dyn();

		static ::kha::Image create2( int width,int height,::kha::graphics4::TextureFormat format,bool readable,bool renderTarget,bool depthBuffer);
		static Dynamic create2_dyn();

		static ::kha::Image fromFile( ::String filename,bool readable);
		static Dynamic fromFile_dyn();

		static int maxSize;
		static int get_maxSize( );
		static Dynamic get_maxSize_dyn();

		static bool nonPow2Supported;
		static bool get_nonPow2Supported( );
		static Dynamic get_nonPow2Supported_dyn();

		::kha::graphics4::TextureFormat format;
		bool readable;
		::kha::graphics1::Graphics graphics1;
		::kha::graphics2::Graphics graphics2;
		::kha::graphics4::Graphics graphics4;
		virtual Void initRenderTarget( int width,int height,int format,bool depthBuffer);
		Dynamic initRenderTarget_dyn();

		virtual Void init( int width,int height,int format);
		Dynamic init_dyn();

		virtual Void initVideo( ::kha::kore::Video video);
		Dynamic initVideo_dyn();

		virtual Void initFromFile( ::String filename);
		Dynamic initFromFile_dyn();

		::kha::graphics1::Graphics g1;
		virtual ::kha::graphics1::Graphics get_g1( );
		Dynamic get_g1_dyn();

		::kha::graphics2::Graphics g2;
		virtual ::kha::graphics2::Graphics get_g2( );
		Dynamic get_g2_dyn();

		::kha::graphics4::Graphics g4;
		virtual ::kha::graphics4::Graphics get_g4( );
		Dynamic get_g4_dyn();

		int width;
		int height;
		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		int realWidth;
		int realHeight;
		virtual int get_realWidth( );
		Dynamic get_realWidth_dyn();

		virtual int get_realHeight( );
		Dynamic get_realHeight_dyn();

		virtual bool isOpaque( int x,int y);
		Dynamic isOpaque_dyn();

		virtual int atInternal( int x,int y);
		Dynamic atInternal_dyn();

		virtual int at( int x,int y);
		Dynamic at_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		::haxe::io::Bytes bytes;
		virtual ::haxe::io::Bytes lock( hx::Null< int >  level);
		Dynamic lock_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

Kore::Texture* texture; Kore::RenderTarget* renderTarget;
};

} // end namespace kha

#endif /* INCLUDED_kha_Image */ 
