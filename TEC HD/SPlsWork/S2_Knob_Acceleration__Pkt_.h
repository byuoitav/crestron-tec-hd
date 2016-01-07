#ifndef __S2_KNOB_ACCELERATION__PKT__H__
#define __S2_KNOB_ACCELERATION__PKT__H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_Knob_Acceleration__Pkt__DIZONEENABLE_DIG_INPUT 0
#define __S2_Knob_Acceleration__Pkt__DIZONEENABLE_ARRAY_LENGTH 24

/*
* ANALOG_INPUT
*/
#define __S2_Knob_Acceleration__Pkt__AIPKTDELTA_ANALOG_INPUT 1
#define __S2_Knob_Acceleration__Pkt__AIPKTTIME_ANALOG_INPUT 2
#define __S2_Knob_Acceleration__Pkt__AISLOWTURNHSEC_ANALOG_INPUT 3
#define __S2_Knob_Acceleration__Pkt__AISLOWTURNINCR_ANALOG_INPUT 4
#define __S2_Knob_Acceleration__Pkt__AIFASTTURNHSEC_ANALOG_INPUT 5
#define __S2_Knob_Acceleration__Pkt__AIFASTTURNINCR_ANALOG_INPUT 6

#define __S2_Knob_Acceleration__Pkt__TRIG_STRING_INPUT 0
#define __S2_Knob_Acceleration__Pkt__TRIG_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Knob_Acceleration__Pkt_, __TRIG, __S2_Knob_Acceleration__Pkt__TRIG_STRING_MAX_LEN );


#define __S2_Knob_Acceleration__Pkt__AIKNOBIN_ANALOG_INPUT 7
#define __S2_Knob_Acceleration__Pkt__AIKNOBIN_ARRAY_LENGTH 24

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Knob_Acceleration__Pkt__AOKNOBOUT_ANALOG_OUTPUT 0
#define __S2_Knob_Acceleration__Pkt__AOKNOBOUT_ARRAY_LENGTH 24

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Knob_Acceleration__Pkt_ )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DIZONEENABLE );
   DECLARE_IO_ARRAY( __AIKNOBIN );
   DECLARE_IO_ARRAY( __AOKNOBOUT );
   unsigned short __G_INUMBERINPUTS;
   unsigned short __G_IBUSY;
   long __G_SLISLOPE;
   long __G_SLIINTERCEPT;
   DECLARE_STRING_STRUCT( S2_Knob_Acceleration__Pkt_, __TRIG );
};

START_NVRAM_VAR_STRUCT( S2_Knob_Acceleration__Pkt_ )
{
};



#endif //__S2_KNOB_ACCELERATION__PKT__H__

