#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v{ 1,2,3,4,5,6 };
	auto a = v.at(0);
	auto b = *(v.begin()+1);
	auto c = v[2];
	auto d = v.front();
	auto e = v.back();
	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;

	system("pause");
	return 0;
}