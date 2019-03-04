using System;

namespace Csharp
{


    class Program
    {
        static unsafe void Main(string[] args)
        {
            Functions.Test1();
            var test1 = Functions.Test2();
            IntPtr str = IntPtr.Zero;
            Functions.Test3(ref str);
            var s1 = Functions.Test4();
            struct1 as1 = default(struct1);
            Functions.Test5(ref as1);
            System.Console.WriteLine(Functions.Test6(nvgraphSemiring_t.NVGRAPH_MIN_PLUS_SR));
        }
    }
}
