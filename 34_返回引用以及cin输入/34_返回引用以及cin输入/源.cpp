#include<iostream>
using namespace std;
int & R(int &a)
{
	return a;
}
int main()
{
	int a=5, b;
	/*cin >> a >> b;//5+9,5-9
	cout << a << ' ' << b << endl;//5 9     5 -9*/
	int &c = a;
	if (&c == &a)
		cout << "yes" << endl;
	system("pause");
	return 0;
}