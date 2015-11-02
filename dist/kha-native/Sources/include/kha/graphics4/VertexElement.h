#ifndef INCLUDED_kha_graphics4_VertexElement
#define INCLUDED_kha_graphics4_VertexElement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,VertexData)
HX_DECLARE_CLASS2(kha,graphics4,VertexElement)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  VertexElement_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexElement_obj OBJ_;
		VertexElement_obj();
		Void __construct(::String name,::kha::graphics4::VertexData data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.VertexElement")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexElement_obj > __new(::String name,::kha::graphics4::VertexData data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexElement_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexElement","\x98","\x3f","\x84","\xc0"); }

		::String name;
		::kha::graphics4::VertexData data;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexElement */ 
