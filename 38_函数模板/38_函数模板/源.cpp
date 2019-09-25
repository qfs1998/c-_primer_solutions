#include<iostream>
using namespace std;
#include<vector>
template<class	T1>//class=typename
int accumulate(T1 first ,T1 last)
{	
	int s = 0;
	for (; first != last; ++first)
	{
		s += (*first)*(*first);
	}
	return s;
}
int main()
{
	vector<int> v = { 1,2,3,4,5 };
	cout << accumulate(v.begin(), v.end()) << endl;
	cout << accumulate(v.cbegin(), v.cend()) << endl;
	system("pause");
	return 0;
}