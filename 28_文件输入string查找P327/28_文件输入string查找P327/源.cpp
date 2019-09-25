#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream f("../data/letter.txt");
	if (!f)
	{
		cout << "can't open the file" << endl;
		return 0;
	}
	string longest_word;
	for (string s; f >> s;)
	{
		if (s.find_first_not_of("aceimnorsuvwxz") == string::npos&&s.size() > longest_word.size())
			longest_word = s;

	}
	cout << longest_word << endl;
	system("pause");
	return 0;
}
