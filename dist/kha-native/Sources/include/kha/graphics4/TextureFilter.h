#ifndef INCLUDED_kha_graphics4_TextureFilter
#define INCLUDED_kha_graphics4_TextureFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,TextureFilter)
namespace kha{
namespace graphics4{


class TextureFilter_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextureFilter_obj OBJ_;

	public:
		TextureFilter_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.TextureFilter","\x64","\x72","\x88","\xca"); }
		::String __ToString() const { return HX_HCSTRING("TextureFilter.","\xfb","\x35","\x5d","\xd5") + tag; }

		static ::kha::graphics4::TextureFilter AnisotropicFilter;
		static inline ::kha::graphics4::TextureFilter AnisotropicFilter_dyn() { return AnisotropicFilter; }
		static ::kha::graphics4::TextureFilter LinearFilter;
		static inline ::kha::graphics4::TextureFilter LinearFilter_dyn() { return LinearFilter; }
		static ::kha::graphics4::TextureFilter PointFilter;
		static inline ::kha::graphics4::TextureFilter PointFilter_dyn() { return PointFilter; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_TextureFilter */ 
