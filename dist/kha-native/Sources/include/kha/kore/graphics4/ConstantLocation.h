#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#define INCLUDED_kha_kore_graphics4_ConstantLocation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)

#include <Kore/pch.h>
#include <Kore/Graphics/Shader.h>

namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  ConstantLocation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConstantLocation_obj OBJ_;
		ConstantLocation_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.kore.graphics4.ConstantLocation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConstantLocation_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstantLocation_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::graphics4::ConstantLocation_obj *();
		::String __ToString() const { return HX_HCSTRING("ConstantLocation","\xd9","\xcb","\x06","\x4a"); }

Kore::ConstantLocation location;
};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_ConstantLocation */ 
