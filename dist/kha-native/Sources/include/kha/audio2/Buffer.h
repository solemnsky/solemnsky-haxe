#ifndef INCLUDED_kha_audio2_Buffer
#define INCLUDED_kha_audio2_Buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,audio2,Buffer)
namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES  Buffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Buffer_obj OBJ_;
		Buffer_obj();
		Void __construct(int size,int channels,int samplesPerSecond);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.Buffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Buffer_obj > __new(int size,int channels,int samplesPerSecond);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Buffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Buffer","\x20","\x31","\x29","\x05"); }

		int channels;
		int samplesPerSecond;
		Array< Float > data;
		int size;
		int readLocation;
		int writeLocation;
};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_Buffer */ 
