#ifndef INCLUDED_kha_input_Surface
#define INCLUDED_kha_input_Surface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,input,Surface)
namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Surface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Surface_obj OBJ_;
		Surface_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.input.Surface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Surface_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Surface_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Surface","\x0d","\x8e","\x9a","\x2a"); }

		static ::kha::input::Surface get( hx::Null< int >  num);
		static Dynamic get_dyn();

		static ::kha::input::Surface instance;
		virtual Void notify( Dynamic touchStartListener,Dynamic touchEndListener,Dynamic moveListener);
		Dynamic notify_dyn();

		virtual Void remove( Dynamic touchStartListener,Dynamic touchEndListener,Dynamic moveListener);
		Dynamic remove_dyn();

		cpp::ArrayBase touchStartListeners;
		cpp::ArrayBase touchEndListeners;
		cpp::ArrayBase moveListeners;
		virtual Void sendTouchStartEvent( int index,int x,int y);
		Dynamic sendTouchStartEvent_dyn();

		virtual Void sendTouchEndEvent( int index,int x,int y);
		Dynamic sendTouchEndEvent_dyn();

		virtual Void sendMoveEvent( int index,int x,int y);
		Dynamic sendMoveEvent_dyn();

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Surface */ 
