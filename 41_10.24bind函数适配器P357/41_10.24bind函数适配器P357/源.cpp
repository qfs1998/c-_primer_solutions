#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
/*bool check_size(const int &a, string::size_type sz)
{
	return a > sz;
}*/
//10.25
bool check_size(const string&s, string::size_type sz)
{
	return s.size() >= sz;
}
int main()
{
	//10.24
	/*vector<int>vec{1, 2, 3, 4, 5, 6, 7};
	string s("1234");
	cout << *(find_if(vec.cbegin(), vec.cend(), bind(check_size, _1, s.size())))<< endl;*/
	//10.25
	vector<string>v2{ "asd","dsadasdsa","das1","454548" };
	//bind 给定要绑定的函数，但是并若该函数重载，并不能判断，故将上面10.24的check_size注释掉
	partition(v2.begin(), v2.end(), bind(check_size,_1,4));
	
	for (auto const&a : v2)
		cout << a << ' ';
	cout << endl;
	system("pause");
	return 0;
}