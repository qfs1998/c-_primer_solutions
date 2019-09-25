#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	try {
		cout << v.at(0);
	}
	catch (runtime_error)
	{
		cout << "error" << endl;
	}
	system("pasue");
	return 0;
}