#include<iostream>
#include<string>
using namespace std;
struct NoDefault
{
public:
	NoDefault(int a) :data(a) {};
private:
	int data;
};

struct C
{
public:
	C() :a(0) {};
private:
	NoDefault a;
};


struct ex1
{
public:
	ex1(int a = 0) :a(a) {};
private:
	int a;
};

struct Ex1
{
public:
private:
	ex1 a;
};

struct ex2
{
	/*public:
	int geta()
	{
	return a;
	}
	int getb()
	{
	return b;
	}
	string gets()
	{
	return s;
	}*/
private:
	int a;
	int const b;
	string s;
};
struct ex3
{
public:

	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}
	string gets()
	{
		return s;
	}

private:
	int a;
	const int b=1;
	string s;
};
int main()
{
	C a;//若没有C() :a(0) {};则错误，因为C没法默认初始化元素a
	Ex1 b;//Ex1 b;之所以没报错是因为ex1(int a = 0) :a(a) {};
	//此时的ex1(int a=0)函数也可以成为ex1类的默认构造函数，因为不提供参数也能调用


	ex3 c;
	cout << c.geta() << endl;
	cout << c.gets() << endl;
	cout << c.getb() << endl;
	system("pause");
	return 0;
}
