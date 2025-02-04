#ifndef INCLUDED_openfl_display_IGraphicsData
#define INCLUDED_openfl_display_IGraphicsData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IGraphicsData_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGraphicsData_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_openfl_display_IGraphicsData \


template<typename IMPL>
class IGraphicsData_delegate_ : public IGraphicsData_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGraphicsData_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl_display_IGraphicsData
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IGraphicsData */ 
