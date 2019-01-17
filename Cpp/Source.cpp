#ifdef __cplusplus
extern "C" {
#endif

	#include "Header.h"

	EXPORT void Test1()
	{
	}

	EXPORT const char * Test2()
	{
		return "Hello world";
	}

	EXPORT void Test3(const char ** str)
	{
		*str = "Hello world";
	}
	
	EXPORT struct1 Test4()
	{
		struct struct1 a;
		a.a = 1;
		a.b = 2;
		return a;
	}

	EXPORT void Test5(struct struct1 * a)
	{
		a->a = 1;
		a->b = 2;
	}

#ifdef __cplusplus
}
#endif
