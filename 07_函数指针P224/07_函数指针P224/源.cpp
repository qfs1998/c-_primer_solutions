#include<iostream>
#include<vector>
using namespace std;
inline int Add(int a, int b)
{
	return a + b;
}
inline int Sub(int a, int b)
{
	return a - b;
}
inline int Mul(int a, int b)
{
	return a*b;
}
inline int Did(int a, int b)
{
	return a / b;
}
int main()
{
	vector<decltype(Sub)*> v = { Add,Sub,Mul,Did };
	for (auto e : v)
	{
		cout << (*e)(8, 2) << endl;//*e(8,2)����*���ȼ�����(),����ֱ��e(8,2)
	}
	system("pause");
	return 0;
}