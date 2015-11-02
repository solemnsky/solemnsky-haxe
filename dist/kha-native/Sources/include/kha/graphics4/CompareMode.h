#ifndef INCLUDED_kha_graphics4_CompareMode
#define INCLUDED_kha_graphics4_CompareMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,CompareMode)
namespace kha{
namespace graphics4{


class CompareMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CompareMode_obj OBJ_;

	public:
		CompareMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.CompareMode","\xd9","\xdf","\x5c","\xb7"); }
		::String __ToString() const { return HX_HCSTRING("CompareMode.","\xa6","\x50","\x1a","\x71") + tag; }

		static ::kha::graphics4::CompareMode Always;
		static inline ::kha::graphics4::CompareMode Always_dyn() { return Always; }
		static ::kha::graphics4::CompareMode Equal;
		static inline ::kha::graphics4::CompareMode Equal_dyn() { return Equal; }
		static ::kha::graphics4::CompareMode Greater;
		static inline ::kha::graphics4::CompareMode Greater_dyn() { return Greater; }
		static ::kha::graphics4::CompareMode GreaterEqual;
		static inline ::kha::graphics4::CompareMode GreaterEqual_dyn() { return GreaterEqual; }
		static ::kha::graphics4::CompareMode Less;
		static inline ::kha::graphics4::CompareMode Less_dyn() { return Less; }
		static ::kha::graphics4::CompareMode LessEqual;
		static inline ::kha::graphics4::CompareMode LessEqual_dyn() { return LessEqual; }
		static ::kha::graphics4::CompareMode Never;
		static inline ::kha::graphics4::CompareMode Never_dyn() { return Never; }
		static ::kha::graphics4::CompareMode NotEqual;
		static inline ::kha::graphics4::CompareMode NotEqual_dyn() { return NotEqual; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_CompareMode */ 
