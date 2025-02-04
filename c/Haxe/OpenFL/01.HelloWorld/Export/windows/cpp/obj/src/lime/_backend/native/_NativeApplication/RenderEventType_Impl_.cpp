#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventType_Impl_
#include <lime/_backend/native/_NativeApplication/RenderEventType_Impl_.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void RenderEventType_Impl__obj::__construct()
{
	return null();
}

//RenderEventType_Impl__obj::~RenderEventType_Impl__obj() { }

Dynamic RenderEventType_Impl__obj::__CreateEmpty() { return  new RenderEventType_Impl__obj; }
hx::ObjectPtr< RenderEventType_Impl__obj > RenderEventType_Impl__obj::__new()
{  hx::ObjectPtr< RenderEventType_Impl__obj > result = new RenderEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic RenderEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderEventType_Impl__obj > result = new RenderEventType_Impl__obj();
	result->__construct();
	return result;}

int RenderEventType_Impl__obj::RENDER;

int RenderEventType_Impl__obj::RENDER_CONTEXT_LOST;

int RenderEventType_Impl__obj::RENDER_CONTEXT_RESTORED;


RenderEventType_Impl__obj::RenderEventType_Impl__obj()
{
}

Dynamic RenderEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic RenderEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RENDER"),
	HX_CSTRING("RENDER_CONTEXT_LOST"),
	HX_CSTRING("RENDER_CONTEXT_RESTORED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderEventType_Impl__obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(RenderEventType_Impl__obj::RENDER_CONTEXT_LOST,"RENDER_CONTEXT_LOST");
	HX_MARK_MEMBER_NAME(RenderEventType_Impl__obj::RENDER_CONTEXT_RESTORED,"RENDER_CONTEXT_RESTORED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderEventType_Impl__obj::RENDER,"RENDER");
	HX_VISIT_MEMBER_NAME(RenderEventType_Impl__obj::RENDER_CONTEXT_LOST,"RENDER_CONTEXT_LOST");
	HX_VISIT_MEMBER_NAME(RenderEventType_Impl__obj::RENDER_CONTEXT_RESTORED,"RENDER_CONTEXT_RESTORED");
};

#endif

Class RenderEventType_Impl__obj::__mClass;

void RenderEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.RenderEventType_Impl_"), hx::TCanCast< RenderEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void RenderEventType_Impl__obj::__boot()
{
	RENDER= (int)0;
	RENDER_CONTEXT_LOST= (int)1;
	RENDER_CONTEXT_RESTORED= (int)2;
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
