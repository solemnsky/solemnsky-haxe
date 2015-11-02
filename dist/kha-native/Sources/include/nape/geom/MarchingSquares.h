#ifndef INCLUDED_nape_geom_MarchingSquares
#define INCLUDED_nape_geom_MarchingSquares

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,GeomPolyList)
HX_DECLARE_CLASS2(nape,geom,MarchingSquares)
HX_DECLARE_CLASS2(nape,geom,Vec2)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  MarchingSquares_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MarchingSquares_obj OBJ_;
		MarchingSquares_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.geom.MarchingSquares")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MarchingSquares_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MarchingSquares_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MarchingSquares","\xd7","\x62","\x28","\x38"); }

		static ::nape::geom::GeomPolyList run( Dynamic iso,::nape::geom::AABB bounds,::nape::geom::Vec2 cellsize,hx::Null< int >  quality,::nape::geom::Vec2 subgrid,hx::Null< bool >  combine,::nape::geom::GeomPolyList output);
		static Dynamic run_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_MarchingSquares */ 
