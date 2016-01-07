using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_ADD_OR_REMOVE_SLAVE
{
    public class UserModuleClass_ADD_OR_REMOVE_SLAVE : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        Crestron.Logos.SplusObjects.DigitalInput ADD_SLAVE;
        Crestron.Logos.SplusObjects.DigitalInput REMOVE_SLAVE;
        Crestron.Logos.SplusObjects.DigitalInput RESET_PROGRAM;
        Crestron.Logos.SplusObjects.DigitalInput TEST;
        Crestron.Logos.SplusObjects.DigitalInput GET_PROGRAM_INFO;
        Crestron.Logos.SplusObjects.BufferInput IP_ADDRESS__DOLLAR__;
        Crestron.Logos.SplusObjects.BufferInput FROM_CONSOLE__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput PROGRAM_NAME__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput COMPILE_DATE__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput TO_CONSOLE__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput IPTABLE__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput DMPSVER__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput DMPSHOSTNAME__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput DMPSIP__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput DMPSMAC__DOLLAR__;
        CrestronString IP_ID__DOLLAR__;
        CrestronString PORT__DOLLAR__;
        object ADD_SLAVE_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 36;
                TO_CONSOLE__DOLLAR__  .UpdateValue ( "ADDSlave " + IP_ID__DOLLAR__ + " " + IP_ADDRESS__DOLLAR__ + "\u000D"  ) ; 
                __context__.SourceCodeLine = 37;
                IP_ADDRESS__DOLLAR__  .UpdateValue ( ""  ) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object REMOVE_SLAVE_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 42;
            TO_CONSOLE__DOLLAR__  .UpdateValue ( "REMSlave " + IP_ID__DOLLAR__ + " " + IP_ADDRESS__DOLLAR__ + "\u000D"  ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
object RESET_PROGRAM_OnPush_2 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 47;
        TO_CONSOLE__DOLLAR__  .UpdateValue ( "ProgReset" + "\u000D"  ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object TEST_OnPush_3 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 52;
        TO_CONSOLE__DOLLAR__  .UpdateValue ( "IPTable -I:" + IP_ID__DOLLAR__ + "\u000D"  ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object GET_PROGRAM_INFO_OnPush_4 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 57;
        TO_CONSOLE__DOLLAR__  .UpdateValue ( "ProgComments\u000D"  ) ; 
        __context__.SourceCodeLine = 58;
        TO_CONSOLE__DOLLAR__  .UpdateValue ( "ver\u000D"  ) ; 
        __context__.SourceCodeLine = 59;
        TO_CONSOLE__DOLLAR__  .UpdateValue ( "host\u000D"  ) ; 
        __context__.SourceCodeLine = 60;
        TO_CONSOLE__DOLLAR__  .UpdateValue ( "ipaddress\u000D"  ) ; 
        __context__.SourceCodeLine = 61;
        TO_CONSOLE__DOLLAR__  .UpdateValue ( "estatus\u000D"  ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object FROM_CONSOLE__DOLLAR___OnChange_5 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        ushort STARTPOSITION = 0;
        
        CrestronString IN__DOLLAR__;
        CrestronString TEMPSTRING;
        CrestronString TRASH;
        IN__DOLLAR__  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 3000, this );
        TEMPSTRING  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 100, this );
        TRASH  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 250, this );
        
        
        __context__.SourceCodeLine = 69;
        IN__DOLLAR__  .UpdateValue ( Functions.Gather ( "DMPS-300-C>" , FROM_CONSOLE__DOLLAR__ )  ) ; 
        __context__.SourceCodeLine = 70;
        Print( "in$ = {0}", IN__DOLLAR__ ) ; 
        __context__.SourceCodeLine = 71;
        Print( "Length of in$ = {0:d}\r\n", (short)Functions.Length( IN__DOLLAR__ )) ; 
        __context__.SourceCodeLine = 72;
        if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.Find( "IP Table:" , IN__DOLLAR__ ) ) && Functions.TestForTrue ( Functions.BoolToInt ( Functions.Length( IN__DOLLAR__ ) < 150 ) )) ))  ) ) 
            { 
            __context__.SourceCodeLine = 74;
            Print( "Found IPTable ID:7") ; 
            __context__.SourceCodeLine = 75;
            IPTABLE__DOLLAR__  .UpdateValue ( Functions.Left ( IN__DOLLAR__ ,  (int) ( (Functions.Find( "DMPS-300-C>" , IN__DOLLAR__ ) - 5) ) )  ) ; 
            __context__.SourceCodeLine = 76;
            IN__DOLLAR__  .UpdateValue ( ""  ) ; 
            } 
        
        else 
            {
            __context__.SourceCodeLine = 78;
            if ( Functions.TestForTrue  ( ( Functions.Find( "DMPS-300-C Cntrl Eng" , IN__DOLLAR__ ))  ) ) 
                { 
                __context__.SourceCodeLine = 80;
                DMPSVER__DOLLAR__  .UpdateValue ( Functions.Left ( IN__DOLLAR__ ,  (int) ( (Functions.Find( "DMPS-300-C>" , IN__DOLLAR__ ) - 5) ) )  ) ; 
                __context__.SourceCodeLine = 81;
                IN__DOLLAR__  .UpdateValue ( ""  ) ; 
                } 
            
            }
        
        __context__.SourceCodeLine = 84;
        while ( Functions.TestForTrue  ( ( Functions.Find( "\u000A" , IN__DOLLAR__ ))  ) ) 
            { 
            __context__.SourceCodeLine = 86;
            TEMPSTRING  .UpdateValue ( Functions.Remove ( "\u000A" , IN__DOLLAR__ )  ) ; 
            __context__.SourceCodeLine = 87;
            if ( Functions.TestForTrue  ( ( Functions.Find( "Program File:" , TEMPSTRING ))  ) ) 
                { 
                __context__.SourceCodeLine = 89;
                TRASH  .UpdateValue ( Functions.Remove ( "Program File: " , TEMPSTRING )  ) ; 
                __context__.SourceCodeLine = 90;
                PROGRAM_NAME__DOLLAR__  .UpdateValue ( Functions.Left ( TEMPSTRING ,  (int) ( (Functions.Find( "\u000A" , TEMPSTRING ) - 2) ) )  ) ; 
                } 
            
            else 
                {
                __context__.SourceCodeLine = 93;
                if ( Functions.TestForTrue  ( ( Functions.Find( "Compiled On:" , TEMPSTRING ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 95;
                    TRASH  .UpdateValue ( Functions.Remove ( "Compiled On:  " , TEMPSTRING )  ) ; 
                    __context__.SourceCodeLine = 96;
                    COMPILE_DATE__DOLLAR__  .UpdateValue ( Functions.Left ( TEMPSTRING ,  (int) ( (Functions.Find( "\u000A" , TEMPSTRING ) - 2) ) )  ) ; 
                    } 
                
                else 
                    {
                    __context__.SourceCodeLine = 98;
                    if ( Functions.TestForTrue  ( ( Functions.Find( "Host Name:" , TEMPSTRING ))  ) ) 
                        { 
                        __context__.SourceCodeLine = 100;
                        TRASH  .UpdateValue ( Functions.Remove ( "Host Name: " , TEMPSTRING )  ) ; 
                        __context__.SourceCodeLine = 103;
                        DMPSHOSTNAME__DOLLAR__  .UpdateValue ( Functions.Left ( TEMPSTRING ,  (int) ( (Functions.Find( "\u000D" , TEMPSTRING ) - 1) ) )  ) ; 
                        } 
                    
                    else 
                        {
                        __context__.SourceCodeLine = 105;
                        if ( Functions.TestForTrue  ( ( Functions.Find( "IP address:" , TEMPSTRING ))  ) ) 
                            { 
                            __context__.SourceCodeLine = 108;
                            TRASH  .UpdateValue ( Functions.Remove ( "IP address:" , TEMPSTRING )  ) ; 
                            __context__.SourceCodeLine = 111;
                            DMPSIP__DOLLAR__  .UpdateValue ( Functions.Left ( TEMPSTRING ,  (int) ( (Functions.Find( "\u000D" , TEMPSTRING ) - 1) ) )  ) ; 
                            } 
                        
                        else 
                            {
                            __context__.SourceCodeLine = 114;
                            if ( Functions.TestForTrue  ( ( Functions.Find( "MAC Address(es):" , TEMPSTRING ))  ) ) 
                                { 
                                __context__.SourceCodeLine = 116;
                                TRASH  .UpdateValue ( Functions.Remove ( "MAC Address(es): " , TEMPSTRING )  ) ; 
                                __context__.SourceCodeLine = 119;
                                DMPSMAC__DOLLAR__  .UpdateValue ( Functions.Left ( TEMPSTRING ,  (int) ( (Functions.Find( "\u000D" , TEMPSTRING ) - 1) ) )  ) ; 
                                } 
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            __context__.SourceCodeLine = 84;
            } 
        
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

public override object FunctionMain (  object __obj__ ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusFunctionMainStartCode();
        
        __context__.SourceCodeLine = 130;
        WaitForInitializationComplete ( ) ; 
        __context__.SourceCodeLine = 131;
        IP_ID__DOLLAR__  .UpdateValue ( "07"  ) ; 
        __context__.SourceCodeLine = 132;
        PORT__DOLLAR__  .UpdateValue ( "2202"  ) ; 
        __context__.SourceCodeLine = 133;
        PROGRAM_NAME__DOLLAR__  .UpdateValue ( ""  ) ; 
        __context__.SourceCodeLine = 134;
        COMPILE_DATE__DOLLAR__  .UpdateValue ( ""  ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler(); }
    return __obj__;
    }
    

public override void LogosSplusInitialize()
{
    SocketInfo __socketinfo__ = new SocketInfo( 1, this );
    InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
    _SplusNVRAM = new SplusNVRAM( this );
    IP_ID__DOLLAR__  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 2, this );
    PORT__DOLLAR__  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 4, this );
    
    ADD_SLAVE = new Crestron.Logos.SplusObjects.DigitalInput( ADD_SLAVE__DigitalInput__, this );
    m_DigitalInputList.Add( ADD_SLAVE__DigitalInput__, ADD_SLAVE );
    
    REMOVE_SLAVE = new Crestron.Logos.SplusObjects.DigitalInput( REMOVE_SLAVE__DigitalInput__, this );
    m_DigitalInputList.Add( REMOVE_SLAVE__DigitalInput__, REMOVE_SLAVE );
    
    RESET_PROGRAM = new Crestron.Logos.SplusObjects.DigitalInput( RESET_PROGRAM__DigitalInput__, this );
    m_DigitalInputList.Add( RESET_PROGRAM__DigitalInput__, RESET_PROGRAM );
    
    TEST = new Crestron.Logos.SplusObjects.DigitalInput( TEST__DigitalInput__, this );
    m_DigitalInputList.Add( TEST__DigitalInput__, TEST );
    
    GET_PROGRAM_INFO = new Crestron.Logos.SplusObjects.DigitalInput( GET_PROGRAM_INFO__DigitalInput__, this );
    m_DigitalInputList.Add( GET_PROGRAM_INFO__DigitalInput__, GET_PROGRAM_INFO );
    
    PROGRAM_NAME__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( PROGRAM_NAME__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( PROGRAM_NAME__DOLLAR____AnalogSerialOutput__, PROGRAM_NAME__DOLLAR__ );
    
    COMPILE_DATE__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( COMPILE_DATE__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( COMPILE_DATE__DOLLAR____AnalogSerialOutput__, COMPILE_DATE__DOLLAR__ );
    
    TO_CONSOLE__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( TO_CONSOLE__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( TO_CONSOLE__DOLLAR____AnalogSerialOutput__, TO_CONSOLE__DOLLAR__ );
    
    IPTABLE__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( IPTABLE__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( IPTABLE__DOLLAR____AnalogSerialOutput__, IPTABLE__DOLLAR__ );
    
    DMPSVER__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( DMPSVER__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( DMPSVER__DOLLAR____AnalogSerialOutput__, DMPSVER__DOLLAR__ );
    
    DMPSHOSTNAME__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( DMPSHOSTNAME__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( DMPSHOSTNAME__DOLLAR____AnalogSerialOutput__, DMPSHOSTNAME__DOLLAR__ );
    
    DMPSIP__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( DMPSIP__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( DMPSIP__DOLLAR____AnalogSerialOutput__, DMPSIP__DOLLAR__ );
    
    DMPSMAC__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( DMPSMAC__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( DMPSMAC__DOLLAR____AnalogSerialOutput__, DMPSMAC__DOLLAR__ );
    
    IP_ADDRESS__DOLLAR__ = new Crestron.Logos.SplusObjects.BufferInput( IP_ADDRESS__DOLLAR____AnalogSerialInput__, 15, this );
    m_StringInputList.Add( IP_ADDRESS__DOLLAR____AnalogSerialInput__, IP_ADDRESS__DOLLAR__ );
    
    FROM_CONSOLE__DOLLAR__ = new Crestron.Logos.SplusObjects.BufferInput( FROM_CONSOLE__DOLLAR____AnalogSerialInput__, 3000, this );
    m_StringInputList.Add( FROM_CONSOLE__DOLLAR____AnalogSerialInput__, FROM_CONSOLE__DOLLAR__ );
    
    
    ADD_SLAVE.OnDigitalPush.Add( new InputChangeHandlerWrapper( ADD_SLAVE_OnPush_0, false ) );
    REMOVE_SLAVE.OnDigitalPush.Add( new InputChangeHandlerWrapper( REMOVE_SLAVE_OnPush_1, false ) );
    RESET_PROGRAM.OnDigitalPush.Add( new InputChangeHandlerWrapper( RESET_PROGRAM_OnPush_2, false ) );
    TEST.OnDigitalPush.Add( new InputChangeHandlerWrapper( TEST_OnPush_3, false ) );
    GET_PROGRAM_INFO.OnDigitalPush.Add( new InputChangeHandlerWrapper( GET_PROGRAM_INFO_OnPush_4, false ) );
    FROM_CONSOLE__DOLLAR__.OnSerialChange.Add( new InputChangeHandlerWrapper( FROM_CONSOLE__DOLLAR___OnChange_5, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_ADD_OR_REMOVE_SLAVE ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint ADD_SLAVE__DigitalInput__ = 0;
const uint REMOVE_SLAVE__DigitalInput__ = 1;
const uint RESET_PROGRAM__DigitalInput__ = 2;
const uint TEST__DigitalInput__ = 3;
const uint GET_PROGRAM_INFO__DigitalInput__ = 4;
const uint IP_ADDRESS__DOLLAR____AnalogSerialInput__ = 0;
const uint FROM_CONSOLE__DOLLAR____AnalogSerialInput__ = 1;
const uint PROGRAM_NAME__DOLLAR____AnalogSerialOutput__ = 0;
const uint COMPILE_DATE__DOLLAR____AnalogSerialOutput__ = 1;
const uint TO_CONSOLE__DOLLAR____AnalogSerialOutput__ = 2;
const uint IPTABLE__DOLLAR____AnalogSerialOutput__ = 3;
const uint DMPSVER__DOLLAR____AnalogSerialOutput__ = 4;
const uint DMPSHOSTNAME__DOLLAR____AnalogSerialOutput__ = 5;
const uint DMPSIP__DOLLAR____AnalogSerialOutput__ = 6;
const uint DMPSMAC__DOLLAR____AnalogSerialOutput__ = 7;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
