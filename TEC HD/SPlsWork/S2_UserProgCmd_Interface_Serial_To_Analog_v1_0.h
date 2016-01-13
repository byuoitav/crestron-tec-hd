#ifndef __S2_USERPROGCMD_INTERFACE_SERIAL_TO_ANALOG_V1_0_H__
#define __S2_USERPROGCMD_INTERFACE_SERIAL_TO_ANALOG_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_IN_ANALOG_INPUT 0
#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_IN_ARRAY_LENGTH 10
#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_IN$_STRING_INPUT 10
#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_IN$_ARRAY_NUM_ELEMS 10
#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_IN$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_UserProgCmd_Interface_Serial_To_Analog_v1_0, __IN$, __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_IN$_ARRAY_NUM_ELEMS, __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_IN$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_OUT_ANALOG_OUTPUT 0
#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_OUT_ARRAY_LENGTH 10
#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_OUT$_STRING_OUTPUT 10
#define __S2_UserProgCmd_Interface_Serial_To_Analog_v1_0_OUT$_ARRAY_LENGTH 10

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

START_GLOBAL_VAR_STRUCT( S2_UserProgCmd_Interface_Serial_To_Analog_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __IN );
   DECLARE_IO_ARRAY( __OUT );
   DECLARE_IO_ARRAY( __OUT$ );
   DECLARE_STRING_ARRAY( S2_UserProgCmd_Interface_Serial_To_Analog_v1_0, __IN$ );
};

START_NVRAM_VAR_STRUCT( S2_UserProgCmd_Interface_Serial_To_Analog_v1_0 )
{
};



#endif //__S2_USERPROGCMD_INTERFACE_SERIAL_TO_ANALOG_V1_0_H__

