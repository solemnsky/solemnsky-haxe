#ifndef INCLUDED_nape_geom_MatMN
#define INCLUDED_nape_geom_MatMN

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,MatMN)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_MatMN)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  MatMN_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MatMN_obj OBJ_;
		MatMN_obj();
		Void __construct(int rows,int cols);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.MatMN")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MatMN_obj > __new(int rows,int cols);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatMN_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MatMN","\xe1","\xa5","\x50","\x96"); }

		::zpp_nape::geom::ZPP_MatMN zpp_inner;
		virtual int get_rows( );
		Dynamic get_rows_dyn();

		virtual int get_cols( );
		Dynamic get_cols_dyn();

		virtual Float x( int row,int col);
		Dynamic x_dyn();

		virtual Float setx( int row,int col,Float x);
		Dynamic setx_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::geom::MatMN transpose( );
		Dynamic transpose_dyn();

		virtual ::nape::geom::MatMN mul( ::nape::geom::MatMN matrix);
		Dynamic mul_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_MatMN */ 
