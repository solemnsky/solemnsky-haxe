#ifndef INCLUDED_kha_graphics4_VertexData
#define INCLUDED_kha_graphics4_VertexData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,VertexData)
namespace kha{
namespace graphics4{


class VertexData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef VertexData_obj OBJ_;

	public:
		VertexData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.VertexData","\x9d","\xbf","\x53","\x87"); }
		::String __ToString() const { return HX_HCSTRING("VertexData.","\xa0","\x70","\xf6","\xcc") + tag; }

		static ::kha::graphics4::VertexData Float1;
		static inline ::kha::graphics4::VertexData Float1_dyn() { return Float1; }
		static ::kha::graphics4::VertexData Float2;
		static inline ::kha::graphics4::VertexData Float2_dyn() { return Float2; }
		static ::kha::graphics4::VertexData Float3;
		static inline ::kha::graphics4::VertexData Float3_dyn() { return Float3; }
		static ::kha::graphics4::VertexData Float4;
		static inline ::kha::graphics4::VertexData Float4_dyn() { return Float4; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexData */ 
