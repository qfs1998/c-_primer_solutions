//! @Alan @pezy
//!
//! Exercise 9.14:
//! Write a program to assign the elements from a list of char* pointers
//! to C-style character strings
//!
//! @Notice C-style character strings should use const char*, otherwise warning.
//!

/*#include <iostream>
#include <string>
#include <vector>
#include <list>

int main()
{
	std::list<const char*> l{ "Mooophy", "pezy", "Queeuqueg" };
	std::vector<std::string> v;
	v.assign(l.cbegin(), l.cend());

	for (const auto& ch : v) std::cout << ch << std::endl;
	system("pause");
	return 0;
}*/
#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<const char*>lc{ "abc","123","sdadw" };
	vector<string>v ;
	v.assign(lc.cbegin(),lc.cend());
	for (auto const&a : v)
	{
		cout << a << ' ';
	}
	cout << endl;
	/*auto it = lc.begin();
	auto it2 = it + 1;   //list的迭代器不能加减，list的元素也不能随机访问
	auto iv = v.begin();
	auto iv2 = iv + 2;*/
	auto it = lc.begin();
	++it;
	it++;
	/*it = it + 1;*///这个不行，自增却行！！！
	system("pause");
	return 0;
}