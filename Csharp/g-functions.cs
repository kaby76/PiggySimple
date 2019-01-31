namespace Csharp
{
    using System;
    using System.Runtime.InteropServices;

    public class Functions
    {
        const string DllName = "Cpp";
        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl, EntryPoint = "Test1")]
        public static extern void Test1();

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl, EntryPoint = "Test2")]
        public static extern IntPtr Test2();

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl, EntryPoint = "Test3")]
        public static extern void Test3(ref IntPtr str);

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl, EntryPoint = "Test4")]
        public static extern struct1 Test4();

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl, EntryPoint = "Test5")]
        public static extern void Test5(ref struct1 a);

    }
}
