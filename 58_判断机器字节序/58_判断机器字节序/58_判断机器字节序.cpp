// 58_判断机器字节序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
/*共用体，也叫联合体，在一个“联合”内可以定义多种不同的数据类型， 
一个被说明为该“联合”类型的变量中，允许装入该“联合”所定义的任何一种数据，
这些数据共享同一段内存，以达到节省空间的目的。
union变量所占用的内存长度等于最长的成员的内存长度。*/
void byteorder() {
	union {
		short value;
		char union_bytes[sizeof(short)];
	}test;
	test.value = 0x0102;
	if ((test.union_bytes[0] == 1) && (test.union_bytes[1] == 2)) {
		printf("big endian\n");
	}
	else if ((test.union_bytes[1] == 1) && (test.union_bytes[0] == 2)) {
		printf("little endian\n");
	}
	else printf("unknown...\n");
}

int main() {
	byteorder();
	cout << sizeof(short) << endl;
	
}