#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<deque>
#include<stack>
using namespace std;
int main()
{	
	deque<int>d{ 1,2,3,4,5 };
	stack<int>s(d);
	queue<int>q(d);
	//����stack��queue��vector��ʼ��ͳͳ����

	vector<int>v{ 1,2,3 };
	priority_queue<int>pq;
	cout << s.top();
	system("pause");
	return 0;
}