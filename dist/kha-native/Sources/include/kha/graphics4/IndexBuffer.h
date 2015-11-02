#ifndef INCLUDED_kha_graphics4_IndexBuffer
#define INCLUDED_kha_graphics4_IndexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,Usage)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  IndexBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IndexBuffer_obj OBJ_;
		IndexBuffer_obj();
		Void __construct(int indexCount,::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.IndexBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IndexBuffer_obj > __new(int indexCount,::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IndexBuffer","\x92","\xfd","\xd8","\xd9"); }

		Array< int > data;
		int myCount;
		virtual Void init( int count);
		Dynamic init_dyn();

		virtual Array< int > lock( );
		Dynamic lock_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

		virtual int count( );
		Dynamic count_dyn();

Kore::IndexBuffer* buffer;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_IndexBuffer */ 
