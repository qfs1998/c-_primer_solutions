#include<iostream>
using namespace std;
class CDemo
{
public:
	CDemo(int a) :n(a) {}
	CDemo(const CDemo&C) { n = C.n; }
	operator int() { return n; }
	CDemo&operator ++() { ++n; return *this; }
	CDemo operator ++(int) { CDemo tmp(*this); return tmp; }
	friend CDemo&operator --(CDemo&C);
	friend CDemo operator --(CDemo&C,int);
	//重载为类成员函数：前置++无参数，后置++加一个没用的参数加以区分
	//重载为全局函数：前置++一个参数CDemo&，后置++两个参数CDemo&和一个没用的参数加以区分
private:
	int n;
};
CDemo&operator --(CDemo&C)
{
	--C.n;
	return C;
}
CDemo operator --(CDemo&C, int)
{
	CDemo tmp(C);
	--C.n;
	return tmp;
}
int main()
{
	CDemo A(5), B(5);
	
	/*cout << --B << ' ' << B-- << endl ;*///编译器不同则有所不同，从右到左执行语句然后入栈，再出栈，先进后出
	system("pause");
	return 0;
}