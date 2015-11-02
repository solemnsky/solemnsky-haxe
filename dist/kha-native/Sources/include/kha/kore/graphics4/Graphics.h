#ifndef INCLUDED_kha_kore_graphics4_Graphics
#define INCLUDED_kha_kore_graphics4_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Rectangle)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,CompareMode)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,CubeMap)
HX_DECLARE_CLASS2(kha,graphics4,CullMode)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,MipMapFilter)
HX_DECLARE_CLASS2(kha,graphics4,Program)
HX_DECLARE_CLASS2(kha,graphics4,StencilAction)
HX_DECLARE_CLASS2(kha,graphics4,TextureAddressing)
HX_DECLARE_CLASS2(kha,graphics4,TextureFilter)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,Usage)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,Graphics)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,math,Matrix4)
HX_DECLARE_CLASS2(kha,math,Vector2)
HX_DECLARE_CLASS2(kha,math,Vector3)
HX_DECLARE_CLASS2(kha,math,Vector4)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();
		Void __construct(::kha::Image target);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.graphics4.Graphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphics_obj > __new(::kha::Image target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::graphics4::Graphics_obj *();
		::String __ToString() const { return HX_HCSTRING("Graphics","\xeb","\xb4","\x19","\xec"); }

		::kha::Image target;
		virtual bool vsynced( );
		Dynamic vsynced_dyn();

		virtual int refreshRate( );
		Dynamic refreshRate_dyn();

		virtual Void clear( Dynamic color,Dynamic z,Dynamic stencil);
		Dynamic clear_dyn();

		virtual Void viewport( int x,int y,int width,int height);
		Dynamic viewport_dyn();

		virtual Void setDepthMode2( bool write,int mode);
		Dynamic setDepthMode2_dyn();

		virtual Void setDepthMode( bool write,::kha::graphics4::CompareMode mode);
		Dynamic setDepthMode_dyn();

		virtual int getBlendingMode( ::kha::graphics4::BlendingOperation op);
		Dynamic getBlendingMode_dyn();

		virtual Void setBlendingModeNative( int source,int destination);
		Dynamic setBlendingModeNative_dyn();

		virtual Void setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination);
		Dynamic setBlendingMode_dyn();

		virtual Void clear2( int flags,int color,Float z,int stencil);
		Dynamic clear2_dyn();

		virtual Void setVertexBuffer( ::kha::graphics4::VertexBuffer vertexBuffer);
		Dynamic setVertexBuffer_dyn();

		virtual Void setVertexBuffersInternal( ::kha::graphics4::VertexBuffer vb0,::kha::graphics4::VertexBuffer vb1,::kha::graphics4::VertexBuffer vb2,::kha::graphics4::VertexBuffer vb3,int count);
		Dynamic setVertexBuffersInternal_dyn();

		virtual Void setVertexBuffers( Array< ::Dynamic > vertexBuffers);
		Dynamic setVertexBuffers_dyn();

		virtual Void setIndexBuffer( ::kha::graphics4::IndexBuffer indexBuffer);
		Dynamic setIndexBuffer_dyn();

		virtual int maxTextureSize( );
		Dynamic maxTextureSize_dyn();

		virtual bool supportsNonPow2Textures( );
		Dynamic supportsNonPow2Textures_dyn();

		virtual ::kha::graphics4::CubeMap createCubeMap( int size,::kha::graphics4::TextureFormat format,::kha::graphics4::Usage usage,hx::Null< bool >  canRead);
		Dynamic createCubeMap_dyn();

		virtual Void setStencilParameters( ::kha::graphics4::CompareMode compareMode,::kha::graphics4::StencilAction bothPass,::kha::graphics4::StencilAction depthFail,::kha::graphics4::StencilAction stencilFail,int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask);
		Dynamic setStencilParameters_dyn();

		virtual Void setScissor( ::kha::Rectangle rect);
		Dynamic setScissor_dyn();

		virtual bool renderTargetsInvertedY( );
		Dynamic renderTargetsInvertedY_dyn();

		virtual bool instancedRenderingAvailable( );
		Dynamic instancedRenderingAvailable_dyn();

		virtual Void setTextureWrapNative( ::kha::kore::graphics4::TextureUnit unit,int uWrap,int vWrap);
		Dynamic setTextureWrapNative_dyn();

		virtual Void setTextureFiltersNative( ::kha::kore::graphics4::TextureUnit unit,int minificationFilter,int magnificationFilter,int mipMapFilter);
		Dynamic setTextureFiltersNative_dyn();

		virtual int getTextureAddressing( ::kha::graphics4::TextureAddressing addressing);
		Dynamic getTextureAddressing_dyn();

		virtual int getTextureFilter( ::kha::graphics4::TextureFilter filter);
		Dynamic getTextureFilter_dyn();

		virtual int getTextureMipMapFilter( ::kha::graphics4::MipMapFilter filter);
		Dynamic getTextureMipMapFilter_dyn();

		virtual Void setTextureParameters( ::kha::graphics4::TextureUnit texunit,::kha::graphics4::TextureAddressing uAddressing,::kha::graphics4::TextureAddressing vAddressing,::kha::graphics4::TextureFilter minificationFilter,::kha::graphics4::TextureFilter magnificationFilter,::kha::graphics4::MipMapFilter mipmapFilter);
		Dynamic setTextureParameters_dyn();

		virtual Void setCullModeNative( int value);
		Dynamic setCullModeNative_dyn();

		virtual Void setCullMode( ::kha::graphics4::CullMode mode);
		Dynamic setCullMode_dyn();

		virtual Void setTextureInternal( ::kha::kore::graphics4::TextureUnit unit,::kha::Image texture);
		Dynamic setTextureInternal_dyn();

		virtual Void setTexture( ::kha::graphics4::TextureUnit unit,::kha::Image texture);
		Dynamic setTexture_dyn();

		virtual Void setVideoTexture( ::kha::graphics4::TextureUnit unit,::kha::Video texture);
		Dynamic setVideoTexture_dyn();

		virtual Void setProgram( ::kha::graphics4::Program program);
		Dynamic setProgram_dyn();

		virtual Void setBool( ::kha::graphics4::ConstantLocation location,bool value);
		Dynamic setBool_dyn();

		virtual Void setBoolPrivate( ::kha::kore::graphics4::ConstantLocation location,bool value);
		Dynamic setBoolPrivate_dyn();

		virtual Void setInt( ::kha::graphics4::ConstantLocation location,int value);
		Dynamic setInt_dyn();

		virtual Void setIntPrivate( ::kha::kore::graphics4::ConstantLocation location,int value);
		Dynamic setIntPrivate_dyn();

		virtual Void setFloat( ::kha::graphics4::ConstantLocation location,Float value);
		Dynamic setFloat_dyn();

		virtual Void setFloatPrivate( ::kha::kore::graphics4::ConstantLocation location,Float value);
		Dynamic setFloatPrivate_dyn();

		virtual Void setFloat2( ::kha::graphics4::ConstantLocation location,Float value1,Float value2);
		Dynamic setFloat2_dyn();

		virtual Void setFloat2Private( ::kha::kore::graphics4::ConstantLocation location,Float value1,Float value2);
		Dynamic setFloat2Private_dyn();

		virtual Void setFloat3( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3);
		Dynamic setFloat3_dyn();

		virtual Void setFloat3Private( ::kha::kore::graphics4::ConstantLocation location,Float value1,Float value2,Float value3);
		Dynamic setFloat3Private_dyn();

		virtual Void setFloat4( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3,Float value4);
		Dynamic setFloat4_dyn();

		virtual Void setFloat4Private( ::kha::kore::graphics4::ConstantLocation location,Float value1,Float value2,Float value3,Float value4);
		Dynamic setFloat4Private_dyn();

		virtual Void setVector2( ::kha::graphics4::ConstantLocation location,::kha::math::Vector2 value);
		Dynamic setVector2_dyn();

		virtual Void setVector2Private( ::kha::kore::graphics4::ConstantLocation location,Float x,Float y);
		Dynamic setVector2Private_dyn();

		virtual Void setVector3( ::kha::graphics4::ConstantLocation location,::kha::math::Vector3 value);
		Dynamic setVector3_dyn();

		virtual Void setVector3Private( ::kha::kore::graphics4::ConstantLocation location,Float x,Float y,Float z);
		Dynamic setVector3Private_dyn();

		virtual Void setVector4( ::kha::graphics4::ConstantLocation location,::kha::math::Vector4 value);
		Dynamic setVector4_dyn();

		virtual Void setVector4Private( ::kha::kore::graphics4::ConstantLocation location,Float x,Float y,Float z,Float w);
		Dynamic setVector4Private_dyn();

		virtual Void setFloats( ::kha::graphics4::ConstantLocation location,Array< Float > values);
		Dynamic setFloats_dyn();

		virtual Void setFloatsPrivate( ::kha::kore::graphics4::ConstantLocation location,Array< Float > values);
		Dynamic setFloatsPrivate_dyn();

		virtual Void setMatrix( ::kha::graphics4::ConstantLocation location,::kha::math::Matrix4 matrix);
		Dynamic setMatrix_dyn();

		virtual Void drawIndexedVertices( hx::Null< int >  start,hx::Null< int >  count);
		Dynamic drawIndexedVertices_dyn();

		virtual Void drawAllIndexedVertices( );
		Dynamic drawAllIndexedVertices_dyn();

		virtual Void drawSomeIndexedVertices( int start,int count);
		Dynamic drawSomeIndexedVertices_dyn();

		virtual Void drawIndexedVerticesInstanced( int instanceCount,hx::Null< int >  start,hx::Null< int >  count);
		Dynamic drawIndexedVerticesInstanced_dyn();

		virtual Void drawAllIndexedVerticesInstanced( int instanceCount);
		Dynamic drawAllIndexedVerticesInstanced_dyn();

		virtual Void drawSomeIndexedVerticesInstanced( int instanceCount,int start,int count);
		Dynamic drawSomeIndexedVerticesInstanced_dyn();

		virtual Void renderToTexture( );
		Dynamic renderToTexture_dyn();

		virtual Void renderToBackbuffer( );
		Dynamic renderToBackbuffer_dyn();

		virtual Void begin( );
		Dynamic begin_dyn();

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void flush( );
		Dynamic flush_dyn();

};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_Graphics */ 
