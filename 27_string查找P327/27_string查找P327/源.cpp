#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s = "ab2c3d7R4E6";
	string s1 = "0123456789";
	string s2 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string::size_type pos = 0;
	/*find_first_of()*/
	/*while ((pos = s.find_first_of(s1,pos)) != string::npos)
	{
		cout << pos << "th is " << s[pos] << endl;
		++pos;
	}
	pos = 0;
	while ((pos = s.find_first_of(s2, pos)) != string::npos)
	{
		cout << pos << "th is " << s[pos] << endl;
		++pos;
	}
	system("pause");*/

	/*find_first_not of*/
	for (string::size_type pos = 0; (pos = s.find_first_not_of(s2,pos))!=string::npos; ++pos)
	{
		cout << pos << "th is " << s[pos] << endl;
	}
	for (string::size_type pos = 0; (pos = s.find_first_not_of(s1, pos)) != string::npos; ++pos)
	{
		cout << pos << "th is " << s[pos] << endl;
	}
	system("pause");
	return 0;
}