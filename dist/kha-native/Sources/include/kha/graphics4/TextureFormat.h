#ifndef INCLUDED_kha_graphics4_TextureFormat
#define INCLUDED_kha_graphics4_TextureFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
namespace kha{
namespace graphics4{


class TextureFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextureFormat_obj OBJ_;

	public:
		TextureFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.TextureFormat","\xe3","\xe1","\xe1","\x42"); }
		::String __ToString() const { return HX_HCSTRING("TextureFormat.","\x9c","\x55","\x45","\xab") + tag; }

		static ::kha::graphics4::TextureFormat L8;
		static inline ::kha::graphics4::TextureFormat L8_dyn() { return L8; }
		static ::kha::graphics4::TextureFormat RGBA128;
		static inline ::kha::graphics4::TextureFormat RGBA128_dyn() { return RGBA128; }
		static ::kha::graphics4::TextureFormat RGBA32;
		static inline ::kha::graphics4::TextureFormat RGBA32_dyn() { return RGBA32; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_TextureFormat */ 
