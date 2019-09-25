#include<iostream>
using namespace std;
class CDemo
{
public:
	CDemo(int a) :n(a) {}
	CDemo(const CDemo&C) { n = C.n; }
	operator int() { return n; }
	CDemo&operator ++() { ++n; return *this; }
	CDemo operator ++(int) { CDemo tmp(*this); return tmp; }
	friend CDemo&operator --(CDemo&C);
	friend CDemo operator --(CDemo&C,int);
	//����Ϊ���Ա������ǰ��++�޲���������++��һ��û�õĲ�����������
	//����Ϊȫ�ֺ�����ǰ��++һ������CDemo&������++��������CDemo&��һ��û�õĲ�����������
private:
	int n;
};
CDemo&operator --(CDemo&C)
{
	--C.n;
	return C;
}
CDemo operator --(CDemo&C, int)
{
	CDemo tmp(C);
	--C.n;
	return tmp;
}
int main()
{
	CDemo A(5), B(5);
	
	/*cout << --B << ' ' << B-- << endl ;*///��������ͬ��������ͬ�����ҵ���ִ�����Ȼ����ջ���ٳ�ջ���Ƚ����
	system("pause");
	return 0;
}