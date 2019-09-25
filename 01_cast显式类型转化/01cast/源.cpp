//cast-name<type>(expression) 类型转化
#include<iostream>
using namespace std;
int main()
{
	//const_cast
	//1
	int a = 1;
	const int *p1 = &a;
	int *p2;
	p2=const_cast<int*>(p1);//我原先在书P145中看见单独的转化表达式，左边没有左值，还以为
	                       //这个转化是可以直接转化p的类型const_cast<int*>(p)使p变成int*类型
	                       //结果果然不行。这个表达式只是返回一个转化后的值。
	*p2 = 3;
	cout << a << endl;
	//const_cast<type>(x)  type如果是引用类型，返回的结果是左值。
	int &b=const_cast<int&>(a);//等效于const_cast<int&>(a)=5
	b = 5;                     //即是说若type为引用类型，返回的为左值，即为a的引用。
	cout << a << endl;


	//static_cast
	//1
	char c;
	void *p3 = &c;
	char *p4 = static_cast<char*>(p3);
	*p4 = 'a';
	cout << c << endl;
	//2
	int j = 1, k = 2;
	double d = static_cast<double>(j) / k;
	cout << d << endl;
	//3
	/*double d2 = 5.2;
	double *p5 = &d2;
	int *p6 = static_cast<int*>(p5);*/ //类型转化无效！！！
	//请看下方  reinterpret_cast

	//reinterpret_cast
	//动词，重新解释
	
	double d2 = 5.2;
	double *p5 = &d2;
	int *p6 = reinterpret_cast<int*>(p5);
	*p5 = 7;//编译器不会报错，这么用很危险，可能发生很糟糕的后果
	cout << d2 << endl;
	//譬如
	char *p7 = reinterpret_cast<char*>(p5);
	*p7 = 'f';
	cout << d2 << endl;
	cout << *p7 << endl;
	cout << p7 << "   " << p5 << "   " << p6 << endl;//输出的p7不是地址了，而是f
	//reinterpret_casr非常危险

	system("pause");
	return 0;
}