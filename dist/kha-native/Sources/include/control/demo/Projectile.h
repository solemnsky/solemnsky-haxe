#ifndef INCLUDED_control_demo_Projectile
#define INCLUDED_control_demo_Projectile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(control,demo,Projectile)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS1(util,Vector)
namespace control{
namespace demo{


class HXCPP_CLASS_ATTRIBUTES  Projectile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Projectile_obj OBJ_;
		Projectile_obj();
		Void __construct(::nape::space::Space space,::util::Vector pos,::util::Vector vel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="control.demo.Projectile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Projectile_obj > __new(::nape::space::Space space,::util::Vector pos,::util::Vector vel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Projectile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Projectile","\x09","\x8a","\x3c","\xbb"); }

		static void __boot();
		static Float maxLife;
		Float life;
		::nape::phys::Body box;
		virtual Void tick( Float delta);
		Dynamic tick_dyn();

		virtual bool conclude( );
		Dynamic conclude_dyn();

		virtual Float vivacity( );
		Dynamic vivacity_dyn();

};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_Projectile */ 
