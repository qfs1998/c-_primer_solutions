#include"matrix.h"
#include<iostream>
int main()
{
	matrix<int>m(5, 5);
	//m = { 1,2,3,4,5 };
	m = { { 1,2,3,4,5 },{5,4,3,2,1 } };
	//for (auto a : m)
	//{
	//	for (auto b : a)
	//		cout << b << " ";
	//	cout << endl;
	//}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			cout << m[i][j]<<" ";
		cout << endl;
	}
	//mytry hh;
	//hh = { 1,2,3,4,5 };
	//for (auto a : hh)
	//	cout << a << endl;
	cout << m.numcols() << endl << m.numrows() << endl;
	system("pause");
	return 0;
}