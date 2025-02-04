#include <hxcpp.h>

#ifndef INCLUDED_openfl_system_SecurityDomain
#include <openfl/system/SecurityDomain.h>
#endif
namespace openfl{
namespace system{

Void SecurityDomain_obj::__construct()
{
HX_STACK_FRAME("openfl.system.SecurityDomain","new",0x0cdddaf7,"openfl.system.SecurityDomain.new","openfl/system/SecurityDomain.hx",10,0x68641a39)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SecurityDomain_obj::~SecurityDomain_obj() { }

Dynamic SecurityDomain_obj::__CreateEmpty() { return  new SecurityDomain_obj; }
hx::ObjectPtr< SecurityDomain_obj > SecurityDomain_obj::__new()
{  hx::ObjectPtr< SecurityDomain_obj > result = new SecurityDomain_obj();
	result->__construct();
	return result;}

Dynamic SecurityDomain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SecurityDomain_obj > result = new SecurityDomain_obj();
	result->__construct();
	return result;}

::openfl::system::SecurityDomain SecurityDomain_obj::currentDomain;


SecurityDomain_obj::SecurityDomain_obj()
{
}

Dynamic SecurityDomain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { return currentDomain; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SecurityDomain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=inValue.Cast< ::openfl::system::SecurityDomain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SecurityDomain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("currentDomain"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SecurityDomain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SecurityDomain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

#endif

Class SecurityDomain_obj::__mClass;

void SecurityDomain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.system.SecurityDomain"), hx::TCanCast< SecurityDomain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void SecurityDomain_obj::__boot()
{
	currentDomain= ::openfl::system::SecurityDomain_obj::__new();
}

} // end namespace openfl
} // end namespace system
