/*
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int  each_min(int val,vector<int>&reverse_money)
{
	int count = 0;
	int i = 0;
	while (val > 0)
	{
		while (val < reverse_money[i])
		{
			++i;
		}
		val = val - reverse_money[i];
		
		++count;
	}
	if (val == 0)
		return count;
	else return -1;
}
int main()
{
	int m;
	cin >> m;
	int n;
	cin >> n;
	vector<int>money;
	map<int, int>mm;
	int min=0;
	for (int i = 0; i < n; ++i)
	{
		int value;
		cin >> value;
		money.push_back(value);
		mm[value] = 0;
	}
	sort(money.begin(), money.end());
	
	vector <int> reverse_money (money.rbegin(), money.rend());
	
	
	for (int i = 0; i < m; ++i)
	{
		int cur = each_min(i, reverse_money);
		min = min > cur ? min : cur;
	}

	cout << min;
	
	system("pause");
	return 0;
}