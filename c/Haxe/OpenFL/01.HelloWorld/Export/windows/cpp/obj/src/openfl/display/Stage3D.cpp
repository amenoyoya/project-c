#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace display{

Void Stage3D_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Stage3D","new",0x52647737,"openfl.display.Stage3D.new","openfl/display/Stage3D.hx",22,0x37141b9b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct(null());
}
;
	return null();
}

//Stage3D_obj::~Stage3D_obj() { }

Dynamic Stage3D_obj::__CreateEmpty() { return  new Stage3D_obj; }
hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new()
{  hx::ObjectPtr< Stage3D_obj > result = new Stage3D_obj();
	result->__construct();
	return result;}

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3D_obj > result = new Stage3D_obj();
	result->__construct();
	return result;}

Void Stage3D_obj::requestContext3D( ::String __o_context3DRenderMode){
::String context3DRenderMode = __o_context3DRenderMode.Default(HX_CSTRING(""));
	HX_STACK_FRAME("openfl.display.Stage3D","requestContext3D",0x80c219da,"openfl.display.Stage3D.requestContext3D","openfl/display/Stage3D.hx",28,0x37141b9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context3DRenderMode,"context3DRenderMode")
{
		HX_STACK_LINE(28)
		if ((::openfl::display::OpenGLView_obj::get_isSupported())){
			HX_STACK_LINE(30)
			::openfl::display3D::Context3D _g = ::openfl::display3D::Context3D_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(30)
			this->context3D = _g;
			HX_STACK_LINE(31)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CONTEXT3D_CREATE,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(31)
			this->dispatchEvent(_g1);
		}
		else{
			HX_STACK_LINE(35)
			::openfl::events::ErrorEvent _g2 = ::openfl::events::ErrorEvent_obj::__new(::openfl::events::ErrorEvent_obj::ERROR,null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(35)
			this->dispatchEvent(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3D,(void))


Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return context3D; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return requestContext3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context3D"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Stage3D_obj,context3D),HX_CSTRING("context3D")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,visible),HX_CSTRING("visible")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("context3D"),
	HX_CSTRING("visible"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("requestContext3D"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#endif

Class Stage3D_obj::__mClass;

void Stage3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Stage3D"), hx::TCanCast< Stage3D_obj> ,sStaticFields,sMemberFields,
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

void Stage3D_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
