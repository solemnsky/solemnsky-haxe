#ifndef INCLUDED_control_Event
#define INCLUDED_control_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Event)
HX_DECLARE_CLASS1(control,Key)
namespace control{


class Event_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Event_obj OBJ_;

	public:
		Event_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("control.Event","\x29","\xa0","\x8c","\xb1"); }
		::String __ToString() const { return HX_HCSTRING("Event.","\xf4","\xc2","\xfe","\xca") + tag; }

		static ::control::Event KbEvent(::control::Key key,bool state);
		static Dynamic KbEvent_dyn();
		static ::control::Event MouseEvent(Float x,Float y);
		static Dynamic MouseEvent_dyn();
};

} // end namespace control

#endif /* INCLUDED_control_Event */ 
