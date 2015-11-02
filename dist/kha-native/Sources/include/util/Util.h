#ifndef INCLUDED_util_Util
#define INCLUDED_util_Util

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS1(util,Util)
HX_DECLARE_CLASS1(util,Vector)
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Util_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Util_obj OBJ_;
		Util_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="util.Util")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Util_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Util_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Util","\x22","\x84","\x87","\x38"); }

		static ::nape::geom::Vec2 napeFromVector( ::util::Vector vec);
		static Dynamic napeFromVector_dyn();

		static ::util::Vector vectorFromNape( ::nape::geom::Vec2 vec);
		static Dynamic vectorFromNape_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_Util */ 
