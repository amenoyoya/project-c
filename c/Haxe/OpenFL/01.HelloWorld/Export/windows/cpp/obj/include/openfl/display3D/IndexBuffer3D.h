#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#define INCLUDED_openfl_display3D_IndexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  IndexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IndexBuffer3D_obj OBJ_;
		IndexBuffer3D_obj();
		Void __construct(::lime::graphics::opengl::GLBuffer glBuffer,int numIndices);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IndexBuffer3D_obj > __new(::lime::graphics::opengl::GLBuffer glBuffer,int numIndices);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexBuffer3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IndexBuffer3D"); }

		::lime::graphics::opengl::GLBuffer glBuffer;
		int numIndices;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void uploadFromByteArray( ::lime::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromVector( Array< int > data,int startOffset,int count);
		Dynamic uploadFromVector_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_IndexBuffer3D */ 
