using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace Csharp
{
    class Program
    {
        static unsafe void Main(string[] args)
        {
            Functions.Test1();
            var test1 = Functions.Test2();
            Functions.Test3(out IntPtr str);
            var s1 = Functions.Test4();
            Functions.Test5(out struct1 as1);
        }
    }
}
