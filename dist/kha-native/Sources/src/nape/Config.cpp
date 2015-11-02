#include <hxcpp.h>

#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
namespace nape{

Void Config_obj::__construct()
{
HX_STACK_FRAME("nape.Config","new",0xbc5e2e9a,"nape.Config.new","nape/Config.hx",9,0x5f8e99f5)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Config_obj::~Config_obj() { }

Dynamic Config_obj::__CreateEmpty() { return  new Config_obj; }
hx::ObjectPtr< Config_obj > Config_obj::__new()
{  hx::ObjectPtr< Config_obj > _result_ = new Config_obj();
	_result_->__construct();
	return _result_;}

Dynamic Config_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Config_obj > _result_ = new Config_obj();
	_result_->__construct();
	return _result_;}

Float Config_obj::epsilon;

Float Config_obj::fluidAngularDragFriction;

Float Config_obj::fluidAngularDrag;

Float Config_obj::fluidVacuumDrag;

Float Config_obj::fluidLinearDrag;

Float Config_obj::collisionSlop;

Float Config_obj::collisionSlopCCD;

Float Config_obj::distanceThresholdCCD;

Float Config_obj::staticCCDLinearThreshold;

Float Config_obj::staticCCDAngularThreshold;

Float Config_obj::bulletCCDLinearThreshold;

Float Config_obj::bulletCCDAngularThreshold;

Float Config_obj::dynamicSweepLinearThreshold;

Float Config_obj::dynamicSweepAngularThreshold;

Float Config_obj::angularCCDSlipScale;

int Config_obj::arbiterExpirationDelay;

Float Config_obj::staticFrictionThreshold;

Float Config_obj::elasticThreshold;

int Config_obj::sleepDelay;

Float Config_obj::linearSleepThreshold;

Float Config_obj::angularSleepThreshold;

Float Config_obj::contactBiasCoef;

Float Config_obj::contactStaticBiasCoef;

Float Config_obj::contactContinuousBiasCoef;

Float Config_obj::contactContinuousStaticBiasCoef;

Float Config_obj::constraintLinearSlop;

Float Config_obj::constraintAngularSlop;

Float Config_obj::illConditionedThreshold;


Config_obj::Config_obj()
{
}

bool Config_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { outValue = epsilon; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sleepDelay") ) { outValue = sleepDelay; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionSlop") ) { outValue = collisionSlop; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fluidVacuumDrag") ) { outValue = fluidVacuumDrag; return true;  }
		if (HX_FIELD_EQ(inName,"fluidLinearDrag") ) { outValue = fluidLinearDrag; return true;  }
		if (HX_FIELD_EQ(inName,"contactBiasCoef") ) { outValue = contactBiasCoef; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fluidAngularDrag") ) { outValue = fluidAngularDrag; return true;  }
		if (HX_FIELD_EQ(inName,"collisionSlopCCD") ) { outValue = collisionSlopCCD; return true;  }
		if (HX_FIELD_EQ(inName,"elasticThreshold") ) { outValue = elasticThreshold; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularCCDSlipScale") ) { outValue = angularCCDSlipScale; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"distanceThresholdCCD") ) { outValue = distanceThresholdCCD; return true;  }
		if (HX_FIELD_EQ(inName,"linearSleepThreshold") ) { outValue = linearSleepThreshold; return true;  }
		if (HX_FIELD_EQ(inName,"constraintLinearSlop") ) { outValue = constraintLinearSlop; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"angularSleepThreshold") ) { outValue = angularSleepThreshold; return true;  }
		if (HX_FIELD_EQ(inName,"contactStaticBiasCoef") ) { outValue = contactStaticBiasCoef; return true;  }
		if (HX_FIELD_EQ(inName,"constraintAngularSlop") ) { outValue = constraintAngularSlop; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"arbiterExpirationDelay") ) { outValue = arbiterExpirationDelay; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"staticFrictionThreshold") ) { outValue = staticFrictionThreshold; return true;  }
		if (HX_FIELD_EQ(inName,"illConditionedThreshold") ) { outValue = illConditionedThreshold; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"fluidAngularDragFriction") ) { outValue = fluidAngularDragFriction; return true;  }
		if (HX_FIELD_EQ(inName,"staticCCDLinearThreshold") ) { outValue = staticCCDLinearThreshold; return true;  }
		if (HX_FIELD_EQ(inName,"bulletCCDLinearThreshold") ) { outValue = bulletCCDLinearThreshold; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"staticCCDAngularThreshold") ) { outValue = staticCCDAngularThreshold; return true;  }
		if (HX_FIELD_EQ(inName,"bulletCCDAngularThreshold") ) { outValue = bulletCCDAngularThreshold; return true;  }
		if (HX_FIELD_EQ(inName,"contactContinuousBiasCoef") ) { outValue = contactContinuousBiasCoef; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"dynamicSweepLinearThreshold") ) { outValue = dynamicSweepLinearThreshold; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"dynamicSweepAngularThreshold") ) { outValue = dynamicSweepAngularThreshold; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"contactContinuousStaticBiasCoef") ) { outValue = contactContinuousStaticBiasCoef; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Config_obj::epsilon,HX_HCSTRING("epsilon","\x6a","\xb5","\xbe","\xac")},
	{hx::fsFloat,(void *) &Config_obj::fluidAngularDragFriction,HX_HCSTRING("fluidAngularDragFriction","\x26","\x07","\xb7","\xe8")},
	{hx::fsFloat,(void *) &Config_obj::fluidAngularDrag,HX_HCSTRING("fluidAngularDrag","\x0c","\xe6","\x94","\xfb")},
	{hx::fsFloat,(void *) &Config_obj::fluidVacuumDrag,HX_HCSTRING("fluidVacuumDrag","\x73","\x4b","\xc6","\x0a")},
	{hx::fsFloat,(void *) &Config_obj::fluidLinearDrag,HX_HCSTRING("fluidLinearDrag","\x23","\x0f","\x1a","\xdd")},
	{hx::fsFloat,(void *) &Config_obj::collisionSlop,HX_HCSTRING("collisionSlop","\x8c","\xd3","\x8b","\x2c")},
	{hx::fsFloat,(void *) &Config_obj::collisionSlopCCD,HX_HCSTRING("collisionSlopCCD","\x98","\xfd","\x16","\xd1")},
	{hx::fsFloat,(void *) &Config_obj::distanceThresholdCCD,HX_HCSTRING("distanceThresholdCCD","\xae","\x05","\x89","\x27")},
	{hx::fsFloat,(void *) &Config_obj::staticCCDLinearThreshold,HX_HCSTRING("staticCCDLinearThreshold","\xf0","\x7b","\xb6","\x14")},
	{hx::fsFloat,(void *) &Config_obj::staticCCDAngularThreshold,HX_HCSTRING("staticCCDAngularThreshold","\x3f","\x06","\xd5","\x58")},
	{hx::fsFloat,(void *) &Config_obj::bulletCCDLinearThreshold,HX_HCSTRING("bulletCCDLinearThreshold","\x84","\x26","\x2c","\x43")},
	{hx::fsFloat,(void *) &Config_obj::bulletCCDAngularThreshold,HX_HCSTRING("bulletCCDAngularThreshold","\x2b","\x9d","\x54","\xd1")},
	{hx::fsFloat,(void *) &Config_obj::dynamicSweepLinearThreshold,HX_HCSTRING("dynamicSweepLinearThreshold","\x99","\x4d","\x9b","\x9c")},
	{hx::fsFloat,(void *) &Config_obj::dynamicSweepAngularThreshold,HX_HCSTRING("dynamicSweepAngularThreshold","\x76","\xa8","\x27","\xb9")},
	{hx::fsFloat,(void *) &Config_obj::angularCCDSlipScale,HX_HCSTRING("angularCCDSlipScale","\x48","\xa1","\x74","\xa2")},
	{hx::fsInt,(void *) &Config_obj::arbiterExpirationDelay,HX_HCSTRING("arbiterExpirationDelay","\xeb","\x97","\x56","\x94")},
	{hx::fsFloat,(void *) &Config_obj::staticFrictionThreshold,HX_HCSTRING("staticFrictionThreshold","\xc3","\xfa","\xd5","\xc0")},
	{hx::fsFloat,(void *) &Config_obj::elasticThreshold,HX_HCSTRING("elasticThreshold","\x16","\x3f","\x87","\x62")},
	{hx::fsInt,(void *) &Config_obj::sleepDelay,HX_HCSTRING("sleepDelay","\xec","\xb6","\x77","\x8a")},
	{hx::fsFloat,(void *) &Config_obj::linearSleepThreshold,HX_HCSTRING("linearSleepThreshold","\x59","\x98","\xfa","\xf1")},
	{hx::fsFloat,(void *) &Config_obj::angularSleepThreshold,HX_HCSTRING("angularSleepThreshold","\x16","\xd6","\x01","\x9c")},
	{hx::fsFloat,(void *) &Config_obj::contactBiasCoef,HX_HCSTRING("contactBiasCoef","\xe6","\xcf","\xff","\x89")},
	{hx::fsFloat,(void *) &Config_obj::contactStaticBiasCoef,HX_HCSTRING("contactStaticBiasCoef","\xb4","\x56","\x1c","\xb7")},
	{hx::fsFloat,(void *) &Config_obj::contactContinuousBiasCoef,HX_HCSTRING("contactContinuousBiasCoef","\x15","\xa8","\xb2","\xf7")},
	{hx::fsFloat,(void *) &Config_obj::contactContinuousStaticBiasCoef,HX_HCSTRING("contactContinuousStaticBiasCoef","\x23","\xfc","\xf1","\x34")},
	{hx::fsFloat,(void *) &Config_obj::constraintLinearSlop,HX_HCSTRING("constraintLinearSlop","\x3c","\xad","\xd8","\x5c")},
	{hx::fsFloat,(void *) &Config_obj::constraintAngularSlop,HX_HCSTRING("constraintAngularSlop","\x9f","\x3c","\x70","\xad")},
	{hx::fsFloat,(void *) &Config_obj::illConditionedThreshold,HX_HCSTRING("illConditionedThreshold","\x5a","\x3f","\x3e","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Config_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Config_obj::epsilon,"epsilon");
	HX_MARK_MEMBER_NAME(Config_obj::fluidAngularDragFriction,"fluidAngularDragFriction");
	HX_MARK_MEMBER_NAME(Config_obj::fluidAngularDrag,"fluidAngularDrag");
	HX_MARK_MEMBER_NAME(Config_obj::fluidVacuumDrag,"fluidVacuumDrag");
	HX_MARK_MEMBER_NAME(Config_obj::fluidLinearDrag,"fluidLinearDrag");
	HX_MARK_MEMBER_NAME(Config_obj::collisionSlop,"collisionSlop");
	HX_MARK_MEMBER_NAME(Config_obj::collisionSlopCCD,"collisionSlopCCD");
	HX_MARK_MEMBER_NAME(Config_obj::distanceThresholdCCD,"distanceThresholdCCD");
	HX_MARK_MEMBER_NAME(Config_obj::staticCCDLinearThreshold,"staticCCDLinearThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::staticCCDAngularThreshold,"staticCCDAngularThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::bulletCCDLinearThreshold,"bulletCCDLinearThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::bulletCCDAngularThreshold,"bulletCCDAngularThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::dynamicSweepLinearThreshold,"dynamicSweepLinearThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::dynamicSweepAngularThreshold,"dynamicSweepAngularThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::angularCCDSlipScale,"angularCCDSlipScale");
	HX_MARK_MEMBER_NAME(Config_obj::arbiterExpirationDelay,"arbiterExpirationDelay");
	HX_MARK_MEMBER_NAME(Config_obj::staticFrictionThreshold,"staticFrictionThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::elasticThreshold,"elasticThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::sleepDelay,"sleepDelay");
	HX_MARK_MEMBER_NAME(Config_obj::linearSleepThreshold,"linearSleepThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::angularSleepThreshold,"angularSleepThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::contactBiasCoef,"contactBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::contactStaticBiasCoef,"contactStaticBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::contactContinuousBiasCoef,"contactContinuousBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::contactContinuousStaticBiasCoef,"contactContinuousStaticBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::constraintLinearSlop,"constraintLinearSlop");
	HX_MARK_MEMBER_NAME(Config_obj::constraintAngularSlop,"constraintAngularSlop");
	HX_MARK_MEMBER_NAME(Config_obj::illConditionedThreshold,"illConditionedThreshold");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Config_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Config_obj::epsilon,"epsilon");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidAngularDragFriction,"fluidAngularDragFriction");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidAngularDrag,"fluidAngularDrag");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidVacuumDrag,"fluidVacuumDrag");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidLinearDrag,"fluidLinearDrag");
	HX_VISIT_MEMBER_NAME(Config_obj::collisionSlop,"collisionSlop");
	HX_VISIT_MEMBER_NAME(Config_obj::collisionSlopCCD,"collisionSlopCCD");
	HX_VISIT_MEMBER_NAME(Config_obj::distanceThresholdCCD,"distanceThresholdCCD");
	HX_VISIT_MEMBER_NAME(Config_obj::staticCCDLinearThreshold,"staticCCDLinearThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::staticCCDAngularThreshold,"staticCCDAngularThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::bulletCCDLinearThreshold,"bulletCCDLinearThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::bulletCCDAngularThreshold,"bulletCCDAngularThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::dynamicSweepLinearThreshold,"dynamicSweepLinearThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::dynamicSweepAngularThreshold,"dynamicSweepAngularThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::angularCCDSlipScale,"angularCCDSlipScale");
	HX_VISIT_MEMBER_NAME(Config_obj::arbiterExpirationDelay,"arbiterExpirationDelay");
	HX_VISIT_MEMBER_NAME(Config_obj::staticFrictionThreshold,"staticFrictionThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::elasticThreshold,"elasticThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::sleepDelay,"sleepDelay");
	HX_VISIT_MEMBER_NAME(Config_obj::linearSleepThreshold,"linearSleepThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::angularSleepThreshold,"angularSleepThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::contactBiasCoef,"contactBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::contactStaticBiasCoef,"contactStaticBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::contactContinuousBiasCoef,"contactContinuousBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::contactContinuousStaticBiasCoef,"contactContinuousStaticBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::constraintLinearSlop,"constraintLinearSlop");
	HX_VISIT_MEMBER_NAME(Config_obj::constraintAngularSlop,"constraintAngularSlop");
	HX_VISIT_MEMBER_NAME(Config_obj::illConditionedThreshold,"illConditionedThreshold");
};

