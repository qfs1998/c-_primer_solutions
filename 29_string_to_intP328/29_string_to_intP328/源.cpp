#include<iostream>
#include<string>
#include<vector>
using namespace std;
int sum_for_int(vector<string>&v)
{
	int sum = 0;
	for (auto const &a : v)
	{
		sum += stoi(a);
	}
	return sum;
}
double sum_for_double(vector<string>&v)
{
	double sum = 0;
	for (auto const&a : v)
	{
		sum += stod(a);
	}
	return sum;
}
int main()
{
	vector<string>v = { "5","5.2","3","6","100.12" };
	cout << sum_for_int(v) << endl;
	vector<string>v2 = { ".2","150e-2" };
	cout << sum_for_double(v) << endl;
	cout << sum_for_double(v2) << endl;
	system("pause");
	return 0;
}