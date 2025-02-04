#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

Void Reflect_obj::__construct()
{
	return null();
}

//Reflect_obj::~Reflect_obj() { }

Dynamic Reflect_obj::__CreateEmpty() { return  new Reflect_obj; }
hx::ObjectPtr< Reflect_obj > Reflect_obj::__new()
{  hx::ObjectPtr< Reflect_obj > result = new Reflect_obj();
	result->__construct();
	return result;}

Dynamic Reflect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reflect_obj > result = new Reflect_obj();
	result->__construct();
	return result;}

bool Reflect_obj::hasField( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","hasField",0xef8c2571,"Reflect.hasField","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",25,0x076fb546)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(25)
	if (((o != null()))){
		HX_STACK_LINE(25)
		return o->__HasField(field);
	}
	else{
		HX_STACK_LINE(25)
		return false;
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

Dynamic Reflect_obj::field( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","field",0x54b04da9,"Reflect.field","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",29,0x076fb546)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(29)
	if (((o == null()))){
		HX_STACK_LINE(29)
		return null();
	}
	else{
		HX_STACK_LINE(29)
		return o->__Field(field,false);
	}
	HX_STACK_LINE(29)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

Dynamic Reflect_obj::callMethod( Dynamic o,Dynamic func,Dynamic args){
	HX_STACK_FRAME("Reflect","callMethod",0xb49e52d0,"Reflect.callMethod","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",46,0x076fb546)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	struct _Function_1_1{
		inline static bool Block( Dynamic &func){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",47,0x076fb546)
			{
				HX_STACK_LINE(47)
				Dynamic _g = func->__GetType();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				return (_g == ::vtString);
			}
			return null();
		}
	};
	HX_STACK_LINE(47)
	if (((  (((func != null()))) ? bool(_Function_1_1::Block(func)) : bool(false) ))){
		HX_STACK_LINE(48)
		Dynamic _g1 = o->__Field(func,true);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		func = _g1;
	}
	HX_STACK_LINE(49)
	func->__SetThis(o);
	HX_STACK_LINE(50)
	return func->__Run(args);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,callMethod,return )

bool Reflect_obj::isFunction( Dynamic f){
	HX_STACK_FRAME("Reflect","isFunction",0x0f1541d3,"Reflect.isFunction","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",61,0x076fb546)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(61)
	if (((f != null()))){
		HX_STACK_LINE(61)
		Dynamic _g = f->__GetType();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		return (_g == ::vtFunction);
	}
	else{
		HX_STACK_LINE(61)
		return false;
	}
	HX_STACK_LINE(61)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isFunction,return )

int Reflect_obj::compare( Dynamic a,Dynamic b){
	HX_STACK_FRAME("Reflect","compare",0xa2d92b54,"Reflect.compare","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",65,0x076fb546)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(65)
	if (((a == b))){
		HX_STACK_LINE(65)
		return (int)0;
	}
	else{
		HX_STACK_LINE(65)
		if (((a > b))){
			HX_STACK_LINE(65)
			return (int)1;
		}
		else{
			HX_STACK_LINE(65)
			return (int)-1;
		}
	}
	HX_STACK_LINE(65)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compare,return )

bool Reflect_obj::compareMethods( Dynamic f1,Dynamic f2){
	HX_STACK_FRAME("Reflect","compareMethods",0x8b8ddd7e,"Reflect.compareMethods","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",68,0x076fb546)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(69)
	if (((f1 == f2))){
		HX_STACK_LINE(70)
		return true;
	}
	HX_STACK_LINE(71)
	if (((  ((!((!(::Reflect_obj::isFunction(f1)))))) ? bool(!(::Reflect_obj::isFunction(f2))) : bool(true) ))){
		HX_STACK_LINE(72)
		return false;
	}
	HX_STACK_LINE(73)
	return ::__hxcpp_same_closure(f1,f2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compareMethods,return )

bool Reflect_obj::isObject( Dynamic v){
	HX_STACK_FRAME("Reflect","isObject",0xd04960ba,"Reflect.isObject","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",76,0x076fb546)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(77)
	if (((v == null()))){
		HX_STACK_LINE(77)
		return false;
	}
	HX_STACK_LINE(78)
	int t = v->__GetType();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(79)
	return (bool((bool((bool((t == ::vtObject)) || bool((t == ::vtClass)))) || bool((t == ::vtString)))) || bool((t == ::vtArray)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )

bool Reflect_obj::isEnumValue( Dynamic v){
	HX_STACK_FRAME("Reflect","isEnumValue",0x97884d95,"Reflect.isEnumValue","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",84,0x076fb546)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(84)
	if (((v != null()))){
		HX_STACK_LINE(84)
		Dynamic _g = v->__GetType();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		return (_g == ::vtEnum);
	}
	else{
		HX_STACK_LINE(84)
		return false;
	}
	HX_STACK_LINE(84)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isEnumValue,return )

Dynamic Reflect_obj::makeVarArgs( Dynamic f){
	HX_STACK_FRAME("Reflect","makeVarArgs",0x978955c5,"Reflect.makeVarArgs","C:\\App\\Haxe-3.1.3\\haxe\\std/cpp/_std/Reflect.hx",105,0x076fb546)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(105)
	return ::__hxcpp_create_var_args(f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,makeVarArgs,return )


Reflect_obj::Reflect_obj()
{
}

Dynamic Reflect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { return hasField_dyn(); }
		if (HX_FIELD_EQ(inName,"isObject") ) { return isObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMethod") ) { return callMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"isFunction") ) { return isFunction_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isEnumValue") ) { return isEnumValue_dyn(); }
		if (HX_FIELD_EQ(inName,"makeVarArgs") ) { return makeVarArgs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compareMethods") ) { return compareMethods_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reflect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Reflect_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hasField"),
	HX_CSTRING("field"),
	HX_CSTRING("callMethod"),
	HX_CSTRING("isFunction"),
	HX_CSTRING("compare"),
	HX_CSTRING("compareMethods"),
	HX_CSTRING("isObject"),
	HX_CSTRING("isEnumValue"),
	HX_CSTRING("makeVarArgs"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#endif

Class Reflect_obj::__mClass;

void Reflect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reflect"), hx::TCanCast< Reflect_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Reflect_obj::__boot()
{
}

