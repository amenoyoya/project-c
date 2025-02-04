#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#define INCLUDED_openfl__internal_renderer_dom_DOMRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_internal/renderer/AbstractRenderer.h>
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,DOMRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES  DOMRenderer_obj : public ::openfl::_internal::renderer::AbstractRenderer_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef DOMRenderer_obj OBJ_;
		DOMRenderer_obj();
		Void __construct(int width,int height,::lime::graphics::DOMRenderContext element);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DOMRenderer_obj > __new(int width,int height,::lime::graphics::DOMRenderContext element);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DOMRenderer"); }

		::lime::graphics::DOMRenderContext element;
		virtual Void render( ::openfl::display::Stage stage);

		static Void applyStyle( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession,bool setTransform,bool setAlpha,bool setClip);
		static Dynamic applyStyle_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMRenderer */ 
