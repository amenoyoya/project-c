#ifndef INCLUDED_lime_graphics_ImageType
#define INCLUDED_lime_graphics_ImageType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ImageType)
namespace lime{
namespace graphics{


class ImageType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ImageType_obj OBJ_;

	public:
		ImageType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("lime.graphics.ImageType"); }
		::String __ToString() const { return HX_CSTRING("ImageType.") + tag; }

		static ::lime::graphics::ImageType CANVAS;
		static inline ::lime::graphics::ImageType CANVAS_dyn() { return CANVAS; }
		static ::lime::graphics::ImageType CUSTOM;
		static inline ::lime::graphics::ImageType CUSTOM_dyn() { return CUSTOM; }
		static ::lime::graphics::ImageType DATA;
		static inline ::lime::graphics::ImageType DATA_dyn() { return DATA; }
		static ::lime::graphics::ImageType FLASH;
		static inline ::lime::graphics::ImageType FLASH_dyn() { return FLASH; }
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ImageType */ 
