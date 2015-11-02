#ifndef INCLUDED_kha_graphics4_StencilAction
#define INCLUDED_kha_graphics4_StencilAction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,StencilAction)
namespace kha{
namespace graphics4{


class StencilAction_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StencilAction_obj OBJ_;

	public:
		StencilAction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.StencilAction","\x43","\x92","\x26","\x29"); }
		::String __ToString() const { return HX_HCSTRING("StencilAction.","\x3c","\xf9","\x1a","\x41") + tag; }

		static ::kha::graphics4::StencilAction Decrement;
		static inline ::kha::graphics4::StencilAction Decrement_dyn() { return Decrement; }
		static ::kha::graphics4::StencilAction DecrementWrap;
		static inline ::kha::graphics4::StencilAction DecrementWrap_dyn() { return DecrementWrap; }
		static ::kha::graphics4::StencilAction Increment;
		static inline ::kha::graphics4::StencilAction Increment_dyn() { return Increment; }
		static ::kha::graphics4::StencilAction IncrementWrap;
		static inline ::kha::graphics4::StencilAction IncrementWrap_dyn() { return IncrementWrap; }
		static ::kha::graphics4::StencilAction Invert;
		static inline ::kha::graphics4::StencilAction Invert_dyn() { return Invert; }
		static ::kha::graphics4::StencilAction Keep;
		static inline ::kha::graphics4::StencilAction Keep_dyn() { return Keep; }
		static ::kha::graphics4::StencilAction Replace;
		static inline ::kha::graphics4::StencilAction Replace_dyn() { return Replace; }
		static ::kha::graphics4::StencilAction Zero;
		static inline ::kha::graphics4::StencilAction Zero_dyn() { return Zero; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_StencilAction */ 
