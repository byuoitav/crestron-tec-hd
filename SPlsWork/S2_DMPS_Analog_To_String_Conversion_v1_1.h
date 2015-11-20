#ifndef __S2_DMPS_ANALOG_TO_STRING_CONVERSION_V1_1_H__
#define __S2_DMPS_ANALOG_TO_STRING_CONVERSION_V1_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_DMPS_Analog_To_String_Conversion_v1_1_GO_DIG_INPUT 0


/*
* ANALOG_INPUT
*/



#define __S2_DMPS_Analog_To_String_Conversion_v1_1_IN_ANALOG_INPUT 0
#define __S2_DMPS_Analog_To_String_Conversion_v1_1_IN_ARRAY_LENGTH 80

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_DMPS_Analog_To_String_Conversion_v1_1_OUT$_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_DMPS_Analog_To_String_Conversion_v1_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __IN );
};

START_NVRAM_VAR_STRUCT( S2_DMPS_Analog_To_String_Conversion_v1_1 )
{
};



#endif //__S2_DMPS_ANALOG_TO_STRING_CONVERSION_V1_1_H__

