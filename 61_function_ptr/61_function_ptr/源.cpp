#include<iostream>
using namespace std;
extern void myprint();
void add(int &a)
{
	++a;
	return;
}
void(*p) (int&);
void(*q()) (int&)
{
	return (&add);
}
int main()
{
	//p = add;
	//int a = 0;
	//p(a);
	//cout << a << endl;
	//auto a = q();
	//int b = 2;
	//(*a)(b);
	//cout << b << endl;
	myprint();
	system("pause");
	return 0;
}