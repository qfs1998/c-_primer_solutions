//cast-name<type>(expression) ����ת��
#include<iostream>
using namespace std;
int main()
{
	//const_cast
	//1
	int a = 1;
	const int *p1 = &a;
	int *p2;
	p2=const_cast<int*>(p1);//��ԭ������P145�п���������ת�����ʽ�����û����ֵ������Ϊ
	                       //���ת���ǿ���ֱ��ת��p������const_cast<int*>(p)ʹp���int*����
	                       //�����Ȼ���С�������ʽֻ�Ƿ���һ��ת�����ֵ��
	*p2 = 3;
	cout << a << endl;
	//const_cast<type>(x)  type������������ͣ����صĽ������ֵ��
	int &b=const_cast<int&>(a);//��Ч��const_cast<int&>(a)=5
	b = 5;                     //����˵��typeΪ�������ͣ����ص�Ϊ��ֵ����Ϊa�����á�
	cout << a << endl;


	//static_cast
	//1
	char c;
	void *p3 = &c;
	char *p4 = static_cast<char*>(p3);
	*p4 = 'a';
	cout << c << endl;
	//2
	int j = 1, k = 2;
	double d = static_cast<double>(j) / k;
	cout << d << endl;
	//3
	/*double d2 = 5.2;
	double *p5 = &d2;
	int *p6 = static_cast<int*>(p5);*/ //����ת����Ч������
	//�뿴�·�  reinterpret_cast

	//reinterpret_cast
	//���ʣ����½���
	
	double d2 = 5.2;
	double *p5 = &d2;
	int *p6 = reinterpret_cast<int*>(p5);
	*p5 = 7;//���������ᱨ����ô�ú�Σ�գ����ܷ��������ĺ��
	cout << d2 << endl;
	//Ʃ��
	char *p7 = reinterpret_cast<char*>(p5);
	*p7 = 'f';
	cout << d2 << endl;
	cout << *p7 << endl;
	cout << p7 << "   " << p5 << "   " << p6 << endl;//�����p7���ǵ�ַ�ˣ�����f
	//reinterpret_casr�ǳ�Σ��

	system("pause");
	return 0;
}