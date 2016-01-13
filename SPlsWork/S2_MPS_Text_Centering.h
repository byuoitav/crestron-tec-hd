#ifndef __S2_MPS_TEXT_CENTERING_H__
#define __S2_MPS_TEXT_CENTERING_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_MPS_Text_Centering_SERIALIN$_STRING_INPUT 0
#define __S2_MPS_Text_Centering_SERIALIN$_ARRAY_NUM_ELEMS 10
#define __S2_MPS_Text_Centering_SERIALIN$_ARRAY_NUM_CHARS 32
CREATE_STRING_ARRAY( S2_MPS_Text_Centering, __SERIALIN$, __S2_MPS_Text_Centering_SERIALIN$_ARRAY_NUM_ELEMS, __S2_MPS_Text_Centering_SERIALIN$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_MPS_Text_Centering_SERIALOUT$_STRING_OUTPUT 0
#define __S2_MPS_Text_Centering_SERIALOUT$_ARRAY_LENGTH 10

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

START_GLOBAL_VAR_STRUCT( S2_MPS_Text_Centering )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SERIALOUT$ );
   DECLARE_STRING_ARRAY( S2_MPS_Text_Centering, __SERIALIN$ );
};

START_NVRAM_VAR_STRUCT( S2_MPS_Text_Centering )
{
};



#endif //__S2_MPS_TEXT_CENTERING_H__

