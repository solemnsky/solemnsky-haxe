#ifndef INCLUDED_kha_Game
#define INCLUDED_kha_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Button)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Game)
HX_DECLARE_CLASS1(kha,HighscoreList)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Key)
HX_DECLARE_CLASS1(kha,Resource)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct(::String name,hx::Null< bool >  __o_hasHighscores);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Game")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Game_obj > __new(::String name,hx::Null< bool >  __o_hasHighscores);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Game","\x12","\x20","\x38","\x2f"); }

		static void __boot();
		static int FPS;
		static ::kha::Game the;
		::String name;
		int width;
		int height;
		::kha::HighscoreList highscores;
		virtual Void setInstance( );
		Dynamic setInstance_dyn();

		virtual Void loadFinished( );
		Dynamic loadFinished_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void startRender( ::kha::Framebuffer frame);
		Dynamic startRender_dyn();

		virtual Void endRender( ::kha::Framebuffer frame);
		Dynamic endRender_dyn();

		virtual Void render( ::kha::Framebuffer frame);
		Dynamic render_dyn();

		virtual ::kha::HighscoreList getHighscores( );
		Dynamic getHighscores_dyn();

		::kha::Image deprecatedImage;
		virtual Void initDeprecatedImage( );
		Dynamic initDeprecatedImage_dyn();

		virtual int painterTransformMouseX( int x,int y);
		Dynamic painterTransformMouseX_dyn();

		virtual int painterTransformMouseY( int x,int y);
		Dynamic painterTransformMouseY_dyn();

		virtual Void buttonDown( ::kha::Button button);
		Dynamic buttonDown_dyn();

		virtual Void buttonUp( ::kha::Button button);
		Dynamic buttonUp_dyn();

		virtual Void keyDown( ::kha::Key key,::String _char);
		Dynamic keyDown_dyn();

		virtual Void keyUp( ::kha::Key key,::String _char);
		Dynamic keyUp_dyn();

		virtual Void mouseDown( int x,int y);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( int x,int y);
		Dynamic mouseUp_dyn();

		virtual Void rightMouseDown( int x,int y);
		Dynamic rightMouseDown_dyn();

		virtual Void rightMouseUp( int x,int y);
		Dynamic rightMouseUp_dyn();

		virtual Void middleMouseDown( int x,int y);
		Dynamic middleMouseDown_dyn();

		virtual Void middleMouseUp( int x,int y);
		Dynamic middleMouseUp_dyn();

		virtual Void mouseMove( int x,int y);
		Dynamic mouseMove_dyn();

		virtual Void mouseWheel( int delta);
		Dynamic mouseWheel_dyn();

		virtual Void onForeground( );
		Dynamic onForeground_dyn();

		virtual Void onResume( );
		Dynamic onResume_dyn();

		virtual Void onPause( );
		Dynamic onPause_dyn();

		virtual Void onBackground( );
		Dynamic onBackground_dyn();

		virtual Void onShutdown( );
		Dynamic onShutdown_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Game */ 
