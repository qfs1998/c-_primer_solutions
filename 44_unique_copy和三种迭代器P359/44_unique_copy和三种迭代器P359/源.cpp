#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	cout << "10.27" << endl;
	vector<int>vec{ 1,1,3,4,5,5,13,13 };
	list<int>l;
	//unique_copy返回值是back_inserter类型的迭代器
	//这一点于unique有很大的区别！
	auto a=unique_copy(vec.begin(), vec.end(), back_inserter(l));


	for (auto const &a : l)
	{
		cout << a << ' ';
	}
	cout << endl;
	*a = 1000;
	for (auto const &a : l)
	{
		cout << a << ' ';
	}
	cout << endl;
	cout << "10.28" << endl;
	vector<int>v{ 1,2,3,4,5,6,7,8,9 };
	list<int>a1, a2, a3{ 10,11,12 };
	copy(v.cbegin(), v.cend(), back_inserter(a1));
	copy(v.cbegin(), v.cend(), front_inserter(a2));
	copy(v.cbegin(), v.cend(), inserter(a3,++a3.begin()));
	for (auto const &a : a1)
	{
		cout << a << ' ';
	}
	cout << endl;	
	for (auto const &a : a2)
	{
		cout << a << ' ';
	}
	cout << endl;
	for (auto const &a : a3)
	{
		cout << a << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}