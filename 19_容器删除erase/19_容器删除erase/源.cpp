#include<iostream>
#include<vector>
//array��֧��ɾ��Ԫ��
using namespace std;
int main()
{
	vector<int>v1{ 1,2,3,4,5 };
	vector<int>v2;
	auto vit1 = v1.begin()+1;
	auto vit2 = v1.begin() ;
	v1.erase(v1.begin()+1, v1.begin() +2);//��ȻΪ����ҿ�[,}
	/*cout << *vit1;//ʧЧ*/
	cout << *vit2;//��ɾ��Ԫ��֮ǰ�ĵ�������ʧЧ
	for (auto const&a : v1)
		cout << a;
	//v2.pop_back();//��֧��push_front()��pop_front(),����������������Ϊδ����
	v1.clear();
	if (v1.empty())cout << "empty!";
	system("pause");
	return 0;
}