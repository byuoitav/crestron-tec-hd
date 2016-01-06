#ifndef __S2_IP_ADDRESS_EDIT_WITH_UP_DOWN_H__
#define __S2_IP_ADDRESS_EDIT_WITH_UP_DOWN_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_IP_Address_Edit_with_Up_Down_DIUP_DIG_INPUT 0
#define __S2_IP_Address_Edit_with_Up_Down_DIDOWN_DIG_INPUT 1

#define __S2_IP_Address_Edit_with_Up_Down_DIZONEENABLE_DIG_INPUT 2
#define __S2_IP_Address_Edit_with_Up_Down_DIZONEENABLE_ARRAY_LENGTH 4

/*
* ANALOG_INPUT
*/



#define __S2_IP_Address_Edit_with_Up_Down_AIKNOBIN_ANALOG_INPUT 0
#define __S2_IP_Address_Edit_with_Up_Down_AIKNOBIN_ARRAY_LENGTH 4

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_IP_Address_Edit_with_Up_Down_AOKNOBOUT_ANALOG_OUTPUT 0
#define __S2_IP_Address_Edit_with_Up_Down_AOKNOBOUT_ARRAY_LENGTH 4

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
CREATE_INTARRAY1D( S2_IP_Address_Edit_with_Up_Down, __G_IKNOBIN, 4 );;


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

START_GLOBAL_VAR_STRUCT( S2_IP_Address_Edit_with_Up_Down )
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
   DECLARE_INTARRAY( S2_IP_Address_Edit_with_Up_Down, __G_IKNOBIN );
};

START_NVRAM_VAR_STRUCT( S2_IP_Address_Edit_with_Up_Down )
{
};



#endif //__S2_IP_ADDRESS_EDIT_WITH_UP_DOWN_H__

