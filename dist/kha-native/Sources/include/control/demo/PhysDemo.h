#ifndef INCLUDED_control_demo_PhysDemo
#define INCLUDED_control_demo_PhysDemo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
HX_DECLARE_CLASS1(control,Control)
HX_DECLARE_CLASS1(control,DrawPrim)
HX_DECLARE_CLASS1(control,Event)
HX_DECLARE_CLASS1(control,Key)
HX_DECLARE_CLASS1(control,Network)
HX_DECLARE_CLASS1(control,Scene)
HX_DECLARE_CLASS2(control,demo,DemoSelect)
HX_DECLARE_CLASS2(control,demo,Direction)
HX_DECLARE_CLASS2(control,demo,FloatingBox)
HX_DECLARE_CLASS2(control,demo,PhysDemo)
HX_DECLARE_CLASS2(control,demo,Projectile)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS1(util,Vector)
namespace control{
namespace demo{


class HXCPP_CLASS_ATTRIBUTES  PhysDemo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PhysDemo_obj OBJ_;
		PhysDemo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="control.demo.PhysDemo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PhysDemo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysDemo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::control::Control_obj *();
		::String __ToString() const { return HX_HCSTRING("PhysDemo","\x35","\xcc","\xfe","\x89"); }

		static void __boot();
		static Float maxCoolDown;
		static Float initSpeed;
		static ::control::Scene rotatedBox( ::util::Vector pos,Float width,Float alpha,::control::DrawPrim color);
		static Dynamic rotatedBox_dyn();

		::haxe::ds::EnumValueMap cooldown;
		::haxe::ds::EnumValueMap movement;
		Array< ::Dynamic > projectiles;
		Array< ::Dynamic > boxes;
		::nape::phys::Body ball;
		bool exit;
		::nape::space::Space space;
		virtual Void init( ::control::Network _);
		Dynamic init_dyn();

		virtual ::util::Vector vecFromDir( ::control::demo::Direction m);
		Dynamic vecFromDir_dyn();

		virtual ::control::demo::Direction dirFromKey( ::control::Key key);
		Dynamic dirFromKey_dyn();

		virtual Void tick( Float delta);
		Dynamic tick_dyn();

		virtual Void profiling( Dynamic d);
		Dynamic profiling_dyn();

		virtual bool controlling( );
		Dynamic controlling_dyn();

		virtual ::control::Scene score( );
		Dynamic score_dyn();

		virtual ::control::Scene render( Float delta);
		Dynamic render_dyn();

		virtual Void handleKb( ::control::Key key,bool state);
		Dynamic handleKb_dyn();

		virtual Void handle( ::control::Event e);
		Dynamic handle_dyn();

		virtual ::control::demo::DemoSelect conclude( );
		Dynamic conclude_dyn();

};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_PhysDemo */ 
