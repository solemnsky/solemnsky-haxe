#ifndef INCLUDED_kha_vr_VrInterfaceEmulated
#define INCLUDED_kha_vr_VrInterfaceEmulated

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_vr_VrInterface
#include <kha/vr/VrInterface.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Key)
HX_DECLARE_CLASS2(kha,arrays,Float32Array)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,Program)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,math,Quaternion)
HX_DECLARE_CLASS2(kha,math,Vector2)
HX_DECLARE_CLASS2(kha,math,Vector3)
HX_DECLARE_CLASS2(kha,math,Vector4)
HX_DECLARE_CLASS2(kha,vr,SensorState)
HX_DECLARE_CLASS2(kha,vr,TimeWarpParms)
HX_DECLARE_CLASS2(kha,vr,VrInterface)
HX_DECLARE_CLASS2(kha,vr,VrInterfaceEmulated)
namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES  VrInterfaceEmulated_obj : public ::kha::vr::VrInterface_obj{
	public:
		typedef ::kha::vr::VrInterface_obj super;
		typedef VrInterfaceEmulated_obj OBJ_;
		VrInterfaceEmulated_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.vr.VrInterfaceEmulated")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VrInterfaceEmulated_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VrInterfaceEmulated_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VrInterfaceEmulated","\x2e","\x40","\x8d","\x24"); }

		static void __boot();
		static Float keyboardSpeed;
		static Float mouseSpeed;
		static Float minPitchDegrees;
		static Float maxPitchDegrees;
		::kha::Framebuffer framebuffer;
		::kha::math::Quaternion orientation;
		Float pitchDegrees;
		Float yawDegrees;
		Float pitchDelta;
		Float yawDelta;
		virtual Float degreesToRadians( Float degrees);
		Dynamic degreesToRadians_dyn();

		virtual Void updateOrientation( );
		Dynamic updateOrientation_dyn();

		virtual Void buttonEvent( int button,Float value);
		Dynamic buttonEvent_dyn();

		virtual Void axisEvent( int axis,Float value);
		Dynamic axisEvent_dyn();

		virtual Void keyDownEvent( ::kha::Key key,::String _char);
		Dynamic keyDownEvent_dyn();

		virtual Void keyUpEvent( ::kha::Key key,::String _char);
		Dynamic keyUpEvent_dyn();

		int oldMouseX;
		int oldMouseY;
		virtual Void mouseMoveEvent( int x,int y,int movementX,int movementY);
		Dynamic mouseMoveEvent_dyn();

		bool mouseButtonDown;
		virtual Void mouseButtonDownEvent( int button,int x,int y);
		Dynamic mouseButtonDownEvent_dyn();

		virtual Void mouseButtonUpEvent( int button,int x,int y);
		Dynamic mouseButtonUpEvent_dyn();

		virtual ::kha::vr::SensorState GetSensorState( );

		virtual ::kha::vr::SensorState GetPredictedSensorState( Float time);

		virtual Void WarpSwapBlack( );

		virtual Void WarpSwapLoadingIcon( );

		virtual Void WarpSwap( ::kha::vr::TimeWarpParms parms);

		virtual Float GetTimeInSeconds( );

		::kha::graphics4::VertexBuffer vb;
		::kha::graphics4::IndexBuffer ib;
		::kha::graphics4::Program program;
		virtual Void setVertex( ::kha::arrays::Float32Array a,int index,::kha::math::Vector3 pos,::kha::math::Vector2 uv,::kha::math::Vector4 color);
		Dynamic setVertex_dyn();

};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_VrInterfaceEmulated */ 
