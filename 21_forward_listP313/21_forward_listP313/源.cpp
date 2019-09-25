#include<iostream>
#include<forward_list>
#include<string>
//forward_list 迭代器不可用+法运算，但可用++
using namespace std;
void insert_s(forward_list<string>&l, const string &s1, const string &s2)
{
	auto prev = l.before_begin();
	auto lit = l.begin();
	for (; lit != l.end(); prev = lit++)
	{
		if (*lit == s1)
		{
			l.insert_after(lit, s2);
			break;
		}
	}
	if (lit == l.end())
	{
		l.insert_after(prev, s2);
	}
}

int main()
{
	forward_list<string>l = { "123","abc" };
	string s1 = { "123" };
	string s2 = { "cde" };
	auto lit = ++l.begin();
	insert_s(l, s2,s1);
	for (auto const&a : l)
		cout << a << ' ';
	cout << endl;
	l.insert_after(l.before_begin(), "iii");
	for (auto const&a : l)
		cout << a << ' ';
	cout << endl;
	l.erase_after(l.begin(),++l.begin());
	for (auto const&a : l)
		cout << a << ' ';
	cout << endl;
	cout << *lit;//lit的指向在插入后，并没有被改变
	system("pause");
	return 0;
}