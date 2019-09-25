#include<iostream>
#include<string>
#include<climits>
using namespace std;
/*string pre_suffix(const string &s, const char*pre, const char*suf)
{
	string s1 = s;
	s1.insert(0, pre);
	s1.append(suf);
	return s1;
}*/
string pre_suffix(const string &s, const char*pre, const char*suf)
{
	string s1 = s;
	s1.insert(0, pre);
	s1.insert(s1.size(), suf);
	return s1;
}
int main()
{
	string s = "Yellow";
	string s1 = pre_suffix(s, "Mr ", " III");
	cout << s1 << endl;
	/*unsigned a = -1;
	cout << a << endl;*/
	cout <<UINT_MAX << endl;
	unsigned a = -1;
	cout << a << endl;
	system("pause");
	return 0;
}