#include<iostream>
#include<fstream>
#include<string>
using namespace std;
istream& func(istream&is)
{
	string s;
	while (!is.eof()/*is*/)
	{
		is >> s;
	}
	cout << is.rdstate() << endl;
	return is;
}
int main()
{
	istream&is = func(cin);
	cout << is.rdstate() << endl;
	cout << is.eof() << endl;
	is.clear();
	cout << is.rdstate() << endl;
	system("pause");
	return 0;
}