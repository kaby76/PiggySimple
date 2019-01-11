#ifdef __cplusplus
extern "C" {
#endif

	#include "Header.h"


	EXPORT const char * Test1()
	{
		return "Hello world";
	}

	EXPORT void Test2(const char ** str)
	{
		*str = "Hello world";
	}
	
	EXPORT struct1 Test3()
	{
		struct struct1 a;
		a.a = 1;
		a.b = 2;
		return a;
	}

	EXPORT void Test4(struct struct1 * a)
	{
		a->a = 1;
		a->b = 2;
	}

#ifdef __cplusplus
}
#endif
