#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//包括函数对象的使用和lambda的使用
class my_compare
{
public:
	bool operator()(const int&a, const int&b)const { return a < b; };
};
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
int main()
{
	vector <string>vec= {"abc", "happy", "sad", "interesting", "wonderful","abc"};
	sort(vec.begin(), vec.end());
	auto end_unique =unique(vec.begin(), vec.end());
	vec.erase(end_unique, vec.end());
	for (auto const &a : vec)
		cout<< a<< " ";
	cout << endl;
	stable_sort(vec.begin(), vec.end(), isShorter);
	for (auto const &a : vec)
		cout << a << " ";
	cout << endl;
	auto ll = [](const int&a, const int&b) {return a < b; };
	int a = 5, b = 6;
	cout << ll(a, b) << endl;
	my_compare mm;
	cout << my_compare()(a, b) << endl;
	cout << mm(a, b) << endl;
	cout << mm.operator()(a, b) << endl;
	auto ff=[a]()mutable
	{
		while (a)
		--a;
		return(a == 0);
	};
	cout << ff() << endl;
	cout << a << endl;
	system("pause");
	return 0;
}
