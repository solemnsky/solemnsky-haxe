#ifndef INCLUDED_kha_Mouse
#define INCLUDED_kha_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Cursor)
HX_DECLARE_CLASS1(kha,Mouse)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Mouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		bool hidden;
		bool forceSystem;
		Array< ::kha::Cursor > cursors;
		int cursorIndex;
		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void hideSystemCursor( );
		Dynamic hideSystemCursor_dyn();

		virtual Void showSystemCursor( );
		Dynamic showSystemCursor_dyn();

		virtual Void forceSystemCursor( bool force);
		Dynamic forceSystemCursor_dyn();

		virtual Void pushCursor( ::kha::Cursor cursorImage);
		Dynamic pushCursor_dyn();

		virtual Void popCursor( );
		Dynamic popCursor_dyn();

		virtual Void render( ::kha::graphics2::Graphics g);
		Dynamic render_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Mouse */ 
