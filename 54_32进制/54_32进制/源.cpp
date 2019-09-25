#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string toBinary_string(int v)
{
	string str = "";
	char c;
	stack <int>s;
	while (v)
	{
		int mod = v % 2;
		v = v / 2;
		s.push(mod);
	}
	while (!s.empty())
	{
		char c = s.top() + '0';
		str += c;
		s.pop();
	}
	return str;
}
void change(vector<string>&res_v)
{
	int readin;
	cin >> readin;
	stack<int> s1;
	while (readin)
	{
		int mod = readin % 1000;
		readin = readin / 1000;
		s1.push(mod);
	}
	int sz = s1.size();
	vector<string>v;
	while (!s1.empty())
	{
		v.push_back(toBinary_string(s1.top()));
		s1.pop();
	}
	string total_string = "";
	for (auto const&a : v)
	{
		total_string += a;
	}
	//cout << total_string << endl;
	int len = total_string.length();
	//stack<char>s2;
	//for (int i = 0; i < len; ++i)
	//{
	//	s2.push(total_string[i]);
	//}
	//vector<string>v2;
	//while (!s2.empty())
	//{
	//	int i = 5;
	//	int value = 0;
	//	while (i--)
	//	{
	//		
	//	}
	//}

	vector<string>v3;
	for (auto end = total_string.end();;)
	{
		auto start = end;
		if (start - total_string.begin() >= 5)
		{
			start = start - 5;
			/*string s ="";
			copy(start, end, s.begin());*/
			string s(start, end);
			v3.push_back(s);
			end = start;
		}
		else 
		{
			//string s = "";
			//copy(total_string.begin(), total_string.end(), s.begin());
			string s(total_string.begin(), end);
			v3.push_back(s);
			break;
		}
		
		/*if (start - total_string.begin() >= 5)
		{
			start = start - 5;
		}
		else start = total_string.begin();*/
	}
	vector<string>v4(v3.rbegin(), v3.rend());
	string res = "";
	for (auto a : v4)
	{
		//string each = "";
		int temp=0;
		for (int i = 0; i < a.length(); ++i)
		{
			temp = temp * 2 + (a[i] - '0');
		}
		char ch1;
		if (temp < 10)
			ch1 = temp + '0';
		else
			ch1 = (temp - 10) + 'A';
		//each += ch1;
		res = res + ch1;
	}
	res_v.push_back(res);
	//cout << res<<endl;
}
int main()
{
	int loop;
	cin >> loop;
	vector<string>res_v;
	while(loop--)
	{
		change(res_v);
	}
	for (auto a : res_v)
		cout << a << endl;
	system("pause");
	return 0;
}