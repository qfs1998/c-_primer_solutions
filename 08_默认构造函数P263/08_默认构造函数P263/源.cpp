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
	C a;//��û��C() :a(0) {};�������ΪCû��Ĭ�ϳ�ʼ��Ԫ��a
	Ex1 b;//Ex1 b;֮����û��������Ϊex1(int a = 0) :a(a) {};
	//��ʱ��ex1(int a=0)����Ҳ���Գ�Ϊex1���Ĭ�Ϲ��캯������Ϊ���ṩ����Ҳ�ܵ���


	ex3 c;
	cout << c.geta() << endl;
	cout << c.gets() << endl;
	cout << c.getb() << endl;
	system("pause");
	return 0;
}
