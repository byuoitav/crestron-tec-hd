#ifndef __S2_ADD_OR_REMOVE_SLAVE_H__
#define __S2_ADD_OR_REMOVE_SLAVE_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Add_or_Remove_Slave_ADD_SLAVE_DIG_INPUT 0
#define __S2_Add_or_Remove_Slave_REMOVE_SLAVE_DIG_INPUT 1
#define __S2_Add_or_Remove_Slave_RESET_PROGRAM_DIG_INPUT 2
#define __S2_Add_or_Remove_Slave_TEST_DIG_INPUT 3
#define __S2_Add_or_Remove_Slave_GET_PROGRAM_INFO_DIG_INPUT 4


/*
* ANALOG_INPUT
*/


#define __S2_Add_or_Remove_Slave_IP_ADDRESS$_BUFFER_INPUT 0
#define __S2_Add_or_Remove_Slave_IP_ADDRESS$_BUFFER_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Add_or_Remove_Slave, __IP_ADDRESS$, __S2_Add_or_Remove_Slave_IP_ADDRESS$_BUFFER_MAX_LEN );
#define __S2_Add_or_Remove_Slave_FROM_CONSOLE$_BUFFER_INPUT 1
#define __S2_Add_or_Remove_Slave_FROM_CONSOLE$_BUFFER_MAX_LEN 3000
CREATE_STRING_STRUCT( S2_Add_or_Remove_Slave, __FROM_CONSOLE$, __S2_Add_or_Remove_Slave_FROM_CONSOLE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Add_or_Remove_Slave_PROGRAM_NAME$_STRING_OUTPUT 0
#define __S2_Add_or_Remove_Slave_COMPILE_DATE$_STRING_OUTPUT 1
#define __S2_Add_or_Remove_Slave_TO_CONSOLE$_STRING_OUTPUT 2
#define __S2_Add_or_Remove_Slave_IPTABLE$_STRING_OUTPUT 3
#define __S2_Add_or_Remove_Slave_DMPSVER$_STRING_OUTPUT 4
#define __S2_Add_or_Remove_Slave_DMPSHOSTNAME$_STRING_OUTPUT 5
#define __S2_Add_or_Remove_Slave_DMPSIP$_STRING_OUTPUT 6
#define __S2_Add_or_Remove_Slave_DMPSMAC$_STRING_OUTPUT 7


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
#define __S2_Add_or_Remove_Slave_IP_ID$_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Add_or_Remove_Slave, __IP_ID$, __S2_Add_or_Remove_Slave_IP_ID$_STRING_MAX_LEN );
#define __S2_Add_or_Remove_Slave_PORT$_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Add_or_Remove_Slave, __PORT$, __S2_Add_or_Remove_Slave_PORT$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Add_or_Remove_Slave )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Add_or_Remove_Slave, __IP_ID$ );
   DECLARE_STRING_STRUCT( S2_Add_or_Remove_Slave, __PORT$ );
   DECLARE_STRING_STRUCT( S2_Add_or_Remove_Slave, __IP_ADDRESS$ );
   DECLARE_STRING_STRUCT( S2_Add_or_Remove_Slave, __FROM_CONSOLE$ );
};

START_NVRAM_VAR_STRUCT( S2_Add_or_Remove_Slave )
{
};



#endif //__S2_ADD_OR_REMOVE_SLAVE_H__

