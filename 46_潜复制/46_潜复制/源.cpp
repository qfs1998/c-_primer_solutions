/*
	ǳ����ֻ�ǵ����ĸ�ֵ������ָ�븳ֵͬһ����ַ
	����һ������ָ��ָ��ı��������ı����������Ҳ�����ı�
	Ҫ���������⣬��Ҫ�Լ�д�������캯����operator=��ֵ������

*/
#include<iostream>
#include"IntCell.h"
using namespace std;

int main()
{
	IntCell a(2);
	IntCell b = a;
	IntCell c;
	c = a;
	a.write(4);
	cout << a.read() << '\t' << b.read() << '\t' << c.read() << endl;
	system("pause");
	return 0;
}