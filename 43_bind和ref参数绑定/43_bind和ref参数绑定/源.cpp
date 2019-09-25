#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<functional>
using namespace std;
using namespace std::placeholders;//要包含functional头文件才有命名空间placeholders

bool callable(const string &s, const int a)
{
	return s.size() > a;
}
class callable3
{
public:
	bool operator()	(const string&s, const int a)
	{
		return s.size() > a;
	}
};
callable3 mm;
auto newCallable1 =bind (callable,_1,6);
auto newCallable2 = bind([](const string&s, const int a) {return s.size() > a; }, _1, 6);
auto newCallable3= bind(callable3(), _1, 6);

int main()
{
	vector<string>vec = { "dsadasf","hello","amazing","123" };
	int a = count_if(vec.cbegin(),vec.cend(),newCallable1);
	int b = count_if(vec.cbegin(), vec.cend(), newCallable2);
	int c= count_if(vec.cbegin(), vec.cend(), newCallable3);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	system("pause");
	return 0;
}