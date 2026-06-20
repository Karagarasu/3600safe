#pragma once
#include <windows.h>
#include <iostream>
#include <psapi.h> 
#include<string>
// 如果定义了 MYDLL_EXPORTS，说明正在编译 DLL，函数需要导出
#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

// 加上 extern "C" 防止 C++ 名称修饰，让函数名更干净
extern "C" MYDLL_API double huoqudangqiankeyongneicun();
extern "C" MYDLL_API void fenpeisuoxuneicun(int& val, const wchar_t* str);