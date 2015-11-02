#ifndef INCLUDED_kha_HighscoreList
#define INCLUDED_kha_HighscoreList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,HighscoreList)
HX_DECLARE_CLASS1(kha,Score)
HX_DECLARE_CLASS1(kha,StorageFile)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  HighscoreList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HighscoreList_obj OBJ_;
		HighscoreList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.HighscoreList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HighscoreList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HighscoreList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HighscoreList","\x0e","\xe9","\xdb","\x64"); }

		Array< ::Dynamic > scores;
		virtual Array< ::Dynamic > getScores( );
		Dynamic getScores_dyn();

		virtual Void addScore( ::String name,int score);
		Dynamic addScore_dyn();

		virtual Void load( ::kha::StorageFile file);
		Dynamic load_dyn();

		virtual Void save( ::kha::StorageFile file);
		Dynamic save_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_HighscoreList */ 
