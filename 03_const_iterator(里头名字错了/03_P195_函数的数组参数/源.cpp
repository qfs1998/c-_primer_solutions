#include<iostream>
#include<vector>
using namespace std;
int main()
{
	const vector <int>a = { 1,2,3 };
	vector<int>b = { 4,5,6 };
	//���Ͳ�ͬvector<int>::iterator itt = a.begin();
	//a.push_back(4);����a��Ԫ���������ܸı�
	//a[0] = 5;����Ԫ��Ҳ��const��
	//�Աȣ���constvector
	b.push_back(7);
	b[0] = 8;
	vector<int>::const_iterator it0 = a.begin();
	const vector<int>::const_iterator it1 = a.end();
	//it1 = it0;�������������������ȵ�constΪ����const����iterator����
	for (vector<int>::const_iterator it = it0; it != it1; ++it)
		cout << *it << ' ';
	cout << endl;

	//��������const_iteratorָ����ͨvector
	vector<int>::const_iterator it2 = b.begin();
	//*it2 = 5;����,�ײ�const�����ɸı�ָ������ֵ
	
	//������vector<const+����>,�������Ԫ��ʱ��push_backʱ���������·����ַ���¸�ֵ
	//constԪ�ز��������¸�ֵ
	//vector<const int>c = { 7,8,9 };
	//vector<const int>::iterator it3 = c.begin();
	//�������Ͳ�ͬvector<int>::iterator it4 = c.end();
	vector<int>d = { 7,8,9 };
	//�������Ͳ�ͬvector<const int>::iterator it5 = d.begin();
	system("pause");
	return 0;
}