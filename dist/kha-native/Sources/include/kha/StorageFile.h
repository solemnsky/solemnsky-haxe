#ifndef INCLUDED_kha_StorageFile
#define INCLUDED_kha_StorageFile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,StorageFile)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  StorageFile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StorageFile_obj OBJ_;
		StorageFile_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.StorageFile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StorageFile_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StorageFile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StorageFile","\x37","\x2b","\x70","\x1f"); }

		virtual ::kha::Blob read( );
		Dynamic read_dyn();

		virtual Void write( ::kha::Blob data);
		Dynamic write_dyn();

		virtual Void append( ::kha::Blob data);
		Dynamic append_dyn();

		virtual bool canAppend( );
		Dynamic canAppend_dyn();

		virtual int maxSize( );
		Dynamic maxSize_dyn();

		virtual Void writeString( ::String data);
		Dynamic writeString_dyn();

		virtual Void appendString( ::String data);
		Dynamic appendString_dyn();

		virtual ::String readString( );
		Dynamic readString_dyn();

		virtual Void writeObject( Dynamic object);
		Dynamic writeObject_dyn();

		virtual Dynamic readObject( );
		Dynamic readObject_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_StorageFile */ 
