#ifndef INCLUDED_kha_graphics4_Graphics
#define INCLUDED_kha_graphics4_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
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
HX_DECLARE_CLASS2(kha,math,Matrix4)
HX_DECLARE_CLASS2(kha,math,Vector2)
HX_DECLARE_CLASS2(kha,math,Vector3)
HX_DECLARE_CLASS2(kha,math,Vector4)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Graphics_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void begin( )=0;
virtual Dynamic begin_dyn()=0;
		virtual Void end( )=0;
virtual Dynamic end_dyn()=0;
		virtual bool vsynced( )=0;
virtual Dynamic vsynced_dyn()=0;
		virtual int refreshRate( )=0;
virtual Dynamic refreshRate_dyn()=0;
		virtual Void clear( Dynamic color,Dynamic depth,Dynamic stencil)=0;
virtual Dynamic clear_dyn()=0;
		virtual Void viewport( int x,int y,int width,int height)=0;
virtual Dynamic viewport_dyn()=0;
		virtual Void setCullMode( ::kha::graphics4::CullMode mode)=0;
virtual Dynamic setCullMode_dyn()=0;
		virtual Void setDepthMode( bool write,::kha::graphics4::CompareMode mode)=0;
virtual Dynamic setDepthMode_dyn()=0;
		virtual Void setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination)=0;
virtual Dynamic setBlendingMode_dyn()=0;
		virtual Void setStencilParameters( ::kha::graphics4::CompareMode compareMode,::kha::graphics4::StencilAction bothPass,::kha::graphics4::StencilAction depthFail,::kha::graphics4::StencilAction stencilFail,int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask)=0;
virtual Dynamic setStencilParameters_dyn()=0;
		virtual Void setScissor( ::kha::Rectangle rect)=0;
virtual Dynamic setScissor_dyn()=0;
		virtual Void setVertexBuffer( ::kha::graphics4::VertexBuffer vertexBuffer)=0;
virtual Dynamic setVertexBuffer_dyn()=0;
		virtual Void setVertexBuffers( Array< ::Dynamic > vertexBuffers)=0;
virtual Dynamic setVertexBuffers_dyn()=0;
		virtual Void setIndexBuffer( ::kha::graphics4::IndexBuffer indexBuffer)=0;
virtual Dynamic setIndexBuffer_dyn()=0;
		virtual Void setTexture( ::kha::graphics4::TextureUnit unit,::kha::Image texture)=0;
virtual Dynamic setTexture_dyn()=0;
		virtual Void setVideoTexture( ::kha::graphics4::TextureUnit unit,::kha::Video texture)=0;
virtual Dynamic setVideoTexture_dyn()=0;
		virtual Void setTextureParameters( ::kha::graphics4::TextureUnit texunit,::kha::graphics4::TextureAddressing uAddressing,::kha::graphics4::TextureAddressing vAddressing,::kha::graphics4::TextureFilter minificationFilter,::kha::graphics4::TextureFilter magnificationFilter,::kha::graphics4::MipMapFilter mipmapFilter)=0;
virtual Dynamic setTextureParameters_dyn()=0;
		virtual ::kha::graphics4::CubeMap createCubeMap( int size,::kha::graphics4::TextureFormat format,::kha::graphics4::Usage usage,hx::Null< bool >  canRead)=0;
virtual Dynamic createCubeMap_dyn()=0;
		virtual bool renderTargetsInvertedY( )=0;
virtual Dynamic renderTargetsInvertedY_dyn()=0;
		virtual bool instancedRenderingAvailable( )=0;
virtual Dynamic instancedRenderingAvailable_dyn()=0;
		virtual Void setProgram( ::kha::graphics4::Program program)=0;
virtual Dynamic setProgram_dyn()=0;
		virtual Void setBool( ::kha::graphics4::ConstantLocation location,bool value)=0;
virtual Dynamic setBool_dyn()=0;
		virtual Void setInt( ::kha::graphics4::ConstantLocation location,int value)=0;
virtual Dynamic setInt_dyn()=0;
		virtual Void setFloat( ::kha::graphics4::ConstantLocation location,Float value)=0;
virtual Dynamic setFloat_dyn()=0;
		virtual Void setFloat2( ::kha::graphics4::ConstantLocation location,Float value1,Float value2)=0;
virtual Dynamic setFloat2_dyn()=0;
		virtual Void setFloat3( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3)=0;
virtual Dynamic setFloat3_dyn()=0;
		virtual Void setFloat4( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3,Float value4)=0;
virtual Dynamic setFloat4_dyn()=0;
		virtual Void setFloats( ::kha::graphics4::ConstantLocation location,Array< Float > floats)=0;
