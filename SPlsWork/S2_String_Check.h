#ifndef __S2_STRING_CHECK_H__
#define __S2_STRING_CHECK_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_String_Check_SERIALIN$_STRING_INPUT 0
#define __S2_String_Check_SERIALIN$_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_String_Check, __SERIALIN$, __S2_String_Check_SERIALIN$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_String_Check_IS_NULL_DIG_OUTPUT 0
#define __S2_String_Check_IS_STRING_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/



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

START_GLOBAL_VAR_STRUCT( S2_String_Check )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_String_Check, __SERIALIN$ );
};

START_NVRAM_VAR_STRUCT( S2_String_Check )
{
};



#endif //__S2_STRING_CHECK_H__

