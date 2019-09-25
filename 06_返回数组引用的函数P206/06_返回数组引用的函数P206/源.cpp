#include<iostream>
using namespace std;
using arr = int[5];
arr a{ 1,2,3,4,5 };
arr b{ 5,4,3,2,1 };
arr& arrptr(int i)
{
	return i % 2 ? a : b;
}
int main()
{
	for (auto i : arrptr(1))
	{
		cout << i << ' ';	
	}
	system("pause");
	return 0;
}