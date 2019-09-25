#include<iostream>
#include<vector>
using namespace std;
int main()
{
	const vector <int>a = { 1,2,3 };
	vector<int>b = { 4,5,6 };
	//类型不同vector<int>::iterator itt = a.begin();
	//a.push_back(4);错误，a的元素数量不能改变
	//a[0] = 5;错误，元素也是const的
	//对比，非constvector
	b.push_back(7);
	b[0] = 8;
	vector<int>::const_iterator it0 = a.begin();
	const vector<int>::const_iterator it1 = a.end();
	//it1 = it0;错误，上面那条语句的最先的const为顶层const修饰iterator本身
	for (vector<int>::const_iterator it = it0; it != it1; ++it)
		cout << *it << ' ';
	cout << endl;

	//可以允许const_iterator指向普通vector
	vector<int>::const_iterator it2 = b.begin();
	//*it2 = 5;错误,底层const，不可改变指向对象的值
	
	//不存在vector<const+类型>,当添加新元素时，push_back时，可能重新分配地址重新赋值
	//const元素不可以重新赋值
	//vector<const int>c = { 7,8,9 };
	//vector<const int>::iterator it3 = c.begin();
	//错误，类型不同vector<int>::iterator it4 = c.end();
	vector<int>d = { 7,8,9 };
	//错误，类型不同vector<const int>::iterator it5 = d.begin();
	system("pause");
	return 0;
}