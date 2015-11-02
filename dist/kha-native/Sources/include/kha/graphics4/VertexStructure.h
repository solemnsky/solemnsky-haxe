#ifndef INCLUDED_kha_graphics4_VertexStructure
#define INCLUDED_kha_graphics4_VertexStructure

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,VertexData)
HX_DECLARE_CLASS2(kha,graphics4,VertexElement)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  VertexStructure_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexStructure_obj OBJ_;
		VertexStructure_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.VertexStructure")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexStructure_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexStructure_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexStructure","\x0f","\xd4","\x29","\x99"); }

		Array< ::Dynamic > elements;
		virtual Void add( ::String name,::kha::graphics4::VertexData data);
		Dynamic add_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual ::kha::graphics4::VertexElement get( int index);
		Dynamic get_dyn();

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexStructure */ 
