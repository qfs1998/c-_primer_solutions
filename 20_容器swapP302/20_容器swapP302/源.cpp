#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1{ 1,2,3,4,5 }, v2{ 6,7,8,9,10 };
	auto vit1 = v1.begin();
	cout << *vit1 << endl;//*vit=1
	v1.swap(v2);
	cout << *vit1 << endl;
	cout << "v1:";//*vit��Ȼ=1
	*vit1 = 1000;//v2[0]��Ϊ1000��˵��swapֻ�ǽ�����vector���������ͷָ��
	for (auto const&a : v1)
		cout << a << ' ';
	cout << "v2:";
	for (auto const&a : v2)
		cout << a << ' ';

	system("pause");
	return 0;
}