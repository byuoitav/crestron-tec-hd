#ifndef __S2_IP_ADDRESS_EDIT_ACCELERATION_H__
#define __S2_IP_ADDRESS_EDIT_ACCELERATION_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_IP_Address_Edit_Acceleration_DIZONEENABLE_DIG_INPUT 0
#define __S2_IP_Address_Edit_Acceleration_DIZONEENABLE_ARRAY_LENGTH 4

/*
* ANALOG_INPUT
*/
#define __S2_IP_Address_Edit_Acceleration_AIPKTDELTA_ANALOG_INPUT 1
#define __S2_IP_Address_Edit_Acceleration_AIPKTTIME_ANALOG_INPUT 2
#define __S2_IP_Address_Edit_Acceleration_AISLOWTURNHSEC_ANALOG_INPUT 3
#define __S2_IP_Address_Edit_Acceleration_AISLOWTURNINCR_ANALOG_INPUT 4
#define __S2_IP_Address_Edit_Acceleration_AIFASTTURNHSEC_ANALOG_INPUT 5
#define __S2_IP_Address_Edit_Acceleration_AIFASTTURNINCR_ANALOG_INPUT 6

#define __S2_IP_Address_Edit_Acceleration_TRIG_STRING_INPUT 0
#define __S2_IP_Address_Edit_Acceleration_TRIG_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_IP_Address_Edit_Acceleration, __TRIG, __S2_IP_Address_Edit_Acceleration_TRIG_STRING_MAX_LEN );


#define __S2_IP_Address_Edit_Acceleration_AIKNOBIN_ANALOG_INPUT 7
#define __S2_IP_Address_Edit_Acceleration_AIKNOBIN_ARRAY_LENGTH 4

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_IP_Address_Edit_Acceleration_AOKNOBOUT_ANALOG_OUTPUT 0
#define __S2_IP_Address_Edit_Acceleration_AOKNOBOUT_ARRAY_LENGTH 4

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
CREATE_INTARRAY1D( S2_IP_Address_Edit_Acceleration, __G_IKNOBIN, 4 );;


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

START_GLOBAL_VAR_STRUCT( S2_IP_Address_Edit_Acceleration )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DIZONEENABLE );
   DECLARE_IO_ARRAY( __AIKNOBIN );
   DECLARE_IO_ARRAY( __AOKNOBOUT );
   unsigned short __G_INUMBERINPUTS;
   unsigned short __G_IBUSY;
   unsigned short __I;
   DECLARE_INTARRAY( S2_IP_Address_Edit_Acceleration, __G_IKNOBIN );
   long __G_SLISLOPE;
   long __G_SLIINTERCEPT;
   DECLARE_STRING_STRUCT( S2_IP_Address_Edit_Acceleration, __TRIG );
};

START_NVRAM_VAR_STRUCT( S2_IP_Address_Edit_Acceleration )
{
};



#endif //__S2_IP_ADDRESS_EDIT_ACCELERATION_H__

