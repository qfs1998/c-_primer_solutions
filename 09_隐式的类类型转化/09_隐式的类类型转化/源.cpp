#include<iostream>
using namespace std;
struct C
{
public:
	/*explicit���Ͼͱ���*//*explicit*/ C(int a) :a(a) { cout << "int" << endl; }
	//����˼�������C(int a)ǰ����explicit��C(double)ǰû��
	//�����double�͵ģ�����ʱ����δ��a��ֵ�����Ǹ�b��ֵ���ʶ�Add_1��ֵ��δ�����
	/*explicit C(double b) :b(b) { cout << "double" << endl; }*/
	
	
	//������Ǽ���explicit������ת�������͵Ļ�����ǿ��ת������
	//��  C a=C(1);   ��  C a= static_cast<C>(1);
	inline int get() { return a; }
private:
	int a;
	double b;
};
int Add_1(C a, C b)
{
	return a.get() + b.get();
}
int main()
{ 
	/*C a = C(1);//����ת���Ĺ�����ҲҪ���ù��캯��
	C b = static_cast<C>(1);
	cout << Add_1(a, b) << endl;//��1��2ת��ΪC�������βθ�ֵ
	*/
	cout << Add_1(1, 2) << endl;
	//��Ҫע��������Add_1������ΪAdd_1(C&a,C&b)��������
	//��Ϊ�ǰ�1��2�����ʱ�������βε����ð󶨣�������ʱ�������������Ҫ���ͷ���
	//��Ϊ��һ�����ܸı�ֵ�ö�����ʱ�������Ǻ��������
	//�ʶ�Լ������ʹ�ð󶨣�������const&,��Add_1(const C&a,const C&b)
	//���������Ҫ����������ʽת����������Ĭ�Ϻ���ǰ����explicit adj. ��ʾ�ģ��������ȷ��


	system("pause");
	return 0;
}