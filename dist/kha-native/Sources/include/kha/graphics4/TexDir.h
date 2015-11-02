#ifndef INCLUDED_kha_graphics4_TexDir
#define INCLUDED_kha_graphics4_TexDir

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,TexDir)
namespace kha{
namespace graphics4{


class TexDir_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TexDir_obj OBJ_;

	public:
		TexDir_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.TexDir","\x15","\x7e","\xaf","\xf1"); }
		::String __ToString() const { return HX_HCSTRING("TexDir.","\xa8","\x97","\x6e","\x4c") + tag; }

		static ::kha::graphics4::TexDir U;
		static inline ::kha::graphics4::TexDir U_dyn() { return U; }
		static ::kha::graphics4::TexDir V;
		static inline ::kha::graphics4::TexDir V_dyn() { return V; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_TexDir */ 
