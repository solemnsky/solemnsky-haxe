#ifndef INCLUDED_kha_graphics4_MipMapFilter
#define INCLUDED_kha_graphics4_MipMapFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,MipMapFilter)
namespace kha{
namespace graphics4{


class MipMapFilter_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MipMapFilter_obj OBJ_;

	public:
		MipMapFilter_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.MipMapFilter","\xef","\x70","\x16","\x15"); }
		::String __ToString() const { return HX_HCSTRING("MipMapFilter.","\xce","\x30","\x41","\xf4") + tag; }

		static ::kha::graphics4::MipMapFilter LinearMipFilter;
		static inline ::kha::graphics4::MipMapFilter LinearMipFilter_dyn() { return LinearMipFilter; }
		static ::kha::graphics4::MipMapFilter NoMipFilter;
		static inline ::kha::graphics4::MipMapFilter NoMipFilter_dyn() { return NoMipFilter; }
		static ::kha::graphics4::MipMapFilter PointMipFilter;
		static inline ::kha::graphics4::MipMapFilter PointMipFilter_dyn() { return PointMipFilter; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_MipMapFilter */ 
