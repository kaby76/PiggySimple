#pragma once

#define EXPORT __declspec(dllexport)
#define IMPORT __declspec(dllimport)

EXPORT void Test1();
EXPORT const char * Test2();
EXPORT void Test3(const char ** str);

struct struct1
{
	int a;
	int b;
};

EXPORT struct1 Test4();
EXPORT void Test5(struct struct1 * a);
