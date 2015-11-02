#ifndef INCLUDED_kha_graphics4_ColoredShaderPainter
#define INCLUDED_kha_graphics4_ColoredShaderPainter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,arrays,Float32Array)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,ColoredShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,Program)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS2(kha,math,Matrix4)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  ColoredShaderPainter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColoredShaderPainter_obj OBJ_;
		ColoredShaderPainter_obj();
		Void __construct(::kha::graphics4::Graphics g4);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.ColoredShaderPainter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColoredShaderPainter_obj > __new(::kha::graphics4::Graphics g4);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColoredShaderPainter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ColoredShaderPainter","\x24","\x65","\x04","\x89"); }

		static void __boot();
		static int bufferSize;
		static int triangleBufferSize;
		::kha::math::Matrix4 projectionMatrix;
		::kha::graphics4::Program shaderProgram;
		::kha::graphics4::VertexStructure structure;
		::kha::graphics4::ConstantLocation projectionLocation;
		int bufferIndex;
		::kha::graphics4::VertexBuffer rectVertexBuffer;
		::kha::arrays::Float32Array rectVertices;
		::kha::graphics4::IndexBuffer indexBuffer;
		int triangleBufferIndex;
		::kha::graphics4::VertexBuffer triangleVertexBuffer;
		::kha::arrays::Float32Array triangleVertices;
		::kha::graphics4::IndexBuffer triangleIndexBuffer;
		::kha::graphics4::Graphics g;
		::kha::graphics4::Program myProgram;
		::kha::graphics4::BlendingOperation sourceBlend;
		::kha::graphics4::BlendingOperation destinationBlend;
		virtual ::kha::graphics4::Program get_program( );
		Dynamic get_program_dyn();

		virtual ::kha::graphics4::Program set_program( ::kha::graphics4::Program prog);
		Dynamic set_program_dyn();

		virtual Void setProjection( ::kha::math::Matrix4 projectionMatrix);
		Dynamic setProjection_dyn();

		virtual Void initShaders( );
		Dynamic initShaders_dyn();

		virtual Void initBuffers( );
		Dynamic initBuffers_dyn();

		virtual Void setRectVertices( Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty);
		Dynamic setRectVertices_dyn();

		virtual Void setRectColors( int color);
		Dynamic setRectColors_dyn();

		virtual Void setTriVertices( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		Dynamic setTriVertices_dyn();

		virtual Void setTriColors( int color);
		Dynamic setTriColors_dyn();

		virtual Void drawBuffer( bool trisDone);
		Dynamic drawBuffer_dyn();

		virtual Void drawTriBuffer( bool rectsDone);
		Dynamic drawTriBuffer_dyn();

		virtual Void fillRect( int color,Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty);
		Dynamic fillRect_dyn();

		virtual Void fillTriangle( int color,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		Dynamic fillTriangle_dyn();

		virtual Void endTris( bool rectsDone);
		Dynamic endTris_dyn();

		virtual Void endRects( bool trisDone);
		Dynamic endRects_dyn();

		virtual Void end( );
		Dynamic end_dyn();

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_ColoredShaderPainter */ 
