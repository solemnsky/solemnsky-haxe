#ifndef INCLUDED_kha_kore_Mouse
#define INCLUDED_kha_kore_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Mouse
#include <kha/Mouse.h>
#endif
HX_DECLARE_CLASS1(kha,Mouse)
HX_DECLARE_CLASS2(kha,kore,Mouse)
namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES  Mouse_obj : public ::kha::Mouse_obj{
	public:
		typedef ::kha::Mouse_obj super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Mouse */ 
