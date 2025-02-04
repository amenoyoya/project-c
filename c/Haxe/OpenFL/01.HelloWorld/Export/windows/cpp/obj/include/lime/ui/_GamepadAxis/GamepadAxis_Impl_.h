#ifndef INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_
#define INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_GamepadAxis,GamepadAxis_Impl_)
namespace lime{
namespace ui{
namespace _GamepadAxis{


class HXCPP_CLASS_ATTRIBUTES  GamepadAxis_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GamepadAxis_Impl__obj OBJ_;
		GamepadAxis_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GamepadAxis_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadAxis_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GamepadAxis_Impl_"); }

		static int LEFT_X;
		static int LEFT_Y;
		static int RIGHT_X;
		static int RIGHT_Y;
		static int TRIGGER_LEFT;
		static int TRIGGER_RIGHT;
		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadAxis

#endif /* INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_ */ 
