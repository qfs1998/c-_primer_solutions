#include<iostream>
#include<vector>
using namespace std;	
int main()
{
	vector<int>v(10, 100);
	v.resize(5,0);//ԭ���ɻ��Ƿ����ɾ��Ԫ�ص�ͬʱ��ʹԭ��ʣ�µ�Ԫ�ص�ֵҲ���5
				//��֤�����ǲ����
	for (auto const&a : v)
		cout << a << ' ';
	system("pause");
	return 0;
}