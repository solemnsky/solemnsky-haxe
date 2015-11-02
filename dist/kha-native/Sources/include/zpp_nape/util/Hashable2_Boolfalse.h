#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#define INCLUDED_zpp_nape_util_Hashable2_Boolfalse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,util,Hashable2_Boolfalse)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Hashable2_Boolfalse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Hashable2_Boolfalse_obj OBJ_;
		Hashable2_Boolfalse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.Hashable2_Boolfalse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Hashable2_Boolfalse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hashable2_Boolfalse_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Hashable2_Boolfalse","\x04","\x8c","\xe8","\x61"); }

		static void __boot();
		static ::zpp_nape::util::Hashable2_Boolfalse zpp_pool;
		static ::zpp_nape::util::Hashable2_Boolfalse get( int id,int di,bool val);
		static Dynamic get_dyn();

		static ::zpp_nape::util::Hashable2_Boolfalse getpersist( int id,int di);
		static Dynamic getpersist_dyn();

		static ::zpp_nape::util::Hashable2_Boolfalse ordered_get( int id,int di,bool val);
		static Dynamic ordered_get_dyn();

		static ::zpp_nape::util::Hashable2_Boolfalse ordered_get_persist( int id,int di);
		static Dynamic ordered_get_persist_dyn();

		bool value;
		::zpp_nape::util::Hashable2_Boolfalse next;
		::zpp_nape::util::Hashable2_Boolfalse hnext;
		int id;
		int di;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_Hashable2_Boolfalse */ 
