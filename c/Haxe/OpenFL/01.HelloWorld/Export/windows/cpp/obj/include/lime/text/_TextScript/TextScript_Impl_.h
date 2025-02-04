#ifndef INCLUDED_lime_text__TextScript_TextScript_Impl_
#define INCLUDED_lime_text__TextScript_TextScript_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,text,_TextScript,TextScript_Impl_)
namespace lime{
namespace text{
namespace _TextScript{


class HXCPP_CLASS_ATTRIBUTES  TextScript_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextScript_Impl__obj OBJ_;
		TextScript_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextScript_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextScript_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextScript_Impl_"); }

		static ::String COMMON;
		static ::String INHERITED;
		static ::String UNKNOWN;
		static ::String ARABIC;
		static ::String ARMENIAN;
		static ::String BENGALI;
		static ::String CYRILLIC;
		static ::String DEVANAGARI;
		static ::String GEORGIAN;
		static ::String GREEK;
		static ::String GUJARATI;
		static ::String GURMUKHI;
		static ::String HANGUL;
		static ::String HAN;
		static ::String HEBREW;
		static ::String HIRAGANA;
		static ::String KANNADA;
		static ::String KATAKANA;
		static ::String LAO;
		static ::String LATIN;
		static ::String MALAYALAM;
		static ::String ORIYA;
		static ::String TAMIL;
		static ::String TELUGA;
		static ::String THAI;
		static ::String TIBETAN;
		static ::String BOPOMOFO;
		static ::String BRAILLE;
		static ::String CANADIAN_SYLLABICS;
		static ::String CHEROKEE;
		static ::String ETHIOPIC;
		static ::String KHMER;
		static ::String MONGOLIAN;
		static ::String MYANMAR;
		static ::String OGHAM;
		static ::String RUNIC;
		static ::String SINHALA;
		static ::String SYRIAC;
		static ::String THAANA;
		static ::String YI;
		static ::String DESERET;
		static ::String GOTHIC;
		static ::String OLD_ITALIC;
		static ::String BUHID;
		static ::String HANUNOO;
		static ::String TAGALOG;
		static ::String TAGBANWA;
		static ::String CYPRIOT;
		static ::String LIMBU;
		static ::String LINEAR_B;
		static ::String OSMANYA;
		static ::String SHAVIAN;
		static ::String TAI_LE;
		static ::String UGARITIC;
		static ::String BUGINESE;
		static ::String COPTIC;
		static ::String GLAGOLITIC;
		static ::String KHAROSHTHI;
		static ::String NEW_TAI_LUE;
		static ::String OLD_PERSIAN;
		static ::String SYLOTI_NAGRI;
		static ::String TIFINAGH;
		static ::String BALINESE;
		static ::String CUNEIFORM;
		static ::String NKO;
		static ::String PHAGS_PA;
		static ::String PHOENICIAN;
		static ::String CARIAN;
		static ::String CHAM;
		static ::String KAYAH_LI;
		static ::String LEPCHA;
		static ::String LYCIAN;
		static ::String LYDIAN;
		static ::String OL_CHIKI;
		static ::String REJANG;
		static ::String SAURASHTRA;
		static ::String SUNDANESE;
		static ::String VAI;
		static ::String AVESTAN;
		static ::String BAMUM;
		static ::String EGYPTIAN_HIEROGLYPHS;
		static ::String IMPERIAL_ARAMAIC;
		static ::String INSCRIPTIONAL_PAHLAVI;
		static ::String INSCRIPTIONAL_PARTHIAN;
		static ::String JAVANESE;
		static ::String KAITHI;
		static ::String LISU;
		static ::String MEETEI_MAYEK;
		static ::String OLD_SOUTH_ARABIAN;
		static ::String OLD_TURKIC;
		static ::String SAMARITAN;
		static ::String TAI_THAM;
		static ::String TAI_VIET;
		static ::String BATAK;
		static ::String BRAHMI;
		static ::String MANDAIC;
		static ::String CHAKMA;
		static ::String MEROITIC_CURSIVE;
		static ::String MEROITIC_HIEROGLYPHS;
		static ::String MIAO;
		static ::String SHARADA;
		static ::String SORA_SOMPENG;
		static ::String TAKRI;
		static ::String BASSA_VAH;
		static ::String CAUCASIAN_ALBANIAN;
		static ::String DUPLOYAN;
		static ::String ELBASAN;
		static ::String GRANTHA;
		static ::String KHOJKI;
		static ::String KHUDAWADI;
		static ::String LINEAR_A;
		static ::String MAHAJANI;
		static ::String MANICHAEAN;
		static ::String MENDE_KIKAKUI;
		static ::String MODI;
		static ::String MRO;
		static ::String NABATAEAN;
		static ::String OLD_NORTH_ARABIAN;
		static ::String OLD_PERMIC;
		static ::String PAHAWH_HMONG;
		static ::String PALMYRENE;
		static ::String PAU_CIN_HAU;
		static ::String PSALTER_PAHLAVI;
		static ::String SIDDHAM;
		static ::String TIRHUTA;
		static ::String WARANG_CITI;
		static bool get_rightToLeft( ::String this1);
		static Dynamic get_rightToLeft_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace _TextScript

#endif /* INCLUDED_lime_text__TextScript_TextScript_Impl_ */ 
