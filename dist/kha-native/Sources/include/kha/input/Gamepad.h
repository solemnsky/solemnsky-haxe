#ifndef INCLUDED_kha_input_Gamepad
#define INCLUDED_kha_input_Gamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,input,Gamepad)
namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Gamepad_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gamepad_obj OBJ_;
		Gamepad_obj();
		Void __construct(hx::Null< int >  __o_id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.input.Gamepad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Gamepad_obj > __new(hx::Null< int >  __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gamepad_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Gamepad","\x81","\x08","\xd7","\x56"); }

		static void __boot();
		static ::kha::input::Gamepad get( hx::Null< int >  num);
		static Dynamic get_dyn();

		static Array< ::Dynamic > instances;
		virtual Void notify( Dynamic axisListener,Dynamic buttonListener);
		Dynamic notify_dyn();

		virtual Void remove( Dynamic axisListener,Dynamic buttonListener);
		Dynamic remove_dyn();

		cpp::ArrayBase axisListeners;
		cpp::ArrayBase buttonListeners;
		virtual Void sendAxisEvent( int axis,Float value);
		Dynamic sendAxisEvent_dyn();

		virtual Void sendButtonEvent( int button,Float value);
		Dynamic sendButtonEvent_dyn();

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Gamepad */ 
