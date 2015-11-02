#ifndef INCLUDED_kha_Button
#define INCLUDED_kha_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Button)
namespace kha{


class Button_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Button_obj OBJ_;

	public:
		Button_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.Button","\x1c","\x2d","\xa0","\x44"); }
		::String __ToString() const { return HX_HCSTRING("Button.","\xdc","\x79","\xc6","\x97") + tag; }

		static ::kha::Button BUTTON_1;
		static inline ::kha::Button BUTTON_1_dyn() { return BUTTON_1; }
		static ::kha::Button BUTTON_2;
		static inline ::kha::Button BUTTON_2_dyn() { return BUTTON_2; }
		static ::kha::Button DOWN;
		static inline ::kha::Button DOWN_dyn() { return DOWN; }
		static ::kha::Button LEFT;
		static inline ::kha::Button LEFT_dyn() { return LEFT; }
		static ::kha::Button NONE;
		static inline ::kha::Button NONE_dyn() { return NONE; }
		static ::kha::Button RIGHT;
		static inline ::kha::Button RIGHT_dyn() { return RIGHT; }
		static ::kha::Button UP;
		static inline ::kha::Button UP_dyn() { return UP; }
};

} // end namespace kha

#endif /* INCLUDED_kha_Button */ 
