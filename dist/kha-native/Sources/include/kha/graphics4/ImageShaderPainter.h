#ifndef INCLUDED_kha_graphics4_ImageShaderPainter
#define INCLUDED_kha_graphics4_ImageShaderPainter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,arrays,Float32Array)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,ImageShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,Program)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS2(kha,math,Matrix4)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  ImageShaderPainter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageShaderPainter_obj OBJ_;
		ImageShaderPainter_obj();
		Void __construct(::kha::graphics4::Graphics g4);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.ImageShaderPainter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ImageShaderPainter_obj > __new(::kha::graphics4::Graphics g4);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageShaderPainter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ImageShaderPainter","\xab","\x12","\xe2","\xb4"); }

		static void __boot();
		static int bufferSize;
		static int vertexSize;
		::kha::math::Matrix4 projectionMatrix;
		::kha::graphics4::Program shaderProgram;
		::kha::graphics4::VertexStructure structure;
		::kha::graphics4::ConstantLocation projectionLocation;
		::kha::graphics4::TextureUnit textureLocation;
		int bufferIndex;
		::kha::graphics4::VertexBuffer rectVertexBuffer;
		::kha::arrays::Float32Array rectVertices;
		::kha::graphics4::IndexBuffer indexBuffer;
		::kha::Image lastTexture;
		bool bilinear;
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

		virtual Void setRectVertices( ::cpp::Float32 bottomleftx,::cpp::Float32 bottomlefty,::cpp::Float32 topleftx,::cpp::Float32 toplefty,::cpp::Float32 toprightx,::cpp::Float32 toprighty,::cpp::Float32 bottomrightx,::cpp::Float32 bottomrighty);
		Dynamic setRectVertices_dyn();

		virtual Void setRectTexCoords( ::cpp::Float32 left,::cpp::Float32 top,::cpp::Float32 right,::cpp::Float32 bottom);
		Dynamic setRectTexCoords_dyn();

		virtual Void setRectColor( ::cpp::Float32 r,::cpp::Float32 g,::cpp::Float32 b,::cpp::Float32 a);
		Dynamic setRectColor_dyn();

		virtual Void drawBuffer( );
		Dynamic drawBuffer_dyn();

		virtual Void setBilinearFilter( bool bilinear);
		Dynamic setBilinearFilter_dyn();

		virtual Void drawImage( ::kha::Image img,::cpp::Float32 bottomleftx,::cpp::Float32 bottomlefty,::cpp::Float32 topleftx,::cpp::Float32 toplefty,::cpp::Float32 toprightx,::cpp::Float32 toprighty,::cpp::Float32 bottomrightx,::cpp::Float32 bottomrighty,::cpp::Float32 opacity,int color);
		Dynamic drawImage_dyn();

		virtual Void drawImage2( ::kha::Image img,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 bottomleftx,::cpp::Float32 bottomlefty,::cpp::Float32 topleftx,::cpp::Float32 toplefty,::cpp::Float32 toprightx,::cpp::Float32 toprighty,::cpp::Float32 bottomrightx,::cpp::Float32 bottomrighty,::cpp::Float32 opacity,int color);
		Dynamic drawImage2_dyn();

		virtual Void drawImageScale( ::kha::Image img,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 left,::cpp::Float32 top,::cpp::Float32 right,::cpp::Float32 bottom,::cpp::Float32 opacity,int color);
		Dynamic drawImageScale_dyn();

		virtual Void end( );
		Dynamic end_dyn();

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_ImageShaderPainter */ 
