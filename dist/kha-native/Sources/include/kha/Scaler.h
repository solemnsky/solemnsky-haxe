#ifndef INCLUDED_kha_Scaler
#define INCLUDED_kha_Scaler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Scaler)
HX_DECLARE_CLASS1(kha,ScreenRotation)
HX_DECLARE_CLASS1(kha,TargetRectangle)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Scaler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Scaler_obj OBJ_;
		Scaler_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Scaler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scaler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scaler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Scaler","\xc8","\x5e","\xba","\x70"); }

		static ::kha::TargetRectangle targetRect( int width,int height,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation);
		static Dynamic targetRect_dyn();

		static int transformXDirectly( int x,int y,int sourceWidth,int sourceHeight,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation);
		static Dynamic transformXDirectly_dyn();

		static int transformX( int x,int y,::kha::Image source,::kha::Canvas destination,::kha::ScreenRotation rotation);
		static Dynamic transformX_dyn();

		static int transformYDirectly( int x,int y,int sourceWidth,int sourceHeight,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation);
		static Dynamic transformYDirectly_dyn();

		static int transformY( int x,int y,::kha::Image source,::kha::Canvas destination,::kha::ScreenRotation rotation);
		static Dynamic transformY_dyn();

		static Void scale( ::kha::Image source,::kha::Canvas destination,::kha::ScreenRotation rotation);
		static Dynamic scale_dyn();

		static ::kha::math::FastMatrix3 getScaledTransformation( int width,int height,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation);
		static Dynamic getScaledTransformation_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Scaler */ 
