#ifndef INCLUDED_kha_Key
#define INCLUDED_kha_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Key)
namespace kha{


class Key_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Key_obj OBJ_;

	public:
		Key_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.Key","\x35","\x80","\x15","\xef"); }
		::String __ToString() const { return HX_HCSTRING("Key.","\xcf","\x0d","\xe0","\x31") + tag; }

		static ::kha::Key ALT;
		static inline ::kha::Key ALT_dyn() { return ALT; }
		static ::kha::Key BACK;
		static inline ::kha::Key BACK_dyn() { return BACK; }
		static ::kha::Key BACKSPACE;
		static inline ::kha::Key BACKSPACE_dyn() { return BACKSPACE; }
		static ::kha::Key CHAR;
		static inline ::kha::Key CHAR_dyn() { return CHAR; }
		static ::kha::Key CTRL;
		static inline ::kha::Key CTRL_dyn() { return CTRL; }
		static ::kha::Key DEL;
		static inline ::kha::Key DEL_dyn() { return DEL; }
		static ::kha::Key DOWN;
		static inline ::kha::Key DOWN_dyn() { return DOWN; }
		static ::kha::Key ENTER;
		static inline ::kha::Key ENTER_dyn() { return ENTER; }
		static ::kha::Key ESC;
		static inline ::kha::Key ESC_dyn() { return ESC; }
		static ::kha::Key LEFT;
		static inline ::kha::Key LEFT_dyn() { return LEFT; }
		static ::kha::Key RIGHT;
		static inline ::kha::Key RIGHT_dyn() { return RIGHT; }
		static ::kha::Key SHIFT;
		static inline ::kha::Key SHIFT_dyn() { return SHIFT; }
		static ::kha::Key TAB;
		static inline ::kha::Key TAB_dyn() { return TAB; }
		static ::kha::Key UP;
		static inline ::kha::Key UP_dyn() { return UP; }
};

} // end namespace kha

#endif /* INCLUDED_kha_Key */ 
