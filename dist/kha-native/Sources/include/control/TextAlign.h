#ifndef INCLUDED_control_TextAlign
#define INCLUDED_control_TextAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,TextAlign)
namespace control{


class TextAlign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextAlign_obj OBJ_;

	public:
		TextAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("control.TextAlign","\x67","\x72","\x15","\x16"); }
		::String __ToString() const { return HX_HCSTRING("TextAlign.","\x76","\x1a","\x3c","\x6b") + tag; }

		static ::control::TextAlign CenterText;
		static inline ::control::TextAlign CenterText_dyn() { return CenterText; }
		static ::control::TextAlign LeftText;
		static inline ::control::TextAlign LeftText_dyn() { return LeftText; }
		static ::control::TextAlign RightText;
		static inline ::control::TextAlign RightText_dyn() { return RightText; }
};

} // end namespace control

#endif /* INCLUDED_control_TextAlign */ 
