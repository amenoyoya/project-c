#ifndef INCLUDED_openfl_display_GraphicsDataType
#define INCLUDED_openfl_display_GraphicsDataType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
namespace openfl{
namespace display{


class GraphicsDataType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GraphicsDataType_obj OBJ_;

	public:
		GraphicsDataType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("openfl.display.GraphicsDataType"); }
		::String __ToString() const { return HX_CSTRING("GraphicsDataType.") + tag; }

		static ::openfl::display::GraphicsDataType BITMAP;
		static inline ::openfl::display::GraphicsDataType BITMAP_dyn() { return BITMAP; }
		static ::openfl::display::GraphicsDataType END;
		static inline ::openfl::display::GraphicsDataType END_dyn() { return END; }
		static ::openfl::display::GraphicsDataType GRADIENT;
		static inline ::openfl::display::GraphicsDataType GRADIENT_dyn() { return GRADIENT; }
		static ::openfl::display::GraphicsDataType PATH;
		static inline ::openfl::display::GraphicsDataType PATH_dyn() { return PATH; }
		static ::openfl::display::GraphicsDataType SOLID;
		static inline ::openfl::display::GraphicsDataType SOLID_dyn() { return SOLID; }
		static ::openfl::display::GraphicsDataType STROKE;
		static inline ::openfl::display::GraphicsDataType STROKE_dyn() { return STROKE; }
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsDataType */ 
