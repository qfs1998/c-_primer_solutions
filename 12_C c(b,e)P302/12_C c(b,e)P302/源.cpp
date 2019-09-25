#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	list<int>l = { 1,2,3,4,5 };
	auto begin = l.begin();
	auto end = l.end();
	vector<double>v1(begin, end);
	for(auto a:v1)
	{
		cout << a << ' ';	
	}
	cout << endl;
	system("pause");
	return 0;
}