#endif

hx::Class Config_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("epsilon","\x6a","\xb5","\xbe","\xac"),
	HX_HCSTRING("fluidAngularDragFriction","\x26","\x07","\xb7","\xe8"),
	HX_HCSTRING("fluidAngularDrag","\x0c","\xe6","\x94","\xfb"),
	HX_HCSTRING("fluidVacuumDrag","\x73","\x4b","\xc6","\x0a"),
	HX_HCSTRING("fluidLinearDrag","\x23","\x0f","\x1a","\xdd"),
	HX_HCSTRING("collisionSlop","\x8c","\xd3","\x8b","\x2c"),
	HX_HCSTRING("collisionSlopCCD","\x98","\xfd","\x16","\xd1"),
	HX_HCSTRING("distanceThresholdCCD","\xae","\x05","\x89","\x27"),
	HX_HCSTRING("staticCCDLinearThreshold","\xf0","\x7b","\xb6","\x14"),
	HX_HCSTRING("staticCCDAngularThreshold","\x3f","\x06","\xd5","\x58"),
	HX_HCSTRING("bulletCCDLinearThreshold","\x84","\x26","\x2c","\x43"),
	HX_HCSTRING("bulletCCDAngularThreshold","\x2b","\x9d","\x54","\xd1"),
	HX_HCSTRING("dynamicSweepLinearThreshold","\x99","\x4d","\x9b","\x9c"),
	HX_HCSTRING("dynamicSweepAngularThreshold","\x76","\xa8","\x27","\xb9"),
	HX_HCSTRING("angularCCDSlipScale","\x48","\xa1","\x74","\xa2"),
	HX_HCSTRING("arbiterExpirationDelay","\xeb","\x97","\x56","\x94"),
	HX_HCSTRING("staticFrictionThreshold","\xc3","\xfa","\xd5","\xc0"),
	HX_HCSTRING("elasticThreshold","\x16","\x3f","\x87","\x62"),
	HX_HCSTRING("sleepDelay","\xec","\xb6","\x77","\x8a"),
	HX_HCSTRING("linearSleepThreshold","\x59","\x98","\xfa","\xf1"),
	HX_HCSTRING("angularSleepThreshold","\x16","\xd6","\x01","\x9c"),
	HX_HCSTRING("contactBiasCoef","\xe6","\xcf","\xff","\x89"),
	HX_HCSTRING("contactStaticBiasCoef","\xb4","\x56","\x1c","\xb7"),
	HX_HCSTRING("contactContinuousBiasCoef","\x15","\xa8","\xb2","\xf7"),
	HX_HCSTRING("contactContinuousStaticBiasCoef","\x23","\xfc","\xf1","\x34"),
	HX_HCSTRING("constraintLinearSlop","\x3c","\xad","\xd8","\x5c"),
	HX_HCSTRING("constraintAngularSlop","\x9f","\x3c","\x70","\xad"),
	HX_HCSTRING("illConditionedThreshold","\x5a","\x3f","\x3e","\xbd"),
	::String(null()) };

