#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* sortList(ListNode* head) {
		vector<ListNode*> vec;
		for (ListNode*p = head; p != NULL; p = p->next)
		{
			vec.push_back(p);
		}
		sort(vec.begin(), vec.end(), [](ListNode*&p1, ListNode*&p2) {return p1->val<p2->val; });
		for (int i = 0; i<vec.size() - 1; ++i)
		{
			vec[i]->next = vec[i + 1];
		}
		vec[vec.size()-1]->next = NULL;
		return vec[0];
	}
};
bool operator<(const ListNode &a, const ListNode &b)
{
	return a.val < b.val;
}
int main()
{
	int n;
	cout << "how many ListNode?" << endl;
	cin >> n;
	ListNode *head = new ListNode(0);
	ListNode *top = head;
	
	while (n--)
	{
		int val;
		cout << "cin>>val" << endl;
		cin >> val;
		ListNode*p = new ListNode(val);
		head->next = p;
		head = p;
	}
	/*Solution A;
	head = A.sortList(top->next);*/
	vector<ListNode>vec;
	ListNode*top2 = top->next;
	while (top2)
	{
		vec.push_back(*(top2));
		top2 = top2->next;
	}
	sort(vec.begin(), vec.end());
	for (auto a : vec)
	{
		cout << a.val << ' ';
	}
	cout << endl;
	/*for (; head != NULL; head = head->next)
		cout << head->val << ' ';
	cout << endl;
	*/
	system("pause");
	return 0;
}
/*#include <iostream>
#include <set>
using namespace std;
int main()
{
typedef set<int>::iterator IT;
int a[5] = { 3,4,6,1,2 };
set<int> st(a,a+5);
pair< IT, bool> result;
result = st.insert(5);
// st变成1 2 3 4 5 6
if(result.second)     //插入成功则输出被插入元素
cout << * result.first  << " inserted" << endl; //输出: 5 inserted
if(st.insert(5).second )
cout << * result.first  << endl;
else
cout << * result.first << " already exists" << endl; //输出5 already exists
pair<IT,IT> bounds = st.equal_range(4);
cout << * bounds.first << "," << * bounds.second ;     //输出：4,5
system("pause");
return 0;}*/