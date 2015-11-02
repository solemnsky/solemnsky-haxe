#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#define INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,util,FastHash2_Hashable2_Boolfalse)
HX_DECLARE_CLASS2(zpp_nape,util,Hashable2_Boolfalse)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FastHash2_Hashable2_Boolfalse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FastHash2_Hashable2_Boolfalse_obj OBJ_;
		FastHash2_Hashable2_Boolfalse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.FastHash2_Hashable2_Boolfalse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FastHash2_Hashable2_Boolfalse_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FastHash2_Hashable2_Boolfalse","\x4d","\xb3","\xf5","\x56"); }

		Array< ::Dynamic > table;
		int cnt;
		virtual bool empty( );
		Dynamic empty_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::zpp_nape::util::Hashable2_Boolfalse get( int id,int di);
		Dynamic get_dyn();

		virtual ::zpp_nape::util::Hashable2_Boolfalse ordered_get( int id,int di);
		Dynamic ordered_get_dyn();

		virtual bool has( int id,int di);
		Dynamic has_dyn();

		virtual Void maybeAdd( ::zpp_nape::util::Hashable2_Boolfalse arb);
		Dynamic maybeAdd_dyn();

		virtual Void add( ::zpp_nape::util::Hashable2_Boolfalse arb);
		Dynamic add_dyn();

		virtual Void remove( ::zpp_nape::util::Hashable2_Boolfalse arb);
		Dynamic remove_dyn();

		virtual int hash( int id,int di);
		Dynamic hash_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse */ 
