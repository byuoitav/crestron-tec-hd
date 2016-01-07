#ifndef __S2_GENERIC_CEC_SOURCE_CONTROL_PROCESSOR_V1_0_H__
#define __S2_GENERIC_CEC_SOURCE_CONTROL_PROCESSOR_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_Generic_CEC_Source_Control_Processor_v1_0_FROM_DEVICE_STRING_INPUT 0
#define __S2_Generic_CEC_Source_Control_Processor_v1_0_FROM_DEVICE_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __FROM_DEVICE, __S2_Generic_CEC_Source_Control_Processor_v1_0_FROM_DEVICE_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Generic_CEC_Source_Control_Processor_v1_0_POWERSTATUS_ANALOG_OUTPUT 0

#define __S2_Generic_CEC_Source_Control_Processor_v1_0_OSDNAME_STRING_OUTPUT 1


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
#define __S2_Generic_CEC_Source_Control_Processor_v1_0_ADDRESS_STRING_PARAMETER 10
#define __S2_Generic_CEC_Source_Control_Processor_v1_0_ADDRESS_PARAM_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __ADDRESS, __S2_Generic_CEC_Source_Control_Processor_v1_0_ADDRESS_PARAM_MAX_LEN );


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
#define __S2_Generic_CEC_Source_Control_Processor_v1_0_SADDRESS_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __SADDRESS, __S2_Generic_CEC_Source_Control_Processor_v1_0_SADDRESS_STRING_MAX_LEN );
#define __S2_Generic_CEC_Source_Control_Processor_v1_0_SOSDNAMETEMP_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __SOSDNAMETEMP, __S2_Generic_CEC_Source_Control_Processor_v1_0_SOSDNAMETEMP_STRING_MAX_LEN );
#define __S2_Generic_CEC_Source_Control_Processor_v1_0_SOSDNAMEOUT_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __SOSDNAMEOUT, __S2_Generic_CEC_Source_Control_Processor_v1_0_SOSDNAMEOUT_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __AADDRESSREV;
   unsigned short __AADDRESSIN;
   DECLARE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __SADDRESS );
   DECLARE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __SOSDNAMETEMP );
   DECLARE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __SOSDNAMEOUT );
   DECLARE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __FROM_DEVICE );
   DECLARE_STRING_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0, __ADDRESS );
};

START_NVRAM_VAR_STRUCT( S2_Generic_CEC_Source_Control_Processor_v1_0 )
{
};



#endif //__S2_GENERIC_CEC_SOURCE_CONTROL_PROCESSOR_V1_0_H__

