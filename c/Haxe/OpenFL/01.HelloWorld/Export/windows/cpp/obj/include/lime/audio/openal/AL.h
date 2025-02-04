#ifndef INCLUDED_lime_audio_openal_AL
#define INCLUDED_lime_audio_openal_AL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,audio,openal,AL)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace audio{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  AL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AL_obj OBJ_;
		AL_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AL"); }

		static int NONE;
		static int FALSE;
		static int TRUE;
		static int SOURCE_RELATIVE;
		static int CONE_INNER_ANGLE;
		static int CONE_OUTER_ANGLE;
		static int PITCH;
		static int POSITION;
		static int DIRECTION;
		static int VELOCITY;
		static int LOOPING;
		static int BUFFER;
		static int GAIN;
		static int MIN_GAIN;
		static int MAX_GAIN;
		static int ORIENTATION;
		static int SOURCE_STATE;
		static int INITIAL;
		static int PLAYING;
		static int PAUSED;
		static int STOPPED;
		static int BUFFERS_QUEUED;
		static int BUFFERS_PROCESSED;
		static int REFERENCE_DISTANCE;
		static int ROLLOFF_FACTOR;
		static int CONE_OUTER_GAIN;
		static int MAX_DISTANCE;
		static int SEC_OFFSET;
		static int SAMPLE_OFFSET;
		static int BYTE_OFFSET;
		static int SOURCE_TYPE;
		static int STATIC;
		static int STREAMING;
		static int UNDETERMINED;
		static int FORMAT_MONO8;
		static int FORMAT_MONO16;
		static int FORMAT_STEREO8;
		static int FORMAT_STEREO16;
		static int FREQUENCY;
		static int BITS;
		static int CHANNELS;
		static int SIZE;
		static int NO_ERROR;
		static int INVALID_NAME;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int INVALID_OPERATION;
		static int OUT_OF_MEMORY;
		static int VENDOR;
		static int VERSION;
		static int RENDERER;
		static int EXTENSIONS;
		static int DOPPLER_FACTOR;
		static int SPEED_OF_SOUND;
		static int DOPPLER_VELOCITY;
		static int DISTANCE_MODEL;
		static int INVERSE_DISTANCE;
		static int INVERSE_DISTANCE_CLAMPED;
		static int LINEAR_DISTANCE;
		static int LINEAR_DISTANCE_CLAMPED;
		static int EXPONENT_DISTANCE;
		static int EXPONENT_DISTANCE_CLAMPED;
		static Void bufferData( int buffer,int format,::lime::utils::ByteArray data,int size,int freq);
		static Dynamic bufferData_dyn();

		static Void buffer3f( int buffer,int param,Float value1,Float value2,Float value3);
		static Dynamic buffer3f_dyn();

		static Void buffer3i( int buffer,int param,int value1,int value2,int value3);
		static Dynamic buffer3i_dyn();

		static Void bufferf( int buffer,int param,Float value);
		static Dynamic bufferf_dyn();

		static Void bufferfv( int buffer,int param,Array< Float > values);
		static Dynamic bufferfv_dyn();

		static Void bufferi( int buffer,int param,int value);
		static Dynamic bufferi_dyn();

		static Void bufferiv( int buffer,int param,Array< int > values);
		static Dynamic bufferiv_dyn();

		static Void deleteBuffer( int buffer);
		static Dynamic deleteBuffer_dyn();

		static Void deleteBuffers( Array< int > buffers);
		static Dynamic deleteBuffers_dyn();

		static Void deleteSource( int source);
		static Dynamic deleteSource_dyn();

		static Void deleteSources( Array< int > sources);
		static Dynamic deleteSources_dyn();

		static Void disable( int capability);
		static Dynamic disable_dyn();

		static Void distanceModel( int distanceModel);
		static Dynamic distanceModel_dyn();

		static Void dopplerFactor( Float value);
		static Dynamic dopplerFactor_dyn();

		static Void dopplerVelocity( Float value);
		static Dynamic dopplerVelocity_dyn();

		static Void enable( int capability);
		static Dynamic enable_dyn();

		static int genSource( );
		static Dynamic genSource_dyn();

		static Array< int > genSources( int n);
		static Dynamic genSources_dyn();

		static int genBuffer( );
		static Dynamic genBuffer_dyn();

		static Array< int > genBuffers( int n);
		static Dynamic genBuffers_dyn();

		static bool getBoolean( int param);
		static Dynamic getBoolean_dyn();

		static Array< bool > getBooleanv( int param,hx::Null< int >  count);
		static Dynamic getBooleanv_dyn();

		static Array< Float > getBuffer3f( int buffer,int param);
		static Dynamic getBuffer3f_dyn();

		static Array< int > getBuffer3i( int buffer,int param);
		static Dynamic getBuffer3i_dyn();

		static Float getBufferf( int buffer,int param);
		static Dynamic getBufferf_dyn();

		static Array< Float > getBufferfv( int buffer,int param,hx::Null< int >  count);
		static Dynamic getBufferfv_dyn();

		static int getBufferi( int buffer,int param);
		static Dynamic getBufferi_dyn();

		static Array< int > getBufferiv( int buffer,int param,hx::Null< int >  count);
		static Dynamic getBufferiv_dyn();

		static Float getDouble( int param);
		static Dynamic getDouble_dyn();

		static Array< Float > getDoublev( int param,hx::Null< int >  count);
		static Dynamic getDoublev_dyn();

		static int getEnumValue( ::String ename);
		static Dynamic getEnumValue_dyn();

		static int getError( );
		static Dynamic getError_dyn();

		static ::String getErrorString( );
		static Dynamic getErrorString_dyn();

		static Float getFloat( int param);
		static Dynamic getFloat_dyn();

		static Array< Float > getFloatv( int param,hx::Null< int >  count);
		static Dynamic getFloatv_dyn();

		static int getInteger( int param);
		static Dynamic getInteger_dyn();

		static Array< int > getIntegerv( int param,hx::Null< int >  count);
		static Dynamic getIntegerv_dyn();

		static Array< Float > getListener3f( int param);
		static Dynamic getListener3f_dyn();

		static Array< int > getListener3i( int param);
		static Dynamic getListener3i_dyn();

		static Float getListenerf( int param);
		static Dynamic getListenerf_dyn();

		static Array< Float > getListenerfv( int param,hx::Null< int >  count);
		static Dynamic getListenerfv_dyn();

		static int getListeneri( int param);
		static Dynamic getListeneri_dyn();

		static Array< int > getListeneriv( int param,hx::Null< int >  count);
		static Dynamic getListeneriv_dyn();

		static Dynamic getProcAddress( ::String fname);
		static Dynamic getProcAddress_dyn();

		static Array< Float > getSource3f( int source,int param);
		static Dynamic getSource3f_dyn();

		static Float getSourcef( int source,int param);
		static Dynamic getSourcef_dyn();

		static Array< int > getSource3i( int source,int param);
		static Dynamic getSource3i_dyn();

		static Array< Float > getSourcefv( int source,int param);
		static Dynamic getSourcefv_dyn();

		static int getSourcei( int source,int param);
		static Dynamic getSourcei_dyn();

		static Array< int > getSourceiv( int source,int param,hx::Null< int >  count);
		static Dynamic getSourceiv_dyn();

		static ::String getString( int param);
		static Dynamic getString_dyn();

		static bool isBuffer( int buffer);
		static Dynamic isBuffer_dyn();

		static bool isEnabled( int capability);
		static Dynamic isEnabled_dyn();

		static bool isExtensionPresent( ::String extname);
		static Dynamic isExtensionPresent_dyn();

		static bool isSource( int source);
		static Dynamic isSource_dyn();

		static Void listener3f( int param,Float value1,Float value2,Float value3);
		static Dynamic listener3f_dyn();

		static Void listener3i( int param,int value1,int value2,int value3);
		static Dynamic listener3i_dyn();

		static Void listenerf( int param,Float value);
		static Dynamic listenerf_dyn();

		static Void listenerfv( int param,Array< Float > values);
		static Dynamic listenerfv_dyn();

		static Void listeneri( int param,int value);
		static Dynamic listeneri_dyn();

		static Void listeneriv( int param,Array< int > values);
		static Dynamic listeneriv_dyn();

		static Void source3f( int source,int param,Float value1,Float value2,Float value3);
		static Dynamic source3f_dyn();

		static Void source3i( int source,int param,int value1,int value2,int value3);
		static Dynamic source3i_dyn();

		static Void sourcef( int source,int param,Float value);
		static Dynamic sourcef_dyn();

		static Void sourcefv( int source,int param,Array< Float > values);
		static Dynamic sourcefv_dyn();

		static Void sourcei( int source,int param,int value);
		static Dynamic sourcei_dyn();

		static Void sourceiv( int source,int param,Array< int > values);
		static Dynamic sourceiv_dyn();

		static Void sourcePlay( int source);
		static Dynamic sourcePlay_dyn();

		static Void sourcePlayv( Array< int > sources);
		static Dynamic sourcePlayv_dyn();

		static Void sourceStop( int source);
		static Dynamic sourceStop_dyn();

		static Void sourceStopv( Array< int > sources);
		static Dynamic sourceStopv_dyn();

		static Void sourceRewind( int source);
		static Dynamic sourceRewind_dyn();

		static Void sourceRewindv( Array< int > sources);
		static Dynamic sourceRewindv_dyn();

		static Void sourcePause( int source);
		static Dynamic sourcePause_dyn();

		static Void sourcePausev( Array< int > sources);
		static Dynamic sourcePausev_dyn();

		static Void sourceQueueBuffer( int source,int buffer);
		static Dynamic sourceQueueBuffer_dyn();

		static Void sourceQueueBuffers( int source,int nb,Array< int > buffers);
		static Dynamic sourceQueueBuffers_dyn();

		static int sourceUnqueueBuffer( int source);
		static Dynamic sourceUnqueueBuffer_dyn();

		static Array< int > sourceUnqueueBuffers( int source,int nb);
		static Dynamic sourceUnqueueBuffers_dyn();

		static Void speedOfSound( Float value);
		static Dynamic speedOfSound_dyn();

		static Dynamic lime_al_buffer_data;
		static Dynamic &lime_al_buffer_data_dyn() { return lime_al_buffer_data;}
		static Dynamic lime_al_bufferf;
		static Dynamic &lime_al_bufferf_dyn() { return lime_al_bufferf;}
		static Dynamic lime_al_buffer3f;
		static Dynamic &lime_al_buffer3f_dyn() { return lime_al_buffer3f;}
		static Dynamic lime_al_bufferfv;
		static Dynamic &lime_al_bufferfv_dyn() { return lime_al_bufferfv;}
		static Dynamic lime_al_bufferi;
		static Dynamic &lime_al_bufferi_dyn() { return lime_al_bufferi;}
		static Dynamic lime_al_buffer3i;
		static Dynamic &lime_al_buffer3i_dyn() { return lime_al_buffer3i;}
		static Dynamic lime_al_bufferiv;
		static Dynamic &lime_al_bufferiv_dyn() { return lime_al_bufferiv;}
		static Dynamic lime_al_delete_buffer;
		static Dynamic &lime_al_delete_buffer_dyn() { return lime_al_delete_buffer;}
		static Dynamic lime_al_delete_buffers;
		static Dynamic &lime_al_delete_buffers_dyn() { return lime_al_delete_buffers;}
		static Dynamic lime_al_delete_source;
		static Dynamic &lime_al_delete_source_dyn() { return lime_al_delete_source;}
		static Dynamic lime_al_delete_sources;
		static Dynamic &lime_al_delete_sources_dyn() { return lime_al_delete_sources;}
		static Dynamic lime_al_disable;
		static Dynamic &lime_al_disable_dyn() { return lime_al_disable;}
		static Dynamic lime_al_distance_model;
		static Dynamic &lime_al_distance_model_dyn() { return lime_al_distance_model;}
		static Dynamic lime_al_doppler_factor;
		static Dynamic &lime_al_doppler_factor_dyn() { return lime_al_doppler_factor;}
		static Dynamic lime_al_doppler_velocity;
		static Dynamic &lime_al_doppler_velocity_dyn() { return lime_al_doppler_velocity;}
		static Dynamic lime_al_enable;
		static Dynamic &lime_al_enable_dyn() { return lime_al_enable;}
		static Dynamic lime_al_gen_source;
		static Dynamic &lime_al_gen_source_dyn() { return lime_al_gen_source;}
		static Dynamic lime_al_gen_sources;
		static Dynamic &lime_al_gen_sources_dyn() { return lime_al_gen_sources;}
		static Dynamic lime_al_gen_buffer;
		static Dynamic &lime_al_gen_buffer_dyn() { return lime_al_gen_buffer;}
		static Dynamic lime_al_gen_buffers;
		static Dynamic &lime_al_gen_buffers_dyn() { return lime_al_gen_buffers;}
		static Dynamic lime_al_get_buffer3f;
		static Dynamic &lime_al_get_buffer3f_dyn() { return lime_al_get_buffer3f;}
		static Dynamic lime_al_get_buffer3i;
		static Dynamic &lime_al_get_buffer3i_dyn() { return lime_al_get_buffer3i;}
		static Dynamic lime_al_get_bufferf;
		static Dynamic &lime_al_get_bufferf_dyn() { return lime_al_get_bufferf;}
		static Dynamic lime_al_get_bufferfv;
		static Dynamic &lime_al_get_bufferfv_dyn() { return lime_al_get_bufferfv;}
		static Dynamic lime_al_get_bufferi;
		static Dynamic &lime_al_get_bufferi_dyn() { return lime_al_get_bufferi;}
		static Dynamic lime_al_get_bufferiv;
		static Dynamic &lime_al_get_bufferiv_dyn() { return lime_al_get_bufferiv;}
		static Dynamic lime_al_get_boolean;
		static Dynamic &lime_al_get_boolean_dyn() { return lime_al_get_boolean;}
		static Dynamic lime_al_get_booleanv;
		static Dynamic &lime_al_get_booleanv_dyn() { return lime_al_get_booleanv;}
		static Dynamic lime_al_get_double;
		static Dynamic &lime_al_get_double_dyn() { return lime_al_get_double;}
		static Dynamic lime_al_get_doublev;
		static Dynamic &lime_al_get_doublev_dyn() { return lime_al_get_doublev;}
		static Dynamic lime_al_get_enum_value;
		static Dynamic &lime_al_get_enum_value_dyn() { return lime_al_get_enum_value;}
		static Dynamic lime_al_get_error;
		static Dynamic &lime_al_get_error_dyn() { return lime_al_get_error;}
		static Dynamic lime_al_get_float;
		static Dynamic &lime_al_get_float_dyn() { return lime_al_get_float;}
		static Dynamic lime_al_get_floatv;
		static Dynamic &lime_al_get_floatv_dyn() { return lime_al_get_floatv;}
		static Dynamic lime_al_get_integer;
		static Dynamic &lime_al_get_integer_dyn() { return lime_al_get_integer;}
		static Dynamic lime_al_get_integerv;
		static Dynamic &lime_al_get_integerv_dyn() { return lime_al_get_integerv;}
		static Dynamic lime_al_get_listenerf;
		static Dynamic &lime_al_get_listenerf_dyn() { return lime_al_get_listenerf;}
		static Dynamic lime_al_get_listener3f;
		static Dynamic &lime_al_get_listener3f_dyn() { return lime_al_get_listener3f;}
		static Dynamic lime_al_get_listenerfv;
		static Dynamic &lime_al_get_listenerfv_dyn() { return lime_al_get_listenerfv;}
		static Dynamic lime_al_get_listeneri;
		static Dynamic &lime_al_get_listeneri_dyn() { return lime_al_get_listeneri;}
		static Dynamic lime_al_get_listener3i;
		static Dynamic &lime_al_get_listener3i_dyn() { return lime_al_get_listener3i;}
		static Dynamic lime_al_get_listeneriv;
		static Dynamic &lime_al_get_listeneriv_dyn() { return lime_al_get_listeneriv;}
		static Dynamic lime_al_get_proc_address;
		static Dynamic lime_al_get_source3f;
		static Dynamic &lime_al_get_source3f_dyn() { return lime_al_get_source3f;}
		static Dynamic lime_al_get_source3i;
		static Dynamic &lime_al_get_source3i_dyn() { return lime_al_get_source3i;}
		static Dynamic lime_al_get_sourcef;
		static Dynamic &lime_al_get_sourcef_dyn() { return lime_al_get_sourcef;}
		static Dynamic lime_al_get_sourcefv;
		static Dynamic &lime_al_get_sourcefv_dyn() { return lime_al_get_sourcefv;}
		static Dynamic lime_al_get_sourcei;
		static Dynamic &lime_al_get_sourcei_dyn() { return lime_al_get_sourcei;}
		static Dynamic lime_al_get_sourceiv;
		static Dynamic &lime_al_get_sourceiv_dyn() { return lime_al_get_sourceiv;}
		static Dynamic lime_al_get_string;
		static Dynamic &lime_al_get_string_dyn() { return lime_al_get_string;}
		static Dynamic lime_al_is_buffer;
		static Dynamic &lime_al_is_buffer_dyn() { return lime_al_is_buffer;}
		static Dynamic lime_al_is_enabled;
		static Dynamic &lime_al_is_enabled_dyn() { return lime_al_is_enabled;}
		static Dynamic lime_al_is_extension_present;
		static Dynamic &lime_al_is_extension_present_dyn() { return lime_al_is_extension_present;}
		static Dynamic lime_al_is_source;
		static Dynamic &lime_al_is_source_dyn() { return lime_al_is_source;}
		static Dynamic lime_al_listener3f;
		static Dynamic &lime_al_listener3f_dyn() { return lime_al_listener3f;}
		static Dynamic lime_al_listener3i;
		static Dynamic &lime_al_listener3i_dyn() { return lime_al_listener3i;}
		static Dynamic lime_al_listenerf;
		static Dynamic &lime_al_listenerf_dyn() { return lime_al_listenerf;}
		static Dynamic lime_al_listenerfv;
		static Dynamic &lime_al_listenerfv_dyn() { return lime_al_listenerfv;}
		static Dynamic lime_al_listeneri;
		static Dynamic &lime_al_listeneri_dyn() { return lime_al_listeneri;}
		static Dynamic lime_al_listeneriv;
		static Dynamic &lime_al_listeneriv_dyn() { return lime_al_listeneriv;}
		static Dynamic lime_al_source_play;
		static Dynamic &lime_al_source_play_dyn() { return lime_al_source_play;}
		static Dynamic lime_al_source_playv;
		static Dynamic &lime_al_source_playv_dyn() { return lime_al_source_playv;}
		static Dynamic lime_al_source_stop;
		static Dynamic &lime_al_source_stop_dyn() { return lime_al_source_stop;}
		static Dynamic lime_al_source_stopv;
		static Dynamic &lime_al_source_stopv_dyn() { return lime_al_source_stopv;}
		static Dynamic lime_al_source_rewind;
		static Dynamic &lime_al_source_rewind_dyn() { return lime_al_source_rewind;}
		static Dynamic lime_al_source_rewindv;
		static Dynamic &lime_al_source_rewindv_dyn() { return lime_al_source_rewindv;}
		static Dynamic lime_al_source_pause;
		static Dynamic &lime_al_source_pause_dyn() { return lime_al_source_pause;}
		static Dynamic lime_al_source_pausev;
		static Dynamic &lime_al_source_pausev_dyn() { return lime_al_source_pausev;}
		static Dynamic lime_al_source_queue_buffers;
		static Dynamic &lime_al_source_queue_buffers_dyn() { return lime_al_source_queue_buffers;}
		static Dynamic lime_al_source_unqueue_buffers;
		static Dynamic &lime_al_source_unqueue_buffers_dyn() { return lime_al_source_unqueue_buffers;}
		static Dynamic lime_al_source3f;
		static Dynamic &lime_al_source3f_dyn() { return lime_al_source3f;}
		static Dynamic lime_al_source3i;
		static Dynamic &lime_al_source3i_dyn() { return lime_al_source3i;}
		static Dynamic lime_al_sourcef;
		static Dynamic &lime_al_sourcef_dyn() { return lime_al_sourcef;}
		static Dynamic lime_al_sourcefv;
		static Dynamic &lime_al_sourcefv_dyn() { return lime_al_sourcefv;}
		static Dynamic lime_al_sourcei;
		static Dynamic &lime_al_sourcei_dyn() { return lime_al_sourcei;}
		static Dynamic lime_al_sourceiv;
		static Dynamic &lime_al_sourceiv_dyn() { return lime_al_sourceiv;}
		static Dynamic lime_al_speed_of_sound;
		static Dynamic &lime_al_speed_of_sound_dyn() { return lime_al_speed_of_sound;}
};

} // end namespace lime
} // end namespace audio
} // end namespace openal

#endif /* INCLUDED_lime_audio_openal_AL */ 
