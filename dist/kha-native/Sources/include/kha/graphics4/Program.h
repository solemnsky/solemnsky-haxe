#ifndef INCLUDED_kha_graphics4_Program
#define INCLUDED_kha_graphics4_Program

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics4,Program)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  Program_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Program_obj OBJ_;
		Program_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics4.Program")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Program_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Program_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Program","\x64","\x72","\x4a","\xc1"); }

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setVertexShader( ::kha::graphics4::VertexShader shader);
		Dynamic setVertexShader_dyn();

		virtual Void setVertexShaderImpl( ::kha::graphics4::VertexShader shader);
		Dynamic setVertexShaderImpl_dyn();

		virtual Void setFragmentShader( ::kha::graphics4::FragmentShader shader);
		Dynamic setFragmentShader_dyn();

		virtual Void setFragmentShaderImpl( ::kha::graphics4::FragmentShader shader);
		Dynamic setFragmentShaderImpl_dyn();

		virtual Void link( ::kha::graphics4::VertexStructure structure);
		Dynamic link_dyn();

		virtual Void linkWithStructures2( ::kha::graphics4::VertexStructure structure0,::kha::graphics4::VertexStructure structure1,::kha::graphics4::VertexStructure structure2,::kha::graphics4::VertexStructure structure3,int size);
		Dynamic linkWithStructures2_dyn();

		virtual Void linkWithStructures( Array< ::Dynamic > structures);
		Dynamic linkWithStructures_dyn();

		virtual ::kha::graphics4::ConstantLocation getConstantLocation( ::String name);
		Dynamic getConstantLocation_dyn();

		virtual Void initConstantLocation( ::kha::kore::graphics4::ConstantLocation location,::String name);
		Dynamic initConstantLocation_dyn();

		virtual ::kha::graphics4::TextureUnit getTextureUnit( ::String name);
		Dynamic getTextureUnit_dyn();

		virtual Void initTextureUnit( ::kha::kore::graphics4::TextureUnit unit,::String name);
		Dynamic initTextureUnit_dyn();

		virtual Void set( );
		Dynamic set_dyn();

		virtual Void unused( );
		Dynamic unused_dyn();

Kore::Program* program;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_Program */ 
