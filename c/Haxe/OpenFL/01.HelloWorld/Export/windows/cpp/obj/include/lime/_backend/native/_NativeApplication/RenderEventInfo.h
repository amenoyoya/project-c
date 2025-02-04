#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,RenderEventInfo)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  RenderEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderEventInfo_obj OBJ_;
		RenderEventInfo_obj();
		Void __construct(Dynamic type,::lime::graphics::RenderContext context);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderEventInfo_obj > __new(Dynamic type,::lime::graphics::RenderContext context);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderEventInfo"); }

		::lime::graphics::RenderContext context;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::RenderEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo */ 