virtual Dynamic setFloats_dyn()=0;
		virtual Void setVector2( ::kha::graphics4::ConstantLocation location,::kha::math::Vector2 value)=0;
virtual Dynamic setVector2_dyn()=0;
		virtual Void setVector3( ::kha::graphics4::ConstantLocation location,::kha::math::Vector3 value)=0;
virtual Dynamic setVector3_dyn()=0;
		virtual Void setVector4( ::kha::graphics4::ConstantLocation location,::kha::math::Vector4 value)=0;
virtual Dynamic setVector4_dyn()=0;
		virtual Void setMatrix( ::kha::graphics4::ConstantLocation location,::kha::math::Matrix4 value)=0;
virtual Dynamic setMatrix_dyn()=0;
		virtual Void drawIndexedVertices( hx::Null< int >  start,hx::Null< int >  count)=0;
virtual Dynamic drawIndexedVertices_dyn()=0;
		virtual Void drawIndexedVerticesInstanced( int instanceCount,hx::Null< int >  start,hx::Null< int >  count)=0;
virtual Dynamic drawIndexedVerticesInstanced_dyn()=0;
		virtual Void flush( )=0;
virtual Dynamic flush_dyn()=0;
};



template<typename IMPL>
class Graphics_delegate_ : public Graphics_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Graphics_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void begin( ) { return mDelegate->begin();}
		Dynamic begin_dyn() { return mDelegate->begin_dyn();}
		Void end( ) { return mDelegate->end();}
		Dynamic end_dyn() { return mDelegate->end_dyn();}
		bool vsynced( ) { return mDelegate->vsynced();}
		Dynamic vsynced_dyn() { return mDelegate->vsynced_dyn();}
		int refreshRate( ) { return mDelegate->refreshRate();}
		Dynamic refreshRate_dyn() { return mDelegate->refreshRate_dyn();}
		Void clear( Dynamic color,Dynamic depth,Dynamic stencil) { return mDelegate->clear(color,depth,stencil);}
		Dynamic clear_dyn() { return mDelegate->clear_dyn();}
		Void viewport( int x,int y,int width,int height) { return mDelegate->viewport(x,y,width,height);}
		Dynamic viewport_dyn() { return mDelegate->viewport_dyn();}
		Void setCullMode( ::kha::graphics4::CullMode mode) { return mDelegate->setCullMode(mode);}
		Dynamic setCullMode_dyn() { return mDelegate->setCullMode_dyn();}
		Void setDepthMode( bool write,::kha::graphics4::CompareMode mode) { return mDelegate->setDepthMode(write,mode);}
		Dynamic setDepthMode_dyn() { return mDelegate->setDepthMode_dyn();}
		Void setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination) { return mDelegate->setBlendingMode(source,destination);}
		Dynamic setBlendingMode_dyn() { return mDelegate->setBlendingMode_dyn();}
		Void setStencilParameters( ::kha::graphics4::CompareMode compareMode,::kha::graphics4::StencilAction bothPass,::kha::graphics4::StencilAction depthFail,::kha::graphics4::StencilAction stencilFail,int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask) { return mDelegate->setStencilParameters(compareMode,bothPass,depthFail,stencilFail,referenceValue,readMask,writeMask);}
		Dynamic setStencilParameters_dyn() { return mDelegate->setStencilParameters_dyn();}
		Void setScissor( ::kha::Rectangle rect) { return mDelegate->setScissor(rect);}
		Dynamic setScissor_dyn() { return mDelegate->setScissor_dyn();}
		Void setVertexBuffer( ::kha::graphics4::VertexBuffer vertexBuffer) { return mDelegate->setVertexBuffer(vertexBuffer);}
		Dynamic setVertexBuffer_dyn() { return mDelegate->setVertexBuffer_dyn();}
		Void setVertexBuffers( Array< ::Dynamic > vertexBuffers) { return mDelegate->setVertexBuffers(vertexBuffers);}
		Dynamic setVertexBuffers_dyn() { return mDelegate->setVertexBuffers_dyn();}
		Void setIndexBuffer( ::kha::graphics4::IndexBuffer indexBuffer) { return mDelegate->setIndexBuffer(indexBuffer);}
		Dynamic setIndexBuffer_dyn() { return mDelegate->setIndexBuffer_dyn();}
		Void setTexture( ::kha::graphics4::TextureUnit unit,::kha::Image texture) { return mDelegate->setTexture(unit,texture);}
		Dynamic setTexture_dyn() { return mDelegate->setTexture_dyn();}
		Void setVideoTexture( ::kha::graphics4::TextureUnit unit,::kha::Video texture) { return mDelegate->setVideoTexture(unit,texture);}
		Dynamic setVideoTexture_dyn() { return mDelegate->setVideoTexture_dyn();}
		Void setTextureParameters( ::kha::graphics4::TextureUnit texunit,::kha::graphics4::TextureAddressing uAddressing,::kha::graphics4::TextureAddressing vAddressing,::kha::graphics4::TextureFilter minificationFilter,::kha::graphics4::TextureFilter magnificationFilter,::kha::graphics4::MipMapFilter mipmapFilter) { return mDelegate->setTextureParameters(texunit,uAddressing,vAddressing,minificationFilter,magnificationFilter,mipmapFilter);}
		Dynamic setTextureParameters_dyn() { return mDelegate->setTextureParameters_dyn();}
		::kha::graphics4::CubeMap createCubeMap( int size,::kha::graphics4::TextureFormat format,::kha::graphics4::Usage usage,hx::Null< bool >  canRead) { return mDelegate->createCubeMap(size,format,usage,canRead);}
		Dynamic createCubeMap_dyn() { return mDelegate->createCubeMap_dyn();}
		bool renderTargetsInvertedY( ) { return mDelegate->renderTargetsInvertedY();}
		Dynamic renderTargetsInvertedY_dyn() { return mDelegate->renderTargetsInvertedY_dyn();}
		bool instancedRenderingAvailable( ) { return mDelegate->instancedRenderingAvailable();}
		Dynamic instancedRenderingAvailable_dyn() { return mDelegate->instancedRenderingAvailable_dyn();}
		Void setProgram( ::kha::graphics4::Program program) { return mDelegate->setProgram(program);}
		Dynamic setProgram_dyn() { return mDelegate->setProgram_dyn();}
		Void setBool( ::kha::graphics4::ConstantLocation location,bool value) { return mDelegate->setBool(location,value);}
		Dynamic setBool_dyn() { return mDelegate->setBool_dyn();}
		Void setInt( ::kha::graphics4::ConstantLocation location,int value) { return mDelegate->setInt(location,value);}
		Dynamic setInt_dyn() { return mDelegate->setInt_dyn();}
		Void setFloat( ::kha::graphics4::ConstantLocation location,Float value) { return mDelegate->setFloat(location,value);}
		Dynamic setFloat_dyn() { return mDelegate->setFloat_dyn();}
		Void setFloat2( ::kha::graphics4::ConstantLocation location,Float value1,Float value2) { return mDelegate->setFloat2(location,value1,value2);}
		Dynamic setFloat2_dyn() { return mDelegate->setFloat2_dyn();}
		Void setFloat3( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3) { return mDelegate->setFloat3(location,value1,value2,value3);}
		Dynamic setFloat3_dyn() { return mDelegate->setFloat3_dyn();}
		Void setFloat4( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3,Float value4) { return mDelegate->setFloat4(location,value1,value2,value3,value4);}
		Dynamic setFloat4_dyn() { return mDelegate->setFloat4_dyn();}
		Void setFloats( ::kha::graphics4::ConstantLocation location,Array< Float > floats) { return mDelegate->setFloats(location,floats);}
		Dynamic setFloats_dyn() { return mDelegate->setFloats_dyn();}
		Void setVector2( ::kha::graphics4::ConstantLocation location,::kha::math::Vector2 value) { return mDelegate->setVector2(location,value);}
		Dynamic setVector2_dyn() { return mDelegate->setVector2_dyn();}
		Void setVector3( ::kha::graphics4::ConstantLocation location,::kha::math::Vector3 value) { return mDelegate->setVector3(location,value);}
		Dynamic setVector3_dyn() { return mDelegate->setVector3_dyn();}
		Void setVector4( ::kha::graphics4::ConstantLocation location,::kha::math::Vector4 value) { return mDelegate->setVector4(location,value);}
		Dynamic setVector4_dyn() { return mDelegate->setVector4_dyn();}
		Void setMatrix( ::kha::graphics4::ConstantLocation location,::kha::math::Matrix4 value) { return mDelegate->setMatrix(location,value);}
		Dynamic setMatrix_dyn() { return mDelegate->setMatrix_dyn();}
		Void drawIndexedVertices( hx::Null< int >  start,hx::Null< int >  count) { return mDelegate->drawIndexedVertices(start,count);}
		Dynamic drawIndexedVertices_dyn() { return mDelegate->drawIndexedVertices_dyn();}
		Void drawIndexedVerticesInstanced( int instanceCount,hx::Null< int >  start,hx::Null< int >  count) { return mDelegate->drawIndexedVerticesInstanced(instanceCount,start,count);}
		Dynamic drawIndexedVerticesInstanced_dyn() { return mDelegate->drawIndexedVerticesInstanced_dyn();}
		Void flush( ) { return mDelegate->flush();}
		Dynamic flush_dyn() { return mDelegate->flush_dyn();}
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_Graphics */ 
