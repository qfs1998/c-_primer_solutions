#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	vector<long  >v1, v2;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int value;
		cin >> value;
		v1.push_back(value);
	}
	for (int i = 0; i < n; ++i)
	{
		int value;
		cin >> value;
		v2.push_back(value);
	}
	
	map<int , int > fuck;
	for (int i = 0; i < n; ++i)
	{
		fuck[v1[i]] = v2[i];
	}
	

	int current_power = 0;
	int money = 0;
	for (auto a : fuck)
	{
		if (current_power <= a.first)
		{
			money += a.second;
			current_power += a.first;
		}
	}
	cout << money;
	system("pause");
	return 0;
}