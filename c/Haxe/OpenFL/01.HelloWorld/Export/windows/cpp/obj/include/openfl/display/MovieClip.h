#ifndef INCLUDED_openfl_display_MovieClip
#define INCLUDED_openfl_display_MovieClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,FrameLabel)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  MovieClip_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef MovieClip_obj OBJ_;
		MovieClip_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MovieClip_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MovieClip_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MovieClip"); }

		int currentFrame;
		::String currentFrameLabel;
		::String currentLabel;
		Array< ::Dynamic > currentLabels;
		bool enabled;
		int framesLoaded;
		int totalFrames;
		int __currentFrame;
		::String __currentFrameLabel;
		::String __currentLabel;
		Array< ::Dynamic > __currentLabels;
		int __totalFrames;
		virtual Void gotoAndPlay( Dynamic frame,::String scene);
		Dynamic gotoAndPlay_dyn();

		virtual Void gotoAndStop( Dynamic frame,::String scene);
		Dynamic gotoAndStop_dyn();

		virtual Void nextFrame( );
		Dynamic nextFrame_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void prevFrame( );
		Dynamic prevFrame_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual int get_currentFrame( );
		Dynamic get_currentFrame_dyn();

		virtual ::String get_currentFrameLabel( );
		Dynamic get_currentFrameLabel_dyn();

		virtual ::String get_currentLabel( );
		Dynamic get_currentLabel_dyn();

		virtual Array< ::Dynamic > get_currentLabels( );
		Dynamic get_currentLabels_dyn();

		virtual int get_framesLoaded( );
		Dynamic get_framesLoaded_dyn();

		virtual int get_totalFrames( );
		Dynamic get_totalFrames_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_MovieClip */ 
