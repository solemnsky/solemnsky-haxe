#ifndef INCLUDED_kha_graphics4_VertexShader
#define INCLUDED_kha_graphics4_VertexShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  VertexShader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexShader_obj OBJ_;
		VertexShader_obj();
		Void __construct(::kha::Blob source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics4.VertexShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexShader_obj > __new(::kha::Blob source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexShader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VertexShader","\xc9","\xfd","\x47","\x85"); }

		virtual Void initVertexShader( ::kha::Blob source);
		Dynamic initVertexShader_dyn();

		virtual Void unused( );
		Dynamic unused_dyn();

Kore::Shader* shader;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexShader */ 
