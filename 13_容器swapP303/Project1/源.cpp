#include<iostream>
#include<vector>
#include<array>
#include<string>
using namespace std;	
using it = vector<int>::iterator;
int main()
{
	//˳����������Ԫ�أ���ʵԪ�ر���δ���������������ݽṹ
	//�������Ϊ����������ָ��
	//string swap�������ʧЧ
	//vector�����󣬵�������Ȼָ��ԭ��ָ���Ԫ�أ��������Ϊ���������洢�ĵ�ַ���䣬array swap��Ԫ�ر����ֵ���������ڵ���������ָ�򲻷����ı䣬�ʣ���Ӧ�õ�������ֵ�᲻ͬ��
	vector <int>v1{ 1,2,3,4,5 }, v2{ 6,7,8,9,10,11,12 };
	it v1_beg = v1.begin(), v1_add2 = v1_beg+2;
	cout << "before swap *v1_beg=" << *v1_beg << "  v1_add2=" << *v1_add2 << endl;

	swap(v1, v2);
	for (auto a : v1)
	{
		cout << a << ' ';
	}
	cout << endl;
	//��������Ȼָ��ԭ��ָ���Ԫ��
	cout << "after swap *v1_beg=" << *v1_beg << "  v1_add2=" << *v1_add2 << endl;

	//vector�����󣬵�������Ȼָ��ԭ��ָ���Ԫ�أ��������Ϊ���������洢�ĵ�ַ���䣬array swap��Ԫ�ر����ֵ���������ڵ���������ָ�򲻷����ı䣬�ʣ���Ӧ�õ�������ֵ�᲻ͬ��
	array <int, 3>a = { 1,2,3 }, b = { 4,5,6 };
	auto a_it = a.begin() + 1;
	cout << *a_it << endl;
	swap(a, b);
	cout << *a_it << endl;


	//string swap�������ʧЧ
	string s1("12345"), s2("a,b,c,d,e");
	auto s_it = s1.begin() + 1;
	swap(s1, s2);
	/*cout << *s_it << endl;*///����ʱ����
	system("pause");
	return 0;
}