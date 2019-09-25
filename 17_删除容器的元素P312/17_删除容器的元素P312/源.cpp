#include<iostream>
#include<vector>
#include<list>
#include<windows.h>
#include<ctime>
using namespace std;
int main()
{
	/*long start_time = GetTickCount();
	{*/
	/*clock_t start_time = clock();
	{*/
		int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
		auto b = begin(ia);
		auto e = end(ia);
		vector <int>v(b, e);
		list <int>l(b, e);
		for (auto it = v.begin(); it != v.end(); (*it & 1) ? ++it : it = v.erase(it));
		for (auto it = l.begin(); it != l.end(); (*it & 1) ? it = l.erase(it) : ++it);
		for (auto const &a : v)
			cout << a << ' ';
		cout << endl;
		for (auto const&a : l)
			cout << a << ' ';
		cout << endl;
	/*}
	clock_t end_time = clock();
	cout << "程序段运行时间：" << static_cast<double> (end_time - start_time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;*/
	/*}
	long end_time = GetTickCount();
	cout << "Used time:" << static_cast<double>(end_time - start_time) << endl;*/
	system("pause");
	return 0;
}