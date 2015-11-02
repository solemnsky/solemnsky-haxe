#ifndef INCLUDED_nape_shape_EdgeIterator
#define INCLUDED_nape_shape_EdgeIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,shape,Edge)
HX_DECLARE_CLASS2(nape,shape,EdgeIterator)
HX_DECLARE_CLASS2(nape,shape,EdgeList)
namespace nape{
namespace shape{


class HXCPP_CLASS_ATTRIBUTES  EdgeIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EdgeIterator_obj OBJ_;
		EdgeIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.shape.EdgeIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EdgeIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EdgeIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EdgeIterator","\x6b","\x1f","\xfb","\x13"); }

		static void __boot();
		static ::nape::shape::EdgeIterator zpp_pool;
		static ::nape::shape::EdgeIterator get( ::nape::shape::EdgeList list);
		static Dynamic get_dyn();

		::nape::shape::EdgeList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::shape::EdgeIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::shape::Edge next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_EdgeIterator */ 
