using System;
using System.Collections.Generic;
using System.Text;
using Crestron.SimplSharp;      // For Basic SIMPL# Classes
using Crestron.SimplSharp.Net.Https;

namespace Events
{
    public class EventProxy
    {
        public HttpsClient proxy;

        /// <summary>
        /// SIMPL+ can only execute the default constructor. If you have variables that require initialization, please
        /// use an Initialize method
        /// </summary>
        public EventProxy()
        {

        }

    }
}