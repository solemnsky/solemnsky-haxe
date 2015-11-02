#ifndef INCLUDED_Render
#define INCLUDED_Render

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Render)
HX_DECLARE_CLASS1(control,DrawPrim)
HX_DECLARE_CLASS1(control,Scene)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
HX_DECLARE_CLASS1(util,Transform)


class HXCPP_CLASS_ATTRIBUTES  Render_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Render_obj OBJ_;
		Render_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Render")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Render_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Render_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"); }

		static Void renderPrim( ::kha::graphics2::Graphics gr,::control::DrawPrim prim);
		static Dynamic renderPrim_dyn();

		static int renderNoInit( ::util::Transform pTrans,Float pOpacity,::kha::graphics2::Graphics g,::control::Scene scene);
		static Dynamic renderNoInit_dyn();

		static int render( ::kha::graphics2::Graphics g,::control::Scene scene);
		static Dynamic render_dyn();

		static ::kha::math::FastMatrix3 matrixFromTrans( ::util::Transform trans);
		static Dynamic matrixFromTrans_dyn();

};


#endif /* INCLUDED_Render */ 
