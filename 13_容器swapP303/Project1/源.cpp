#include<iostream>
#include<vector>
#include<array>
#include<string>
using namespace std;	
using it = vector<int>::iterator;
int main()
{
	//顺序容器交换元素，其实元素本身并未交换，换的是数据结构
	//可以理解为交换了内置指针
	//string swap后迭代器失效
	//vector交换后，迭代器仍然指向原来指向的元素，可以理解为，迭代器存储的地址不变，array swap后，元素本身的值交换，由于迭代器本身指向不发生改变，故，解应用迭代器的值会不同。
	vector <int>v1{ 1,2,3,4,5 }, v2{ 6,7,8,9,10,11,12 };
	it v1_beg = v1.begin(), v1_add2 = v1_beg+2;
	cout << "before swap *v1_beg=" << *v1_beg << "  v1_add2=" << *v1_add2 << endl;

	swap(v1, v2);
	for (auto a : v1)
	{
		cout << a << ' ';
	}
	cout << endl;
	//迭代器仍然指向原来指向的元素
	cout << "after swap *v1_beg=" << *v1_beg << "  v1_add2=" << *v1_add2 << endl;

	//vector交换后，迭代器仍然指向原来指向的元素，可以理解为，迭代器存储的地址不变，array swap后，元素本身的值交换，由于迭代器本身指向不发生改变，故，解应用迭代器的值会不同。
	array <int, 3>a = { 1,2,3 }, b = { 4,5,6 };
	auto a_it = a.begin() + 1;
	cout << *a_it << endl;
	swap(a, b);
	cout << *a_it << endl;


	//string swap后迭代器失效
	string s1("12345"), s2("a,b,c,d,e");
	auto s_it = s1.begin() + 1;
	swap(s1, s2);
	/*cout << *s_it << endl;*///运行时报错
	system("pause");
	return 0;
}