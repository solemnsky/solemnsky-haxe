#ifndef INCLUDED_nape_phys_Compound
#define INCLUDED_nape_phys_Compound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,CompoundList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES  Compound_obj : public ::nape::phys::Interactor_obj{
	public:
		typedef ::nape::phys::Interactor_obj super;
		typedef Compound_obj OBJ_;
		Compound_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.phys.Compound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Compound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Compound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Compound","\x8b","\x7f","\x81","\x5b"); }

		::zpp_nape::phys::ZPP_Compound zpp_inner;
		virtual ::nape::phys::BodyList get_bodies( );
		Dynamic get_bodies_dyn();

		virtual ::nape::constraint::ConstraintList get_constraints( );
		Dynamic get_constraints_dyn();

		virtual ::nape::phys::CompoundList get_compounds( );
		Dynamic get_compounds_dyn();

		virtual ::nape::phys::Compound get_compound( );
		Dynamic get_compound_dyn();

		virtual ::nape::phys::Compound set_compound( ::nape::phys::Compound compound);
		Dynamic set_compound_dyn();

		virtual ::nape::space::Space get_space( );
		Dynamic get_space_dyn();

		virtual ::nape::space::Space set_space( ::nape::space::Space space);
		Dynamic set_space_dyn();

		virtual ::String toString( );

		virtual ::nape::phys::Compound copy( );
		Dynamic copy_dyn();

		virtual Void breakApart( );
		Dynamic breakApart_dyn();

		virtual Void visitBodies( Dynamic lambda);
		Dynamic visitBodies_dyn();

		virtual Void visitConstraints( Dynamic lambda);
		Dynamic visitConstraints_dyn();

		virtual Void visitCompounds( Dynamic lambda);
		Dynamic visitCompounds_dyn();

		virtual ::nape::geom::Vec2 COM( hx::Null< bool >  weak);
		Dynamic COM_dyn();

		virtual ::nape::phys::Compound translate( ::nape::geom::Vec2 translation);
		Dynamic translate_dyn();

		virtual ::nape::phys::Compound rotate( ::nape::geom::Vec2 centre,Float angle);
		Dynamic rotate_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_Compound */ 
