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

typedef enum
{
	NVGRAPH_PLUS_TIMES_SR = 0,
	NVGRAPH_MIN_PLUS_SR = 1,
	NVGRAPH_MAX_MIN_SR = 2,
	NVGRAPH_OR_AND_SR = 3,
} nvgraphSemiring_t;

EXPORT int Test6(nvgraphSemiring_t e);
