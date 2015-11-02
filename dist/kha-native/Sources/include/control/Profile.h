#ifndef INCLUDED_control_Profile
#define INCLUDED_control_Profile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Profile)
namespace control{


class HXCPP_CLASS_ATTRIBUTES  Profile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Profile_obj OBJ_;
		Profile_obj();
		Void __construct(Array< int > bufferOn,Array< int > renderOn,Array< int > renderOff,Array< int > primCount,Array< int > tickOn,Array< int > tickOff);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="control.Profile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Profile_obj > __new(Array< int > bufferOn,Array< int > renderOn,Array< int > renderOff,Array< int > primCount,Array< int > tickOn,Array< int > tickOff);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Profile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Profile","\x09","\x71","\x9a","\xc0"); }

		static Dynamic dataFromArray( Array< int > a);
		static Dynamic dataFromArray_dyn();

		static ::String printInterval( Dynamic i);
		static Dynamic printInterval_dyn();

		static ::String printValue( Dynamic i);
		static Dynamic printValue_dyn();

		Dynamic bufferOn;
		Dynamic renderOn;
		Dynamic renderOff;
		Dynamic primCount;
		Dynamic tickOn;
		Dynamic tickOff;
		virtual ::String print( );
		Dynamic print_dyn();

};

} // end namespace control

#endif /* INCLUDED_control_Profile */ 
