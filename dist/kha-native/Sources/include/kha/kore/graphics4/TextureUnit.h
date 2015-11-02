#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#define INCLUDED_kha_kore_graphics4_TextureUnit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  TextureUnit_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureUnit_obj OBJ_;
		TextureUnit_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.kore.graphics4.TextureUnit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextureUnit_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureUnit_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::graphics4::TextureUnit_obj *();
		::String __ToString() const { return HX_HCSTRING("TextureUnit","\xdf","\x60","\x5b","\xe8"); }

Kore::TextureUnit unit;
};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_TextureUnit */ 
