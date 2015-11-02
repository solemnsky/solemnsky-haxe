#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#define INCLUDED_kha_kore_graphics4_Graphics2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics2)
HX_DECLARE_CLASS3(kha,kore,graphics4,Graphics2)
namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  Graphics2_obj : public ::kha::graphics4::Graphics2_obj{
	public:
		typedef ::kha::graphics4::Graphics2_obj super;
		typedef Graphics2_obj OBJ_;
		Graphics2_obj();
		Void __construct(::kha::Canvas canvas);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.graphics4.Graphics2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphics2_obj > __new(::kha::Canvas canvas);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics2_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Graphics2","\xe7","\x98","\x64","\xaa"); }

		virtual Void drawVideoInternal( ::kha::Video video,Float x,Float y,Float width,Float height);

};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_Graphics2 */ 
