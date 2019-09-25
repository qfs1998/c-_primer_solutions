#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main()
{
	list <int>l = { 0,1,2,3,4,5,6,7,8,9 };
	deque<int>d0, d1;
	/*for (auto &it = l.cbegin(); it != l.cend(); ++it)
	{
		if (*it % 2 == 0)
			d0.push_back(*it);
		else
			d1.push_back(*it);
	}*/
	//或
	/*for (auto i : l) (i & 0x1 ? odd : even).push_back(i);*///from 参考答案
	for (auto const &a : l)
		(a & 1 ? d1 : d0).push_back(a);//与运算
	//或
	/*for (auto const &a : l)
	{
		if (a % 2 == 0)
			d0.push_back(a);
		else
			d1.push_back(a);
	}*/
	for (auto const &a : d0)
		cout << a << ' ';
	cout << endl;
	for (auto const &a : d1)
		cout << a << ' ';
	cout << endl;
	system("pause");
	return 0;
}