#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_Program
#include <kha/graphics4/Program.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#include <kha/kore/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#include <kha/kore/graphics4/TextureUnit.h>
#endif
namespace kha{
namespace graphics4{

Void Program_obj::__construct()
{
HX_STACK_FRAME("kha.graphics4.Program","new",0xa4368ea7,"kha.graphics4.Program.new","kha/graphics4/Program.hx",17,0xb592146b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->init();
}
;
	return null();
}

//Program_obj::~Program_obj() { }

Dynamic Program_obj::__CreateEmpty() { return  new Program_obj; }
hx::ObjectPtr< Program_obj > Program_obj::__new()
{  hx::ObjectPtr< Program_obj > _result_ = new Program_obj();
	_result_->__construct();
	return _result_;}

Dynamic Program_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program_obj > _result_ = new Program_obj();
	_result_->__construct();
	return _result_;}

Void Program_obj::init( ){

		program = new Kore::Program();
	
{
		HX_STACK_FRAME("kha.graphics4.Program","init",0x083efae9,"kha.graphics4.Program.init","kha/graphics4/Program.hx",23,0xb592146b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program_obj,init,(void))

Void Program_obj::setVertexShader( ::kha::graphics4::VertexShader shader){
{
		HX_STACK_FRAME("kha.graphics4.Program","setVertexShader",0x00561132,"kha.graphics4.Program.setVertexShader","kha/graphics4/Program.hx",27,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(28)
		::kha::graphics4::VertexShader tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		this->setVertexShaderImpl(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,setVertexShader,(void))

Void Program_obj::setVertexShaderImpl( ::kha::graphics4::VertexShader shader){

		program->setVertexShader(shader->shader);
	
{
		HX_STACK_FRAME("kha.graphics4.Program","setVertexShaderImpl",0xadcf3d32,"kha.graphics4.Program.setVertexShaderImpl","kha/graphics4/Program.hx",34,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,setVertexShaderImpl,(void))

Void Program_obj::setFragmentShader( ::kha::graphics4::FragmentShader shader){
{
		HX_STACK_FRAME("kha.graphics4.Program","setFragmentShader",0xcd7a62de,"kha.graphics4.Program.setFragmentShader","kha/graphics4/Program.hx",38,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(39)
		::kha::graphics4::FragmentShader tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		this->setFragmentShaderImpl(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,setFragmentShader,(void))

Void Program_obj::setFragmentShaderImpl( ::kha::graphics4::FragmentShader shader){

		program->setFragmentShader(shader->shader);
	
{
		HX_STACK_FRAME("kha.graphics4.Program","setFragmentShaderImpl",0x5adbd4de,"kha.graphics4.Program.setFragmentShaderImpl","kha/graphics4/Program.hx",45,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,setFragmentShaderImpl,(void))

Void Program_obj::link( ::kha::graphics4::VertexStructure structure){

		Kore::VertexStructure structure2;
		for (int i = 0; i < structure->size(); ++i) {
			Kore::VertexData data;
			switch (structure->get(i)->data->index) {
			case 0:
				data = Kore::Float1VertexData;
				break;
			case 1:
				data = Kore::Float2VertexData;
				break;
			case 2:
				data = Kore::Float3VertexData;
				break;
			case 3:
				data = Kore::Float4VertexData;
				break;
			}
			structure2.add(structure->get(i)->name, data);
		}
		program->link(structure2);
	
{
		HX_STACK_FRAME("kha.graphics4.Program","link",0x0a36d7d3,"kha.graphics4.Program.link","kha/graphics4/Program.hx",71,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(structure,"structure")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,link,(void))

Void Program_obj::linkWithStructures2( ::kha::graphics4::VertexStructure structure0,::kha::graphics4::VertexStructure structure1,::kha::graphics4::VertexStructure structure2,::kha::graphics4::VertexStructure structure3,int size){

		Kore::VertexStructure s0, s1, s2, s3;
		Kore::VertexStructure* structures2[4] = { &s0, &s1, &s2, &s3 };
		::kha::graphics4::VertexStructure* structures[4] = { &structure0, &structure1, &structure2, &structure3 };
		for (int i1 = 0; i1 < size; ++i1) {
			for (int i2 = 0; i2 < (*structures[i1])->size(); ++i2) {
				Kore::VertexData data;
				switch ((*structures[i1])->get(i2)->data->index) {
				case 0:
					data = Kore::Float1VertexData;
					break;
				case 1:
					data = Kore::Float2VertexData;
					break;
				case 2:
					data = Kore::Float3VertexData;
					break;
				case 3:
					data = Kore::Float4VertexData;
					break;
				}
				structures2[i1]->add((*structures[i1])->get(i2)->name, data);
			}
		}
		program->link(structures2, size);
	
{
		HX_STACK_FRAME("kha.graphics4.Program","linkWithStructures2",0x6a82d459,"kha.graphics4.Program.linkWithStructures2","kha/graphics4/Program.hx",101,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(structure0,"structure0")
		HX_STACK_ARG(structure1,"structure1")
		HX_STACK_ARG(structure2,"structure2")
		HX_STACK_ARG(structure3,"structure3")
		HX_STACK_ARG(size,"size")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Program_obj,linkWithStructures2,(void))

Void Program_obj::linkWithStructures( Array< ::Dynamic > structures){
{
		HX_STACK_FRAME("kha.graphics4.Program","linkWithStructures",0x5a052db9,"kha.graphics4.Program.linkWithStructures","kha/graphics4/Program.hx",105,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(structures,"structures")
		HX_STACK_LINE(107)
		bool tmp = (structures->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::kha::graphics4::VertexStructure tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(107)
			tmp1 = structures->__get((int)0).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(107)
			tmp1 = null();
		}
		HX_STACK_LINE(108)
		bool tmp2 = (structures->length > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::kha::graphics4::VertexStructure tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		if ((tmp2)){
			HX_STACK_LINE(108)
			tmp3 = structures->__get((int)1).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(108)
			tmp3 = null();
		}
		HX_STACK_LINE(109)
		bool tmp4 = (structures->length > (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		::kha::graphics4::VertexStructure tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		if ((tmp4)){
			HX_STACK_LINE(109)
			tmp5 = structures->__get((int)2).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(109)
			tmp5 = null();
		}
		HX_STACK_LINE(110)
		bool tmp6 = (structures->length > (int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		::kha::graphics4::VertexStructure tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(110)
		if ((tmp6)){
			HX_STACK_LINE(110)
			tmp7 = structures->__get((int)3).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(110)
			tmp7 = null();
		}
		HX_STACK_LINE(111)
		int tmp8 = structures->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		this->linkWithStructures2(tmp1,tmp3,tmp5,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,linkWithStructures,(void))

::kha::graphics4::ConstantLocation Program_obj::getConstantLocation( ::String name){
	HX_STACK_FRAME("kha.graphics4.Program","getConstantLocation",0x399054b6,"kha.graphics4.Program.getConstantLocation","kha/graphics4/Program.hx",114,0xb592146b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(115)
	::kha::kore::graphics4::ConstantLocation location = ::kha::kore::graphics4::ConstantLocation_obj::__new();		HX_STACK_VAR(location,"location");
	HX_STACK_LINE(116)
	::kha::kore::graphics4::ConstantLocation tmp = location;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	this->initConstantLocation(tmp,tmp1);
	HX_STACK_LINE(117)
	::kha::kore::graphics4::ConstantLocation tmp2 = location;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,getConstantLocation,return )

Void Program_obj::initConstantLocation( ::kha::kore::graphics4::ConstantLocation location,::String name){

		location->location = program->getConstantLocation(name.c_str());
	
{
		HX_STACK_FRAME("kha.graphics4.Program","initConstantLocation",0x7943e8c2,"kha.graphics4.Program.initConstantLocation","kha/graphics4/Program.hx",123,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program_obj,initConstantLocation,(void))

::kha::graphics4::TextureUnit Program_obj::getTextureUnit( ::String name){
	HX_STACK_FRAME("kha.graphics4.Program","getTextureUnit",0xde988522,"kha.graphics4.Program.getTextureUnit","kha/graphics4/Program.hx",127,0xb592146b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(128)
	::kha::kore::graphics4::TextureUnit unit = ::kha::kore::graphics4::TextureUnit_obj::__new();		HX_STACK_VAR(unit,"unit");
	HX_STACK_LINE(129)
	::kha::kore::graphics4::TextureUnit tmp = unit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	this->initTextureUnit(tmp,tmp1);
	HX_STACK_LINE(130)
	::kha::kore::graphics4::TextureUnit tmp2 = unit;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,getTextureUnit,return )

Void Program_obj::initTextureUnit( ::kha::kore::graphics4::TextureUnit unit,::String name){

		unit->unit = program->getTextureUnit(name.c_str());
	
{
		HX_STACK_FRAME("kha.graphics4.Program","initTextureUnit",0x35256c96,"kha.graphics4.Program.initTextureUnit","kha/graphics4/Program.hx",136,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program_obj,initTextureUnit,(void))

Void Program_obj::set( ){

		program->set();
	
{
		HX_STACK_FRAME("kha.graphics4.Program","set",0xa43a59e9,"kha.graphics4.Program.set","kha/graphics4/Program.hx",143,0xb592146b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program_obj,set,(void))

Void Program_obj::unused( ){
{
		HX_STACK_FRAME("kha.graphics4.Program","unused",0xa658c12f,"kha.graphics4.Program.unused","kha/graphics4/Program.hx",148,0xb592146b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::kha::graphics4::VertexElement include = ::kha::graphics4::VertexElement_obj::__new(HX_HCSTRING("include","\x28","\xfe","\xf6","\x51"),::kha::graphics4::VertexData_obj::Float2);		HX_STACK_VAR(include,"include");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program_obj,unused,(void))


Program_obj::Program_obj()
{
}

Dynamic Program_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"link") ) { return link_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unused") ) { return unused_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTextureUnit") ) { return getTextureUnit_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setVertexShader") ) { return setVertexShader_dyn(); }
		if (HX_FIELD_EQ(inName,"initTextureUnit") ) { return initTextureUnit_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setFragmentShader") ) { return setFragmentShader_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"linkWithStructures") ) { return linkWithStructures_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setVertexShaderImpl") ) { return setVertexShaderImpl_dyn(); }
		if (HX_FIELD_EQ(inName,"linkWithStructures2") ) { return linkWithStructures2_dyn(); }
		if (HX_FIELD_EQ(inName,"getConstantLocation") ) { return getConstantLocation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initConstantLocation") ) { return initConstantLocation_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setFragmentShaderImpl") ) { return setFragmentShaderImpl_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("setVertexShader","\x6b","\x84","\xeb","\xdb"),
	HX_HCSTRING("setVertexShaderImpl","\xeb","\x40","\x71","\x5e"),
	HX_HCSTRING("setFragmentShader","\x57","\xd6","\xbd","\xcf"),
	HX_HCSTRING("setFragmentShaderImpl","\xd7","\xf8","\xd0","\xfa"),
	HX_HCSTRING("link","\xfa","\x17","\xb3","\x47"),
	HX_HCSTRING("linkWithStructures2","\x12","\xd8","\x24","\x1b"),
	HX_HCSTRING("linkWithStructures","\x20","\xc4","\xc6","\x52"),
	HX_HCSTRING("getConstantLocation","\x6f","\x58","\x32","\xea"),
	HX_HCSTRING("initConstantLocation","\xe9","\x26","\x65","\x56"),
	HX_HCSTRING("getTextureUnit","\x09","\x1c","\xc7","\x8b"),
	HX_HCSTRING("initTextureUnit","\xcf","\xdf","\xba","\x10"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unused","\x16","\x99","\x82","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program_obj::__mClass,"__mClass");
};

#endif

hx::Class Program_obj::__mClass;

void Program_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.Program","\x35","\xaf","\xba","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Program_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
