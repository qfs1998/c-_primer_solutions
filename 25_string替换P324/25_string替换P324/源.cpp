#include<iostream>
#include<string>
using namespace std;
/*void My_replace(string&s,const string&oldVal,const string&newVal)
{
	for (auto beg = s.begin(); std::distance(beg, s.end()) >= oldVal.size();)
	{
		if (string(beg, beg + oldVal.size()) == oldVal)
		{
			beg = s.erase(beg, beg + oldVal.size());
			beg = s.insert(beg, newVal.cbegin(), newVal.cend());
			beg += newVal.size();
		}
		else
			++beg;
	}
}*/
void My_replace(string&s, const string&oldVal, const string&newVal)
{
	for (int pos = 0; s.size() - pos >= oldVal.size();)
	{
		if (string(s, pos, oldVal.size()) == oldVal)
		{
			s.replace(pos, oldVal.size(), newVal);
			pos +=newVal.size();
		}
		else
			++pos;
	}
}
int main()
{
	{
		string s1 = "tho he is a good man,tho he is very kind,", old1 = "tho", new1 = "though";
		My_replace(s1, old1, new1);
		cout << s1 << endl;
	}
	//生存周期就在{}中
	{
		string s1 = "thru he is a good man,thru he is very kind,", old1 = "thru", new1 = "though";
		My_replace(s1, old1, new1);
		cout << s1 << endl;
	}
	/*cout << s1 << endl;*/   /*错误*/
	system("pause");
	return 0;
}