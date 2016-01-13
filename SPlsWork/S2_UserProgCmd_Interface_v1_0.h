#ifndef __S2_USERPROGCMD_INTERFACE_V1_0_H__
#define __S2_USERPROGCMD_INTERFACE_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_UserProgCmd_Interface_v1_0_ACCESSOK_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_UserProgCmd_Interface_v1_0_SYSTEMTYPE_ANALOG_INPUT 0

#define __S2_UserProgCmd_Interface_v1_0_VERSION$_STRING_INPUT 1
#define __S2_UserProgCmd_Interface_v1_0_VERSION$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_UserProgCmd_Interface_v1_0, __VERSION$, __S2_UserProgCmd_Interface_v1_0_VERSION$_STRING_MAX_LEN );
#define __S2_UserProgCmd_Interface_v1_0_ACCESSERRORMSG$_STRING_INPUT 2
#define __S2_UserProgCmd_Interface_v1_0_ACCESSERRORMSG$_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_UserProgCmd_Interface_v1_0, __ACCESSERRORMSG$, __S2_UserProgCmd_Interface_v1_0_ACCESSERRORMSG$_STRING_MAX_LEN );
#define __S2_UserProgCmd_Interface_v1_0_IN$_STRING_INPUT 3
#define __S2_UserProgCmd_Interface_v1_0_IN$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_UserProgCmd_Interface_v1_0, __IN$, __S2_UserProgCmd_Interface_v1_0_IN$_STRING_MAX_LEN );


#define __S2_UserProgCmd_Interface_v1_0_TAGLIST$_STRING_INPUT 4
#define __S2_UserProgCmd_Interface_v1_0_TAGLIST$_ARRAY_NUM_ELEMS 100
#define __S2_UserProgCmd_Interface_v1_0_TAGLIST$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_UserProgCmd_Interface_v1_0, __TAGLIST$, __S2_UserProgCmd_Interface_v1_0_TAGLIST$_ARRAY_NUM_ELEMS, __S2_UserProgCmd_Interface_v1_0_TAGLIST$_ARRAY_NUM_CHARS );
#define __S2_UserProgCmd_Interface_v1_0_VALUELISTIN$_STRING_INPUT 104
#define __S2_UserProgCmd_Interface_v1_0_VALUELISTIN$_ARRAY_NUM_ELEMS 100
#define __S2_UserProgCmd_Interface_v1_0_VALUELISTIN$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_UserProgCmd_Interface_v1_0, __VALUELISTIN$, __S2_UserProgCmd_Interface_v1_0_VALUELISTIN$_ARRAY_NUM_ELEMS, __S2_UserProgCmd_Interface_v1_0_VALUELISTIN$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_UserProgCmd_Interface_v1_0_TOOLBOXSTARTED_DIG_OUTPUT 0
#define __S2_UserProgCmd_Interface_v1_0_TOOLBOXENDED_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/


#define __S2_UserProgCmd_Interface_v1_0_VALUELISTOUT$_STRING_OUTPUT 0
#define __S2_UserProgCmd_Interface_v1_0_VALUELISTOUT$_ARRAY_LENGTH 100

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

START_GLOBAL_VAR_STRUCT( S2_UserProgCmd_Interface_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __VALUELISTOUT$ );
   DECLARE_STRING_STRUCT( S2_UserProgCmd_Interface_v1_0, __VERSION$ );
   DECLARE_STRING_STRUCT( S2_UserProgCmd_Interface_v1_0, __ACCESSERRORMSG$ );
   DECLARE_STRING_STRUCT( S2_UserProgCmd_Interface_v1_0, __IN$ );
   DECLARE_STRING_ARRAY( S2_UserProgCmd_Interface_v1_0, __TAGLIST$ );
   DECLARE_STRING_ARRAY( S2_UserProgCmd_Interface_v1_0, __VALUELISTIN$ );
};

START_NVRAM_VAR_STRUCT( S2_UserProgCmd_Interface_v1_0 )
{
};



#endif //__S2_USERPROGCMD_INTERFACE_V1_0_H__

