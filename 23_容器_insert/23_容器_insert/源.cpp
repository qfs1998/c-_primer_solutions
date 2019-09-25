#include<iostream>
#include<vector>
using namespace std;
//[,)
//emplace can't be used as emplace(it,b,e) and emplace(it,n,t)
int main()
{
	vector<int>v1{ 1,2,3,4,5 };
	vector<int>v2 = { 0,1 };
	auto b = v1.begin(), e= v1.end();
	auto it = v2.begin() + 1;
	v2.insert(it,5,0);
	v2.erase(v2.end()-1,v2.end());
	for (auto const&a : v2)
		cout << a << ' ';
	cout << endl;
	system("pause");
	return 0;
}