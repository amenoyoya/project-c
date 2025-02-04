#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_FlashAudioContext
#include <lime/audio/FlashAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_HTML5AudioContext
#include <lime/audio/HTML5AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_WebAudioContext
#include <lime/audio/WebAudioContext.h>
#endif
namespace lime{
namespace audio{

::lime::audio::AudioContext  AudioContext_obj::CUSTOM(Dynamic data)
	{ return hx::CreateEnum< AudioContext_obj >(HX_CSTRING("CUSTOM"),4,hx::DynamicArray(0,1).Add(data)); }

::lime::audio::AudioContext  AudioContext_obj::FLASH(::lime::audio::FlashAudioContext context)
	{ return hx::CreateEnum< AudioContext_obj >(HX_CSTRING("FLASH"),3,hx::DynamicArray(0,1).Add(context)); }

::lime::audio::AudioContext  AudioContext_obj::HTML5(::lime::audio::HTML5AudioContext context)
	{ return hx::CreateEnum< AudioContext_obj >(HX_CSTRING("HTML5"),1,hx::DynamicArray(0,1).Add(context)); }

::lime::audio::AudioContext  AudioContext_obj::OPENAL(::lime::audio::ALCAudioContext alc,::lime::audio::ALAudioContext al)
	{ return hx::CreateEnum< AudioContext_obj >(HX_CSTRING("OPENAL"),0,hx::DynamicArray(0,2).Add(alc).Add(al)); }

::lime::audio::AudioContext  AudioContext_obj::WEB(::lime::audio::WebAudioContext context)
	{ return hx::CreateEnum< AudioContext_obj >(HX_CSTRING("WEB"),2,hx::DynamicArray(0,1).Add(context)); }

HX_DEFINE_CREATE_ENUM(AudioContext_obj)

int AudioContext_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CUSTOM")) return 4;
	if (inName==HX_CSTRING("FLASH")) return 3;
	if (inName==HX_CSTRING("HTML5")) return 1;
	if (inName==HX_CSTRING("OPENAL")) return 0;
	if (inName==HX_CSTRING("WEB")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,CUSTOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,FLASH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,HTML5,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioContext_obj,OPENAL,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,WEB,return)

int AudioContext_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CUSTOM")) return 1;
	if (inName==HX_CSTRING("FLASH")) return 1;
	if (inName==HX_CSTRING("HTML5")) return 1;
	if (inName==HX_CSTRING("OPENAL")) return 2;
	if (inName==HX_CSTRING("WEB")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic AudioContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CUSTOM")) return CUSTOM_dyn();
	if (inName==HX_CSTRING("FLASH")) return FLASH_dyn();
	if (inName==HX_CSTRING("HTML5")) return HTML5_dyn();
	if (inName==HX_CSTRING("OPENAL")) return OPENAL_dyn();
	if (inName==HX_CSTRING("WEB")) return WEB_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("OPENAL"),
	HX_CSTRING("HTML5"),
	HX_CSTRING("WEB"),
	HX_CSTRING("FLASH"),
	HX_CSTRING("CUSTOM"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioContext_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class AudioContext_obj::__mClass;

Dynamic __Create_AudioContext_obj() { return new AudioContext_obj; }

void AudioContext_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.AudioContext"), hx::TCanCast< AudioContext_obj >,sStaticFields,sMemberFields,
	&__Create_AudioContext_obj, &__Create,
	&super::__SGetClass(), &CreateAudioContext_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void AudioContext_obj::__boot()
{
}


} // end namespace lime
} // end namespace audio
