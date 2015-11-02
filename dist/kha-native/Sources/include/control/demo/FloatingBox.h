#ifndef INCLUDED_control_demo_FloatingBox
#define INCLUDED_control_demo_FloatingBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(control,demo,FloatingBox)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS1(util,Vector)
namespace control{
namespace demo{


class HXCPP_CLASS_ATTRIBUTES  FloatingBox_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FloatingBox_obj OBJ_;
		FloatingBox_obj();
		Void __construct(::nape::space::Space space,int index);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="control.demo.FloatingBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FloatingBox_obj > __new(::nape::space::Space space,int index);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FloatingBox_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FloatingBox","\xc5","\x9c","\x93","\xec"); }

		static void __boot();
		static int w;
		static int h;
		::nape::phys::Body box;
		int index;
		virtual ::util::Vector originalPos( );
		Dynamic originalPos_dyn();

		virtual ::util::Vector getPos( );
		Dynamic getPos_dyn();

		virtual Void setPos( ::util::Vector v);
		Dynamic setPos_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void tick( Float delta);
		Dynamic tick_dyn();

};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_FloatingBox */ 
