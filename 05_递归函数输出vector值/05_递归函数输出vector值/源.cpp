#include<vector>
#include<iostream>
using namespace std;
using Itr = vector<int>::iterator;
void print(Itr beg, Itr end)
{
	if (beg != end)
	{
		cout << *beg << ' ';
		print(/*++beg*/beg+1, end);//这里如果是beg++则先将beg的值赋给形参，再使beg自增，则满屏                          //幕都是1 ,但是显然，传入beg+1会是一种更好的做法
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