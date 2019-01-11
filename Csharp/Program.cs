using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            var test1 = Functions.Test1();
            Functions.Test2(out IntPtr str);
            var s1 = Functions.Test3();
            Functions.Test4(out struct1 as1);
        }
    }
}
