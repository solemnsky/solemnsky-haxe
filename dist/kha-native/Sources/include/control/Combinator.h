#ifndef INCLUDED_control_Combinator
#define INCLUDED_control_Combinator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Combinator)
HX_DECLARE_CLASS1(control,Control)
namespace control{


class HXCPP_CLASS_ATTRIBUTES  Combinator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Combinator_obj OBJ_;
		Combinator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="control.Combinator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Combinator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Combinator_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Combinator","\x1c","\xbf","\xde","\xa1"); }

		static ::control::Control network( Dynamic moveThrough,::control::Control initialCtrl);
		static Dynamic network_dyn();

};

} // end namespace control

#endif /* INCLUDED_control_Combinator */ 
