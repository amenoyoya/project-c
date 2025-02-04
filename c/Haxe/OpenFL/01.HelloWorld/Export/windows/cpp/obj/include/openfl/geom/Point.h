#ifndef INCLUDED_openfl_geom_Point
#define INCLUDED_openfl_geom_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Point_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Point"); }

		Float length;
		Float x;
		Float y;
		virtual ::openfl::geom::Point add( ::openfl::geom::Point v);
		Dynamic add_dyn();

		virtual ::openfl::geom::Point clone( );
		Dynamic clone_dyn();

		virtual Void copyFrom( ::openfl::geom::Point sourcePoint);
		Dynamic copyFrom_dyn();

		virtual bool equals( ::openfl::geom::Point toCompare);
		Dynamic equals_dyn();

		virtual Void normalize( Float thickness);
		Dynamic normalize_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void setTo( Float xa,Float ya);
		Dynamic setTo_dyn();

		virtual ::openfl::geom::Point subtract( ::openfl::geom::Point v);
		Dynamic subtract_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::lime::math::Vector2 __toLimeVector2( );
		Dynamic __toLimeVector2_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

		static Float distance( ::openfl::geom::Point pt1,::openfl::geom::Point pt2);
		static Dynamic distance_dyn();

		static ::openfl::geom::Point interpolate( ::openfl::geom::Point pt1,::openfl::geom::Point pt2,Float f);
		static Dynamic interpolate_dyn();

		static ::openfl::geom::Point polar( Float len,Float angle);
		static Dynamic polar_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Point */ 
