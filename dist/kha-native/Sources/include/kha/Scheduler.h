#ifndef INCLUDED_kha_Scheduler
#define INCLUDED_kha_Scheduler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,FrameTask)
HX_DECLARE_CLASS1(kha,Scheduler)
HX_DECLARE_CLASS1(kha,TimeTask)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Scheduler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Scheduler_obj OBJ_;
		Scheduler_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Scheduler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scheduler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scheduler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Scheduler","\x1b","\x22","\x45","\xab"); }

		static void __boot();
		static Array< ::Dynamic > timeTasks;
		static Array< ::Dynamic > frameTasks;
		static Array< ::Dynamic > toDeleteTime;
		static Array< ::Dynamic > toDeleteFrame;
		static Float current;
		static Float lastTime;
		static bool frame_tasks_sorted;
		static bool stopped;
		static bool vsync;
		static Float onedifhz;
		static int currentFrameTaskId;
		static int currentTimeTaskId;
		static int currentGroupId;
		static int DIF_COUNT;
		static Float maxframetime;
		static Array< Float > deltas;
		static Float startTime;
		static Float lastNow;
		static Void init( );
		static Dynamic init_dyn();

		static Void start( hx::Null< bool >  restartTimers);
		static Dynamic start_dyn();

		static Void stop( );
		static Dynamic stop_dyn();

		static bool isStopped( );
		static Dynamic isStopped_dyn();

		static Void back( Float time);
		static Dynamic back_dyn();

		static Void executeFrame( );
		static Dynamic executeFrame_dyn();

		static Float time( );
		static Dynamic time_dyn();

		static Float realTime( );
		static Dynamic realTime_dyn();

		static Void resetTime( );
		static Dynamic resetTime_dyn();

		static int addBreakableFrameTask( Dynamic task,int priority);
		static Dynamic addBreakableFrameTask_dyn();

		static int addFrameTask( Dynamic task,int priority);
		static Dynamic addFrameTask_dyn();

		static Void pauseFrameTask( int id,bool paused);
		static Dynamic pauseFrameTask_dyn();

		static Void removeFrameTask( int id);
		static Dynamic removeFrameTask_dyn();

		static int generateGroupId( );
		static Dynamic generateGroupId_dyn();

		static int addBreakableTimeTaskToGroup( int groupId,Dynamic task,Float start,hx::Null< Float >  period,hx::Null< Float >  duration);
		static Dynamic addBreakableTimeTaskToGroup_dyn();

		static int addTimeTaskToGroup( int groupId,Dynamic task,Float start,hx::Null< Float >  period,hx::Null< Float >  duration);
		static Dynamic addTimeTaskToGroup_dyn();

		static int addBreakableTimeTask( Dynamic task,Float start,hx::Null< Float >  period,hx::Null< Float >  duration);
		static Dynamic addBreakableTimeTask_dyn();

		static int addTimeTask( Dynamic task,Float start,hx::Null< Float >  period,hx::Null< Float >  duration);
		static Dynamic addTimeTask_dyn();

		static ::kha::TimeTask getTimeTask( int id);
		static Dynamic getTimeTask_dyn();

		static Void pauseTimeTask( int id,bool paused);
		static Dynamic pauseTimeTask_dyn();

		static Void pauseTimeTasks( int groupId,bool paused);
		static Dynamic pauseTimeTasks_dyn();

		static Void removeTimeTask( int id);
		static Dynamic removeTimeTask_dyn();

		static Void removeTimeTasks( int groupId);
		static Dynamic removeTimeTasks_dyn();

		static int numTasksInSchedule( );
		static Dynamic numTasksInSchedule_dyn();

		static Void insertSorted( Array< ::Dynamic > list,::kha::TimeTask task);
		static Dynamic insertSorted_dyn();

		static Void sortFrameTasks( );
		static Dynamic sortFrameTasks_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Scheduler */ 
