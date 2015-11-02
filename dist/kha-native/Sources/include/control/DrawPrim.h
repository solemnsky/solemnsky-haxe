#ifndef INCLUDED_control_DrawPrim
#define INCLUDED_control_DrawPrim

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,DrawPrim)
HX_DECLARE_CLASS1(control,TextAlign)
HX_DECLARE_CLASS1(util,Vector)
namespace control{


class DrawPrim_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DrawPrim_obj OBJ_;

	public:
		DrawPrim_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("control.DrawPrim","\xdb","\xc7","\x61","\x49"); }
		::String __ToString() const { return HX_HCSTRING("DrawPrim.","\x44","\x6c","\x69","\x32") + tag; }

		static ::control::DrawPrim DrawCircle(::util::Vector pos,Float radius);
		static Dynamic DrawCircle_dyn();
		static ::control::DrawPrim DrawImage(::util::Vector pos,::String image);
		static Dynamic DrawImage_dyn();
		static ::control::DrawPrim DrawRect(::util::Vector topLeft,::util::Vector bottomRight);
		static Dynamic DrawRect_dyn();
		static ::control::DrawPrim DrawText(::util::Vector pos,::control::TextAlign align,::String text);
		static Dynamic DrawText_dyn();
		static ::control::DrawPrim SetColor(int r,int g,int b,int a);
		static Dynamic SetColor_dyn();
		static ::control::DrawPrim SetFont(::String name,int size);
		static Dynamic SetFont_dyn();
};

} // end namespace control

#endif /* INCLUDED_control_DrawPrim */ 
