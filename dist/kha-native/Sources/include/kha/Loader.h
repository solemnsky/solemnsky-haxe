#ifndef INCLUDED_kha_Loader
#define INCLUDED_kha_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,FontStyle)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Loader)
HX_DECLARE_CLASS1(kha,Music)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,loader,Room)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Loader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Loader","\x33","\xbc","\x03","\x8d"); }

		static ::kha::Loader the;
		static Void init( ::kha::Loader loader);
		static Dynamic init_dyn();

		static bool containsAsset( ::String assetName,::String assetType,cpp::ArrayBase map);
		static Dynamic containsAsset_dyn();

		::haxe::ds::StringMap blobs;
		::haxe::ds::StringMap images;
		::haxe::ds::StringMap sounds;
		::haxe::ds::StringMap musics;
		::haxe::ds::StringMap videos;
		::haxe::ds::StringMap shaders;
		int loadingFilesLeft;
		int loadingFilesCount;
		::haxe::ds::StringMap assets;
		::haxe::ds::StringMap rooms;
		cpp::ArrayBase enqueued;
		cpp::ArrayBase multiFileCallbacks;
		::String basePath;
		int width;
		int height;
		::String name;
		int antiAliasingSamples;
		virtual int getLoadPercentage( );
		Dynamic getLoadPercentage_dyn();

		virtual ::kha::Blob getBlob( ::String name);
		Dynamic getBlob_dyn();

		virtual ::kha::Image getImage( ::String name);
		Dynamic getImage_dyn();

		virtual ::kha::Music getMusic( ::String name);
		Dynamic getMusic_dyn();

		virtual ::kha::Sound getSound( ::String name);
		Dynamic getSound_dyn();

		virtual ::kha::Video getVideo( ::String name);
		Dynamic getVideo_dyn();

		virtual ::kha::Blob getShader( ::String name);
		Dynamic getShader_dyn();

		virtual Dynamic getAvailableBlobs( );
		Dynamic getAvailableBlobs_dyn();

		virtual bool isBlobAvailable( ::String name);
		Dynamic isBlobAvailable_dyn();

		virtual Dynamic getAvailableImages( );
		Dynamic getAvailableImages_dyn();

		virtual bool isImageAvailable( ::String name);
		Dynamic isImageAvailable_dyn();

		virtual Dynamic getAvailableMusic( );
		Dynamic getAvailableMusic_dyn();

		virtual bool isMusicAvailable( ::String name);
		Dynamic isMusicAvailable_dyn();

		virtual Dynamic getAvailableSounds( );
		Dynamic getAvailableSounds_dyn();

		virtual bool isSoundAvailable( ::String name);
		Dynamic isSoundAvailable_dyn();

		virtual Dynamic getAvailableVideos( );
		Dynamic getAvailableVideos_dyn();

		virtual bool isVideoAvailable( ::String name);
		Dynamic isVideoAvailable_dyn();

		virtual Void enqueue( Dynamic asset);
		Dynamic enqueue_dyn();

		virtual Void removeImage( ::haxe::ds::StringMap resources,::String resourceName);
		Dynamic removeImage_dyn();

		virtual Void removeBlob( ::haxe::ds::StringMap resources,::String resourceName);
		Dynamic removeBlob_dyn();

		virtual Void removeMusic( ::haxe::ds::StringMap resources,::String resourceName);
		Dynamic removeMusic_dyn();

		virtual Void removeSound( ::haxe::ds::StringMap resources,::String resourceName);
		Dynamic removeSound_dyn();

		virtual Void removeVideo( ::haxe::ds::StringMap resources,::String resourceName);
		Dynamic removeVideo_dyn();

		virtual Void cleanup( );
		Dynamic cleanup_dyn();

		virtual Void loadFiles( Dynamic call);
		Dynamic loadFiles_dyn();

		virtual Void loadProject( Dynamic call);
		Dynamic loadProject_dyn();

		virtual Void loadShaders( Dynamic call);
		Dynamic loadShaders_dyn();

		virtual Void loadRoomAssets( ::kha::loader::Room room);
		Dynamic loadRoomAssets_dyn();

		virtual Void loadRoom( ::String name,Dynamic call);
		Dynamic loadRoom_dyn();

		virtual Void unloadedImage( ::String name);
		Dynamic unloadedImage_dyn();

		virtual Void initProject( );
		Dynamic initProject_dyn();

		virtual Dynamic parseProject( );
		Dynamic parseProject_dyn();

		virtual Void checkComplete( );
		Dynamic checkComplete_dyn();

		virtual Void loadDummyFile( );
		Dynamic loadDummyFile_dyn();

		virtual Void loadImage( Dynamic desc,Dynamic done);
		Dynamic loadImage_dyn();

		virtual Void loadBlob( Dynamic desc,Dynamic done);
		Dynamic loadBlob_dyn();

		virtual Void loadSound( Dynamic desc,Dynamic done);
		Dynamic loadSound_dyn();

		virtual Void loadMusic( Dynamic desc,Dynamic done);
		Dynamic loadMusic_dyn();

		virtual Void loadVideo( Dynamic desc,Dynamic done);
		Dynamic loadVideo_dyn();

		virtual ::kha::Font loadFont( ::String name,::kha::FontStyle style,Float size);
		Dynamic loadFont_dyn();

		virtual Void loadURL( ::String url);
		Dynamic loadURL_dyn();

		virtual Void setNormalCursor( );
		Dynamic setNormalCursor_dyn();

		virtual Void setHandCursor( );
		Dynamic setHandCursor_dyn();

		virtual Void setCursorBusy( bool busy);
		Dynamic setCursorBusy_dyn();

		virtual Void showKeyboard( );
		Dynamic showKeyboard_dyn();

		virtual Void hideKeyboard( );
		Dynamic hideKeyboard_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Loader */ 
