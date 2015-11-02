#ifndef INCLUDED_kha_graphics4_Usage
#define INCLUDED_kha_graphics4_Usage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,Usage)
namespace kha{
namespace graphics4{


class Usage_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Usage_obj OBJ_;

	public:
		Usage_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.Usage","\x92","\x83","\x45","\x64"); }
		::String __ToString() const { return HX_HCSTRING("Usage.","\x0d","\x94","\xd6","\x73") + tag; }

		static ::kha::graphics4::Usage DynamicUsage;
		static inline ::kha::graphics4::Usage DynamicUsage_dyn() { return DynamicUsage; }
		static ::kha::graphics4::Usage ReadableUsage;
		static inline ::kha::graphics4::Usage ReadableUsage_dyn() { return ReadableUsage; }
		static ::kha::graphics4::Usage StaticUsage;
		static inline ::kha::graphics4::Usage StaticUsage_dyn() { return StaticUsage; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_Usage */ 
