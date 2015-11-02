#ifndef INCLUDED_kha_graphics4_TextureAddressing
#define INCLUDED_kha_graphics4_TextureAddressing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,TextureAddressing)
namespace kha{
namespace graphics4{


class TextureAddressing_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextureAddressing_obj OBJ_;

	public:
		TextureAddressing_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.TextureAddressing","\x5a","\xbc","\x8b","\xd3"); }
		::String __ToString() const { return HX_HCSTRING("TextureAddressing.","\xc5","\x4f","\x2f","\x21") + tag; }

		static ::kha::graphics4::TextureAddressing Clamp;
		static inline ::kha::graphics4::TextureAddressing Clamp_dyn() { return Clamp; }
		static ::kha::graphics4::TextureAddressing Mirror;
		static inline ::kha::graphics4::TextureAddressing Mirror_dyn() { return Mirror; }
		static ::kha::graphics4::TextureAddressing Repeat;
		static inline ::kha::graphics4::TextureAddressing Repeat_dyn() { return Repeat; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_TextureAddressing */ 
