#ifndef __S2_ADD_OR_REMOVE_PEER_H__
#define __S2_ADD_OR_REMOVE_PEER_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Add_or_Remove_Peer_ADD_PEER_DIG_INPUT 0
#define __S2_Add_or_Remove_Peer_REMOVE_PEER_DIG_INPUT 1
#define __S2_Add_or_Remove_Peer_RESET_PROGRAM_DIG_INPUT 2
#define __S2_Add_or_Remove_Peer_TEST_DIG_INPUT 3


/*
* ANALOG_INPUT
*/

#define __S2_Add_or_Remove_Peer_IP_ADDRESS$_STRING_INPUT 0
#define __S2_Add_or_Remove_Peer_IP_ADDRESS$_STRING_MAX_LEN 14
CREATE_STRING_STRUCT( S2_Add_or_Remove_Peer, __IP_ADDRESS$, __S2_Add_or_Remove_Peer_IP_ADDRESS$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Add_or_Remove_Peer_TO_CONSOLE$_STRING_OUTPUT 0


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
#define __S2_Add_or_Remove_Peer_IP_ID$_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Add_or_Remove_Peer, __IP_ID$, __S2_Add_or_Remove_Peer_IP_ID$_STRING_MAX_LEN );
#define __S2_Add_or_Remove_Peer_PORT$_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Add_or_Remove_Peer, __PORT$, __S2_Add_or_Remove_Peer_PORT$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Add_or_Remove_Peer )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Add_or_Remove_Peer, __IP_ID$ );
   DECLARE_STRING_STRUCT( S2_Add_or_Remove_Peer, __PORT$ );
   DECLARE_STRING_STRUCT( S2_Add_or_Remove_Peer, __IP_ADDRESS$ );
};

START_NVRAM_VAR_STRUCT( S2_Add_or_Remove_Peer )
{
};



#endif //__S2_ADD_OR_REMOVE_PEER_H__

