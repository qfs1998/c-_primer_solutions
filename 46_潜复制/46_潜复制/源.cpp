/*
	浅复制只是单纯的赋值，对于指针赋值同一个地址
	导致一个对象指针指向的变量发生改变后其他对象也发生改变
	要解决这个问题，需要自己写拷贝构造函数和operator=赋值函数。

*/
#include<iostream>
#include"IntCell.h"
using namespace std;

int main()
{
	IntCell a(2);
	IntCell b = a;
	IntCell c;
	c = a;
	a.write(4);
	cout << a.read() << '\t' << b.read() << '\t' << c.read() << endl;
	system("pause");
	return 0;
}