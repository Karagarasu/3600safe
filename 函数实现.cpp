#include"pch.h"
#include"函数声明.hpp"
#include<windows.h>
// 如果需要更详细的进程信息
// 获取系统可用物理内存 (单位: MB)
double huoqudangqiankeyongneicun()
{
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof(statex); // 必须设置结构体大小
    if (GlobalMemoryStatusEx(&statex)) {
        // ullAvailPhys 是 ULONGLONG 类型，单位是字节
        // 转换为 MB: 除以 1024 * 1024
        return static_cast<double>(statex.ullAvailPhys) / (1024.0 * 1024.0);
    }
    return -1.0; // 获取失败
}
void fenpeisuoxuneicun(int& val, const wchar_t* str)
{
    size_t bytes = static_cast<size_t>(val) * 1024 * 1024;
    size_t wcharCount = (bytes + sizeof(wchar_t) - 1) / sizeof(wchar_t);
    wchar_t* list = new wchar_t[wcharCount];
    while (true)
    {
        size_t bytes = static_cast<size_t>(val) * 1024 * 1024;
        size_t wcharCount = (bytes + sizeof(wchar_t) - 1) / sizeof(wchar_t);
        wchar_t* list = new wchar_t[wcharCount];
        while (true)
        {
            for (const wchar_t* p = str; *p; ++p)
            {
                std::wmemset(list, *p, wcharCount);
                Sleep(1000);
            }
        }
    }
}