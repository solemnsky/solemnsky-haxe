#ifndef INCLUDED_kha_loader_Room
#define INCLUDED_kha_loader_Room

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,loader,Room)
namespace kha{
namespace loader{


class HXCPP_CLASS_ATTRIBUTES  Room_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Room_obj OBJ_;
		Room_obj();
		Void __construct(::String name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.loader.Room")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Room_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Room_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"); }

		::String name;
		cpp::ArrayBase assets;
		::kha::loader::Room parent;
};

} // end namespace kha
} // end namespace loader

#endif /* INCLUDED_kha_loader_Room */ 
