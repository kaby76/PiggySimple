#pragma once

#define EXPORT __declspec(dllexport)
#define IMPORT __declspec(dllimport)

EXPORT const char * Test1();
EXPORT void Test2(const char ** str);

struct struct1
{
	int a;
	int b;
};

EXPORT struct1 Test3();
EXPORT void Test4(struct struct1 * a);
