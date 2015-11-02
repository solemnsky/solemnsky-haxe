#ifndef INCLUDED_kha_graphics4_TextShaderPainter
#define INCLUDED_kha_graphics4_TextShaderPainter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,arrays,Float32Array)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,Program)
HX_DECLARE_CLASS2(kha,graphics4,TextShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
HX_DECLARE_CLASS2(kha,math,Matrix4)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  TextShaderPainter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextShaderPainter_obj OBJ_;
		TextShaderPainter_obj();
		Void __construct(::kha::graphics4::Graphics g4);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.TextShaderPainter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextShaderPainter_obj > __new(::kha::graphics4::Graphics g4);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextShaderPainter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextShaderPainter","\xd9","\x95","\x31","\x16"); }

		static void __boot();
		static int bufferSize;
		::kha::math::Matrix4 projectionMatrix;
		::kha::graphics4::Program shaderProgram;
		::kha::graphics4::VertexStructure structure;
		::kha::graphics4::ConstantLocation projectionLocation;
		::kha::graphics4::TextureUnit textureLocation;
		int bufferIndex;
		::kha::graphics4::VertexBuffer rectVertexBuffer;
		::kha::arrays::Float32Array rectVertices;
		::kha::graphics4::IndexBuffer indexBuffer;
		::kha::Kravur font;
		::kha::Image lastTexture;
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

		virtual Void setRectTexCoords( Float left,Float top,Float right,Float bottom);
		Dynamic setRectTexCoords_dyn();

		virtual Void setRectColors( int color);
		Dynamic setRectColors_dyn();

		virtual Void drawBuffer( );
		Dynamic drawBuffer_dyn();

		virtual Void setFont( ::kha::Font font);
		Dynamic setFont_dyn();

		::String text;
		virtual Void startString( ::String text);
		Dynamic startString_dyn();

		virtual int charCodeAt( int position);
		Dynamic charCodeAt_dyn();

		virtual int stringLength( );
		Dynamic stringLength_dyn();

		virtual Void endString( );
		Dynamic endString_dyn();

		virtual Void drawString( ::String text,int color,Float x,Float y,::kha::math::FastMatrix3 transformation);
		Dynamic drawString_dyn();

		virtual Void end( );
		Dynamic end_dyn();

const wchar_t* wtext;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_TextShaderPainter */ 
