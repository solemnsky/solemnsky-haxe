#ifndef INCLUDED_kha_graphics4_FragmentShader
#define INCLUDED_kha_graphics4_FragmentShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  FragmentShader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FragmentShader_obj OBJ_;
		FragmentShader_obj();
		Void __construct(::kha::Blob source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics4.FragmentShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FragmentShader_obj > __new(::kha::Blob source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FragmentShader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FragmentShader","\x35","\xe3","\x31","\xe4"); }

		virtual Void initFragmentShader( ::kha::Blob source);
		Dynamic initFragmentShader_dyn();

		virtual Void unused( );
		Dynamic unused_dyn();

Kore::Shader* shader;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_FragmentShader */ 
