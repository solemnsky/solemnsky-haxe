#ifndef INCLUDED_kha_Score
#define INCLUDED_kha_Score

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Score)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Score_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Score_obj OBJ_;
		Score_obj();
		Void __construct(::String name,int score);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Score")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Score_obj > __new(::String name,int score);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Score_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Score","\x32","\xe3","\x06","\x0c"); }

		::String name;
		int score;
		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual int getScore( );
		Dynamic getScore_dyn();

		virtual Void increase( int amount);
		Dynamic increase_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Score */ 
