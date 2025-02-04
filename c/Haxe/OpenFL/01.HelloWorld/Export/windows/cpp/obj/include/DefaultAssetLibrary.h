#ifndef INCLUDED_DefaultAssetLibrary
#define INCLUDED_DefaultAssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/AssetLibrary.h>
HX_DECLARE_CLASS0(DefaultAssetLibrary)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)


class HXCPP_CLASS_ATTRIBUTES  DefaultAssetLibrary_obj : public ::lime::AssetLibrary_obj{
	public:
		typedef ::lime::AssetLibrary_obj super;
		typedef DefaultAssetLibrary_obj OBJ_;
		DefaultAssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultAssetLibrary_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DefaultAssetLibrary"); }

		::haxe::ds::StringMap className;
		::haxe::ds::StringMap path;
		::haxe::ds::StringMap type;
		Float lastModified;
		::haxe::Timer timer;
		virtual bool exists( ::String id,::String type);

		virtual ::lime::audio::AudioBuffer getAudioBuffer( ::String id);

		virtual ::lime::utils::ByteArray getBytes( ::String id);

		virtual ::lime::text::Font getFont( ::String id);

		virtual ::lime::graphics::Image getImage( ::String id);

		virtual ::String getPath( ::String id);

		virtual ::String getText( ::String id);

		virtual bool isLocal( ::String id,::String type);

		virtual Array< ::String > list( ::String type);

		virtual Void loadAudioBuffer( ::String id,Dynamic handler);

		virtual Void loadBytes( ::String id,Dynamic handler);

		virtual Void loadImage( ::String id,Dynamic handler);

		virtual Void loadManifest( );
		Dynamic loadManifest_dyn();

		virtual Void loadText( ::String id,Dynamic handler);

};


#endif /* INCLUDED_DefaultAssetLibrary */ 
