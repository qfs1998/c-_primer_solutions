#include<iostream>
using namespace std;
//agrc means argument count
//agrv means argument vector
//agrvΪָ����������飬��һ�����д�exe·��
//����cmd��ֱ�ӽ�exe����cmd����
int main(int argc,char**argv)
{
	for (int i = 0; i < argc; ++i)
		cout << argv[i] << endl;

	system("pause");
	return 0;
}