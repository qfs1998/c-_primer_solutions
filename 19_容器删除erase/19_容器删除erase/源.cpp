#include<iostream>
#include<vector>
//array不支持删除元素
using namespace std;
int main()
{
	vector<int>v1{ 1,2,3,4,5 };
	vector<int>v2;
	auto vit1 = v1.begin()+1;
	auto vit2 = v1.begin() ;
	v1.erase(v1.begin()+1, v1.begin() +2);//仍然为左闭右开[,}
	/*cout << *vit1;//失效*/
	cout << *vit2;//被删除元素之前的迭代器不失效
	for (auto const&a : v1)
		cout << a;
	//v2.pop_back();//不支持push_front()和pop_front(),空容器报错，函数行为未定义
	v1.clear();
	if (v1.empty())cout << "empty!";
	system("pause");
	return 0;
}