#ifndef INCLUDED_kha_TimeTask
#define INCLUDED_kha_TimeTask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,TimeTask)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  TimeTask_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimeTask_obj OBJ_;
		TimeTask_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.TimeTask")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimeTask_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimeTask_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TimeTask","\x12","\xfe","\x09","\xc7"); }

		Dynamic task;
		Dynamic &task_dyn() { return task;}
		Float start;
		Float period;
		Float duration;
		Float next;
		int id;
		int groupId;
		bool active;
		bool paused;
};

} // end namespace kha

#endif /* INCLUDED_kha_TimeTask */ 