void Config_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.Config","\xa8","\x99","\x90","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Config_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Config_obj >;
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

void Config_obj::__boot()
{
	epsilon= ((Float)1e-8);
	fluidAngularDragFriction= ((Float)2.5);
	fluidAngularDrag= ((Float)100);
	fluidVacuumDrag= ((Float)0.5);
	fluidLinearDrag= ((Float)0.5);
	collisionSlop= ((Float)0.2);
	collisionSlopCCD= ((Float)0.5);
	distanceThresholdCCD= ((Float)0.05);
	staticCCDLinearThreshold= ((Float)0.05);
	staticCCDAngularThreshold= ((Float)0.005);
	bulletCCDLinearThreshold= ((Float)0.125);
	bulletCCDAngularThreshold= ((Float)0.0125);
	dynamicSweepLinearThreshold= ((Float)17);
	dynamicSweepAngularThreshold= ((Float)0.6);
	angularCCDSlipScale= ((Float)0.75);
	arbiterExpirationDelay= (int)6;
	staticFrictionThreshold= ((Float)2);
	elasticThreshold= ((Float)20);
	sleepDelay= (int)60;
	linearSleepThreshold= ((Float)0.2);
	angularSleepThreshold= ((Float)0.4);
	contactBiasCoef= ((Float)0.3);
	contactStaticBiasCoef= ((Float)0.6);
	contactContinuousBiasCoef= ((Float)0.4);
	contactContinuousStaticBiasCoef= ((Float)0.5);
	constraintLinearSlop= ((Float)0.1);
	constraintAngularSlop= ((Float)1e-3);
	illConditionedThreshold= ((Float)2e+8);
}

} // end namespace nape
