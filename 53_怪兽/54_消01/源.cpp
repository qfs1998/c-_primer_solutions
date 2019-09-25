/*
*/
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	int len;
	cin >> len;
	/*bool flag = false;
	char * s = new char[len + 1];*/
	stack<char>s;
	char c;
	while (len--)
	{
		cin >> c;
		if (s.empty())
		{
			s.push(c);
			continue;
		}
		char ctop = s.top();
		if (ctop != c)
		{
			s.pop();
		}
		else
			s.push(c);
	}
	cout << s.size();

		
	
	

	

	
	
	return 0;
}