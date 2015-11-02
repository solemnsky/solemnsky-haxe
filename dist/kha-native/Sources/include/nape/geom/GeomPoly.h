#ifndef INCLUDED_nape_geom_GeomPoly
#define INCLUDED_nape_geom_GeomPoly

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,GeomPoly)
HX_DECLARE_CLASS2(nape,geom,GeomPolyList)
HX_DECLARE_CLASS2(nape,geom,GeomVertexIterator)
HX_DECLARE_CLASS2(nape,geom,Mat23)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Winding)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomPoly)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  GeomPoly_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeomPoly_obj OBJ_;
		GeomPoly_obj();
		Void __construct(Dynamic vertices);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.GeomPoly")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GeomPoly_obj > __new(Dynamic vertices);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GeomPoly_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GeomPoly","\x48","\x73","\x75","\x9e"); }

		static ::nape::geom::GeomPoly get( Dynamic vertices);
		static Dynamic get_dyn();

		::nape::geom::GeomPoly zpp_pool;
		bool zpp_disp;
		::zpp_nape::geom::ZPP_GeomPoly zpp_inner;
		virtual bool empty( );
		Dynamic empty_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual ::nape::geom::GeomVertexIterator iterator( );
		Dynamic iterator_dyn();

		virtual ::nape::geom::GeomVertexIterator forwardIterator( );
		Dynamic forwardIterator_dyn();

		virtual ::nape::geom::GeomVertexIterator backwardsIterator( );
		Dynamic backwardsIterator_dyn();

		virtual ::nape::geom::Vec2 current( );
		Dynamic current_dyn();

		virtual ::nape::geom::GeomPoly push( ::nape::geom::Vec2 vertex);
		Dynamic push_dyn();

		virtual ::nape::geom::GeomPoly pop( );
		Dynamic pop_dyn();

		virtual ::nape::geom::GeomPoly unshift( ::nape::geom::Vec2 vertex);
		Dynamic unshift_dyn();

		virtual ::nape::geom::GeomPoly shift( );
		Dynamic shift_dyn();

		virtual ::nape::geom::GeomPoly skipForward( int times);
		Dynamic skipForward_dyn();

		virtual ::nape::geom::GeomPoly skipBackwards( int times);
		Dynamic skipBackwards_dyn();

		virtual ::nape::geom::GeomPoly erase( int count);
		Dynamic erase_dyn();

		virtual ::nape::geom::GeomPoly clear( );
		Dynamic clear_dyn();

		virtual ::nape::geom::GeomPoly copy( );
		Dynamic copy_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float area( );
		Dynamic area_dyn();

		virtual ::nape::geom::Winding winding( );
		Dynamic winding_dyn();

		virtual bool contains( ::nape::geom::Vec2 point);
		Dynamic contains_dyn();

		virtual bool isClockwise( );
		Dynamic isClockwise_dyn();

		virtual bool isConvex( );
		Dynamic isConvex_dyn();

		virtual bool isSimple( );
		Dynamic isSimple_dyn();

		virtual bool isMonotone( );
		Dynamic isMonotone_dyn();

		virtual bool isDegenerate( );
		Dynamic isDegenerate_dyn();

		virtual ::nape::geom::GeomPoly simplify( Float epsilon);
		Dynamic simplify_dyn();

		virtual ::nape::geom::GeomPolyList simpleDecomposition( ::nape::geom::GeomPolyList output);
		Dynamic simpleDecomposition_dyn();

		virtual ::nape::geom::GeomPolyList monotoneDecomposition( ::nape::geom::GeomPolyList output);
		Dynamic monotoneDecomposition_dyn();

		virtual ::nape::geom::GeomPolyList convexDecomposition( hx::Null< bool >  delaunay,::nape::geom::GeomPolyList output);
		Dynamic convexDecomposition_dyn();

		virtual ::nape::geom::GeomPolyList triangularDecomposition( hx::Null< bool >  delaunay,::nape::geom::GeomPolyList output);
		Dynamic triangularDecomposition_dyn();

		virtual ::nape::geom::GeomPoly inflate( Float inflation);
		Dynamic inflate_dyn();

		virtual ::nape::geom::GeomPolyList cut( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,hx::Null< bool >  boundedStart,hx::Null< bool >  boundedEnd,::nape::geom::GeomPolyList output);
		Dynamic cut_dyn();

		virtual ::nape::geom::GeomPoly transform( ::nape::geom::Mat23 matrix);
		Dynamic transform_dyn();

		virtual ::nape::geom::AABB bounds( );
		Dynamic bounds_dyn();

		virtual ::nape::geom::Vec2 top( );
		Dynamic top_dyn();

		virtual ::nape::geom::Vec2 bottom( );
		Dynamic bottom_dyn();

		virtual ::nape::geom::Vec2 left( );
		Dynamic left_dyn();

		virtual ::nape::geom::Vec2 right( );
		Dynamic right_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_GeomPoly */ 
