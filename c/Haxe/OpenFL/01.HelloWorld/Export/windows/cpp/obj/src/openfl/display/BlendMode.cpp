#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
namespace openfl{
namespace display{

::openfl::display::BlendMode BlendMode_obj::ADD;

::openfl::display::BlendMode BlendMode_obj::ALPHA;

::openfl::display::BlendMode BlendMode_obj::DARKEN;

::openfl::display::BlendMode BlendMode_obj::DIFFERENCE;

::openfl::display::BlendMode BlendMode_obj::ERASE;

::openfl::display::BlendMode BlendMode_obj::HARDLIGHT;

::openfl::display::BlendMode BlendMode_obj::INVERT;

::openfl::display::BlendMode BlendMode_obj::LAYER;

::openfl::display::BlendMode BlendMode_obj::LIGHTEN;

::openfl::display::BlendMode BlendMode_obj::MULTIPLY;

::openfl::display::BlendMode BlendMode_obj::NORMAL;

::openfl::display::BlendMode BlendMode_obj::OVERLAY;

::openfl::display::BlendMode BlendMode_obj::SCREEN;

::openfl::display::BlendMode BlendMode_obj::SUBTRACT;

HX_DEFINE_CREATE_ENUM(BlendMode_obj)

int BlendMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ADD")) return 0;
	if (inName==HX_CSTRING("ALPHA")) return 1;
	if (inName==HX_CSTRING("DARKEN")) return 2;
	if (inName==HX_CSTRING("DIFFERENCE")) return 3;
	if (inName==HX_CSTRING("ERASE")) return 4;
	if (inName==HX_CSTRING("HARDLIGHT")) return 5;
	if (inName==HX_CSTRING("INVERT")) return 6;
	if (inName==HX_CSTRING("LAYER")) return 7;
	if (inName==HX_CSTRING("LIGHTEN")) return 8;
	if (inName==HX_CSTRING("MULTIPLY")) return 9;
	if (inName==HX_CSTRING("NORMAL")) return 10;
	if (inName==HX_CSTRING("OVERLAY")) return 11;
	if (inName==HX_CSTRING("SCREEN")) return 12;
	if (inName==HX_CSTRING("SUBTRACT")) return 13;
	return super::__FindIndex(inName);
}

int BlendMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ADD")) return 0;
	if (inName==HX_CSTRING("ALPHA")) return 0;
	if (inName==HX_CSTRING("DARKEN")) return 0;
	if (inName==HX_CSTRING("DIFFERENCE")) return 0;
	if (inName==HX_CSTRING("ERASE")) return 0;
	if (inName==HX_CSTRING("HARDLIGHT")) return 0;
	if (inName==HX_CSTRING("INVERT")) return 0;
	if (inName==HX_CSTRING("LAYER")) return 0;
	if (inName==HX_CSTRING("LIGHTEN")) return 0;
	if (inName==HX_CSTRING("MULTIPLY")) return 0;
	if (inName==HX_CSTRING("NORMAL")) return 0;
	if (inName==HX_CSTRING("OVERLAY")) return 0;
	if (inName==HX_CSTRING("SCREEN")) return 0;
	if (inName==HX_CSTRING("SUBTRACT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BlendMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ADD")) return ADD;
	if (inName==HX_CSTRING("ALPHA")) return ALPHA;
	if (inName==HX_CSTRING("DARKEN")) return DARKEN;
	if (inName==HX_CSTRING("DIFFERENCE")) return DIFFERENCE;
	if (inName==HX_CSTRING("ERASE")) return ERASE;
	if (inName==HX_CSTRING("HARDLIGHT")) return HARDLIGHT;
	if (inName==HX_CSTRING("INVERT")) return INVERT;
	if (inName==HX_CSTRING("LAYER")) return LAYER;
	if (inName==HX_CSTRING("LIGHTEN")) return LIGHTEN;
	if (inName==HX_CSTRING("MULTIPLY")) return MULTIPLY;
	if (inName==HX_CSTRING("NORMAL")) return NORMAL;
	if (inName==HX_CSTRING("OVERLAY")) return OVERLAY;
	if (inName==HX_CSTRING("SCREEN")) return SCREEN;
	if (inName==HX_CSTRING("SUBTRACT")) return SUBTRACT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("ADD"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("DARKEN"),
	HX_CSTRING("DIFFERENCE"),
	HX_CSTRING("ERASE"),
	HX_CSTRING("HARDLIGHT"),
	HX_CSTRING("INVERT"),
	HX_CSTRING("LAYER"),
	HX_CSTRING("LIGHTEN"),
	HX_CSTRING("MULTIPLY"),
	HX_CSTRING("NORMAL"),
	HX_CSTRING("OVERLAY"),
	HX_CSTRING("SCREEN"),
	HX_CSTRING("SUBTRACT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DARKEN,"DARKEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DIFFERENCE,"DIFFERENCE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::HARDLIGHT,"HARDLIGHT");
	HX_MARK_MEMBER_NAME(BlendMode_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(BlendMode_obj::LAYER,"LAYER");
	HX_MARK_MEMBER_NAME(BlendMode_obj::LIGHTEN,"LIGHTEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_MARK_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(BlendMode_obj::OVERLAY,"OVERLAY");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SUBTRACT,"SUBTRACT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DARKEN,"DARKEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DIFFERENCE,"DIFFERENCE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::HARDLIGHT,"HARDLIGHT");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::LAYER,"LAYER");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::LIGHTEN,"LIGHTEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::OVERLAY,"OVERLAY");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SUBTRACT,"SUBTRACT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BlendMode_obj::__mClass;

Dynamic __Create_BlendMode_obj() { return new BlendMode_obj; }

void BlendMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.BlendMode"), hx::TCanCast< BlendMode_obj >,sStaticFields,sMemberFields,
	&__Create_BlendMode_obj, &__Create,
	&super::__SGetClass(), &CreateBlendMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BlendMode_obj::__boot()
{
hx::Static(ADD) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("ADD"),0);
hx::Static(ALPHA) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("ALPHA"),1);
hx::Static(DARKEN) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("DARKEN"),2);
hx::Static(DIFFERENCE) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("DIFFERENCE"),3);
hx::Static(ERASE) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("ERASE"),4);
hx::Static(HARDLIGHT) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("HARDLIGHT"),5);
hx::Static(INVERT) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("INVERT"),6);
hx::Static(LAYER) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("LAYER"),7);
hx::Static(LIGHTEN) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("LIGHTEN"),8);
hx::Static(MULTIPLY) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("MULTIPLY"),9);
hx::Static(NORMAL) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("NORMAL"),10);
hx::Static(OVERLAY) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("OVERLAY"),11);
hx::Static(SCREEN) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("SCREEN"),12);
hx::Static(SUBTRACT) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("SUBTRACT"),13);
}


} // end namespace openfl
} // end namespace display
