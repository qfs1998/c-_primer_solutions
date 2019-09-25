// UseOusideDll.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include"pch.h"
//
//#include <iostream>
//#include <Windows.h>               //使用函数和某些特殊变量
//typedef void(*DLLFunc)(int, int);  //确定调用函数的形参
//int main()
//{
//	DLLFunc dllFunc;
//	HMODULE  hInstLibrary = LoadLibrary(TEXT("sub.dll"));//加载.dll
//	if (hInstLibrary == NULL)
//	{
//		FreeLibrary(hInstLibrary);
//	}
//	dllFunc = (DLLFunc)GetProcAddress(hInstLibrary, "sub");//第二个参数为要调用的函数名称
//	if (dllFunc == NULL)
//	{
//		FreeLibrary(hInstLibrary);
//	}
//	dllFunc(5, 4);
//	FreeLibrary(hInstLibrary);
//	return(1);
//}
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include"Header.h"

int main()
{
	typedef void(*hhh)();
	hhh dllFunc;

	HINSTANCE hInstLibrary = LoadLibrary(TEXT("creatDll.dll"));//加载.dll
	if (hInstLibrary == NULL)
	{
		cout << "null" << endl;
	}
	dllFunc= (hhh)GetProcAddress(hInstLibrary, "mygod");
	dllFunc();
    //std::cout << "Hello World!\n"; 
	//haha::fuck();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
