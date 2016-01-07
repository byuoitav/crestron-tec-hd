#ifndef __S2_INPUT_NAME_H__
#define __S2_INPUT_NAME_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Input_Name_TEC_COMPUTER2_DIG_INPUT 0
#define __S2_Input_Name_DEPARTMENT_COMPUTER_DIG_INPUT 1
#define __S2_Input_Name_APPLE_TV_DIG_INPUT 2
#define __S2_Input_Name_DESK_DOC_CAM_DIG_INPUT 3
#define __S2_Input_Name_CEILING_DOC_CAM_DIG_INPUT 4
#define __S2_Input_Name_TABLE_INPUT_DIG_INPUT 5
#define __S2_Input_Name_OVERFLOW_DIG_INPUT 6
#define __S2_Input_Name_CUSTOM_INPUT_DIG_INPUT 7


/*
* ANALOG_INPUT
*/

#define __S2_Input_Name_CUSTOM_NAME$_STRING_INPUT 0
#define __S2_Input_Name_CUSTOM_NAME$_STRING_MAX_LEN 25
CREATE_STRING_STRUCT( S2_Input_Name, __CUSTOM_NAME$, __S2_Input_Name_CUSTOM_NAME$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Input_Name_INPUT_TYPE$_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_Input_Name )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Input_Name, __CUSTOM_NAME$ );
};

START_NVRAM_VAR_STRUCT( S2_Input_Name )
{
};



#endif //__S2_INPUT_NAME_H__

