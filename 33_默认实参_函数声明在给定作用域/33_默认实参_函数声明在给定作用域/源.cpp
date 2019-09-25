#include<iostream>
using namespace std;
int my_add(int a, int b)
{
	return a + b;
}
int main()
{
	int my_add(int a = 1000, int b = 1);
	{
		int my_add(int a = 2, int b = 3);
		cout << my_add(9)<<endl;
	}
	{
		int my_add(int a = 10, int b = 20);
		cout << my_add() << endl;
	}
	cout << my_add() << endl;
	cout << sizeof(int) << endl;
	char *p = "abcdefg";
	char a[] = "abcdefg";
	cout << sizeof(p) << ' '<<sizeof(a)<<endl;
	cout << *p << endl;
	system("pause");
	return 0;
}