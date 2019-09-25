#include<iostream>	
#include<string>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
int sz = 6;
bool Bigger (const string & s)
{
	return s.size() < 5;
}
bool funcbigger(const string&s, int sz)
{
	return s.size() <= sz;
}
auto ff=bind(funcbigger, _1, sz);
int main()
{
	vector<string>vec{"abc", "dasdafaf", "lll", "dasdasdasd", "00", "1233545"};
	/*auto p=partition(vec.begin(), vec.end(), Bigger);
	for (; p != vec.end(); ++p)
		cout << *p << ' ';
	cout << endl;
	int i = 2;
	auto f = [&i]()->bool {if (i == 0)return true; else { --i; return false; }; };

	while (!f())
		cout << "is not 0" << endl;
	cout<<count_if(vec.begin(), vec.end(), [](const string&s) {return s.size() > 6; });
	cout << endl;*/
	cout<<count_if(vec.begin(), vec.end(), ff);
	system("pause");
	return 0;
}