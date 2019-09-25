#include<iostream>
#include<vector>
using namespace std;	
int main()
{
	vector<int>v(10, 100);
	v.resize(5,0);//原先疑惑是否会在删除元素的同时，使原先剩下的元素的值也变成5
				//验证后发现是不会的
	for (auto const&a : v)
		cout << a << ' ';
	system("pause");
	return 0;
}