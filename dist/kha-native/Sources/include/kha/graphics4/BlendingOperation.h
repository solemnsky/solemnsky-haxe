#ifndef INCLUDED_kha_graphics4_BlendingOperation
#define INCLUDED_kha_graphics4_BlendingOperation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
namespace kha{
namespace graphics4{


class BlendingOperation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BlendingOperation_obj OBJ_;

	public:
		BlendingOperation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.BlendingOperation","\xa7","\xd4","\x66","\xad"); }
		::String __ToString() const { return HX_HCSTRING("BlendingOperation.","\xd8","\x7a","\x09","\xe7") + tag; }

		static ::kha::graphics4::BlendingOperation BlendOne;
		static inline ::kha::graphics4::BlendingOperation BlendOne_dyn() { return BlendOne; }
		static ::kha::graphics4::BlendingOperation BlendZero;
		static inline ::kha::graphics4::BlendingOperation BlendZero_dyn() { return BlendZero; }
		static ::kha::graphics4::BlendingOperation DestinationAlpha;
		static inline ::kha::graphics4::BlendingOperation DestinationAlpha_dyn() { return DestinationAlpha; }
		static ::kha::graphics4::BlendingOperation InverseDestinationAlpha;
		static inline ::kha::graphics4::BlendingOperation InverseDestinationAlpha_dyn() { return InverseDestinationAlpha; }
		static ::kha::graphics4::BlendingOperation InverseSourceAlpha;
		static inline ::kha::graphics4::BlendingOperation InverseSourceAlpha_dyn() { return InverseSourceAlpha; }
		static ::kha::graphics4::BlendingOperation SourceAlpha;
		static inline ::kha::graphics4::BlendingOperation SourceAlpha_dyn() { return SourceAlpha; }
		static ::kha::graphics4::BlendingOperation Undefined;
		static inline ::kha::graphics4::BlendingOperation Undefined_dyn() { return Undefined; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_BlendingOperation */ 
