#include<vector>
#include<iostream>
using namespace std;
using Itr = vector<int>::iterator;
void print(Itr beg, Itr end)
{
	if (beg != end)
	{
		cout << *beg << ' ';
		print(/*++beg*/beg+1, end);//���������beg++���Ƚ�beg��ֵ�����βΣ���ʹbeg������������                          //Ļ����1 ,������Ȼ������beg+1����һ�ָ��õ�����
	}                    
	return;
}
int main()
{
	vector <int>a{ 1,2,3,4,5 };
	print(a.begin(), a.end());
	system("pause");

	return 0;
}