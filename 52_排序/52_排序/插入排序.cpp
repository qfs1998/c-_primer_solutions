#include"head.h"
//void insertSort(vector<int>&v)
//{
//	int sz = v.size();
//	for (int i = 1;i<sz;++i)
//	{
//		int pre = i - 1;
//		int current = v[i];
//		while (pre >= 0 && v[pre] > current)
//		{
//			v[pre + 1] = v[pre];
//			--pre;
//		}
//		v[pre + 1] = current;
//	}
//	return;
//}
void insertSort(vector<int>&v)
{
	int current, pre;
	for (int i = 1; i < v.size(); ++i)
	{
		pre = i - 1;
		current = v[i];
		while (pre >= 0 && v[pre] > current)
		{
			v[pre + 1] = v[pre];
			--pre;
		}
		v[pre + 1] = current;
	}
	return;
}