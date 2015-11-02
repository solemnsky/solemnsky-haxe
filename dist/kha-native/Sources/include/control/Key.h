#ifndef INCLUDED_control_Key
#define INCLUDED_control_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Key)
namespace control{


class Key_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Key_obj OBJ_;

	public:
		Key_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("control.Key","\xee","\xef","\xf7","\xf8"); }
		::String __ToString() const { return HX_HCSTRING("Key.","\xcf","\x0d","\xe0","\x31") + tag; }

		static ::control::Key ArrDownKey;
		static inline ::control::Key ArrDownKey_dyn() { return ArrDownKey; }
		static ::control::Key ArrLeftKey;
		static inline ::control::Key ArrLeftKey_dyn() { return ArrLeftKey; }
		static ::control::Key ArrRightKey;
		static inline ::control::Key ArrRightKey_dyn() { return ArrRightKey; }
		static ::control::Key ArrUpKey;
		static inline ::control::Key ArrUpKey_dyn() { return ArrUpKey; }
		static ::control::Key BadKey;
		static inline ::control::Key BadKey_dyn() { return BadKey; }
		static ::control::Key CharKey(::String _char);
		static Dynamic CharKey_dyn();
};

} // end namespace control

#endif /* INCLUDED_control_Key */ 
