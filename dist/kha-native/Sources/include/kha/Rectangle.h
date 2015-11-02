#ifndef INCLUDED_kha_Rectangle
#define INCLUDED_kha_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Rectangle)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(Float x,Float y,Float width,Float height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Rectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rectangle_obj > __new(Float x,Float y,Float width,Float height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"); }

		Float x;
		Float y;
		Float width;
		Float height;
		virtual Void setPos( int x,int y);
		Dynamic setPos_dyn();

		virtual Void moveX( int xdelta);
		Dynamic moveX_dyn();

		virtual Void moveY( int ydelta);
		Dynamic moveY_dyn();

		virtual bool collision( ::kha::Rectangle r);
		Dynamic collision_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Rectangle */ 
